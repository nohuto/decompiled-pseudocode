/*
 * XREFs of MiPrefetchRestOfCluster @ 0x1402FBFE0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140342A90 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14028A260 (MiGetEffectivePagePriorityThread.c)
 *     MiGetSystemRegionType @ 0x14032E6D0 (MiGetSystemRegionType.c)
 *     MiPrefetchVirtualMemory @ 0x140363970 (MiPrefetchVirtualMemory.c)
 */

void __fastcall MiPrefetchRestOfCluster(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // rbp
  unsigned __int64 *v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rdx
  char EffectivePagePriorityThread; // al
  _QWORD v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2[3];
  if ( v3 < a2[2] )
  {
    v7 = *(_QWORD *)(a1 + 224);
    if ( v7 >= 0xFFFF800000000000uLL && (unsigned int)MiGetSystemRegionType(*(_QWORD *)(a1 + 224)) != 1 )
      a3 = 1LL;
    v8 = (unsigned __int64 *)(a2[1] + 16 * v3);
    v9 = (*(unsigned int *)(a1 + 184) + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
    v10 = *v8;
    if ( v9 >= *v8 )
    {
      v11 = v8[1];
      if ( v9 < v11 + v10 )
      {
        v13[0] = (*(unsigned int *)(a1 + 184) + v7 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        v13[1] = v10 + v11 - v9;
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
        MiPrefetchVirtualMemory(
          1LL,
          v13,
          a3,
          EffectivePagePriorityThread & 7 | (8 * (EffectivePagePriorityThread & 7 | 0x2800u)));
      }
    }
  }
}
