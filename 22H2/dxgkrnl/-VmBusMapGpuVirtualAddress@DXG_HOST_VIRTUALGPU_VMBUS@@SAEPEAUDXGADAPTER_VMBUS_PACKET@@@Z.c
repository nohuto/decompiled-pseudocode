/*
 * XREFs of ?VmBusMapGpuVirtualAddress@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0243CA0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0005358 (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00055A8 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004079C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS@@@@YAPEAUDXGKVMB_COMMAND_MAPGPUVIRTU.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x1C01583C0 (DxgkMapGpuVirtualAddress.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusMapGpuVirtualAddress(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // di
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // rdx
  _BOOL8 v12; // rcx
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  struct _KTHREAD **Current; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct DXGDEVICE *v18; // r13
  __int64 v19; // rax
  struct DXGDEVICE *v20; // rax
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r12d
  __int64 v24; // rbx
  __int64 v25; // rcx
  __int64 v26; // r8
  int v27; // r9d
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // ecx
  __int64 v31; // rcx
  __int64 v32; // rax
  struct _EX_RUNDOWN_REF *v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _EX_RUNDOWN_REF *v37; // rbx
  _QWORD *v38; // rcx
  __int64 v39; // rdx
  _QWORD *v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  signed __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rax
  int v48; // [rsp+20h] [rbp-E0h]
  struct DXGDEVICE *v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h]
  struct _EX_RUNDOWN_REF *v51; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v52; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v53; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v54[16]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v55[8]; // [rsp+78h] [rbp-88h] BYREF
  DXGPUSHLOCK *v56; // [rsp+80h] [rbp-80h]
  int v57; // [rsp+88h] [rbp-78h]
  __int128 v58; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+A0h] [rbp-60h]
  _BYTE v60[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v61[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v62[88]; // [rsp+F8h] [rbp-8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v55, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v56);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v57 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_MAPGPUVIRTUALADDRESS>((__int64)a1);
    v10 = v7;
    if ( !v7 )
      goto LABEL_47;
    v59 = 0LL;
    v58 = 0LL;
    v11 = *(unsigned int *)(v7 + 128);
    v12 = *(_DWORD *)(v7 + 24) == 0;
    if ( ((_DWORD)v11 == 0) == v12 )
    {
      LODWORD(v59) = -1073741811;
      v13 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v13 + 24) = 4699LL;
LABEL_45:
      WdLogEvent5_WdError(v13);
      goto LABEL_46;
    }
    if ( !(_DWORD)v11 )
    {
      LODWORD(v59) = DxgkMapGpuVirtualAddress(v7 + 24, v11, v8);
      goto LABEL_42;
    }
    v14 = *(_QWORD *)(v7 + 80);
    if ( v14 >= 0x20 || (v14 & 0xC) != 0 )
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdError(v12, v11);
      v45[3] = *(_QWORD *)(v10 + 80);
      v45[4] = *((_QWORD *)a1 + 6);
      v45[5] = 4714LL;
      WdLogEvent5_WdError(v45);
      LODWORD(v59) = -1073741811;
      goto LABEL_46;
    }
    v52 = 0LL;
    Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v12, v11, v8, v9);
    DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v49, *(unsigned int *)(v10 + 128), Current, &v52);
    v18 = v52;
    if ( *(_DWORD *)(v10 + 128) && !v52 )
    {
      LODWORD(v59) = -1073741811;
      v19 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v19 + 24) = (int)v59;
      *(_QWORD *)(v19 + 32) = *(unsigned int *)(v10 + 128);
      WdLogEvent5_WdError(v19);
      goto LABEL_12;
    }
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v54,
      v52);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v60, (__int64)v18, 0, v21, 0);
    LODWORD(v59) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v60, 0LL);
    if ( (int)v59 < 0 )
    {
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v54);
LABEL_12:
      v20 = v49;
      if ( v49 )
        goto LABEL_13;
      goto LABEL_46;
    }
    v22 = *((_QWORD *)a1 + 6);
    v23 = *(_DWORD *)(v10 + 56);
    v51 = 0LL;
    v50 = v22;
    v24 = v22 + 208;
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v24, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v27 = *(_DWORD *)(v24 + 24);
        if ( v27 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v25, &EventBlockThread, v26, v27);
      }
      ExAcquirePushLockSharedEx(v24, 0LL);
    }
    v28 = (v23 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v28 < *(_DWORD *)(v50 + 256) )
    {
      v29 = *(_QWORD *)(v50 + 240);
      v30 = *(_DWORD *)(v29 + 16 * v28 + 8);
      if ( ((v23 >> 25) & 0x60) == (*(_BYTE *)(v29 + 16 * v28 + 8) & 0x60) && (v30 & 0x2000) == 0 && (v30 & 0x1F) != 0 )
      {
        v31 = v30 & 0x1F;
        if ( (_BYTE)v31 == 5 )
        {
          v33 = *(struct _EX_RUNDOWN_REF **)(v29 + 16LL * (unsigned int)v28);
          goto LABEL_30;
        }
        v32 = WdLogNewEntry5_WdError(v31, 2LL * (unsigned int)v28);
        *(_QWORD *)(v32 + 24) = 316LL;
        WdLogEvent5_WdError(v32);
      }
    }
    v33 = 0LL;
LABEL_30:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v53, v33);
    ExReleasePushLockSharedEx(v24, 0LL);
    KeLeaveCriticalRegion();
    DXGALLOCATIONREFERENCE::MoveAssign(&v51, &v53);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v53, v34);
    v37 = v51;
    if ( !v51 )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v36, v35);
      v38[3] = -1073741811LL;
      v38[4] = *(unsigned int *)(v10 + 56);
      v38[5] = *((_QWORD *)a1 + 6);
      goto LABEL_32;
    }
    v40 = (_QWORD *)*((_QWORD *)v18 + 2);
    v41 = *(_QWORD *)(v51[1].Count + 16);
    if ( *(_QWORD *)(v41 + 16) != v40[2] )
    {
      v38 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v38[3] = v18;
      v38[4] = v37;
      v38[5] = -1073741811LL;
LABEL_32:
      WdLogEvent5_WdError(v38);
      LODWORD(v59) = -1073741811;
      DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v51, v39);
      COREACCESS::~COREACCESS((COREACCESS *)v62);
      COREACCESS::~COREACCESS((COREACCESS *)v61);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v54);
      v20 = v49;
      if ( v49 )
      {
LABEL_13:
        if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v20 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
      }
LABEL_46:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v58, 0x18u);
      v5 = 1;
      goto LABEL_47;
    }
    LOBYTE(v48) = 0;
    LODWORD(v59) = (*(__int64 (__fastcall **)(_QWORD, _QWORD, ULONG_PTR, __int64, int, _DWORD))(*(_QWORD *)(v40[80] + 8LL)
                                                                                              + 800LL))(
                     v40[81],
                     0LL,
                     v51[3].Count,
                     v10 + 24,
                     v48,
                     0);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v51, v42);
    COREACCESS::~COREACCESS((COREACCESS *)v62);
    COREACCESS::~COREACCESS((COREACCESS *)v61);
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v54);
    if ( v49 )
    {
      v44 = _InterlockedDecrement64((volatile signed __int64 *)v49 + 8);
      if ( !v44 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v49 + 2), v49);
    }
LABEL_42:
    *((_QWORD *)&v58 + 1) = *(_QWORD *)(v10 + 120);
    v46 = *(_QWORD *)(v10 + 112);
    *(_QWORD *)&v58 = v46;
    if ( (int)v59 >= 0 && v46 )
      goto LABEL_46;
    v13 = WdLogNewEntry5_WdError(v44, v43);
    *(_QWORD *)(v13 + 24) = (int)v59;
    *(_QWORD *)(v13 + 32) = v58;
    goto LABEL_45;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4690LL;
  WdLogEvent5_WdError(v6);
LABEL_47:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v55);
  return v5;
}
