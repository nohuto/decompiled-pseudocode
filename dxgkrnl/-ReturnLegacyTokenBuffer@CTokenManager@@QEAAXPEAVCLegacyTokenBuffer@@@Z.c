/*
 * XREFs of ?ReturnLegacyTokenBuffer@CTokenManager@@QEAAXPEAVCLegacyTokenBuffer@@@Z @ 0x1C0017BA8
 * Callers:
 *     ?Discard@CCompositionFrame@@UEAAXXZ @ 0x1C0017710 (-Discard@CCompositionFrame@@UEAAXXZ.c)
 *     ?ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ @ 0x1C0017A2C (-ReturnLegacyTokenBuffer@CCompositionFrame@@IEAAXXZ.c)
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ??_GCLegacyTokenBuffer@@AEAAPEAXI@Z @ 0x1C0017554 (--_GCLegacyTokenBuffer@@AEAAPEAXI@Z.c)
 *     ?Reset@CLegacyTokenBuffer@@IEAAXXZ @ 0x1C0018C10 (-Reset@CLegacyTokenBuffer@@IEAAXXZ.c)
 */

void __fastcall CTokenManager::ReturnLegacyTokenBuffer(CTokenManager *this, CLegacyTokenBuffer *P)
{
  CLegacyTokenBuffer **v4; // rax
  __int64 v5; // rdx

  CLegacyTokenBuffer::Reset(P);
  if ( *((_DWORD *)this + 46) > 3u )
  {
    if ( P )
      CLegacyTokenBuffer::`scalar deleting destructor'(P);
  }
  else
  {
    CTokenManager::AcquireTokenManagerLock(this);
    v4 = (CLegacyTokenBuffer **)((char *)this + 168);
    v5 = *((_QWORD *)this + 21);
    if ( *(CTokenManager **)(v5 + 8) != (CTokenManager *)((char *)this + 168) )
      __fastfail(3u);
    *(_QWORD *)P = v5;
    *((_QWORD *)P + 1) = v4;
    *(_QWORD *)(v5 + 8) = P;
    *v4 = P;
    ++*((_DWORD *)this + 46);
    *((_QWORD *)this + 13) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  }
}
