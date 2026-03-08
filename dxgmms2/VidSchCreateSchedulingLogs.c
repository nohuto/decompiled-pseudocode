/*
 * XREFs of VidSchCreateSchedulingLogs @ 0x1C00C20D0
 * Callers:
 *     ?VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C1F94 (-VidMmInitializePagingProcess@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     VidSchiCreateNodeSchedulingLog @ 0x1C0045370 (VidSchiCreateNodeSchedulingLog.c)
 */

__int64 __fastcall VidSchCreateSchedulingLogs(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r8
  unsigned int v4; // r10d
  __int64 v5; // rax
  __int64 result; // rax
  struct _VIDSCH_NODE **v7; // rcx

  if ( *(int *)(*(_QWORD *)(a1 + 16) + 2820LL) < 2500 )
    return 0LL;
  v2 = 0LL;
  if ( !*(_DWORD *)(a1 + 80) )
    return 0LL;
  while ( 1 )
  {
    v3 = *(_QWORD *)(a1 + 632);
    v4 = *(_DWORD *)(a1 + 704);
    v5 = v3 + 8 * v2;
    if ( (unsigned int)v2 >= v4 )
      v5 = *(_QWORD *)(a1 + 632);
    if ( (*(_DWORD *)(*(_QWORD *)v5 + 12LL) & 2) != 0 )
    {
      v7 = (struct _VIDSCH_NODE **)(v3 + 8 * v2);
      if ( (unsigned int)v2 >= v4 )
        v7 = *(struct _VIDSCH_NODE ***)(a1 + 632);
      result = VidSchiCreateNodeSchedulingLog(*v7, 0x800u);
      if ( (int)result < 0 )
        break;
    }
    v2 = (unsigned int)(v2 + 1);
    if ( (unsigned int)v2 >= *(_DWORD *)(a1 + 80) )
      return 0LL;
  }
  return result;
}
