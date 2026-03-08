/*
 * XREFs of VidSchiSkipXboxNodeTimeout @ 0x1C003C6B0
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C00A5B80 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiSkipXboxNodeTimeout(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rbp
  unsigned int v5; // eax

  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 16LL) + 436LL) & 0x200) != 0 )
  {
    v2 = __rdtsc();
    v3 = __readmsr(0x400000F6u);
    v4 = 10 * (v2 - v3) / *((unsigned int *)KeGetCurrentPrcb() + 17);
    WdLogSingleEntry3(8LL, v3, v2, v4);
    if ( v3 > v2 || v4 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
      return 1;
    v5 = ++*(_DWORD *)(a1 + 480);
    if ( v5 < 2 )
    {
      WdLogSingleEntry5(3LL, v5, 2LL, *(_QWORD *)(a1 + 472), *(_QWORD *)(a1 + 448), *(_QWORD *)(a1 + 456));
      *(_QWORD *)(a1 + 448) = *(_QWORD *)(a1 + 456);
      return 1;
    }
  }
  return 0;
}
