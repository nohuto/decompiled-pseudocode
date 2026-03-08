/*
 * XREFs of ?UnlockIfNotTokenThread@CTokenManager@@UEAAXXZ @ 0x1C00174A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::UnlockIfNotTokenThread(CTokenManager *this)
{
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 4) )
  {
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
}
