/*
 * XREFs of ?Unlock@CTokenManager@@UEAAXXZ @ 0x1C0013C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CTokenManager::Unlock(CTokenManager *this)
{
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
