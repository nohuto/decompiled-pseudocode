/*
 * XREFs of GetData @ 0x1C0159760
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 GetData()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // r9
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-38h]
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  if ( (int)PsTlsGetValue(*((unsigned int *)gpxsGlobals + 8), &v6) >= 0 )
  {
    if ( v6 || !PsGetCurrentThreadWin32Thread(v1, v0, v2, v3, BugCheckParameter4) )
      return v6;
  }
  else
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2214);
  }
  if ( (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x164u, 0x2CuLL, 0LL, 0LL, 0LL);
  DbgkWerCaptureLiveKernelDump(L"NTUSER", 400LL, 44LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0);
  return v6;
}
