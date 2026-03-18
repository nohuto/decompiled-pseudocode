/*
 * XREFs of EtwpGetDurationSince @ 0x14046732E
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1402F8CDC (MiAllocatePagesForMdl.c)
 *     MiAllocateContiguousMemory @ 0x1403B9674 (MiAllocateContiguousMemory.c)
 * Callees:
 *     RtlULongLongMult @ 0x14022CE4C (RtlULongLongMult.c)
 *     KeQueryPerformanceCounter @ 0x1402C3240 (KeQueryPerformanceCounter.c)
 */

ULONGLONG __fastcall EtwpGetDurationSince(__int64 a1)
{
  LARGE_INTEGER v2; // rax
  unsigned __int64 v3; // r10
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF
  LARGE_INTEGER v6; // [rsp+38h] [rbp+10h] BYREF

  v6.QuadPart = 0LL;
  pullResult = 0LL;
  v2 = KeQueryPerformanceCounter(&v6);
  if ( RtlULongLongMult(v2.QuadPart - a1, 0xF4240uLL, &pullResult) >= 0 )
    return pullResult / v6.QuadPart;
  if ( v6.QuadPart / 0xF4240uLL )
    return v3 / (v6.QuadPart / 0xF4240uLL);
  return 0LL;
}
