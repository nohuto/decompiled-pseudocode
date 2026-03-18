/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381350
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000774C (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0007BB0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0007C60 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0007E34 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ??1DXGPROCESSDDILOCK@@QEAA@XZ @ 0x1C0023F50 (--1DXGPROCESSDDILOCK@@QEAA@XZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGDEVICEBYHANDLE@@QEAA@XZ @ 0x1C0024ED8 (--1DXGDEVICEBYHANDLE@@QEAA@XZ.c)
 *     Feature_4123222330__private_IsEnabledDeviceUsage @ 0x1C0026C80 (Feature_4123222330__private_IsEnabledDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005B9B4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005CF54 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01A1DDC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C01C5980 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C01CB650 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01D4460 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // rbx
  __int64 v2; // rax
  char v3; // di
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rsi
  __int64 v7; // rdx
  _BOOL8 v8; // rcx
  unsigned __int64 v9; // rdx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v11; // r14
  __int64 v12; // r9
  __int64 v13; // r14
  unsigned int v14; // ebx
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // ecx
  struct _EX_RUNDOWN_REF *v18; // rdx
  struct _EX_RUNDOWN_REF *v19; // rbx
  int v20; // ecx
  __int64 v21; // r8
  int v23; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v27[8]; // [rsp+68h] [rbp-98h] BYREF
  struct _EX_RUNDOWN_REF *v28; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v29[16]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[8]; // [rsp+88h] [rbp-78h] BYREF
  DXGPUSHLOCK *v31; // [rsp+90h] [rbp-70h]
  int v32; // [rsp+98h] [rbp-68h]
  __int128 v33; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v34; // [rsp+B0h] [rbp-50h]
  _BYTE v35[160]; // [rsp+C0h] [rbp-40h] BYREF

  v1 = a1;
  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v31);
  v2 = *((_QWORD *)v1 + 10);
  v3 = 0;
  v32 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)v1);
    v6 = v4;
    if ( !v4 )
      goto LABEL_37;
    v34 = 0LL;
    v33 = 0LL;
    v7 = *(unsigned int *)(v4 + 128);
    v8 = (_DWORD)v7 == 0;
    if ( v8 == (*(_DWORD *)(v4 + 24) == 0) )
    {
      LODWORD(v34) = -1073741811;
      WdLogSingleEntry1(2LL, 5396LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Both device and paging queue are set or not set",
        5396LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_35:
      v1 = a1;
      goto LABEL_36;
    }
    if ( !(_DWORD)v7 )
    {
      v20 = DxgkMapGpuVirtualAddress(v4 + 24, v7, v5);
      LODWORD(v34) = v20;
      goto LABEL_32;
    }
    v9 = *(_QWORD *)(v4 + 80);
    if ( v9 >= 0x20 || (v9 & 0xC) != 0 )
    {
      WdLogSingleEntry3(2LL, v9, *((_QWORD *)v1 + 11), 5411LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid protection flags specified 0x%I64x DXGPROCESS=0x%I64x",
        *(_QWORD *)(v6 + 80),
        *((_QWORD *)v1 + 11),
        5411LL,
        0LL,
        0LL);
      LODWORD(v34) = -1073741811;
      goto LABEL_36;
    }
    v25 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27, *(_DWORD *)(v6 + 128), Current, &v25);
    v11 = v25;
    if ( *(_DWORD *)(v6 + 128) && !v25 )
    {
      LODWORD(v34) = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, *(unsigned int *)(v6 + 128));
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid device handle: 0x%I64x",
        (int)v34,
        *(unsigned int *)(v6 + 128),
        0LL,
        0LL,
        0LL);
LABEL_12:
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27);
LABEL_36:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)v1 + 16), &v33, 0x18u);
      v3 = 1;
      goto LABEL_37;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29,
      v25);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v35, (__int64)v11, 0, v12, 0);
    LODWORD(v34) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v35, 0LL);
    if ( (int)v34 < 0 )
    {
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
      goto LABEL_12;
    }
    v13 = *((_QWORD *)v1 + 11);
    v14 = *(_DWORD *)(v6 + 56);
    v26 = 0LL;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 248));
    v15 = (v14 >> 6) & 0xFFFFFF;
    if ( v15 < *(_DWORD *)(v13 + 296) )
    {
      v16 = *(_QWORD *)(v13 + 280);
      if ( ((v14 >> 25) & 0x60) == (*(_BYTE *)(v16 + 16LL * v15 + 8) & 0x60)
        && (*(_DWORD *)(v16 + 16LL * v15 + 8) & 0x2000) == 0 )
      {
        v17 = *(_DWORD *)(v16 + 16LL * v15 + 8) & 0x1F;
        if ( v17 )
        {
          if ( v17 == 5 )
          {
            v18 = *(struct _EX_RUNDOWN_REF **)(v16 + 16LL * v15);
            goto LABEL_22;
          }
          WdLogSingleEntry1(2LL, 316LL);
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 316LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v18 = 0LL;
LABEL_22:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v28, v18);
    _InterlockedDecrement((volatile signed __int32 *)(v13 + 264));
    ExReleasePushLockSharedEx(v13 + 248, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v26, &v28);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v28);
    v19 = v26;
    if ( !v26 )
    {
      v1 = a1;
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
      LODWORD(v34) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
      COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
      DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27);
      goto LABEL_36;
    }
    if ( (unsigned int)Feature_4123222330__private_IsEnabledDeviceUsage() )
    {
      if ( (struct DXGDEVICE *)v19[1].Count != v25 )
      {
LABEL_27:
        WdLogSingleEntry3(2LL, v25, v19, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
          (__int64)v25,
          (__int64)v19,
          -1073741811LL,
          0LL,
          0LL);
        LODWORD(v34) = -1073741811;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
        DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
        DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27);
        goto LABEL_35;
      }
    }
    else if ( *(_QWORD *)(*(_QWORD *)(v19[1].Count + 16) + 16LL) != *(_QWORD *)(*((_QWORD *)v25 + 2) + 16LL) )
    {
      goto LABEL_27;
    }
    LOBYTE(v23) = 0;
    LODWORD(v34) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v25 + 2) + 760LL) + 8LL)
                                                                                              + 792LL))(
                     *(_QWORD *)(*((_QWORD *)v25 + 2) + 768LL),
                     0LL,
                     v19[3].Count,
                     v6 + 24,
                     v23,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v35);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v29);
    DXGDEVICEBYHANDLE::~DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v27);
    v20 = v34;
LABEL_32:
    *((_QWORD *)&v33 + 1) = *(_QWORD *)(v6 + 120);
    v21 = *(_QWORD *)(v6 + 112);
    *(_QWORD *)&v33 = v21;
    if ( v20 < 0 || !v21 )
    {
      WdLogSingleEntry2(2LL, v20, v21);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DxgkMapGpuVirtualAddress failed: 0x%I64x 0x%I64x",
        (int)v34,
        v33,
        0LL,
        0LL,
        0LL);
    }
    goto LABEL_35;
  }
  WdLogSingleEntry1(2LL, 5387LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5387LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_37:
  DXGPROCESSDDILOCK::~DXGPROCESSDDILOCK((DXGPROCESSDDILOCK *)v30);
  return v3;
}
