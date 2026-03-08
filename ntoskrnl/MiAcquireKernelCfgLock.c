/*
 * XREFs of MiAcquireKernelCfgLock @ 0x140A41184
 * Callers:
 *     MiMarkKernelImageCfgBits @ 0x1407F72E0 (MiMarkKernelImageCfgBits.c)
 *     MiAllocateKernelCfgBitmapPageTables @ 0x140A411E8 (MiAllocateKernelCfgBitmapPageTables.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 */

__int64 MiAcquireKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140C654B8, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C654B8, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C654B8, result, (__int64)&qword_140C654B8);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
