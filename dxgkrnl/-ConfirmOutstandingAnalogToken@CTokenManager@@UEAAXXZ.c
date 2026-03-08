/*
 * XREFs of ?ConfirmOutstandingAnalogToken@CTokenManager@@UEAAXXZ @ 0x1C0076AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTokenManager::ConfirmOutstandingAnalogToken(CTokenManager *this)
{
  __int64 v2; // rcx

  CTokenManager::AcquireTokenManagerLock(this);
  v2 = *((_QWORD *)this + 40);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 80LL))(v2);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 40) + 40LL))(*((_QWORD *)this + 40));
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 144LL))(this);
  }
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
}
