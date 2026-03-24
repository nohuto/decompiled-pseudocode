/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x1403A3FA8
 * Callers:
 *     MiReplicatePteChange @ 0x1403A3E44 (MiReplicatePteChange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiShadowTopLevelPxes @ 0x140355A40 (MiShadowTopLevelPxes.c)
 *     MiTransformValidPteInPlace @ 0x140378AC8 (MiTransformValidPteInPlace.c)
 */

char __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  unsigned int v6; // ebp
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 v10; // r12
  volatile signed __int64 *i; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  BOOL v14; // r14d
  __int64 v15; // r8
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rbx
  struct _LIST_ENTRY *Flink; // rax
  __int64 v20; // rdx
  __int64 v21; // rax

  v5 = a2;
  v6 = ((__int64)(a3 - a2) >> 3) + 1;
  if ( a1 )
  {
    v8 = *(_QWORD *)(a1 + 40) >> 12;
  }
  else
  {
    v17 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v18 = *(_QWORD *)v17;
    if ( MiPteInShadowRange(v17)
      && (MiFlags & 0xC00000) != 0
      && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
      && (v18 & 1) != 0
      && ((v18 & 0x20) == 0 || (v18 & 0x42) == 0) )
    {
      Flink = KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
      if ( Flink )
      {
        v20 = v18 | 0x20;
        v21 = *((_QWORD *)&Flink->Flink + ((v17 >> 3) & 0x1FF));
        if ( (v21 & 0x20) == 0 )
          v20 = v18;
        v18 = v20;
        if ( (v21 & 0x42) != 0 )
          v18 = v20 | 0x42;
      }
    }
    v8 = (v18 >> 12) & 0xFFFFFFFFFLL;
  }
  v10 = MiMapPageInHyperSpaceWorker(v8, 0LL, 0x80000000, a4);
  for ( i = (volatile signed __int64 *)(v10 + 8 * ((v5 >> 3) & 0x1FF)); v5 <= a3; ++i )
  {
    v12 = MI_READ_PTE_LOCK_FREE(v5);
    v13 = MI_READ_PTE_LOCK_FREE((unsigned __int64)i);
    if ( v12 != v13 )
    {
      if ( (v12 & 1) == 0 )
      {
        v14 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
          v14 = MiPteHasShadow() != 0;
        goto LABEL_8;
      }
      if ( (v13 & 1) == 0 )
      {
        v14 = 0;
        if ( MiPteInShadowRange((unsigned __int64)i) )
        {
          if ( (unsigned int)MiPteHasShadow() )
          {
            v14 = 1;
            if ( !HIBYTE(word_140C4E008) )
LABEL_31:
              v12 |= 0x8000000000000000uLL;
          }
          else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            goto LABEL_31;
          }
        }
LABEL_8:
        *i = v12;
        if ( v14 )
          MiWritePteShadow((__int64)i, v12, v15);
        goto LABEL_10;
      }
      MiTransformValidPteInPlace(i, v5, v12, 3u);
    }
LABEL_10:
    v5 += 8LL;
  }
  LOBYTE(v9) = 17;
  MiUnmapPageInHyperSpaceWorker(v10, v9, 0x80000000LL);
  return MiShadowTopLevelPxes(a1, v5 - 8LL * v6, v6);
}
