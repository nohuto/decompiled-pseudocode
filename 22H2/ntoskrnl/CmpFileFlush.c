/*
 * XREFs of CmpFileFlush @ 0x14071CE04
 * Callers:
 *     CmpFileFlushAndPurge @ 0x14071D008 (CmpFileFlushAndPurge.c)
 *     HvLoadHive @ 0x140721B18 (HvLoadHive.c)
 *     HvWriteExternal @ 0x140729E60 (HvWriteExternal.c)
 *     CmpSaveKeyByFileCopy @ 0x14087D8F0 (CmpSaveKeyByFileCopy.c)
 * Callees:
 *     CmpDoFileFlush @ 0x140361458 (CmpDoFileFlush.c)
 */

NTSTATUS __fastcall CmpFileFlush(__int64 a1, unsigned int a2)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 8LL * a2 + 1536);
  if ( v2 )
    return CmpDoFileFlush(v2);
  else
    return 0;
}
