Pod::Spec.new do |s|
  s.name = 'Capacitor'
  s.version = '0.0.7'
  s.summary = 'Capacitor for iOS'
	s.social_media_url = 'http://twitter.com/getcapacitor'
  s.license = 'MIT'
  s.homepage = 'https://ionic-team.github.io/capacitor'
  s.ios.deployment_target  = '10.0'
  s.authors = { 'Ionic Team' => 'hi@ionicframework.com' }
  s.source = { :git => 'https://github.com/ionic-team/capacitor.git', :tag => s.version.to_s }
  s.source_files = 'ios/Capacitor/Capacitor/*.{swift,h,m}', 'ios/Capacitor/Capacitor/Plugins/*.{swift,h,m}', 'ios/Capacitor/Capacitor/Plugins/**/*.{swift,h,m}'
  s.dependency 'CapacitorCordova', '0.0.7'
  s.dependency 'GCDWebServer', '~> 3.0'
end

