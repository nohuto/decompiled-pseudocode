/*
 * XREFs of ?VmBusSetExistingSysMemPages@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038D1F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC74 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C019A030 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemPages(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  _DWORD *v4; // rbx
  char v5; // bl
  struct _KTHREAD **Current; // rax
  unsigned int v7; // edx
  struct _KTHREAD **v8; // r13
  struct DXGDEVICE *v9; // rdi
  int v10; // ebx
  __int64 v11; // r9
  unsigned __int64 v12; // rdx
  unsigned int v13; // r12d
  unsigned int v14; // eax
  struct _KTHREAD *v15; // r8
  int v16; // ecx
  struct _EX_RUNDOWN_REF *v17; // rdx
  ULONG_PTR Count; // rdx
  struct DXGDEVICE *v19; // r13
  _QWORD *v20; // r10
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  struct _EX_RUNDOWN_REF *v23; // [rsp+60h] [rbp-A8h] BYREF
  struct DXGDEVICE *v24; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGDEVICE *v25; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v26[16]; // [rsp+78h] [rbp-90h] BYREF
  char v27[8]; // [rsp+88h] [rbp-80h] BYREF
  DXGPUSHLOCK *v28; // [rsp+90h] [rbp-78h]
  int v29; // [rsp+98h] [rbp-70h]
  char v30[8]; // [rsp+A8h] [rbp-60h] BYREF
  char v31[64]; // [rsp+B0h] [rbp-58h] BYREF
  char v32[88]; // [rsp+F0h] [rbp-18h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v27, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v28);
  v2 = *((_QWORD *)a1 + 10);
  v29 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 1975LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      1975LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v5 = 0;
    goto LABEL_33;
  }
  v4 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v4 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v3);
  v7 = v4[6];
  v24 = 0LL;
  v8 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v25, v7, Current, &v24);
  v9 = v24;
  if ( v24 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26,
      v24);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v30, (__int64)v9, 0, v11, 0);
    LODWORD(v22) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v30, 0LL);
    if ( (int)v22 < 0 )
      goto LABEL_27;
    v12 = (unsigned int)v4[8];
    if ( !(_DWORD)v12 || ((unsigned __int64)*((unsigned int *)a1 + 36) - 40) >> 3 < v12 )
    {
      WdLogSingleEntry1(2LL, v12);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid NumPages in the command: 0x%I64x",
        (unsigned int)v4[8],
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v22) = -1073741811;
LABEL_27:
      COREACCESS::~COREACCESS((COREACCESS *)v32);
      COREACCESS::~COREACCESS((COREACCESS *)v31);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v26);
      v10 = v22;
      if ( (int)v22 >= 0 )
        goto LABEL_29;
      goto LABEL_28;
    }
    v13 = v4[7];
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v8 + 31));
    v14 = (v13 >> 6) & 0xFFFFFF;
    if ( v14 < *((_DWORD *)v8 + 74) )
    {
      v15 = v8[35];
      if ( ((v13 >> 25) & 0x60) == (*((_BYTE *)v15 + 16 * v14 + 8) & 0x60)
        && (*((_DWORD *)v15 + 4 * v14 + 2) & 0x2000) == 0 )
      {
        v16 = *((_DWORD *)v15 + 4 * v14 + 2) & 0x1F;
        if ( v16 )
        {
          if ( v16 == 5 )
          {
            v17 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v15 + 2 * v14);
            goto LABEL_17;
          }
          WdLogSingleEntry1(2LL, 267LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v17 = 0LL;
LABEL_17:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v23, v17);
    _InterlockedDecrement((volatile signed __int32 *)v8 + 66);
    ExReleasePushLockSharedEx(v8 + 31, 0LL);
    KeLeaveCriticalRegion();
    if ( v23 && (Count = v23[3].Count) != 0 )
    {
      v19 = v24;
      v20 = (_QWORD *)*((_QWORD *)v24 + 2);
      if ( *(_QWORD *)(*(_QWORD *)(v23[1].Count + 16) + 16LL) == v20[2] )
      {
        LODWORD(v22) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, __int64, _QWORD, _DWORD, _DWORD *))(*(_QWORD *)(v20[95] + 8LL) + 1264LL))(
                         v20[96],
                         Count,
                         8LL,
                         (unsigned int)v4[8],
                         v4[9],
                         v4 + 10);
        goto LABEL_22;
      }
      WdLogSingleEntry3(2LL, v24, v23, -1073741811LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)v19,
        (__int64)v23,
        -1073741811LL,
        0LL,
        0LL);
    }
    else
    {
      WdLogSingleEntry1(2LL, (unsigned int)v4[7]);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid allocation handle: 0x%I64x",
        (unsigned int)v4[7],
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LODWORD(v22) = -1073741811;
LABEL_22:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v23);
    goto LABEL_27;
  }
  WdLogSingleEntry1(2LL, (unsigned int)v4[6]);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid device handle: 0x%I64x",
    (unsigned int)v4[6],
    0LL,
    0LL,
    0LL,
    0LL);
  v10 = -1073741811;
  LODWORD(v22) = -1073741811;
LABEL_28:
  WdLogSingleEntry1(2LL, v10);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"VmBusSetExistingSysMemPages failed: 0x%I64x",
    (int)v22,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_29:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v22, 4u);
  if ( v25 && _InterlockedExchangeAdd64((volatile signed __int64 *)v25 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v25 + 2), v25);
  v5 = 1;
LABEL_33:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
  return v5;
}
