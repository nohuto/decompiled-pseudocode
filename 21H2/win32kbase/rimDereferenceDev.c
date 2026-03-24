/*
 * XREFs of rimDereferenceDev @ 0x1C00A6610
 * Callers:
 *     RIMCreateDev @ 0x1C0054530 (RIMCreateDev.c)
 *     RIMFreeSpecificDev @ 0x1C00A6554 (RIMFreeSpecificDev.c)
 *     RIMVirtCreateDev @ 0x1C014FD68 (RIMVirtCreateDev.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1C004B460 (WPP_RECORDER_SF_qq.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimDereferenceDev(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rdi
  int v4; // eax
  void *v5; // rsi
  void *v6; // rbp
  int v7; // edx

  v2 = *(_QWORD **)(a1 + 32);
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 85LL);
  v4 = *(_DWORD *)(a1 + 184);
  v5 = *(void **)(a1 + 16);
  v6 = *(void **)(a1 + 24);
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  if ( (v4 & 0x20) == 0 && (v4 & 0x2000) == 0 )
  {
    if ( v4 < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 98LL);
    if ( *(_QWORD *)(a1 + 192) )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 99LL);
    if ( (*(_DWORD *)(a1 + 188) & 1) != 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 100LL);
  }
  if ( v2[4] == PsGetCurrentProcess(a1, a2) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_qq(
        (_DWORD)gRimLog,
        v7,
        1,
        10,
        (__int64)&WPP_ca8085c5223136153291efdbd0fc109f_Traceguids,
        (char)v5,
        a1);
    }
    ObCloseHandle(v5, 1);
  }
  ZwClose(v6);
  return ObfDereferenceObject(v2);
}
