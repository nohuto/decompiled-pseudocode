/*
 * XREFs of MiSetPfnLink @ 0x1402898EC
 * Callers:
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateTopLevelPage @ 0x140728F6C (MiAllocateTopLevelPage.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiInitializeDynamicBitmap @ 0x14080A0E4 (MiInitializeDynamicBitmap.c)
 *     MiCaptureSparsePages @ 0x140A40264 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
