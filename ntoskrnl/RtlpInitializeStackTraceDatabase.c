/*
 * XREFs of RtlpInitializeStackTraceDatabase @ 0x1409B77E8
 * Callers:
 *     RtlControlStackTraceDataBase @ 0x1405A70C4 (RtlControlStackTraceDataBase.c)
 * Callees:
 *     NtFreeVirtualMemory @ 0x1406EC750 (NtFreeVirtualMemory.c)
 *     RtlStdInitializeStackDatabase @ 0x1409B76AC (RtlStdInitializeStackDatabase.c)
 */

__int64 __fastcall RtlpInitializeStackTraceDatabase(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v4; // edx
  PVOID BaseAddress; // [rsp+20h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+58h] [rbp+20h] BYREF

  RegionSize = 0LL;
  if ( RtlpStackTraceDatabase )
    return 3221225994LL;
  v4 = RtlStdInitializeStackDatabase(a1, a2, a3, &RegionSize);
  if ( v4 >= 0 && _InterlockedCompareExchange64(&RtlpStackTraceDatabase, RegionSize, 0LL) )
  {
    BaseAddress = (PVOID)RegionSize;
    RegionSize = *(_QWORD *)(RegionSize + 184) - RegionSize;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    return 3221225994LL;
  }
  return (unsigned int)v4;
}
