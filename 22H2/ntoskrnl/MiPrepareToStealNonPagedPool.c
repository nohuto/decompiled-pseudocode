/*
 * XREFs of MiPrepareToStealNonPagedPool @ 0x1403C4C0C
 * Callers:
 *     MiStealPage @ 0x140334CB4 (MiStealPage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 */

unsigned __int64 __fastcall MiPrepareToStealNonPagedPool(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v3; // rax
  unsigned __int64 v4; // rbx

  if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    return 0LL;
  v3 = MI_READ_PTE_LOCK_FREE(a2);
  if ( (v3 & 0x220) != 0x20 )
    return 0LL;
  v4 = v3 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v3 != _InterlockedCompareExchange64((volatile signed __int64 *)a2, v3 & 0xFFFFFFFFFFFFFFDFuLL, v3) )
    return 0LL;
  KeFlushSingleTb((__int64)(a2 << 25) >> 16, 0, 2u);
  return v4;
}
