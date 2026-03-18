/*
 * XREFs of GetData @ 0x1C0029E80
 * Callers:
 *     ??0CTempW32TlsForThread@@QEAA@XZ @ 0x1C0029CE8 (--0CTempW32TlsForThread@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C002CA0C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C002CA34 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     AddW32TlsData @ 0x1C009DFD0 (AddW32TlsData.c)
 *     RemoveW32TlsData @ 0x1C00A8A50 (RemoveW32TlsData.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GetData()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v4; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( (int)PsTlsGetValue(*((unsigned int *)gpxsGlobals + 12), &v4) < 0 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v1, v0, v2);
  }
  else if ( v4 || !PsGetCurrentThreadWin32Thread() )
  {
    return v4;
  }
  if ( (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x164u, 0x2CuLL, 0LL, 0LL, 0LL);
  DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 44LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  return v4;
}
