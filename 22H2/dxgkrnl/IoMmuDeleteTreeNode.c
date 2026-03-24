/*
 * XREFs of IoMmuDeleteTreeNode @ 0x1C0056FEC
 * Callers:
 *     IoMmuDestroyPageManager @ 0x1C005700C (IoMmuDestroyPageManager.c)
 *     DpiResetIoMmuContext @ 0x1C0057B68 (DpiResetIoMmuContext.c)
 * Callees:
 *     IoMmuDeletePage @ 0x1C002870C (IoMmuDeletePage.c)
 */

void __fastcall IoMmuDeleteTreeNode(void *a1, __int64 a2)
{
  IoMmuDeletePage(a2, a1);
}
