/*
 * XREFs of VidSchiSkipXboxVsyncTimeout @ 0x1C003C7CC
 * Callers:
 *     ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x1C0008B70 (-VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEA_KPEAT_ULARGE_INTEGER@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiSkipXboxVsyncTimeout(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r14
  unsigned int v8; // eax
  __int64 v9; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 436LL) & 0x200) != 0 )
  {
    v5 = __rdtsc();
    v6 = __readmsr(0x400000F6u);
    v7 = 10 * (v5 - v6) / *((unsigned int *)KeGetCurrentPrcb() + 17);
    WdLogSingleEntry3(8LL, v6, v5, v7);
    if ( v6 > v5 || v7 <= 10000000 * (unsigned __int64)g_TdrConfig[1] )
      return 1;
    v8 = *(_DWORD *)(a2 + 40) + 1;
    *(_DWORD *)(a2 + 40) = v8;
    if ( v8 < 2 )
    {
      v9 = MEMORY[0xFFFFF78000000320];
      WdLogSingleEntry4(3LL, *(unsigned int *)(a2 + 40), 2LL, *(_QWORD *)(a3 + 1104), MEMORY[0xFFFFF78000000320]);
      *(_QWORD *)(a3 + 1104) = v9;
      *(_QWORD *)(a2 + 48) = a3;
      return 1;
    }
  }
  return 0;
}
