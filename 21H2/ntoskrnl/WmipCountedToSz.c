/*
 * XREFs of WmipCountedToSz @ 0x1407578B0
 * Callers:
 *     WmipAddDataSource @ 0x1407568A8 (WmipAddDataSource.c)
 *     WmipPrepareWnodeSI @ 0x140757604 (WmipPrepareWnodeSI.c)
 * Callees:
 *     memmove @ 0x140413F40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

_WORD *__fastcall WmipCountedToSz(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdi
  _WORD *PoolWithTag; // rax
  _WORD *v4; // rbx

  v1 = *a1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v1 + 2, 0x70696D57u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    memmove(PoolWithTag, a1 + 1, (unsigned int)v1);
    v4[v1 >> 1] = 0;
  }
  return v4;
}
