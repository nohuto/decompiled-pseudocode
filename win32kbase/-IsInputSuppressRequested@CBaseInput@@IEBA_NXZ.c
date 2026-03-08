/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1C0008588
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1C0008450 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  char *v4; // rbx
  int v5; // edi
  tagDomLock *v6; // rcx
  bool v7; // bl
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v10; // [rsp+28h] [rbp-40h] BYREF
  void *v11; // [rsp+30h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  char v14; // [rsp+48h] [rbp-20h]

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
  v4 = &v10;
  v10 = 0;
  v11 = &gDomainDummyLock;
  v13 = 0LL;
  v5 = 0;
  v14 = 0;
  v12 = 0;
  do
  {
    v6 = (tagDomLock *)*((_QWORD *)v4 - 1);
    if ( v6 )
    {
      if ( *v4 )
        tagDomLock::LockExclusive(v6);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v6);
    }
    ++v5;
    v4 += 16;
  }
  while ( !v5 );
  v14 = 1;
  v7 = *(_DWORD *)(SGDGetUserSessionState(v6, v1, v2, v3) + 3008) == 1;
  if ( v14 && DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return v7;
}
