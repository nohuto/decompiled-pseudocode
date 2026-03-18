/*
 * XREFs of MiSetPfnLink @ 0x1402DF09C
 * Callers:
 *     MiPfPrepareReadList @ 0x1406F6350 (MiPfPrepareReadList.c)
 *     MiAllocateTopLevelPage @ 0x140706244 (MiAllocateTopLevelPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140744BF0 (MiPfPrepareSequentialReadList.c)
 *     MiInitializeDynamicBitmap @ 0x14081ED24 (MiInitializeDynamicBitmap.c)
 *     MiCaptureSparsePages @ 0x140A42F44 (MiCaptureSparsePages.c)
 * Callees:
 *     <none>
 */

void __fastcall MiSetPfnLink(_QWORD *a1, __int64 a2)
{
  *a1 = a2;
}
