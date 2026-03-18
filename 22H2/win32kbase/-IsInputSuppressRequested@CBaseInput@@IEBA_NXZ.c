/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C00B2A4C
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C00E4DD0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char *v4; // rbx
  int v5; // edi
  bool v6; // bl
  PERESOURCE *v8; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v10; // [rsp+28h] [rbp-40h] BYREF
  void *v11; // [rsp+30h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  char v14; // [rsp+48h] [rbp-20h]

  DomainLockRef = GetDomainLockRef(13);
  v4 = &v10;
  v10 = 0;
  v11 = &gDomainDummyLock;
  v13 = 0LL;
  v5 = 0;
  v14 = 0;
  v12 = 0;
  do
  {
    v8 = (PERESOURCE *)*((_QWORD *)v4 - 1);
    if ( v8 )
    {
      if ( *v4 )
        tagDomLock::LockExclusive(v8);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*v8);
    }
    ++v5;
    v4 += 16;
  }
  while ( !v5 );
  v14 = 1;
  v6 = *(_DWORD *)(SGDGetUserSessionState(v8, v1, v2, v3) + 3008) == 1;
  if ( v14 && DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return v6;
}
