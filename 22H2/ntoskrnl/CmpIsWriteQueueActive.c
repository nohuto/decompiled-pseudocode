/*
 * XREFs of CmpIsWriteQueueActive @ 0x1402F6BD4
 * Callers:
 *     HvGetHiveLogFileStatus @ 0x140750D54 (HvGetHiveLogFileStatus.c)
 *     CmpFlushHive @ 0x140753398 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x140753D7C (CmpGenerateFlushControlData.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140828CF4 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140A0D6F0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
