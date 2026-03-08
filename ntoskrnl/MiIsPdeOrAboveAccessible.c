/*
 * XREFs of MiIsPdeOrAboveAccessible @ 0x1402E21F4
 * Callers:
 *     MiGetNextPageTablePte @ 0x140224090 (MiGetNextPageTablePte.c)
 *     MiResolvePageTablePage @ 0x1402689F0 (MiResolvePageTablePage.c)
 *     MiReplacePageTablePage @ 0x14039164C (MiReplacePageTablePage.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 *     MiSwizzleInvalidPte @ 0x14032F600 (MiSwizzleInvalidPte.c)
 */

__int64 __fastcall MiIsPdeOrAboveAccessible(__int64 a1)
{
  unsigned __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d

  v1 = MI_READ_PTE_LOCK_FREE(a1);
  result = 1LL;
  if ( (v1 & 1) == 0 && v1 && (v1 & 0x400) == 0 )
  {
    if ( (v1 & 0x800) != 0 )
    {
      if ( ((v1 >> 5) & 0x1F) == 0x18 )
        return 0LL;
    }
    else
    {
      v3 = MiSwizzleInvalidPte(512LL);
      LOBYTE(v5) = v4 != v3;
      return v5;
    }
  }
  return result;
}
