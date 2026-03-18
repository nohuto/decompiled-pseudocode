/*
 * XREFs of ?AdjustLegacyDeviceFlags@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00ADF5C
 * Callers:
 *     _RegisterRawInputDevices @ 0x1C00AE358 (_RegisterRawInputDevices.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C00ABF48 (UpdateRawMouseMode.c)
 *     PtiMouseFromQ @ 0x1C00ABFA8 (PtiMouseFromQ.c)
 *     HasHidTable @ 0x1C00ABFD0 (HasHidTable.c)
 *     ?InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z @ 0x1C00AE29C (-InProcessDeviceTypeRequestTable@@YAPEAUtagPROCESS_HID_REQUEST@@PEAUtagPROCESS_HID_TABLE@@GG@Z.c)
 *     ??0?$ObjectLockRecursive@UtagObjLock@@@?$DomainExclusiveRecursive@$$V@?$DomainSharedRecursive@$$V@@QEAA@AEAUtagObjLock@@@Z @ 0x1C00B0DBC (--0-$ObjectLockRecursive@UtagObjLock@@@-$DomainExclusiveRecursive@$$V@-$DomainSharedRecursive@$$.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // ecx
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  __int64 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+28h] [rbp-38h]
  _BYTE v26[16]; // [rsp+30h] [rbp-30h] BYREF
  tagObjLock *v27; // [rsp+40h] [rbp-20h]
  char v28; // [rsp+50h] [rbp-10h]

  v1 = *((_QWORD *)a1 + 104);
  v2 = InProcessDeviceTypeRequestTable((struct tagPROCESS_HID_TABLE *)v1, 1u, 6u);
  v3 = *(_DWORD *)(v1 + 100);
  v4 = v2;
  if ( v2 )
  {
    v21 = v3 | 0x10;
    *(_DWORD *)(v1 + 100) = v21;
    if ( -__CFSHR__(v21, 7) != -(*((_DWORD *)v2 + 5) & 1) )
    {
      if ( (*((_DWORD *)v2 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v26,
          gHidCountersLock);
        ++gHidCounters[0];
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v26,
          gHidCountersLock);
        --gHidCounters[0];
      }
      if ( v28 && v27 )
        tagObjLock::UnLockExclusive(v27);
      v22 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (*((_DWORD *)v4 + 5) << 6)) & 0x40;
      *(_DWORD *)(v1 + 100) = v22;
      *(_DWORD *)(v1 + 100) = v22 ^ ((unsigned __int8)v22 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v4 + 5) << 6)) & 0x80;
    }
    v24 = v1 + 72;
    v25 = *((_QWORD *)v4 + 4);
    HMAssignmentLock(&v24, 0LL);
  }
  else
  {
    v5 = v3 & 0xFFFFF9CF;
    *(_DWORD *)(v1 + 100) = v5;
    if ( (v5 & 0x40) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v26,
        gHidCountersLock);
      --gHidCounters[0];
      if ( v28 )
      {
        if ( v27 )
          tagObjLock::UnLockExclusive(v27);
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
    v15 = v7 | 1;
    *(_DWORD *)(v1 + 100) = v15;
    if ( -__CFSHR__(v15, 3) != -(*((_DWORD *)v6 + 5) & 1) )
    {
      if ( (*((_DWORD *)v6 + 5) & 1) != 0 )
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v26,
          gHidCountersLock);
        ++gHidCounters[1];
      }
      else
      {
        DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
          v26,
          gHidCountersLock);
        --gHidCounters[1];
      }
      if ( v28 )
      {
        if ( v27 )
          tagObjLock::UnLockExclusive(v27);
        v28 = 0;
      }
      v23 = *(_DWORD *)(v1 + 100) ^ (*(_DWORD *)(v1 + 100) ^ (4 * *((_DWORD *)v8 + 5))) & 4;
      *(_DWORD *)(v1 + 100) = v23;
      *(_DWORD *)(v1 + 100) = v23 ^ ((unsigned __int8)v23 ^ (unsigned __int8)(4 * *((_DWORD *)v8 + 5))) & 8;
    }
    if ( gpqForeground )
    {
      v16 = PtiMouseFromQ(gpqForeground);
      v17 = v16;
      if ( v16 )
      {
        if ( (unsigned int)HasHidTable(v16) && *(_QWORD *)(*(_QWORD *)(v17 + 424) + 832LL) == v1 )
          UpdateRawMouseMode(gpqForeground, v18, v19, v20);
      }
    }
    v24 = v1 + 64;
    v25 = *((_QWORD *)v8 + 4);
    HMAssignmentLock(&v24, 0LL);
  }
  else
  {
    v9 = v7 & 0xFFFFFEFC;
    *(_DWORD *)(v1 + 100) = v9;
    if ( (v9 & 4) != 0 )
    {
      DomainSharedRecursive<>::DomainExclusiveRecursive<>::ObjectLockRecursive<tagObjLock>::ObjectLockRecursive<tagObjLock>(
        v26,
        gHidCountersLock);
      --gHidCounters[1];
      if ( v28 )
      {
        if ( v27 )
          tagObjLock::UnLockExclusive(v27);
        v28 = 0;
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
          if ( *(_QWORD *)(*(_QWORD *)(v11 + 424) + 832LL) == v1 )
            UpdateRawMouseMode(gpqForeground, v12, v13, v14);
        }
      }
    }
    HMAssignmentUnlock(v1 + 64);
  }
}
