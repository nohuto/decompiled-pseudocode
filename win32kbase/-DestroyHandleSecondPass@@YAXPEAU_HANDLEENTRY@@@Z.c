/*
 * XREFs of ?DestroyHandleSecondPass@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C015C200
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     HMDestroyUnlockedObject @ 0x1C01538C0 (HMDestroyUnlockedObject.c)
 */

void __fastcall DestroyHandleSecondPass(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rsi
  __int64 v6; // rdi

  v4 = gpKernelHandleTable;
  v6 = 3LL * (unsigned int)((a1 - qword_1C02D0E08) >> 5);
  if ( *(_DWORD *)(*((_QWORD *)gpKernelHandleTable + 3 * (unsigned int)((a1 - qword_1C02D0E08) >> 5)) + 8LL) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1086);
    *(_DWORD *)(v4[v6] + 8LL) = 0;
  }
  HMDestroyUnlockedObject(a1, a2, a3, a4);
}
