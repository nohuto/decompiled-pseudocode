/*
 * XREFs of ?VmBusSetAllocationPriority@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C038CD80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC74 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z @ 0x1C02D3B84 (-SetAllocationPriority@DXGDEVICE@@QEAAJPEAU_D3DKMT_SETALLOCATIONPRIORITY@@E@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSetAllocationPriority(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // si
  __int64 v4; // rbx
  const wchar_t *v5; // r9
  unsigned int *v7; // rax
  unsigned int *v8; // rdx
  UINT AllocationCount; // r9d
  D3DKMT_HANDLE v10; // r8d
  __int64 v11; // r14
  UINT v12; // eax
  struct _KTHREAD **v13; // r8
  __int64 v14; // r9
  int v15; // eax
  int v16; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v17; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGDEVICE *v18; // [rsp+60h] [rbp-A0h] BYREF
  struct _D3DKMT_SETALLOCATIONPRIORITY v19; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v20[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v21[8]; // [rsp+98h] [rbp-68h] BYREF
  DXGPUSHLOCK *v22; // [rsp+A0h] [rbp-60h]
  int v23; // [rsp+A8h] [rbp-58h]
  _BYTE v24[8]; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v25[64]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v26[88]; // [rsp+F8h] [rbp-8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v22);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v23 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    v4 = 1690LL;
    WdLogSingleEntry1(2LL, 1690LL);
    v5 = L"The adapter is already closed by the guest";
LABEL_3:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_5;
  }
  v7 = (unsigned int *)CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v8 = v7;
  if ( !v7 || v7[8] > 0x20000 )
    goto LABEL_4;
  v16 = -1073741811;
  AllocationCount = 0;
  v10 = v7[7];
  v11 = v7[6];
  v19.AllocationCount = v7[8];
  *(&v19.AllocationCount + 1) = 0;
  v19.hDevice = v11;
  v19.hResource = v10;
  v12 = 4;
  if ( !v10 )
  {
    AllocationCount = v19.AllocationCount;
    v12 = 4 * v19.AllocationCount;
  }
  if ( (unsigned __int64)*((unsigned int *)a1 + 36) - 40 < AllocationCount * 4 + v12 )
  {
    v4 = 1707LL;
    WdLogSingleEntry1(2LL, 1707LL);
    v5 = L"Invalid packet size";
    goto LABEL_3;
  }
  if ( v10 )
    v19.phAllocationList = 0LL;
  else
    v19.phAllocationList = v8 + 10;
  v13 = (struct _KTHREAD **)*((_QWORD *)a1 + 11);
  v17 = 0LL;
  v19.pPriorities = &v8[AllocationCount + 10];
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v18, v11, v13, &v17);
  if ( v17 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20, v17);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v24, (__int64)v17, 0, v14, 0);
    v15 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v24, 0LL);
    v16 = v15;
    if ( v15 >= 0 )
      v16 = DXGDEVICE::SetAllocationPriority(v17, &v19, 0);
    else
      WdLogSingleEntry2(3LL, v17, v15);
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v16, 4u);
    COREACCESS::~COREACCESS((COREACCESS *)v26);
    COREACCESS::~COREACCESS((COREACCESS *)v25);
    if ( v20[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v20);
  }
  else
  {
    WdLogSingleEntry2(2LL, v11, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v11,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    v3 = 0;
  }
  if ( v18 && _InterlockedExchangeAdd64((volatile signed __int64 *)v18 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v18 + 2), v18);
LABEL_5:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
  return v3;
}
