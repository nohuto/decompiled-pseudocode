/*
 * XREFs of CmpFileFlush @ 0x140731EC0
 * Callers:
 *     HvLoadHive @ 0x14072F5C0 (HvLoadHive.c)
 *     CmpFileFlushAndPurge @ 0x140731D18 (CmpFileFlushAndPurge.c)
 *     CmpSaveKeyByFileCopy @ 0x140A0A220 (CmpSaveKeyByFileCopy.c)
 *     HvWriteExternal @ 0x140A1DE94 (HvWriteExternal.c)
 * Callees:
 *     CmpDoFileFlush @ 0x1402B3284 (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1544);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
