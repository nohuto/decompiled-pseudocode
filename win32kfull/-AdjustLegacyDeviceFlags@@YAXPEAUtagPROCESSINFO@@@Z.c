void __fastcall AdjustLegacyDeviceFlags(struct tagPROCESSINFO *a1)
{
  __int64 v1; // rbx
  struct tagPROCESS_HID_REQUEST *v2; // rax
  int v3; // ecx
  struct tagPROCESS_HID_REQUEST *v4; // rsi
  unsigned int v5; // ecx
  struct tagPROCESS_HID_REQUEST *v6; // rax
  int v7; // ecx
  struct tagPROCESS_HID_REQUEST *v8; // r14
  unsigned int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // ecx
  __int64 v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // [rsp+20h] [rbp-40h] BYREF
  __int64 v31; // [rsp+28h] [rbp-38h]
  _BYTE v32[16]; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v33; // [rsp+40h] [rbp-20h]
  char v34; // [rsp+50h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 103);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  v3 = *(_DWORD *)(v1 + 100);
  v4 = v2;
  if ( v2 )
  {
    v12 = v3 | 0x10;
    *(_DWORD *)(v1 + 100) = v12;
    if ( -__CFSHR__(v12, 7) != -(*((_DWORD *)v2 + 5) & 1) )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v32,
          gHidCountersLock);
        v17 = SGDGetUserSessionState(v16);
        ++*(_DWORD *)(v17 + 16848);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v32,
          gHidCountersLock);
        v19 = SGDGetUserSessionState(v18);
        --*(_DWORD *)(v19 + 16848);
      }
      if ( v34 && v33 )
        tagObjLock::UnLockExclusive(v33);
      v20 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v4 + 5) << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v20;
      *(_DWORD *)(v1 + 100) = v20 ^ ((unsigned __int8)v20 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v4 + 5) << 6)) & 0x80;
    }
    v30 = v1 + 72;
    v31 = *((_QWORD *)v4 + 4);
    HMAssignmentLock(&v30, 0LL);
  }
  else
  {
    v5 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v5;
    if ( (v5 & 0x40) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v32,
        gHidCountersLock);
      v22 = SGDGetUserSessionState(v21);
      --*(_DWORD *)(v22 + 16848);
      if ( v34 )
      {
        if ( v33 )
          tagObjLock::UnLockExclusive(v33);
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFF3F;
    HMAssignmentUnlock(v1 + 72);
  }
  v6 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 2u);
  v7 = *(_DWORD *)(v1 + 100);
  v8 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v1 + 112) = 0;
    v13 = v7 | 1;
    *(_DWORD *)(v1 + 100) = v13;
    if ( -__CFSHR__(v13, 3) != -(*((_DWORD *)v6 + 5) & 1) )
    {
      if ( (*((_DWORD *)v6 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v32,
          gHidCountersLock);
        v24 = SGDGetUserSessionState(v23);
        ++*(_DWORD *)(v24 + 16852);
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v32,
          gHidCountersLock);
        v26 = SGDGetUserSessionState(v25);
        --*(_DWORD *)(v26 + 16852);
      }
      if ( v34 )
      {
        if ( v33 )
          tagObjLock::UnLockExclusive(v33);
        v34 = 0;
      }
      v27 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v8 + 5))) & 4;
      *(_DWORD *)(v1 + 100) = v27;
      *(_DWORD *)(v1 + 100) = v27 ^ ((unsigned __int8)v27 ^ (unsigned __int8)(4 * *((_DWORD *)v8 + 5))) & 8;
    }
    if ( gpqForeground )
    {
      v14 = PtiMouseFromQ(gpqForeground);
      v15 = v14;
      if ( v14 )
      {
        if ( (unsigned int)HasHidTable(v14) && *(_QWORD *)(*(_QWORD *)(v15 + 424) + 824LL) == v1 )
          UpdateRawMouseMode(gpqForeground);
      }
    }
    v30 = v1 + 64;
    v31 = *((_QWORD *)v8 + 4);
    HMAssignmentLock(&v30, 0LL);
  }
  else
  {
    v9 = v7 & 0xFFFFF6FC;
    *(_DWORD *)(v1 + 100) = v9;
    if ( (v9 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v32,
        gHidCountersLock);
      v29 = SGDGetUserSessionState(v28);
      --*(_DWORD *)(v29 + 16852);
      if ( v34 )
      {
        if ( v33 )
          tagObjLock::UnLockExclusive(v33);
        v34 = 0;
      }
    }
    *(_DWORD *)(v1 + 100) &= 0xFFFFFFF3;
    if ( gpqForeground )
    {
      v10 = PtiMouseFromQ(gpqForeground);
      v11 = v10;
      if ( v10 )
      {
        if ( (unsigned int)HasHidTable(v10) )
        {
          if ( *(_QWORD *)(*(_QWORD *)(v11 + 424) + 824LL) == v1 )
            UpdateRawMouseMode(gpqForeground);
        }
      }
    }
    HMAssignmentUnlock(v1 + 64);
  }
}
