/*
 * XREFs of RIMGetCurrentPowerInputMode @ 0x1C0005D44
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C0005C78 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0059AE0 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C005CD30 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00C9CF4 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00CDBD0 (__security_check_cookie.c)
 *     memset @ 0x1C00D6A00 (memset.c)
 */

__int64 RIMGetCurrentPowerInputMode()
{
  char *v0; // rdi
  int v1; // esi
  unsigned int v2; // ebx
  tagDomLock *v3; // rcx
  PERESOURCE *DomainLockRef; // [rsp+28h] [rbp-29h]
  char v6; // [rsp+30h] [rbp-21h] BYREF
  void *v7; // [rsp+38h] [rbp-19h]
  char v8; // [rsp+40h] [rbp-11h]
  __int64 v9; // [rsp+48h] [rbp-9h]
  char v10; // [rsp+50h] [rbp-1h]
  _DWORD v11[16]; // [rsp+58h] [rbp+7h] BYREF

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
  v0 = &v6;
  v6 = 0;
  v7 = &gDomainDummyLock;
  v8 = 0;
  v1 = 0;
  v9 = 0LL;
  v10 = 0;
  v2 = 1;
  do
  {
    v3 = (tagDomLock *)*((_QWORD *)v0 - 1);
    if ( v3 )
    {
      if ( *v0 )
        tagDomLock::LockExclusive(v3);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v3);
    }
    ++v1;
    v0 += 16;
  }
  while ( !v1 );
  v10 = 1;
  memset(v11, 0, sizeof(v11));
  ApiSetGetPowerTransitionsState(v11);
  if ( !v11[7] )
  {
    if ( v11[8] )
      v2 = 2;
    else
      v2 = 0;
  }
  if ( v10 && DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return v2;
}
