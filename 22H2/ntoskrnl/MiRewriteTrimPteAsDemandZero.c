/*
 * XREFs of MiRewriteTrimPteAsDemandZero @ 0x140332EB8
 * Callers:
 *     MiWsleFree @ 0x1402A8560 (MiWsleFree.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x14023E120 (MiSetNonResidentPteHeat.c)
 *     MiDecrementShareCount @ 0x14023FB30 (MiDecrementShareCount.c)
 *     MiMapPageInHyperSpaceWorker @ 0x1402B2140 (MiMapPageInHyperSpaceWorker.c)
 *     MiUnmapPageInHyperSpaceWorker @ 0x1402C8FA0 (MiUnmapPageInHyperSpaceWorker.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiTransferSoftwarePte @ 0x1403330E8 (MiTransferSoftwarePte.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

char __fastcall MiRewriteTrimPteAsDemandZero(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r10
  unsigned __int64 v5; // rbx
  __int16 v6; // r10
  __int64 v7; // rdx
  unsigned __int64 v8; // rdi
  __int64 v9; // r9
  int v10; // esi
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // r8
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rsi
  int v16; // ebp
  unsigned __int64 *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  bool v20; // zf
  unsigned __int64 v22; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2[2];
  if ( (v2 & 2) != 0 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(qword_140C4E648 + 8 * ((a2[5] >> 39) & 0x3FFLL))
                   + 8LL * ((unsigned __int16)v2 >> 12)
                   + 6944);
    if ( qword_140C4DF40 && (v2 & 0x10) == 0 )
      v2 &= ~qword_140C4DF40;
    v5 = MiTransferSoftwarePte(a2[2], v7, HIDWORD(v2), 2LL);
  }
  else
  {
    v22 = a2[2];
    MiSetNonResidentPteHeat(&v22, 0);
    v5 = v22;
    if ( (v6 & 0x400) == 0 )
    {
      v5 = v22 & 0xFFFFFFFFFFFFFFF9uLL;
      v22 &= 0xFFFFFFFFFFFFFFF9uLL;
    }
  }
  v8 = a2[1] | 0x8000000000000000uLL;
  if ( !(unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v10 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange(v8);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      if ( (_DWORD)CurrentThread )
      {
        v10 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
          v13 = (v5 & 1) == 0;
          goto LABEL_15;
        }
      }
      else
      {
        CurrentThread = KeGetCurrentThread();
        if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        {
          v13 = (v5 & 1) == 0;
LABEL_15:
          if ( !v13 )
            v5 |= 0x8000000000000000uLL;
        }
      }
    }
    *(_QWORD *)v8 = v5;
    if ( v10 )
      LOBYTE(CurrentThread) = MiWritePteShadow(v8, v5, v12);
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
      LOBYTE(CurrentThread) = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 - 392), 0xFFFFFFFFFFFFFFFFuLL);
    return (char)CurrentThread;
  }
  v14 = a2[5] & 0xFFFFFFFFFLL;
  v15 = 48 * v14 - 0x58000000000LL;
  v16 = 0;
  v17 = (unsigned __int64 *)(MiMapPageInHyperSpaceWorker(v14, 0LL, 0x80000000, v9) + 8 * ((v8 >> 3) & 0x1FF));
  if ( MiPteInShadowRange((unsigned __int64)v17) )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v16 = 1;
      if ( !HIBYTE(word_140C4E008) )
      {
        v20 = (v5 & 1) == 0;
        goto LABEL_27;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v20 = (v5 & 1) == 0;
LABEL_27:
      if ( !v20 )
        v5 |= 0x8000000000000000uLL;
    }
  }
  *v17 = v5;
  if ( v16 )
    MiWritePteShadow((__int64)v17, v5, v19);
  LOBYTE(v18) = 17;
  MiUnmapPageInHyperSpaceWorker((unsigned __int64)v17, v18, 0x80000000LL);
  MiLockNestedPageAtDpcInline(v15);
  MiDecrementShareCount(v15);
  LOBYTE(CurrentThread) = -1;
  _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (char)CurrentThread;
}
