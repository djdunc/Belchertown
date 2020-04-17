<div class="entry-content about-outer" itemprop="text">

    <div class="row" style="margin-top:15px;">

        <div class="col-sm-4">
            <a data-flickr-embed="true"  href="https://www.flickr.com/photos/pseudonomad/10952685886/in/album-72157640340879596/" title="Pages Hill Weather"><img src="https://live.staticflickr.com/3791/10952685886_43121e3b11_k.jpg" alt="Pages Hill Weather"></a>
            <table style="font-size:80%; margin:0 auto; text-align:center; /*margin-left:-50px;*/">
                <tbody>
                    <tr>
                        <td style="text-align:right; padding:4px 8px 0 0;">Hardware:</td>
                        <td style="text-align:left; font-weight:bold; padding-top:4px;">$station.hardware</td>
                    </tr>
                    <tr>
                      <td style="text-align:right; padding:4px 8px 0 0;">Server uptime:</td>
                      <td style="text-align:left; font-weight:bold; padding-top:4px;">$station.os_uptime</td>
                    </tr>
                        <tr>
                            <td style="text-align:right; padding:4px 8px 0 0;">WeeWX uptime:</td>
                            <td style="text-align:left; font-weight:bold; padding-top:4px;">$station.uptime</td>
                        </tr>
                    <tr>
                        <td style="text-align:right; padding:4px 8px 0 0;">WeeWX version</td>
                        <td style="text-align:left; font-weight:bold; padding-top:4px;">$station.version</td>
                    </tr>
                    <tr>
                        <td style="text-align:right; padding:4px 8px 0 0;"><a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown skin</a> version</td>
                        <td style="text-align:left; font-weight:bold; padding-top:4px;">$belchertown_version</td>
                    </tr>
                </tbody>
            </table>
            <img src="$belchertown_root_url/images/weather.gif" alt="Weather Station Above Shed">
            <div id="rxchart" style="margin-top:30px;"></div>
            <div id="rxchartyear" style="margin-top:30px;"></div>
        </div>

        <div class="col-sm-8" style="padding-top:10px;">
           <p>This weather station was originally setup as part of a national <a href="http://www.iotschool.org/">Internet of School Things project</a>. It now sits on top of a shed on plot 148b in the centre of the allotment. This website is automatically updated in real time (about every 2.5 seconds) with weather observations from a <a href="https://www.davisinstruments.com/solution/vantage-vue/" target="_blank">Davis Vantage Vue</a> personal weather station connected to an Intel Edison running Debian and the <a href="http://www.weewx.com" target="_blank">Weewx weather software</a> for archive and for the website feed. The weather station provides the following readings:</p>

            <ul>
                <li>Temperature</li>
                <li>Humidity</li>
                <li>Wind speed</li>
                <li>Wind direction</li>
                <li>Rainfall</li>
                <li>Barometric Pressure</li>
            </ul>

            <p>The rest of the observations on this website are done via software calculations and quality control checks to make sure the data is valid.</p>


            <p>Software used:</p>
            <ul>
                <li><a href="http://www.weewx.com/" target="_blank">weewx</a> weather station software</li>
                <li><a href="http://www.highcharts.com/" target="_blank">HighCharts</a> for the various charts on the website</li>
                <li>The <a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown skin</a> theme built for weewx</li>
                <li><a href="https://obrienlabs.net/how-to-setup-your-own-mqtt-broker/" target="_blank">MQTT as the broker</a> for instant data transfer from weather station to website</li>
            </ul>

            <p>Credits:</p>
            <ul>
                <li>Forecast data <a href="https://darksky.net/poweredby/" target="_blank">Powered by Dark Sky</a> (but recently acquired by Apple and this service will be stopping at end of 2021)</li>
            </ul>

            <p>All weather observations are also posted to the Weather Underground (which has been acquired by IBM and unfortunately no longer has free access to historic data):</p>
            <ul>
                <li><a href="https://www.wunderground.com/dashboard/pws/ILONDON576" target="_blank">ILONDON576</a> on Weather Underground</li>
            </ul>


        </div>
        <div class="clear"></div>

    </div>

</div>
