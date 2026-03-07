char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r14
  __int64 v7; // rdx
  _BOOL8 v8; // rcx
  unsigned __int64 v9; // rdx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v11; // rbx
  struct DXGDEVICE *v12; // rax
  __int64 v13; // r9
  __int64 v14; // rsi
  unsigned int v15; // ebx
  unsigned int v16; // eax
  __int64 v17; // r8
  int v18; // ecx
  struct _EX_RUNDOWN_REF *v19; // rdx
  struct _EX_RUNDOWN_REF *v20; // rbx
  struct DXGDEVICE *v21; // r12
  _QWORD *v22; // rdx
  int v23; // ecx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v27; // [rsp+50h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v29; // [rsp+60h] [rbp-A0h] BYREF
  struct DXGDEVICE *v30; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v31[16]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v32[8]; // [rsp+80h] [rbp-80h] BYREF
  DXGPUSHLOCK *v33; // [rsp+88h] [rbp-78h]
  int v34; // [rsp+90h] [rbp-70h]
  __int128 v35; // [rsp+98h] [rbp-68h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  _BYTE v37[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v38[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v39[88]; // [rsp+F8h] [rbp-8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v33);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v34 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v6 = v4;
    if ( !v4 )
      goto LABEL_41;
    v36 = 0LL;
    v35 = 0LL;
    v7 = *(unsigned int *)(v4 + 128);
    v8 = (_DWORD)v7 == 0;
    if ( v8 == (*(_DWORD *)(v4 + 24) == 0) )
    {
      LODWORD(v36) = -1073741811;
      WdLogSingleEntry1(2LL, 5326LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Both device and paging queue are set or not set",
        5326LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_40:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v35, 0x18u);
      v3 = 1;
      goto LABEL_41;
    }
    if ( !(_DWORD)v7 )
    {
      v23 = DxgkMapGpuVirtualAddress(v4 + 24, v7, v5);
      LODWORD(v36) = v23;
      goto LABEL_37;
    }
    v9 = *(_QWORD *)(v4 + 80);
    if ( v9 >= 0x20 || (v9 & 0xC) != 0 )
    {
      WdLogSingleEntry3(2LL, v9, *((_QWORD *)a1 + 11), 5341LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid protection flags specified 0x%I64x DXGPROCESS=0x%I64x",
        *(_QWORD *)(v6 + 80),
        *((_QWORD *)a1 + 11),
        5341LL,
        0LL,
        0LL);
      LODWORD(v36) = -1073741811;
      goto LABEL_40;
    }
    v30 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v27, *(_DWORD *)(v6 + 128), Current, &v30);
    v11 = v30;
    if ( *(_DWORD *)(v6 + 128) && !v30 )
    {
      LODWORD(v36) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, *(unsigned int *)(v6 + 128));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        (int)v36,
        *(unsigned int *)(v6 + 128),
        0LL,
        0LL,
        0LL);
      goto LABEL_12;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31,
      v30);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v11, 0, v13, 0);
    LODWORD(v36) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
    if ( (int)v36 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
LABEL_12:
      v12 = v27;
      if ( !v27 )
        goto LABEL_40;
LABEL_13:
      if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v12 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
      goto LABEL_40;
    }
    v14 = *((_QWORD *)a1 + 11);
    v15 = *(_DWORD *)(v6 + 56);
    v29 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v14 + 248));
    v16 = (v15 >> 6) & 0xFFFFFF;
    if ( v16 < *(_DWORD *)(v14 + 296) )
    {
      v17 = *(_QWORD *)(v14 + 280);
      if ( ((v15 >> 25) & 0x60) == (*(_BYTE *)(v17 + 16LL * v16 + 8) & 0x60)
        && (*(_DWORD *)(v17 + 16LL * v16 + 8) & 0x2000) == 0 )
      {
        v18 = *(_DWORD *)(v17 + 16LL * v16 + 8) & 0x1F;
        if ( v18 )
        {
          if ( v18 == 5 )
          {
            v19 = *(struct _EX_RUNDOWN_REF **)(v17 + 16LL * v16);
            goto LABEL_24;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v19 = 0LL;
LABEL_24:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v19);
    _InterlockedAdd((volatile signed __int32 *)(v14 + 264), 0xFFFFFFFF);
    ExReleasePushLockSharedEx(v14 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v29, &v28);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    v20 = v29;
    if ( !v29 )
    {
      WdLogSingleEntry3(2LL, -1073741811LL, *(unsigned int *)(v6 + 56), *((_QWORD *)a1 + 11));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Invalid hAllocation=0x%I64x specified DXGPROCESS=0x%I64x",
        -1073741811LL,
        *(unsigned int *)(v6 + 56),
        *((_QWORD *)a1 + 11),
        0LL,
        0LL);
      goto LABEL_26;
    }
    v21 = v30;
    v22 = (_QWORD *)*((_QWORD *)v30 + 2);
    if ( *(_QWORD *)(*(_QWORD *)(v29[1].Count + 16) + 16LL) != v22[2] )
    {
      WdLogSingleEntry3(2LL, v30, v29, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v21,
        (__int64)v20,
        -1073741811LL,
        0LL,
        0LL);
LABEL_26:
      LODWORD(v36) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      COREACCESS::~COREACCESS((COREACCESS *)v38);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
      v12 = v27;
      if ( !v27 )
        goto LABEL_40;
      goto LABEL_13;
    }
    LOBYTE(v26) = 0;
    LODWORD(v36) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(v22[95] + 8LL)
                                                                                              + 792LL))(
                     v22[96],
                     0LL,
                     v29[3].Count,
                     v6 + 24,
                     v26,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v29);
    COREACCESS::~COREACCESS((COREACCESS *)v39);
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v31);
    if ( v27 && _InterlockedExchangeAdd64((volatile signed __int64 *)v27 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v27 + 2), v27);
    v23 = v36;
LABEL_37:
    *((_QWORD *)&v35 + 1) = *(_QWORD *)(v6 + 120);
    v24 = *(_QWORD *)(v6 + 112);
    *(_QWORD *)&v35 = v24;
    if ( v23 < 0 || !v24 )
    {
      WdLogSingleEntry2(2LL, v23, v24);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkMapGpuVirtualAddress failed: 0x%I64x 0x%I64x",
        (int)v36,
        v35,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_40;
  }
  WdLogSingleEntry1(2LL, 5317LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5317LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_41:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v32);
  return v3;
}
