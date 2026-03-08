/*
 * XREFs of ?AddDisableScanoutToken@CTokenManager@@UEAAJAEAPEAVCDisableScanoutToken@@@Z @ 0x1C00762D0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z @ 0x1C007639C (-AddTokenToQueue@CTokenManager@@IEAAJPEAVCToken@@@Z.c)
 *     ?SignalStartNowEvent@CTokenManager@@IEAAJXZ @ 0x1C00772D0 (-SignalStartNowEvent@CTokenManager@@IEAAJXZ.c)
 */

__int64 __fastcall CTokenManager::AddDisableScanoutToken(CTokenManager *this, struct CDisableScanoutToken **a2)
{
  char v2; // bp
  int v5; // esi
  struct DXGGLOBAL *Global; // rax

  v2 = 0;
  if ( KeGetCurrentThread() != *((struct _KTHREAD **)this + 13) )
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v2 = 1;
  }
  v5 = CTokenManager::AddTokenToQueue(this, *a2);
  if ( v5 < 0 && *a2 )
    (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
  Global = DXGGLOBAL::GetGlobal();
  (*(void (__fastcall **)(_QWORD, _QWORD))(*((_QWORD *)Global + 38069) + 336LL))(
    *(_QWORD *)(*((_QWORD *)*a2 + 4) + 24LL),
    *((_QWORD *)*a2 + 5));
  *a2 = 0LL;
  CTokenManager::SignalStartNowEvent(this);
  if ( v2 )
  {
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
  return (unsigned int)v5;
}
