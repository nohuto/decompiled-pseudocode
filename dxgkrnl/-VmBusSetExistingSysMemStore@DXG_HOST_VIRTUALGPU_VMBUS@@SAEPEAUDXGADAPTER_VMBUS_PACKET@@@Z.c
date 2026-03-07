char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r15
  __int64 v4; // rcx
  _DWORD *v5; // rbx
  struct _KTHREAD **Current; // rax
  unsigned int v7; // edx
  struct _KTHREAD **v8; // r14
  struct DXGDEVICE *v9; // rsi
  __int64 v10; // r9
  unsigned int v11; // esi
  unsigned int v12; // eax
  struct _KTHREAD *v13; // r8
  int v14; // ecx
  struct _EX_RUNDOWN_REF *v15; // rdx
  ULONG_PTR Count; // rdx
  struct DXGDEVICE *v17; // rsi
  _QWORD *v18; // r10
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v21; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGDEVICE *v22; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGDEVICE *v23; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[16]; // [rsp+78h] [rbp-90h] BYREF
  char v25[8]; // [rsp+88h] [rbp-80h] BYREF
  DXGPUSHLOCK *v26; // [rsp+90h] [rbp-78h]
  int v27; // [rsp+98h] [rbp-70h]
  char v28[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v29[64]; // [rsp+B0h] [rbp-58h] BYREF
  char v30[88]; // [rsp+F0h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v25, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v26);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v27 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 1921LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1921LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_28;
  }
  v5 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v5 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v4);
  v7 = v5[6];
  v22 = 0LL;
  v8 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, v7, Current, &v22);
  v9 = v22;
  if ( v22 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24,
      v22);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v28, (__int64)v9, 0, v10, 0);
    LODWORD(v20) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v28, 0LL);
    if ( (int)v20 < 0 )
    {
LABEL_24:
      COREACCESS::~COREACCESS((COREACCESS *)v30);
      COREACCESS::~COREACCESS((COREACCESS *)v29);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v24);
      goto LABEL_25;
    }
    v11 = v5[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 31));
    v12 = (v11 >> 6) & 0xFFFFFF;
    if ( v12 < *((_DWORD *)v8 + 74) )
    {
      v13 = v8[35];
      if ( ((v11 >> 25) & 0x60) == (*((_BYTE *)v13 + 16 * v12 + 8) & 0x60)
        && (*((_DWORD *)v13 + 4 * v12 + 2) & 0x2000) == 0 )
      {
        v14 = *((_DWORD *)v13 + 4 * v12 + 2) & 0x1F;
        if ( v14 )
        {
          if ( v14 == 5 )
          {
            v15 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v13 + 2 * v12);
            goto LABEL_15;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v15 = 0LL;
LABEL_15:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v21, v15);
    _InterlockedDecrement((volatile signed __int32 *)v8 + 66);
    ExReleasePushLockSharedEx(v8 + 31, 0LL);
    KeLeaveCriticalRegion();
    if ( v21 && (Count = v21[3].Count) != 0 )
    {
      v17 = v22;
      v18 = (_QWORD *)*((_QWORD *)v22 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(v21[1].Count + 16) + 16LL) == v18[2] )
      {
        LODWORD(v20) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v18[95] + 8LL) + 1192LL))(
                         v18[96],
                         Count,
                         (unsigned int)v5[8]);
LABEL_23:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v21);
        goto LABEL_24;
      }
      WdLogSingleEntry3(2LL, v22, v21, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v17,
        (__int64)v21,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, (unsigned int)v5[7]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation handle: 0x%I64x",
        (unsigned int)v5[7],
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v20) = -1073741811;
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, (unsigned int)v5[6]);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid device handle: 0x%I64x",
    (unsigned int)v5[6],
    0LL,
    0LL,
    0LL,
    0LL);
  LODWORD(v20) = -1073741811;
LABEL_25:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v20, 4u);
  if ( v23 && _InterlockedExchangeAdd64((volatile signed __int64 *)v23 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v23 + 2), v23);
LABEL_28:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return v3;
}
