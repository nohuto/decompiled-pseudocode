unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateNtSharedObject(struct DXGPROCESS **a1)
{
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v3; // r12
  __int64 v4; // rax
  DXGSHAREDVMOBJECT *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // r14
  __int64 v8; // rdi
  char *Src; // r14
  __int64 v10; // r12
  unsigned int v11; // edx
  int v12; // r9d
  int EntryType; // eax
  int v14; // r15d
  unsigned int v15; // ecx
  unsigned int v16; // eax
  int v17; // edx
  __int64 v18; // rdi
  unsigned int v19; // eax
  int v20; // ecx
  DXGAUTOPUSHLOCK *v21; // rcx
  _BYTE v23[24]; // [rsp+50h] [rbp-39h] BYREF
  _BYTE v24[24]; // [rsp+68h] [rbp-21h] BYREF
  __int64 v25[4]; // [rsp+80h] [rbp-9h] BYREF
  __int128 v26; // [rsp+A0h] [rbp+17h]
  int v27; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v28; // [rsp+100h] [rbp+77h] BYREF
  __int64 v29; // [rsp+108h] [rbp+7Fh] BYREF

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v27 = 0;
  v3 = Current;
  v4 = operator new[](0x20uLL, 0x4B677844u, 256LL);
  v5 = (DXGSHAREDVMOBJECT *)v4;
  if ( !v4 )
  {
    v5 = 0LL;
    WdLogSingleEntry1(6LL, 7283LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
      7283LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_43;
  }
  *(_DWORD *)v4 = 0;
  *(_QWORD *)(v4 + 8) = 0LL;
  *(_DWORD *)(v4 + 24) = 1;
  v6 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v7 = v6;
  if ( !v6 )
    return v6;
  v29 = 0LL;
  v8 = 0LL;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v23, v3);
  Src = (char *)(v7 + 24);
  v10 = (__int64)v3 + 280;
  v11 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
  if ( v11 >= *(_DWORD *)(v10 + 16)
    || (v12 = *(_DWORD *)(*(_QWORD *)v10 + 16LL * v11 + 8),
        ((*(_DWORD *)Src >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v10 + 16LL * v11 + 8) & 0x60))
    || (v12 & 0x2000) != 0
    || (v12 & 0x1F) == 0 )
  {
    v15 = *(_DWORD *)Src;
    goto LABEL_41;
  }
  EntryType = HMGRTABLE::GetEntryType(v10, v11);
  v14 = EntryType;
  if ( EntryType != 4 )
  {
    if ( EntryType == 8 )
    {
      v19 = (*(_DWORD *)Src >> 6) & 0xFFFFFF;
      if ( v19 < *(_DWORD *)(v10 + 16)
        && ((*(_DWORD *)Src >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)v10 + 16LL * v19 + 8) & 0x60)
        && (*(_DWORD *)(*(_QWORD *)v10 + 16LL * v19 + 8) & 0x2000) == 0 )
      {
        v20 = *(_DWORD *)(*(_QWORD *)v10 + 16LL * v19 + 8) & 0x1F;
        if ( v20 )
        {
          if ( v20 == 8 )
          {
            v8 = *(_QWORD *)(*(_QWORD *)v10 + 16LL * v19);
            if ( v8 && (*(_DWORD *)(v8 + 204) & 2) != 0 )
            {
LABEL_32:
              _InterlockedIncrement((volatile signed __int32 *)(v8 + 24));
              goto LABEL_33;
            }
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
          }
        }
      }
      WdLogSingleEntry2(2LL, *(unsigned int *)Src, 7306LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid sync object handle: 0x%I64x",
        *(unsigned int *)Src,
        7306LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_28;
    }
    v15 = *(_DWORD *)Src;
    if ( EntryType == 11 )
    {
      v16 = (v15 >> 6) & 0xFFFFFF;
      if ( v16 >= *(_DWORD *)(v10 + 16) )
        goto LABEL_16;
      if ( ((v15 >> 25) & 0x60) != (*(_BYTE *)(*(_QWORD *)v10 + 16LL * v16 + 8) & 0x60) )
        goto LABEL_16;
      if ( (*(_DWORD *)(*(_QWORD *)v10 + 16LL * v16 + 8) & 0x2000) != 0 )
        goto LABEL_16;
      v17 = *(_DWORD *)(*(_QWORD *)v10 + 16LL * v16 + 8) & 0x1F;
      if ( !v17 )
        goto LABEL_16;
      if ( v17 != v14 )
      {
        WdLogSingleEntry1(2LL, 267LL);
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
LABEL_16:
        WdLogSingleEntry1(2LL, *(unsigned int *)Src);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Invalid sync object handle: 0x%I64x",
          *(unsigned int *)Src,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_28:
        v21 = (DXGAUTOPUSHLOCK *)v23;
LABEL_29:
        DXGAUTOPUSHLOCK::Release(v21);
        goto LABEL_43;
      }
      v18 = *(_QWORD *)(*(_QWORD *)v10 + 16LL * v16);
      if ( !v18 || (*(_DWORD *)(v18 + 72) & 2) == 0 )
        goto LABEL_16;
      v8 = *(_QWORD *)(v18 + 32);
      goto LABEL_32;
    }
LABEL_41:
    WdLogSingleEntry1(2LL, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid object handle: 0x%I64x",
      *(unsigned int *)Src,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_28;
  }
LABEL_33:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  if ( v14 == 4 )
  {
    v25[0] = 48LL;
    v25[3] = 512LL;
    v25[1] = 0LL;
    v25[2] = 0LL;
    v26 = 0LL;
    v28 = 0LL;
    if ( (int)DxgkShareObjectsInternal(0LL, 0, 0LL, 1u, Src, (__int64)v25, 0x10000000u, &v29, (PVOID *)&v28) < 0 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)Src);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Fail to create Nt Shareed object, handle: 0x%I64x",
        *(unsigned int *)Src,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_43;
    }
    v8 = v28;
  }
  *((_QWORD *)v5 + 2) = v29;
  *(_DWORD *)v5 = v14;
  *((_QWORD *)v5 + 1) = v8;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v24, a1[12]);
  v27 = HMGRTABLE::AllocHandle((unsigned int *)a1[12] + 70, (__int64)v5, 13, 0, 0);
  if ( !v27 )
  {
    WdLogSingleEntry1(2LL, 7369LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate NT shared object handle",
      7369LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v21 = (DXGAUTOPUSHLOCK *)v24;
    goto LABEL_29;
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
LABEL_43:
  if ( !v27 && v5 )
    DXGSHAREDVMOBJECT::ReleaseReference(v5);
  VmBusCompletePacket(a1[16], &v27, 4u);
  LOBYTE(v6) = 1;
  return v6;
}
