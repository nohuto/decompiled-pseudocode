/*
 * XREFs of MmIsNonPagedPoolNx @ 0x14063F740
 * Callers:
 *     EtwTracePool @ 0x1405FAD80 (EtwTracePool.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x14031B450 (MI_READ_PTE_LOCK_FREE.c)
 */

_BOOL8 __fastcall MmIsNonPagedPoolNx(unsigned __int64 a1)
{
  __int64 v2; // rax

  v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  if ( (v2 & 0x80u) == 0LL )
    v2 = MI_READ_PTE_LOCK_FREE(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return v2 < 0;
}
