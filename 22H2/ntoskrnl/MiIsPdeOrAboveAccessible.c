/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x14032A440
 * Callers:
 *     MiGetNextPageTablePte @ 0x14020CD70 (MiGetNextPageTablePte.c)
 *     MiReplacePageTablePage @ 0x1403634C0 (MiReplacePageTablePage.c)
 * Callees:
 *     MiSwizzleInvalidPte @ 0x1402AA620 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402AE550 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MiIsPdeOrAboveAccessible(unsigned __int64 a1)
{
  unsigned __int64 v1; // rax
  bool v2; // zf
  _BOOL8 result; // rax
  __int64 v4; // rax
  __int64 v5; // rdx

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  result = 1;
  if ( (v1 & 1) == 0 && v1 && (v1 & 0x400) == 0 )
  {
    if ( (v1 & 0x800) != 0 )
    {
      v2 = ((v1 >> 5) & 0x1F) == 24;
    }
    else
    {
      v4 = MiSwizzleInvalidPte(512LL);
      v2 = v5 == v4;
    }
    if ( v2 )
      return 0;
  }
  return result;
}
