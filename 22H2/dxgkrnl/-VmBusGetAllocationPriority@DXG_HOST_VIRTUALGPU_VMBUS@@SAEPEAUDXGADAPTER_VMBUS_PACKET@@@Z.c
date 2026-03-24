/*
 * XREFs of ?VmBusGetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0241F50
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0003894 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00406AC (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00418B0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z @ 0x1C0228610 (-GetAllocationPriority@DXGDEVICE@@QEAAJPEBU_D3DKMT_GETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v8; // rax
  UINT v9; // ecx
  D3DKMT_HANDLE v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // r15
  int v13; // r12d
  unsigned int v14; // r12d
  unsigned __int64 v15; // rcx
  struct _KTHREAD **v16; // r8
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  DXGDEVICE *v20; // rsi
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r15
  __int64 v28; // rax
  struct DXGDEVICE *v29; // [rsp+30h] [rbp-D0h] BYREF
  struct DXGDEVICE *v30; // [rsp+38h] [rbp-C8h] BYREF
  struct _D3DKMT_GETALLOCATIONPRIORITY v31; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v33[8]; // [rsp+70h] [rbp-90h] BYREF
  DXGPUSHLOCK *v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+80h] [rbp-80h]
  _BYTE v36[8]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v37[64]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v38[88]; // [rsp+D8h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v33, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v34);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 1;
  v35 = 1;
  if ( !*(_BYTE *)(v4 + 165) )
  {
    v6 = WdLogNewEntry5_WdError(v3, v2);
    *(_QWORD *)(v6 + 24) = 1396LL;
LABEL_3:
    WdLogEvent5_WdError(v6);
LABEL_4:
    v5 = 0;
    goto LABEL_5;
  }
  v8 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  if ( !v8 )
    goto LABEL_4;
  v9 = *(_DWORD *)(v8 + 32);
  if ( v9 > 0x20000 )
    goto LABEL_4;
  v10 = *(_DWORD *)(v8 + 28);
  v11 = 0;
  v12 = *(unsigned int *)(v8 + 24);
  v13 = 4;
  *(&v31.AllocationCount + 1) = 0;
  v31.AllocationCount = v9;
  v31.hDevice = v12;
  if ( !v10 )
    v11 = 4 * v9;
  v31.hResource = v10;
  if ( !v10 )
    v13 = 4 * v9;
  v14 = v13 + 4;
  v15 = v11 + v14;
  if ( (unsigned __int64)*((unsigned int *)a1 + 22) - 40 < v15 )
  {
    v6 = WdLogNewEntry5_WdError(v15, v8);
    *(_QWORD *)(v6 + 24) = 1414LL;
    goto LABEL_3;
  }
  if ( v10 )
    v31.phAllocationList = 0LL;
  else
    v31.phAllocationList = (const D3DKMT_HANDLE *)(v8 + 40);
  v16 = (struct _KTHREAD **)*((_QWORD *)a1 + 6);
  v29 = 0LL;
  v17 = v8 + v11;
  v31.pPriorities = (UINT *)(v17 + 44);
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v30, (unsigned int)v12, v16, &v29);
  v20 = v29;
  if ( v29 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32, v29);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v36, (__int64)v20, 0, v22, 0);
    v23 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v36, 0LL);
    v27 = v23;
    if ( v23 >= 0 )
    {
      *(_DWORD *)(v17 + 40) = DXGDEVICE::GetAllocationPriority(v20, &v31, 0);
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), (void *)(v17 + 40), v14);
    }
    else
    {
      v28 = WdLogNewEntry5_WdWarning(v25, v24, v26);
      *(_QWORD *)(v28 + 24) = v20;
      *(_QWORD *)(v28 + 32) = v27;
      WdLogEvent5_WdWarning(v28);
      v5 = 0;
    }
    COREACCESS::~COREACCESS((COREACCESS *)v38);
    COREACCESS::~COREACCESS((COREACCESS *)v37);
    if ( v32[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v32);
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v21 + 24) = v12;
    *(_QWORD *)(v21 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v21);
    v5 = 0;
  }
  if ( v30 && _InterlockedExchangeAdd64((volatile signed __int64 *)v30 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v30 + 2), v30);
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v33);
  return v5;
}
