/*
 * XREFs of CmpIsWriteQueueActive @ 0x140244040
 * Callers:
 *     CmpFlushHive @ 0x1406BEA70 (CmpFlushHive.c)
 *     CmpGenerateFlushControlData @ 0x1406BF454 (CmpGenerateFlushControlData.c)
 *     HvGetHiveLogFileStatus @ 0x1407F7674 (HvGetHiveLogFileStatus.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140820C84 (CmpBecomeActiveFlusherAndReconciler.c)
 *     NtCompressKey @ 0x140A0A9E0 (NtCompressKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpIsWriteQueueActive(_QWORD *a1)
{
  return *a1 != 0LL;
}
