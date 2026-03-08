/*
 * XREFs of ?ConvertHostVidPnTargetIdToVidPnSourceId@DXG_HOST_VIRTUALGPU_VMBUS@@CAJIIPEAI@Z @ 0x1C036DA78
 * Callers:
 *     ?VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0375480 (-VmBusCreateAllocation@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 *     ?VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A8E0 (-VmBusGetDeviceState@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ @ 0x1C0006AAC (--1DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@XZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0006C80 (--0DXGDEVICELOCKONAPPROPRIATETHREADMODEL@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1C01AFE1C (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::ConvertHostVidPnTargetIdToVidPnSourceId(
        __int64 a1,
        unsigned int a2,
        unsigned int *a3)
{
  unsigned int v5; // ebx
  struct _KTHREAD **Current; // rax
  struct DXGDEVICE *v7; // rsi
  __int64 v8; // r9
  int SourceConnectedToTargetInClientVidPn; // ebx
  __int64 v10; // rsi
  const wchar_t *v11; // r9
  _QWORD *v12; // rcx
  struct DXGDEVICE *v14; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGDEVICE *v15; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v16[16]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[64]; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v19[88]; // [rsp+B8h] [rbp-48h] BYREF

  v5 = a1;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(a1);
  v14 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v15, v5, Current, &v14);
  v7 = v14;
  if ( !v14 )
  {
    SourceConnectedToTargetInClientVidPn = -1073741811;
    WdLogSingleEntry1(2LL, 6285LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid device handle", 6285LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_11;
  }
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::DXGDEVICELOCKONAPPROPRIATETHREADMODEL(
    (DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v16,
    v14);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v17, (__int64)v7, 2, v8, 0);
  SourceConnectedToTargetInClientVidPn = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v17, 0LL);
  if ( SourceConnectedToTargetInClientVidPn >= 0 )
  {
    v12 = (_QWORD *)*((_QWORD *)v7 + 235);
    if ( v12 )
    {
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(v12, a2, a3);
      if ( SourceConnectedToTargetInClientVidPn >= 0 )
        goto LABEL_5;
      v10 = 6278LL;
      WdLogSingleEntry1(2LL, 6278LL);
      v11 = L"Fail to locate VidPnSourceId";
    }
    else
    {
      SourceConnectedToTargetInClientVidPn = -1073741811;
      v10 = 6268LL;
      WdLogSingleEntry1(2LL, 6268LL);
      v11 = L"Fail to locate display adapter";
    }
  }
  else
  {
    v10 = 6260LL;
    WdLogSingleEntry1(2LL, 6260LL);
    v11 = L"Fail to lock device";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v11, v10, 0LL, 0LL, 0LL, 0LL);
LABEL_5:
  COREACCESS::~COREACCESS((COREACCESS *)v19);
  COREACCESS::~COREACCESS((COREACCESS *)v18);
  DXGDEVICELOCKONAPPROPRIATETHREADMODEL::~DXGDEVICELOCKONAPPROPRIATETHREADMODEL((DXGDEVICELOCKONAPPROPRIATETHREADMODEL *)v16);
LABEL_11:
  if ( v15 && _InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v15 + 2), v15);
  return (unsigned int)SourceConnectedToTargetInClientVidPn;
}
