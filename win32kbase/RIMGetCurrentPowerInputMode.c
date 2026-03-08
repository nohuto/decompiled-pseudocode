/*
 * XREFs of RIMGetCurrentPowerInputMode @ 0x1C00BC3E0
 * Callers:
 *     RIMHandlePowerDeviceArrival @ 0x1C00BC314 (RIMHandlePowerDeviceArrival.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1C003A300 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C003B380 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ApiSetGetPowerTransitionsState @ 0x1C00BC570 (ApiSetGetPowerTransitionsState.c)
 *     __security_check_cookie @ 0x1C00DA480 (__security_check_cookie.c)
 *     memset @ 0x1C00E1980 (memset.c)
 */

__int64 RIMGetCurrentPowerInputMode()
{
  char *v0; // rdi
  int v1; // esi
  unsigned int v2; // ebx
  PERESOURCE *v3; // rcx
  PERESOURCE *DomainLockRef; // [rsp+28h] [rbp-29h]
  char v6; // [rsp+30h] [rbp-21h] BYREF
  void *v7; // [rsp+38h] [rbp-19h]
  char v8; // [rsp+40h] [rbp-11h]
  __int64 v9; // [rsp+48h] [rbp-9h]
  char v10; // [rsp+50h] [rbp-1h]
  _DWORD v11[16]; // [rsp+58h] [rbp+7h] BYREF

  DomainLockRef = GetDomainLockRef(13);
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
    v3 = (PERESOURCE *)*((_QWORD *)v0 - 1);
    if ( v3 )
    {
      if ( *v0 )
        tagDomLock::LockExclusive(v3);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*v3);
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
