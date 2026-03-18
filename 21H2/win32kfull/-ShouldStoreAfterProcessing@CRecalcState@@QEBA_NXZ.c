/*
 * XREFs of ?ShouldStoreAfterProcessing@CRecalcState@@QEBA_NXZ @ 0x1C00AFB0C
 * Callers:
 *     ?PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z @ 0x1C00AFA28 (-PruneRecalcStateList@CRecalcProp@@AEAAXPEAVCRecalcState@@@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_N_N@Z @ 0x1C0121F10 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_N_N@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1C007BAF4 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     ?Feature_Erpsrbspi__private_IsEnabledPreCheck@@YAHXZ @ 0x1C015CB10 (-Feature_Erpsrbspi__private_IsEnabledPreCheck@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 *     UPDWORDValue @ 0x1C01CEE74 (UPDWORDValue.c)
 */

char __fastcall CRecalcState::ShouldStoreAfterProcessing(CRecalcState *this)
{
  int v2; // edx
  bool v3; // di
  int v4; // r8d
  char v5; // bl
  const char *v6; // rax

  if ( (*(unsigned __int8 (__fastcall **)(CRecalcState *))(*(_QWORD *)this + 8LL))(this) || *((_DWORD *)this + 10) == 2 )
    return 0;
  Feature_Erpsrbspi__private_IsEnabledPreCheck();
  v3 = (unsigned int)UPDWORDValue(8238LL) == 0;
  v5 = 1;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x400000) == 0
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (LOBYTE(v4) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v2 || (_BYTE)v4 )
  {
    v6 = "Enabled";
    if ( !v3 )
      v6 = "Disabled";
    WPP_RECORDER_AND_TRACE_SF_s(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v4,
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      5,
      23,
      79,
      (__int64)&WPP_ae2841d0c36d308aa24769b0b53bcff9_Traceguids,
      (__int64)v6);
  }
  if ( !v3 )
    return 0;
  return v5;
}
