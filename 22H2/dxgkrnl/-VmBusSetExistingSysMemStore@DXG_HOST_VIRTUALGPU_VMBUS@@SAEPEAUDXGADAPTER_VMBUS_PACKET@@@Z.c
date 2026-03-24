/*
 * XREFs of ?VmBusSetExistingSysMemStore@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024F090
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
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00406AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetExistingSysMemStore(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // r13
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int *v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD **Current; // rax
  __int64 v13; // rdx
  struct _KTHREAD **v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  struct DXGDEVICE *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // r9
  unsigned int v20; // r12d
  __int64 v21; // rcx
  __int64 v22; // r8
  int v23; // r9d
  __int64 v24; // rax
  struct _KTHREAD *v25; // r8
  int v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rax
  struct _EX_RUNDOWN_REF *v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  ULONG_PTR v32; // r9
  ULONG_PTR Count; // rcx
  _QWORD *v34; // r8
  __int64 v35; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // rdx
  __int64 v39; // [rsp+38h] [rbp-D0h] BYREF
  struct _EX_RUNDOWN_REF *v40; // [rsp+40h] [rbp-C8h] BYREF
  struct DXGDEVICE *v41; // [rsp+48h] [rbp-C0h] BYREF
  struct DXGDEVICE *v42; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v43[16]; // [rsp+58h] [rbp-B0h] BYREF
  DXGPUSHLOCK *v44[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v45; // [rsp+78h] [rbp-90h]
  char v46[8]; // [rsp+88h] [rbp-80h] BYREF
  char v47[64]; // [rsp+90h] [rbp-78h] BYREF
  char v48[88]; // [rsp+D0h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v44, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v44[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v45 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1576LL;
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_34;
  }
  v9 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v9 )
    goto LABEL_4;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v8, v7, v10, v11);
  v13 = v9[6];
  v41 = 0LL;
  v14 = Current;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v13, Current, &v41);
  v17 = v41;
  if ( v41 )
  {
    DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
      (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43,
      v41);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v46, (__int64)v17, 0, v19, 0);
    LODWORD(v39) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v46, 0LL);
    if ( (int)v39 < 0 )
    {
LABEL_30:
      COREACCESS::~COREACCESS((COREACCESS *)v48);
      COREACCESS::~COREACCESS((COREACCESS *)v47);
      DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v43);
      goto LABEL_31;
    }
    v20 = v9[7];
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v14 + 26, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v23 = *((_DWORD *)v14 + 58);
        if ( v23 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
          McTemplateK0q_EtwWriteTransfer(v21, &EventBlockThread, v22, v23);
      }
      ExAcquirePushLockSharedEx(v14 + 26, 0LL);
    }
    v24 = (v20 >> 6) & 0xFFFFFF;
    if ( (unsigned int)v24 < *((_DWORD *)v14 + 64) )
    {
      v25 = v14[30];
      v26 = *((_DWORD *)v25 + 4 * v24 + 2);
      if ( ((v20 >> 25) & 0x60) == (*((_BYTE *)v25 + 16 * v24 + 8) & 0x60) && (v26 & 0x2000) == 0 && (v26 & 0x1F) != 0 )
      {
        v27 = v26 & 0x1F;
        if ( (_BYTE)v27 == 5 )
        {
          v29 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)v25 + 2 * (unsigned int)v24);
          goto LABEL_21;
        }
        v28 = WdLogNewEntry5_WdError(v27, 2LL * (unsigned int)v24);
        *(_QWORD *)(v28 + 24) = 316LL;
        WdLogEvent5_WdError(v28);
      }
    }
    v29 = 0LL;
LABEL_21:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v40, v29);
    ExReleasePushLockSharedEx(v14 + 26, 0LL);
    KeLeaveCriticalRegion();
    if ( v40 && (v32 = v40[3].Count) != 0 )
    {
      Count = v40[1].Count;
      v34 = (_QWORD *)*((_QWORD *)v17 + 2);
      v35 = *(_QWORD *)(Count + 16);
      if ( *(_QWORD *)(v35 + 16) == v34[2] )
      {
        LODWORD(v39) = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR, _QWORD))(*(_QWORD *)(v34[80] + 8LL) + 1200LL))(
                         v34[81],
                         v32,
                         v9[8]);
LABEL_29:
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v40, v37);
        goto LABEL_30;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdError(Count, v35);
      v36[3] = v17;
      v36[4] = v40;
      v36[5] = -1073741811LL;
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v36[3] = v9[7];
    }
    WdLogEvent5_WdError(v36);
    LODWORD(v39) = -1073741811;
    goto LABEL_29;
  }
  v18 = WdLogNewEntry5_WdError(v16, v15);
  *(_QWORD *)(v18 + 24) = v9[6];
  WdLogEvent5_WdError(v18);
  LODWORD(v39) = -1073741811;
LABEL_31:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v39, 4u);
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
LABEL_34:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v44);
  return v5;
}
