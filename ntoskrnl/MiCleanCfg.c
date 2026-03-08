/*
 * XREFs of MiCleanCfg @ 0x1402F86F4
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x1407D4924 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x14031F7B0 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 */

__int64 MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rsi
  __int64 result; // rax
  _QWORD *v3; // rbx
  void *v4; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  result = (__int64)CurrentThread->ApcState.Process;
  v3 = (_QWORD *)(*(_QWORD *)(result + 1680) + 440LL);
  do
  {
    v4 = (void *)*v3;
    if ( *v3 )
    {
      MiLockVadShared(CurrentThread, *v3);
      result = MiUnlockAndDereferenceVadShared(v4);
      *v3 = 0LL;
    }
    v3 += 4;
    --v1;
  }
  while ( v1 );
  return result;
}
