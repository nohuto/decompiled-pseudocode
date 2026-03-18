/*
 * XREFs of ?VmBusMakeResident@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0380CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?UmdManagesResidency@DXGDEVICE@@QEBAEXZ @ 0x1C00078E4 (-UmdManagesResidency@DXGDEVICE@@QEBAEXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C0024B90 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0024ED8 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Feature_4123222330__private_IsEnabledDeviceUsage @ 0x1C0026C80 (Feature_4123222330__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B864 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC@@@@YAPEAUDXGKVMB_COMMAND_RELEASEKEY.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z @ 0x1C01C4F60 (-DxgkMakeResidentInternal@@YAJPEAUD3DDDI_MAKERESIDENT@@HPEAD@Z.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMakeResident(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rbx
  unsigned __int64 v5; // r8
  unsigned int v6; // edx
  struct _KTHREAD **v7; // r8
  DXGDEVICE *v8; // r14
  __int64 v9; // r9
  int v10; // eax
  __int64 v11; // r13
  unsigned int v12; // r15d
  unsigned int v13; // eax
  __int64 v14; // r8
  int v15; // ecx
  struct _EX_RUNDOWN_REF *v16; // rdx
  int IsEnabledDeviceUsage; // eax
  DXGDEVICE *v18; // rbx
  __int64 v19; // r14
  int v20; // eax
  struct _EX_RUNDOWN_REF *v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A8h] BYREF
  DXGDEVICE *v24; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+70h] [rbp-98h] BYREF
  __int64 v26; // [rsp+78h] [rbp-90h] BYREF
  __int64 v27; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v28[16]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v29; // [rsp+98h] [rbp-70h]
  __int64 v30; // [rsp+A0h] [rbp-68h] BYREF
  D3DDDI_MAKERESIDENT v31; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v32[8]; // [rsp+D8h] [rbp-30h] BYREF
  DXGPUSHLOCK *v33; // [rsp+E0h] [rbp-28h]
  int v34; // [rsp+E8h] [rbp-20h]
  __int128 v35; // [rsp+F0h] [rbp-18h] BYREF
  __int64 v36; // [rsp+100h] [rbp-8h]
  _BYTE v37[160]; // [rsp+108h] [rbp+0h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v32, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v33);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v34 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_RELEASEKEYEDMUTEXSYNC>((__int64)a1);
    if ( !v4 )
      goto LABEL_43;
    v35 = 0LL;
    v36 = 0LL;
    v5 = *(unsigned int *)(v4 + 36);
    if ( (_DWORD)v5 && ((unsigned __int64)*((unsigned int *)a1 + 36) - 44) / v5 >= 4 )
    {
      v6 = *(_DWORD *)(v4 + 24);
      if ( v6 )
      {
        if ( (_DWORD)v5 != 1 )
        {
          WdLogSingleEntry1(2LL, 4929LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"NumAllocation mist be 1 when hDevice is not 0",
            4929LL,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v36) = -1073741811;
          goto LABEL_41;
        }
        v7 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
        v24 = 0LL;
        DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23, v6, v7, &v24);
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
          LODWORD(v36) = -1073741811;
LABEL_11:
          DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v23);
          goto LABEL_40;
        }
        DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28, v24);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v37, (__int64)v8, 0, v9, 0);
        v10 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v37, 0LL);
        LODWORD(v36) = v10;
        if ( v10 < 0 )
        {
          WdLogSingleEntry1(2LL, v10);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device was removed: 0x%I64x",
            (int)v36,
            0LL,
            0LL,
            0LL,
            0LL);
LABEL_14:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v37);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v28);
          goto LABEL_11;
        }
        if ( !DXGDEVICE::UmdManagesResidency(v8) )
          goto LABEL_14;
        v11 = *((_QWORD *)a1 + 11);
        v12 = *(_DWORD *)(v4 + 40);
        v25 = 0LL;
        v27 = 0LL;
        v29 = *((_QWORD *)v8 + 2);
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v11 + 248));
        v13 = (v12 >> 6) & 0xFFFFFF;
        if ( v13 < *(_DWORD *)(v11 + 296) )
        {
          v14 = *(_QWORD *)(v11 + 280);
          if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(v14 + 16LL * v13 + 8) & 0x60)
            && (*(_DWORD *)(v14 + 16LL * v13 + 8) & 0x2000) == 0 )
          {
            v15 = *(_DWORD *)(v14 + 16LL * v13 + 8) & 0x1F;
            if ( v15 )
            {
              if ( v15 == 5 )
              {
                v16 = *(struct _EX_RUNDOWN_REF **)(v14 + 16LL * v13);
LABEL_23:
                DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v22, v16);
                _InterlockedDecrement((volatile signed __int32 *)(v11 + 264));
                ExReleasePushLockSharedEx(v11 + 248, 0LL);
                KeLeaveCriticalRegion();
                if ( !v22 )
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
LABEL_25:
                  LODWORD(v36) = -1073741811;
LABEL_26:
                  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v22);
                  goto LABEL_14;
                }
                IsEnabledDeviceUsage = Feature_4123222330__private_IsEnabledDeviceUsage();
                v18 = v24;
                if ( IsEnabledDeviceUsage )
                {
                  if ( (DXGDEVICE *)v22[1].Count != v24 )
                  {
                    WdLogSingleEntry3(2LL, v24, v22, -1073741811LL);
LABEL_31:
                    DxgkLogInternalTriageEvent(
                      0LL,
                      0x40000,
                      -1,
                      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
                      (__int64)v18,
                      (__int64)v22,
                      -1073741811LL,
                      0LL,
                      0LL);
                    goto LABEL_25;
                  }
                }
                else if ( *(_QWORD *)(*(_QWORD *)(v22[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)v8 + 2) + 16LL) )
                {
                  v18 = v24;
                  WdLogSingleEntry3(2LL, v24, v22, -1073741811LL);
                  goto LABEL_31;
                }
                v19 = v29;
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v29 + 760) + 8LL)
                                                                             + 976LL))(
                  *((_QWORD *)v24 + 99),
                  0LL,
                  &v25,
                  &v27);
                v26 = 0LL;
                v30 = 0LL;
                v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct _EX_RUNDOWN_REF *, __int64, int, __int64 *, __int64 *))(*(_QWORD *)(*(_QWORD *)(v19 + 760) + 8LL) + 768LL))(
                        *(_QWORD *)(v19 + 768),
                        v25,
                        v22 + 3,
                        1LL,
                        3,
                        &v26,
                        &v30);
                LODWORD(v36) = v20;
                if ( v20 >= 0 )
                {
                  if ( v20 == 259 )
                  {
                    (*(void (__fastcall **)(_QWORD, __int64 *, __int64 *, __int64))(*(_QWORD *)(*(_QWORD *)(v19 + 760)
                                                                                              + 8LL)
                                                                                  + 984LL))(
                      *(_QWORD *)(v19 + 768),
                      &v27,
                      &v26,
                      1LL);
                    LODWORD(v36) = 0;
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
                    (int)v36,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                goto LABEL_26;
              }
              WdLogSingleEntry1(2LL, 316LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
        v16 = 0LL;
        goto LABEL_23;
      }
      v31.Flags.Value = *(_DWORD *)(v4 + 32);
      v31.NumAllocations = v5;
      v31.AllocationList = (const D3DKMT_HANDLE *)(v4 + 40);
      v31.hPagingQueue = *(_DWORD *)(v4 + 28);
      v31.PriorityList = 0LL;
      memset(&v31.Flags + 1, 0, 20);
      LODWORD(v36) = DxgkMakeResidentInternal(&v31, 0, 0LL);
      v35 = *(_OWORD *)&v31.PagingFenceValue;
    }
    else
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
      LODWORD(v36) = -1073741811;
    }
LABEL_40:
    if ( (int)v36 >= 0 )
    {
LABEL_42:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v35, 0x18u);
      v3 = 1;
      goto LABEL_43;
    }
LABEL_41:
    WdLogSingleEntry1(3LL, (int)v36);
    goto LABEL_42;
  }
  WdLogSingleEntry1(2LL, 4903LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    4903LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_43:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v32);
  return v3;
}
