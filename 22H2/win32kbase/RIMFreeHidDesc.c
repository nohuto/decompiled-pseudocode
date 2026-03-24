/*
 * XREFs of RIMFreeHidDesc @ 0x1C0057658
 * Callers:
 *     RIMAllocateHidDesc @ 0x1C0057F3C (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 *     RIMFreeSpecificDevWorker @ 0x1C00BBC8C (RIMFreeSpecificDevWorker.c)
 *     RIMAllocateHidConfigDesc @ 0x1C0160F50 (RIMAllocateHidConfigDesc.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0162838 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0162C3C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C016740C (RIMIDECreateHIDDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0057570 (WPP_RECORDER_SF_qDD.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall RIMFreeHidDesc(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx

  if ( !a1 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 561LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qDD(
      (_DWORD)gRimLog,
      4,
      1,
      33,
      (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
      a1,
      *(_WORD *)(a1 + 42),
      *(_WORD *)(a1 + 40));
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
    Win32FreePool(v3);
  v4 = *(_QWORD *)(a1 + 32);
  if ( v4 )
    Win32FreePool(v4);
  Win32FreePool(a1);
}
