void __fastcall rimLidClosedPolicyUpdateStateAndApply(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char *v9; // rbx
  int v10; // esi
  PERESOURCE *v11; // rcx
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-39h]
  char v13; // [rsp+28h] [rbp-31h] BYREF
  PVOID *v14; // [rsp+30h] [rbp-29h]
  char v15; // [rsp+38h] [rbp-21h]
  __int64 v16; // [rsp+40h] [rbp-19h]
  char v17; // [rsp+48h] [rbp-11h]
  _DWORD v18[16]; // [rsp+50h] [rbp-9h] BYREF

  memset(v18, 0, sizeof(v18));
  v4 = *(_QWORD *)(a1 + 16);
  if ( *(_BYTE *)(SGDGetUserSessionState(v6, v5, v7, v8) + 355) && !*(_DWORD *)(v4 + 2136) )
  {
    DomainLockRef = GetDomainLockRef(13);
    v9 = &v13;
    v13 = 0;
    v14 = &gDomainDummyLock;
    v16 = 0LL;
    v10 = 0;
    v17 = 0;
    v15 = 0;
    do
    {
      v11 = (PERESOURCE *)*((_QWORD *)v9 - 1);
      if ( v11 )
      {
        if ( *v9 )
          tagDomLock::LockExclusive(v11);
        else
          ExEnterCriticalRegionAndAcquireResourceShared(*v11);
      }
      ++v10;
      v9 += 16;
    }
    while ( !v10 );
    v17 = 1;
    ApiSetGetPowerTransitionsState(v18);
    if ( !v18[13] && (*(_DWORD *)(a2 + 8) & 0x100) == 0 )
    {
      RIMCmAddContactSuppressionReasons(a1, a2);
      *(_DWORD *)(a2 + 2444) |= 0x8000u;
    }
    if ( v17 )
    {
      if ( DomainLockRef )
        ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
    }
  }
}
