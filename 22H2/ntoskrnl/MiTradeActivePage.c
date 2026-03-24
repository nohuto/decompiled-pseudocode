/*
 * XREFs of MiTradeActivePage @ 0x14030DD40
 * Callers:
 *     MiLockCode @ 0x1402A3C40 (MiLockCode.c)
 *     MiReplaceLockedPage @ 0x14053D6AC (MiReplaceLockedPage.c)
 *     MiCompleteSecureProcessFault @ 0x1405480C4 (MiCompleteSecureProcessFault.c)
 *     MiMakeVaRangePhysicallyContiguous @ 0x140551EB4 (MiMakeVaRangePhysicallyContiguous.c)
 * Callees:
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     MiGetPagePrivilege @ 0x1402A8D80 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402C9180 (MiPteInShadowRange.c)
 *     MiWriteValidPteNewPage @ 0x14030E048 (MiWriteValidPteNewPage.c)
 *     MiWritePteShadow @ 0x14030E10C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14030E16C (MiPteHasShadow.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 *     MiFinalizePageAttribute @ 0x140337444 (MiFinalizePageAttribute.c)
 *     MI_PFN_IS_PROTO @ 0x1403F3F48 (MI_PFN_IS_PROTO.c)
 */

__int64 __fastcall MiTradeActivePage(ULONG_PTR a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5, int a6)
{
  unsigned __int64 v7; // r14
  ULONG_PTR v9; // r15
  BOOL v10; // edi
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rbx
  BOOL v18; // r14d
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int v24; // edi
  char v25; // al
  char v26; // al
  __int64 v27; // r15
  unsigned __int64 v28; // rbx
  int v29; // edi
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned __int64 v34; // rbx
  __int64 v35; // rax

  v7 = a3;
  if ( (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 || *(_WORD *)(a1 + 32) != 1 )
    return 0LL;
  v9 = (a2 + 0x58000000000LL) / 48;
  v10 = (MiFlags & 0x8000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 0, 0LL);
  v11 = (unsigned __int64 *)(((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v12 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v11);
  v16 = v12;
  if ( a5 == 2 )
  {
    if ( (v12 & 0x42) != 0 || v10 )
      return 0LL;
  }
  else
  {
    v18 = 0;
    v19 = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
      v18 = MiPteHasShadow(v21, v20, v22, v23) != 0;
    *v11 = v19;
    if ( v18 )
      MiWritePteShadow(v11, v16 & 0xFFFFFFFFFFFFFBFEuLL | 0x400);
    v7 = a3;
    KeFlushSingleTb(a3, a4);
  }
  v24 = *(unsigned __int8 *)(a1 + 34) >> 6;
  a6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&a6, v13, v14, v15);
    while ( *(__int64 *)(a1 + 24) < 0 );
  }
  MiLockNestedPageAtDpcInline(a2);
  MiFinalizePageAttribute(a2, v24, 1LL);
  MiCopyPfnEntryEx(a2, a1);
  MiCopyPage(v9, (__int64)(a1 + 0x58000000000LL) / 48, 0LL, 6);
  _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v25 = *(_BYTE *)(a1 + 35);
  *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
  *(_BYTE *)(a1 + 35) = v25 & 0xF7;
  v26 = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  *(_BYTE *)(a1 + 34) = v26;
  *(_BYTE *)(a1 + 34) = v26 & 0xC7;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v27 = (v9 & 0xFFFFFFFFFLL) << 12;
  v28 = v27 | v16 & 0xFFFF000000000FFFuLL;
  if ( a5 != 2 )
  {
    v29 = 0;
    if ( MiPteInShadowRange((unsigned __int64)v11) )
    {
      if ( (unsigned int)MiPteHasShadow(v31, v30, v32, v33) )
      {
        v29 = 1;
        if ( !HIBYTE(word_140C4E008) )
        {
LABEL_26:
          if ( (v28 & 1) != 0 )
            v28 |= 0x8000000000000000uLL;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        goto LABEL_26;
      }
    }
    *v11 = v28;
    if ( v29 )
      MiWritePteShadow(v11, v28);
    goto LABEL_30;
  }
  MiWriteValidPteNewPage(v11, v28, 0LL);
LABEL_30:
  KeFlushSingleTb(v7, a4);
  if ( (unsigned int)MI_PFN_IS_PROTO(a2) )
  {
    v34 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
    v35 = MI_READ_PTE_LOCK_FREE(v34);
    MiWriteValidPteNewPage(v34, v27 | v35 & 0xFFFF000000000FFFuLL, 0LL);
  }
  return 1LL;
}
