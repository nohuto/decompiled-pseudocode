/*
 * XREFs of ?SendAppSwitchTelemetry@ViewHostTelemetry@@YAJPEAUISwitchItem@@W4SwitchLocation@PerfTrack@@W4SwitchInvokeMethod@4@@Z @ 0x180415730
 * Callers:
 *     ?InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x180405FB0 (-InvokeSwitchItem@CAltTabViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 *     ?InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z @ 0x18040C510 (-InvokeSwitchItem@CSnapAssistViewController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18005755C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z @ 0x18040F2DC (-ExtractAppId@SwitchItemTelemetry@@YAJPEAUISwitchItem@@PEAPEAG@Z.c)
 *     ??$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@PerfTrack@@SAXAEAW4SwitchLocation@1@$$QEAPEAGAEAW4SwitchInvokeMethod@1@@Z @ 0x180415504 (--$AppSwitched@AEAW4SwitchLocation@PerfTrack@@PEAGAEAW4SwitchInvokeMethod@2@@AppSwitchTelemetry@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewHostTelemetry::SendAppSwitchTelemetry(SwitchItemTelemetry *a1, unsigned int a2)
{
  unsigned __int16 **v3; // r8
  int AppId; // ebx
  unsigned int v6; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[4]; // [rsp+28h] [rbp-20h] BYREF
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+68h] [rbp+20h] BYREF

  v8 = a2;
  v7[1] = -2LL;
  v6 = 0;
  pv = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  AppId = SwitchItemTelemetry::ExtractAppId(a1, (struct ISwitchItem *)&pv, v3);
  if ( AppId >= 0 )
  {
    v7[0] = pv;
    PerfTrack::AppSwitchTelemetry::AppSwitched<enum PerfTrack::SwitchLocation &,unsigned short *,enum PerfTrack::SwitchInvokeMethod &>(
      &v8,
      v7,
      &v6);
    AppId = 0;
  }
  if ( pv )
    CoTaskMemFree(pv);
  return (unsigned int)AppId;
}
