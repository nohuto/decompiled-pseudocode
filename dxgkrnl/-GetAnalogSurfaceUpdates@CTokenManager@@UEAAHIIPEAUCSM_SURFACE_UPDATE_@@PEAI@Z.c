/*
 * XREFs of ?GetAnalogSurfaceUpdates@CTokenManager@@UEAAHIIPEAUCSM_SURFACE_UPDATE_@@PEAI@Z @ 0x1C0076F70
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C00129C0 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAVCToken@@@Z @ 0x1C00777A8 (-ReleaseAnalogTokensAndGetUpdates@CTokenQueue@@QEAA_NIPEAUCSM_SURFACE_UPDATE_@@IPEA_NPEAIPEAPEAV.c)
 */

_BOOL8 __fastcall CTokenManager::GetAnalogSurfaceUpdates(
        CTokenManager *this,
        unsigned int a2,
        unsigned int a3,
        struct CSM_SURFACE_UPDATE_ *a4,
        struct CToken *a5)
{
  unsigned int *v5; // rdi
  BOOL v6; // esi
  CTokenQueue *v11; // rcx
  bool Updates; // al
  struct CToken *v13; // rdi
  void *v14; // rcx
  bool v16; // [rsp+60h] [rbp+8h] BYREF

  v5 = (unsigned int *)a5;
  v6 = 0;
  v16 = 0;
  if ( a5 )
    *(_DWORD *)a5 = 0;
  CTokenManager::AcquireTokenManagerLock(this);
  v11 = (CTokenManager *)((char *)this + 344);
  if ( *(CTokenQueue **)v11 == v11 )
    goto LABEL_7;
  a5 = 0LL;
  Updates = CTokenQueue::ReleaseAnalogTokensAndGetUpdates(v11, a2, a4, a3, &v16, v5, &a5);
  v13 = a5;
  v6 = Updates;
  if ( a5 )
  {
    (*(void (__fastcall **)(CTokenManager *))(*(_QWORD *)this + 144LL))(this);
    *((_QWORD *)this + 40) = v13;
  }
  if ( !v16 )
  {
LABEL_7:
    v14 = (void *)*((_QWORD *)this + 10);
    if ( v14 )
      ZwClearEvent(v14);
  }
  *((_QWORD *)this + 13) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 96, 0LL);
  return v6;
}
