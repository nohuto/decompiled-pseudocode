/*
 * XREFs of MiSwapStackPageNoDpc @ 0x1403963DC
 * Callers:
 *     MiSwapStackPage @ 0x14039604C (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x14062AB70 (MiJumpStackTarget.c)
 * Callees:
 *     KeFlushSingleTb @ 0x140211E60 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x140213930 (MiCopyPfnEntryEx.c)
 *     MiLockNestedPageAtDpcInline @ 0x1402DDE90 (MiLockNestedPageAtDpcInline.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiCopyPage @ 0x14032DC70 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x14032F834 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiSetPfnIdentity @ 0x14034BE78 (MiSetPfnIdentity.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r14
  ULONG_PTR v5; // r12
  signed __int64 v6; // rax
  unsigned __int64 v7; // rdi
  char v8; // al

  v2 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v5 = 0xAAAAAAAAAAAAAAABuLL * ((a1 + 0x220000000000LL) >> 4);
  v6 = MI_READ_PTE_LOCK_FREE(v2);
  v7 = v6 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( (MiFlags & 0x2000000) != 0 )
    _mm_lfence();
  if ( v6 == _InterlockedCompareExchange64((volatile signed __int64 *)v2, v7, v6) )
  {
    KeFlushSingleTb((__int64)(v2 << 25) >> 16, 0, 2u);
    MiLockNestedPageAtDpcInline(a2);
    MiCopyPfnEntryEx(a2, (__int128 *)a1);
    MiCopyPage(0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4), v5, 68);
    if ( (MiFlags & 0x2000000) != 0 )
      _mm_lfence();
    if ( v7 == _InterlockedCompareExchange64(
                 (volatile signed __int64 *)v2,
                 v7 ^ (v7 ^ (0xAAAAAAAAAAAAB000uLL * ((a2 + 0x220000000000LL) >> 4))) & 0xFFFFFFFFFF000LL | 0x20,
                 v7) )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      MiSetPfnIdentity(a1, 0);
      v8 = *(_BYTE *)(a1 + 34);
      *(_QWORD *)(a1 + 40) &= ~0x8000000000000000uLL;
      *(_BYTE *)(a1 + 34) = v8 & 0xC7;
      *(_BYTE *)(a1 + 35) &= ~0x20u;
      *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
      return 1LL;
    }
    *(_BYTE *)(a2 + 34) = *(_BYTE *)(a2 + 34) & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a2 + 16));
    MiSetPfnIdentity(a2, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
