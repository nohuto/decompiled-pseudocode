/*
 * XREFs of ??1Completer@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAA@XZ @ 0x14001C0BC
 * Callers:
 *     ?get@?$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6AXXZ@Z @ 0x1400053EC (-get@-$static_lazy@VAudioDgTelemetryProvider@@@details@wil@@QEAAPEAVAudioDgTelemetryProvider@@P6.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x1400059A0 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x14001BCEC (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<AudioDgTelemetryProvider>::Completer::~Completer(LPINIT_ONCE *a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  _QWORD *Ptr; // rcx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *((_DWORD *)a1 + 2);
  if ( !v1 )
  {
    v3 = *a1;
    Ptr = (*a1)[4].Ptr;
    v3[2].Ptr = Ptr;
    LOBYTE(v3[3].Ptr) = 1;
    TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation(Ptr);
    v5.Ptr = v3[1].Ptr;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *((_DWORD *)a1 + 2);
  }
  return InitOnceComplete(*a1, v1, &(*a1)[1]);
}
