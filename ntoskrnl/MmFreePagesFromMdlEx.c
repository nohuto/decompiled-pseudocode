/*
 * XREFs of MmFreePagesFromMdlEx @ 0x1403B1670
 * Callers:
 *     <none>
 * Callees:
 *     MiFreePagesFromMdl @ 0x1402C0DD0 (MiFreePagesFromMdl.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

void *__fastcall MmFreePagesFromMdlEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  if ( (BugCheckParameter3 & 0xFFFFFFFE) != 0 || (*(_DWORD *)(BugCheckParameter2 + 40) & 0xFFF) != 0 )
    KeBugCheckEx(
      0x1Au,
      0x1302uLL,
      BugCheckParameter2,
      (unsigned int)BugCheckParameter3,
      *(unsigned int *)(BugCheckParameter2 + 40));
  return MiFreePagesFromMdl(BugCheckParameter2, BugCheckParameter3);
}
