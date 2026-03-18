/*
 * XREFs of MiCleanCfg @ 0x140363724
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14071FAC8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     MiUnlockAndDereferenceVadShared @ 0x140275350 (MiUnlockAndDereferenceVadShared.c)
 *     MiLockVadShared @ 0x140275410 (MiLockVadShared.c)
 */

void MiCleanCfg()
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v1; // rsi
  __int64 *v2; // rbx
  char *v3; // rdi

  CurrentThread = KeGetCurrentThread();
  v1 = 2LL;
  v2 = (__int64 *)(CurrentThread->ApcState.Process[1].ActiveProcessors.StaticBitmap[28] + 440);
  do
  {
    v3 = (char *)*v2;
    if ( *v2 )
    {
      MiLockVadShared((__int64)CurrentThread, *v2);
      MiUnlockAndDereferenceVadShared(v3);
      *v2 = 0LL;
    }
    v2 += 4;
    --v1;
  }
  while ( v1 );
}
