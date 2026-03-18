/*
 * XREFs of MiLockFileExtentsExclusive @ 0x140A341B0
 * Callers:
 *     MiInsertCopyExtents @ 0x14063DE8C (MiInsertCopyExtents.c)
 *     MiMergeCopyExtents @ 0x14063E43C (MiMergeCopyExtents.c)
 *     MiDeleteFileExtentList @ 0x140A33E80 (MiDeleteFileExtentList.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 */

__int64 MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140C659A8, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C659A8, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C659A8, result, (__int64)&qword_140C659A8);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
