/*
 * XREFs of ?VmBusFlushAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0379C70
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C0003E44 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z @ 0x1C0006DA4 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00095A8 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005AC74 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEDEVICE@@@@YAPEAUDXGKVMB_COMMAND_CREATEDEVICE@@PEAUD.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005C334 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z @ 0x1C01CACC4 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@I_N@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusFlushAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r12
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // r8
  unsigned int v7; // edx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // r8d
  int v11; // ecx
  unsigned int v12; // ebx
  __int64 v13; // r15
  int v14; // ecx
  int v15; // ecx
  __int64 v16; // rsi
  _QWORD **v17; // r15
  _QWORD *i; // rdi
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  struct DXGADAPTER *v21; // [rsp+60h] [rbp-A8h] BYREF
  DXGPUSHLOCK *v22[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+78h] [rbp-90h]
  DXGADAPTER *v24; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v25[144]; // [rsp+98h] [rbp-70h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v22, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v22[1]);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  LODWORD(v23) = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 3306LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      3306LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_4:
    v3 = 0;
    goto LABEL_25;
  }
  v4 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEDEVICE>((__int64)a1);
  v5 = v4;
  if ( !v4 )
    goto LABEL_4;
  v6 = *((_QWORD *)a1 + 10);
  LODWORD(v20) = -1073741811;
  v7 = *(_DWORD *)(v4 + 24);
  v21 = 0LL;
  DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v24, v7, *(struct _KTHREAD ***)(v6 + 96), &v21, 1);
  if ( v21 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 28) - 1) > 9 )
    {
      WdLogSingleEntry1(2LL, *(int *)(v5 + 28));
      v8 = *(int *)(v5 + 28);
      v9 = L"Invalid adapter flush reason: 0x%I64x";
      goto LABEL_22;
    }
    if ( !*((_QWORD *)v21 + 366) )
    {
      WdLogSingleEntry1(2LL, 3329LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Must be render adapter", 3329LL, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_23;
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v25, v21, 0LL);
    if ( (int)COREADAPTERACCESS::AcquireExclusive((__int64)v25, (unsigned int)(v10 + 2)) >= 0 )
    {
      v11 = *(_DWORD *)(v5 + 28);
      v12 = 3;
      v13 = *((_QWORD *)a1 + 10);
      v14 = v11 - 3;
      if ( !v14 )
      {
        v12 = 2;
LABEL_16:
        v16 = v13 + 288;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v13 + 288));
        v17 = (_QWORD **)(v13 + 320);
        for ( i = *v17; i != v17; i = (_QWORD *)*i )
          DXGDEVICE::FlushScheduler(i - 15, v12, 0xFFFFFFFD, 0);
        _InterlockedDecrement((volatile signed __int32 *)(v16 + 16));
        ExReleasePushLockSharedEx(v16, 0LL);
        KeLeaveCriticalRegion();
        goto LABEL_20;
      }
      v15 = v14 - 1;
      if ( !v15 )
        goto LABEL_16;
      if ( v15 == 1 )
      {
        v12 = 4;
        goto LABEL_16;
      }
    }
LABEL_20:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v25);
    goto LABEL_23;
  }
  WdLogSingleEntry1(2LL, *(unsigned int *)(v5 + 24));
  v8 = *(unsigned int *)(v5 + 24);
  v9 = L"Invalid adapter handle: 0x%I64x";
LABEL_22:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, 0LL, 0LL, 0LL, 0LL);
LABEL_23:
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v20, 4u);
  if ( v24 )
    DXGADAPTER::ReleaseReference(v24);
LABEL_25:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v22);
  return v3;
}
