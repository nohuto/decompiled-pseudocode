/*
 * XREFs of MiAbortCombineScan @ 0x140283DF0
 * Callers:
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiChangePageAttributeBatch @ 0x140283C20 (MiChangePageAttributeBatch.c)
 *     MiChangePageAttribute @ 0x140284864 (MiChangePageAttribute.c)
 *     MiChangePageAttributeContiguous @ 0x140328CE8 (MiChangePageAttributeContiguous.c)
 *     MiInitializeMdlPfn @ 0x140354D24 (MiInitializeMdlPfn.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x140376108 (MiUpdateSlabPagePlaceholderState.c)
 *     MiAllocateSlabEntry @ 0x140392168 (MiAllocateSlabEntry.c)
 *     MiInitializeDynamicPfns @ 0x14052E4E0 (MiInitializeDynamicPfns.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 * Callees:
 *     MiPageCombiningActive @ 0x140283EA0 (MiPageCombiningActive.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14029CE90 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14029CF60 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 */

void __fastcall MiAbortCombineScan(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  _QWORD *v4; // r14
  _QWORD *v5; // rsi
  _BYTE *v6; // rdi
  unsigned __int64 v7; // rbx
  int v8; // ebp
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf

  if ( (unsigned int)MiPageCombiningActive(0LL) )
  {
    v2 = *(_QWORD *)(qword_140C4E648 + 8 * ((*(_QWORD *)(a1 + 40) >> 39) & 0x3FFLL));
    ExAcquireSpinLockSharedAtDpcLevel(&dword_140C4E540);
    v4 = (_QWORD *)(v2 + 6456);
    v5 = (_QWORD *)*v4;
    if ( (_QWORD *)*v4 != v4 )
    {
      while ( 1 )
      {
        if ( v5[6] == a1 )
        {
          v6 = (_BYTE *)v5[7];
          if ( (*v6 & 1) != 0 )
            break;
        }
LABEL_4:
        v5 = (_QWORD *)*v5;
        if ( v5 == v4 )
          goto LABEL_5;
      }
      v7 = ZeroPte;
      v8 = 0;
      if ( (unsigned int)MiPteInShadowRange(v5[7], v3) )
      {
        if ( (unsigned int)MiPteHasShadow(v10, v9, v11, v12) )
        {
          v8 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v13 = (ZeroPte & 1) == 0;
            goto LABEL_13;
          }
        }
        else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = (ZeroPte & 1) == 0;
LABEL_13:
          if ( !v13 )
            v7 = ZeroPte | 0x8000000000000000uLL;
        }
      }
      *(_QWORD *)v6 = v7;
      if ( v8 )
        MiWritePteShadow(v6, v7);
      KeFlushSingleTb((__int64)((_QWORD)v6 << 25) >> 16, 0LL);
      goto LABEL_4;
    }
LABEL_5:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_140C4E540);
  }
}
