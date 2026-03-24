/*
 * XREFs of MiSwapStackPageNoDpc @ 0x14031FC90
 * Callers:
 *     MiSwapStackPage @ 0x14031F4BC (MiSwapStackPage.c)
 *     MiJumpStackTarget @ 0x140535F90 (MiJumpStackTarget.c)
 * Callees:
 *     MiCopyPage @ 0x14023FB90 (MiCopyPage.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1402AA5C0 (MiSetOriginalPtePfnFromFreeList.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLockNestedPageAtDpcInline @ 0x140333FA0 (MiLockNestedPageAtDpcInline.c)
 *     KeFlushSingleTb @ 0x140334A18 (KeFlushSingleTb.c)
 *     MiCopyPfnEntryEx @ 0x140336A40 (MiCopyPfnEntryEx.c)
 */

__int64 __fastcall MiSwapStackPageNoDpc(__int128 *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  ULONG_PTR v7; // rbx
  signed __int64 v8; // rax
  unsigned __int64 v9; // rdi
  char v11; // al
  char v12; // al

  v3 = *(_QWORD *)(a2 + 8) | 0x8000000000000000uLL;
  v7 = (a3 + 0x58000000000LL) / 48;
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v9 = v8 & 0xFFFFFFFFFFFFFFDFuLL;
  if ( v8 != _InterlockedCompareExchange64((volatile signed __int64 *)v3, v8 & 0xFFFFFFFFFFFFFFDFuLL, v8) )
    return 0LL;
  KeFlushSingleTb((__int64)(v3 << 25) >> 16, 0LL);
  MiLockNestedPageAtDpcInline(a3);
  MiCopyPfnEntryEx(a3, a2);
  MiCopyPage(v7, (a2 + 0x58000000000LL) / 48, a1, 68);
  if ( v9 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)v3,
               v9 ^ (v9 ^ (v7 << 12)) & 0xFFFFFFFFF000LL | 0x20,
               v9) )
  {
    *(_BYTE *)(a3 + 34) = *(_BYTE *)(a3 + 34) & 0xF8 | 5;
    MiSetOriginalPtePfnFromFreeList((unsigned __int64 *)(a3 + 16));
    *(_QWORD *)(a3 + 40) &= 0x8FFFFFFFFFFFFFFFuLL;
    _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return 0LL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v11 = *(_BYTE *)(a2 + 34);
  *(_QWORD *)(a2 + 40) &= 0xFFFFFFFFFFFFFFFuLL;
  v12 = v11 & 0xF8 | 5;
  *(_BYTE *)(a2 + 34) = v12;
  *(_BYTE *)(a2 + 34) = v12 & 0xC7;
  *(_BYTE *)(a2 + 35) &= ~0x20u;
  *(_QWORD *)(a2 + 24) &= 0xC000000000000000uLL;
  return 1LL;
}
