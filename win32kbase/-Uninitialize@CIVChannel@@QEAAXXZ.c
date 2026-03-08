/*
 * XREFs of ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C022970C
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C0094A90 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C0095520 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00C9650 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     IVWorkerThread @ 0x1C022118C (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x1C0078FF0 (isChildPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C0217150 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

void __fastcall CIVChannel::Uninitialize(CIVChannel *this)
{
  bool v2; // di
  bool v3; // si
  int v4; // ebx
  bool v5; // al
  int v6; // r9d
  const char *v7; // rcx
  int v8; // r8d
  int v9; // edx

  v2 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = *((_DWORD *)this + 2);
    v5 = isChildPartition();
    v7 = "Child";
    LOBYTE(v8) = v3;
    if ( !v5 )
      v7 = "Host";
    v9 = 18;
    LOBYTE(v9) = v2;
    WPP_RECORDER_AND_TRACE_SF_sd(
      WPP_GLOBAL_Control->AttachedDevice,
      v9,
      v8,
      v6,
      4,
      12,
      18,
      (__int64)&WPP_497642a209983ca6f9cf9a3e459f356b_Traceguids,
      (__int64)v7,
      v4);
  }
  if ( isChildPartition() )
  {
    if ( gpfnIVCloseChildChannel )
      gpfnIVCloseChildChannel(*((_DWORD *)this + 2));
  }
}
