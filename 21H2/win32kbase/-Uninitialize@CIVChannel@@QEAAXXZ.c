/*
 * XREFs of ?Uninitialize@CIVChannel@@QEAAXXZ @ 0x1C01F7658
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1C005A850 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CKeyboardSensor@@EEAAXXZ @ 0x1C005A980 (-PreUninitialize@CKeyboardSensor@@EEAAXXZ.c)
 *     ?PreUninitialize@CHidInput@@EEAAXXZ @ 0x1C00B6F30 (-PreUninitialize@CHidInput@@EEAAXXZ.c)
 *     IVWorkerThread @ 0x1C01F01F0 (IVWorkerThread.c)
 * Callees:
 *     isChildPartition @ 0x1C00383F0 (isChildPartition.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C01E7350 (WPP_RECORDER_AND_TRACE_SF_sd.c)
 */

void __fastcall CIVChannel::Uninitialize(CIVChannel *this)
{
  PDEVICE_OBJECT v2; // rbx
  bool v3; // di
  bool v4; // si
  bool v5; // al
  int v6; // edx
  int v7; // r8d
  const char *v8; // r9

  v2 = WPP_GLOBAL_Control;
  v3 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x800) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  v4 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v3 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v5 = isChildPartition();
    v8 = "Child";
    if ( !v5 )
      v8 = "Host";
    LOBYTE(v7) = v4;
    LOBYTE(v6) = v3;
    WPP_RECORDER_AND_TRACE_SF_sd(
      v2->AttachedDevice,
      v6,
      v7,
      (_DWORD)v8,
      4,
      12,
      18,
      (__int64)&WPP_e36f0bd77e21300be1523eb9b2f96338_Traceguids,
      (__int64)v8,
      *((_DWORD *)this + 2));
  }
  if ( isChildPartition() )
  {
    if ( gpfnIVCloseChildChannel )
      gpfnIVCloseChildChannel(*((_DWORD *)this + 2));
  }
}
