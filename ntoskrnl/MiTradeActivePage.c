/*
 * XREFs of MiTradeActivePage @ 0x140211BC0
 * Callers:
 *     MiLockCode @ 0x14032C9C0 (MiLockCode.c)
 *     MiProtectDriverSectionPte @ 0x140618060 (MiProtectDriverSectionPte.c)
 *     MiReplaceLockedPage @ 0x14063487C (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1406435E4 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x14065B0E0 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiWriteValidPteNewPage @ 0x140211DE8 (MiWriteValidPteNewPage.c)
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiActivePageTradeable @ 0x14021244C (MiActivePageTradeable.c)
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x14028A354 (MiFinalizePageAttribute.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MiWritePteShadow @ 0x1402EB2BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402EB31C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x14031B4C0 (MiPteInShadowRange.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiWriteValidPteNewProtection @ 0x14032E660 (MiWriteValidPteNewProtection.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 */

__int64 __fastcall MiTradeActivePage(
        ULONG_PTR a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  __int64 v7; // r14
  ULONG_PTR v9; // r15
  ULONG_PTR v10; // rdi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rbx
  int v14; // eax
  char v15; // al
  char v16; // al
  __int64 v17; // r15
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // rax
  BOOL v22; // r14d
  unsigned __int64 v23; // rdi
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // edi
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  unsigned int v31; // [rsp+20h] [rbp-38h]

  v7 = a2;
  if ( !(unsigned int)MiActivePageTradeable(a1) )
    return 0LL;
  v9 = 0xAAAAAAAAAAAAAAABuLL * ((v7 + 0x220000000000LL) >> 4);
  v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
  v11 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE(v11);
  v13 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 )
    {
      MiWriteValidPteNewProtection(v11, v12 & 0xFFFFFFFFFFFFFFBDuLL);
      KeFlushSingleTb(a3, a4, 2LL);
    }
  }
  else
  {
    v22 = 0;
    v23 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( (unsigned int)MiPteInShadowRange(v11) )
      v22 = MiPteHasShadow(v25, v24, v26) != 0;
    *v11 = v23;
    if ( v22 )
      MiWritePteShadow(v11, v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    KeFlushSingleTb(a3, a4, a5);
    v10 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4);
    v7 = a2;
  }
  v14 = *(unsigned __int8 *)(a1 + 34) >> 6;
  a6 = 0;
  v31 = v14;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(v7);
  MiFinalizePageAttribute(v7, v31, 1LL);
  MiCopyPfnEntryEx(v7, a1);
  MiCopyPage(v9, v10);
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v15 = *(_BYTE *)(a1 + 35);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 35) = v15 & 0xF7;
  v16 = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = v16;
  *(_BYTE *)(a1 + 34) = v16 & 0xC7;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v17 = (v9 & 0xFFFFFFFFFFLL) << 12;
  v18 = v17 | v13 & 0xFFF0000000000FFFuLL;
  if ( a5 != 2 )
  {
    v27 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v11) )
      goto LABEL_27;
    if ( (unsigned int)MiPteHasShadow(v29, v28, v30) )
    {
      v27 = 1;
      if ( HIBYTE(word_140C6697C) )
      {
LABEL_27:
        *v11 = v18;
        if ( v27 )
          MiWritePteShadow(v11, v18);
        goto LABEL_9;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_27;
    }
    if ( (v18 & 1) != 0 )
      v18 |= 0x8000000000000000uLL;
    goto LABEL_27;
  }
  MiWriteValidPteNewPage(v11, v18, 0LL);
LABEL_9:
  KeFlushSingleTb(a3, a4, a5);
  if ( *(__int64 *)(v7 + 40) < 0 )
  {
    v19 = *(_QWORD *)(v7 + 8) | 0x8000000000000000uLL;
    v20 = MI_READ_PTE_LOCK_FREE(v19);
    MiWriteValidPteNewPage(v19, v17 | v20 & 0xFFF0000000000FFFuLL, 0LL);
  }
  return 1LL;
}
