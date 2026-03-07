char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  struct _KTHREAD **v7; // r8
  DXGDEVICE *v8; // r15
  struct DXGDEVICE *v9; // rax
  __int64 v10; // r9
  int v11; // eax
  unsigned int v12; // r12d
  __int64 v13; // r13
  unsigned int v14; // eax
  __int64 v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  DXGDEVICE *v18; // rbx
  __int64 v19; // rbx
  int v20; // eax
  struct DXGDEVICE *v22; // [rsp+58h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+60h] [rbp-A8h] BYREF
  DXGDEVICE *v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v26[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+88h] [rbp-80h]
  __int64 v28; // [rsp+90h] [rbp-78h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-60h]
  D3DDDI_MAKERESIDENT v32; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v33[8]; // [rsp+E0h] [rbp-28h] BYREF
  DXGPUSHLOCK *v34; // [rsp+E8h] [rbp-20h]
  int v35; // [rsp+F0h] [rbp-18h]
  __int128 v36; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v37; // [rsp+108h] [rbp+0h]
  _BYTE v38[8]; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v39[64]; // [rsp+120h] [rbp+18h] BYREF
  _BYTE v40[88]; // [rsp+160h] [rbp+58h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v34);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v35 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v4 )
      goto LABEL_46;
    v36 = 0LL;
    v37 = 0LL;
    v5 = *(unsigned int *)(v4 + 36);
    if ( !(_DWORD)v5 || ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 < 4 )
    {
      WdLogSingleEntry1(2LL, *((unsigned int *)a1 + 36));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size 0x%I64x",
        *((unsigned int *)a1 + 36),
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v37) = -1073741811;
      goto LABEL_43;
    }
    v6 = *(_DWORD *)(v4 + 24);
    if ( !v6 )
    {
      v32.Flags.Value = *(_DWORD *)(v4 + 32);
      v32.NumAllocations = v5;
      v32.AllocationList = (const D3DKMT_HANDLE *)(v4 + 40);
      v32.hPagingQueue = *(_DWORD *)(v4 + 28);
      v32.PriorityList = 0LL;
      memset(&v32.Flags + 1, 0, 20);
      LODWORD(v37) = DxgkMakeResidentInternal(&v32, 0, 0LL);
      v36 = *(_OWORD *)&v32.PagingFenceValue;
      goto LABEL_43;
    }
    if ( (_DWORD)v5 != 1 )
    {
      WdLogSingleEntry1(2LL, 4874LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"NumAllocation mist be 1 when hDevice is not 0",
        4874LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v37) = -1073741811;
      goto LABEL_44;
    }
    v7 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
    v24 = 0LL;
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v22, v6, v7, &v24);
    v8 = v24;
    if ( !v24 )
    {
      WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 24));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        *(unsigned int *)(v4 + 24),
        0LL,
        0LL,
        0LL,
        0LL);
      v9 = v22;
      LODWORD(v37) = -1073741811;
      if ( !v22 )
        goto LABEL_44;
      goto LABEL_11;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26, v24);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v38, (__int64)v8, 0, v10, 0);
    v11 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v38, 0LL);
    LODWORD(v37) = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry1(2LL, v11);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device was removed: 0x%I64x",
        (int)v37,
        0LL,
        0LL,
        0LL,
        0LL);
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      if ( v26[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
      v9 = v22;
      if ( v22 )
      {
LABEL_11:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v9 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v22 + 2), v22);
      }
LABEL_43:
      if ( (int)v37 >= 0 )
      {
LABEL_45:
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v36, 0x18u);
        v3 = 1;
        goto LABEL_46;
      }
LABEL_44:
      WdLogSingleEntry1(3LL, (int)v37);
      goto LABEL_45;
    }
    if ( !DXGDEVICE::UmdManagesResidency(v8) )
    {
LABEL_30:
      COREACCESS::~COREACCESS((COREACCESS *)v40);
      COREACCESS::~COREACCESS((COREACCESS *)v39);
      if ( v26[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v26);
      v9 = v22;
      if ( v22 )
        goto LABEL_11;
      goto LABEL_43;
    }
    v12 = *(_DWORD *)(v4 + 40);
    v28 = 0LL;
    v30 = 0LL;
    v27 = *((_QWORD *)v8 + 2);
    v31 = *((_QWORD *)a1 + 11);
    v13 = v31 + 248;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v31 + 248));
    v14 = (v12 >> 6) & 0xFFFFFF;
    if ( v14 < *(_DWORD *)(v31 + 296) )
    {
      v15 = *(_QWORD *)(v31 + 280);
      if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0x60)
        && (*(_DWORD *)(v15 + 16LL * v14 + 8) & 0x2000) == 0 )
      {
        v16 = *(_DWORD *)(v15 + 16LL * v14 + 8) & 0x1F;
        if ( v16 )
        {
          if ( v16 == 5 )
          {
            v17 = *(struct _EX_RUNDOWN_REF **)(v15 + 16LL * v14);
LABEL_26:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v17);
            _InterlockedAdd((volatile signed __int32 *)(v13 + 16), 0xFFFFFFFF);
            ExReleasePushLockSharedEx(v13, 0LL);
            KeLeaveCriticalRegion();
            if ( v23 )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) == *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) )
              {
                v19 = v27;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v27 + 760) + 8LL)
                                                                             + 976LL))(
                  *((_QWORD *)v24 + 99),
                  0LL,
                  &v28,
                  &v30);
                v29 = 0LL;
                v25 = 0LL;
                v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v19 + 760) + 8LL) + 768LL))(
                        *(_QWORD *)(v19 + 768),
                        v28,
                        v23 + 3,
                        1LL,
                        3,
                        &v29,
                        &v25);
                LODWORD(v37) = v20;
                if ( v20 >= 0 )
                {
                  if ( v20 == 259 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v19 + 760)
                                                                                              + 8LL)
                                                                                  + 984LL))(
                      *(_QWORD *)(v19 + 768),
                      &v30,
                      &v29,
                      1LL);
                    LODWORD(v37) = 0;
                  }
                }
                else
                {
                  WdLogSingleEntry1(2LL, v20);
                  DxgkLogInternalTriageEvent(
                    0LL,
                    0x40000,
                    -1,
                    (__int64)L"Failed to make staging allocation resident. Returning 0x%I64x",
                    (int)v37,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                goto LABEL_29;
              }
              v18 = v24;
              WdLogSingleEntry3(2LL, v24, v23, -1073741811LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                (__int64)v18,
                (__int64)v23,
                -1073741811LL,
                0LL,
                0LL);
            }
            else
            {
              WdLogSingleEntry1(2LL, *(unsigned int *)(v4 + 40));
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid allocation handle: 0x%I64x",
                *(unsigned int *)(v4 + 40),
                0LL,
                0LL,
                0LL,
                0LL);
            }
            LODWORD(v37) = -1073741811;
LABEL_29:
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
            goto LABEL_30;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
    goto LABEL_26;
  }
  WdLogSingleEntry1(2LL, 4848LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4848LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_46:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v3;
}
