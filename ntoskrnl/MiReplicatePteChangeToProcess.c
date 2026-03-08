/*
 * XREFs of MiReplicatePteChangeToProcess @ 0x1402A470C
 * Callers:
 *     MiReplicatePteChange @ 0x1402A4528 (MiReplicatePteChange.c)
 * Callees:
 *     MiMapPageInHyperSpaceWorker @ 0x140214870 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x140214A54 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiShadowTopLevelPxes @ 0x1402A5D94 (MiShadowTopLevelPxes.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x1403BD25C (MiTransformValidPteInPlace.c)
 */

__int64 __fastcall MiReplicatePteChangeToProcess(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rax
  unsigned __int64 v5; // r15
  __int64 *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
  BOOL v10; // esi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8

  if ( a1 )
    v4 = *(_QWORD *)(a1 + 40) >> 12;
  else
    v4 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFFLL;
  v5 = MiMapPageInHyperSpaceWorker(v4, 0LL, 0x80000000);
  v6 = (__int64 *)(v5 + 8 * ((a2 >> 3) & 0x1FF));
  v7 = MI_READ_PTE_LOCK_FREE(a2);
  v8 = MI_READ_PTE_LOCK_FREE(v6);
  if ( v7 == v8 )
    goto LABEL_4;
  if ( (v7 & 1) == 0 )
  {
    v10 = 0;
    if ( (unsigned int)MiPteInShadowRange(v6) )
      v10 = MiPteHasShadow(v12, v11, v13) != 0;
    goto LABEL_8;
  }
  if ( (v8 & 1) != 0 )
  {
    MiTransformValidPteInPlace(v6, a2, v7, 3LL);
    goto LABEL_4;
  }
  v10 = 0;
  if ( !(unsigned int)MiPteInShadowRange(v6) )
    goto LABEL_8;
  if ( (unsigned int)MiPteHasShadow(v15, v14, v16) )
  {
    v10 = 1;
    if ( HIBYTE(word_140C6697C) )
      goto LABEL_8;
  }
  else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
  {
    goto LABEL_8;
  }
  v7 |= 0x8000000000000000uLL;
LABEL_8:
  *v6 = v7;
  if ( v10 )
    MiWritePteShadow(v6, v7);
LABEL_4:
  MiUnmapPageInHyperSpaceWorker(v5, 0x11u);
  return MiShadowTopLevelPxes(a1, a2, 1LL);
}
