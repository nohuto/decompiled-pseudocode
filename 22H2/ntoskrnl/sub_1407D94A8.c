/*
 * XREFs of sub_1407D94A8 @ 0x1407D94A8
 * Callers:
 *     WbFreeMemoryBlock @ 0x1407649FC (WbFreeMemoryBlock.c)
 *     sub_140764BA0 @ 0x140764BA0 (sub_140764BA0.c)
 *     sub_140764D58 @ 0x140764D58 (sub_140764D58.c)
 *     sub_140A4DE34 @ 0x140A4DE34 (sub_140A4DE34.c)
 *     sub_140A4E01C @ 0x140A4E01C (sub_140A4E01C.c)
 * Callees:
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 */

void __fastcall sub_1407D94A8(PMDL Mdl)
{
  if ( Mdl )
  {
    MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
}
