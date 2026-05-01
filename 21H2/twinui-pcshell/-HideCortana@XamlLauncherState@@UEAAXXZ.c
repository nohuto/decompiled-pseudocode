/*
 * XREFs of ?HideCortana@XamlLauncherState@@UEAAXXZ @ 0x1803A35C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180161140 (_guard_dispatch_icall_nop.c)
 *     ??$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1803A1280 (--$HideCortanaInternal@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall XamlLauncherState::HideCortana(XamlLauncherState *this)
{
  int *v1; // rbx
  int v2; // [rsp+20h] [rbp-28h] BYREF
  char *v3; // [rsp+28h] [rbp-20h]
  char v4; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 10);
  v1 = (int *)((char *)this - 24);
  v3 = (char *)this - 24;
  v4 = 1;
  if ( v2 == 7 )
  {
    *((_DWORD *)this + 10) = 8;
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 88LL))(*((_QWORD *)this + 8));
  }
  v4 = 0;
  StartWindowTelemetry::HideCortanaInternal<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
    &v2,
    v1 + 16);
}
