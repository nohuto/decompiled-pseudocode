/*
 * XREFs of ?DxgkQueryClockCalibrationInternal@@YAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@PEAVDXGADAPTER@@@Z @ 0x1C02CA274
 * Callers:
 *     DxgkQueryClockCalibration @ 0x1C02CF4C0 (DxgkQueryClockCalibration.c)
 *     ?VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037F7B0 (-VmBusQueryClockCalibration@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0009930 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z @ 0x1C0042164 (-DdiCalibrateGpuClock@ADAPTER_RENDER@@QEAAJIIPEAU_DXGK_GPUCLOCKDATA@@@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z @ 0x1C0190FF0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12E@Z.c)
 *     ?VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYCLOCKCALIBRATION@@@Z @ 0x1C03884DC (-VmBusSendQueryClockCalibration@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUE.c)
 */

__int64 __fastcall DxgkQueryClockCalibrationInternal(
        struct DXGPROCESS *a1,
        struct _D3DKMT_QUERYCLOCKCALIBRATION *a2,
        struct DXGADAPTER *this)
{
  int PairingAdapters; // ebx
  struct DXGADAPTER *v7; // rdi
  __int64 PhysicalAdapterIndex; // rax
  __int64 NodeOrdinal; // rdx
  int ClockCalibration; // eax
  ADAPTER_RENDER *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  struct DXGADAPTER *v16; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h]
  char v19; // [rsp+68h] [rbp-98h]
  unsigned __int64 v20; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v21[144]; // [rsp+80h] [rbp-80h] BYREF

  v17 = -1;
  v18 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v19 = 1;
    v17 = 2125;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, (__int64)this, 2125);
  }
  else
  {
    v19 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v17, 2125);
  if ( this )
  {
    v16 = 0LL;
    PairingAdapters = DxgkpGetPairingAdapters(this, 0, &v16, &v20, 0LL, 0LL, 0);
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry1(3LL, this);
      goto LABEL_28;
    }
    v7 = v16;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v21, v16, 0LL);
    PairingAdapters = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v21, 0LL);
    DXGADAPTER::ReleaseReference(v7);
    if ( PairingAdapters < 0 )
    {
      WdLogSingleEntry1(3LL, v7);
LABEL_27:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v21);
      goto LABEL_28;
    }
    PhysicalAdapterIndex = a2->PhysicalAdapterIndex;
    if ( (unsigned int)PhysicalAdapterIndex >= *((_DWORD *)v7 + 72) )
    {
      NodeOrdinal = (unsigned int)PhysicalAdapterIndex;
LABEL_14:
      WdLogSingleEntry1(3LL, NodeOrdinal);
      PairingAdapters = -1073741811;
      goto LABEL_27;
    }
    NodeOrdinal = a2->NodeOrdinal;
    if ( (unsigned int)NodeOrdinal >= *(unsigned __int16 *)(344 * PhysicalAdapterIndex + *((_QWORD *)v7 + 351)) )
      goto LABEL_14;
    *(_OWORD *)&a2->ClockData.GpuFrequency = 0LL;
    a2->ClockData.CpuClockCounter = 0LL;
    a2->ClockData.Flags.Value = 0;
    if ( *((_BYTE *)v7 + 209) )
    {
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 442) < 0x15u )
      {
        PairingAdapters = -1073741822;
        goto LABEL_23;
      }
      ClockCalibration = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryClockCalibration(
                           (struct DXGADAPTER *)((char *)v7 + 4472),
                           a1,
                           a2);
    }
    else
    {
      v11 = (ADAPTER_RENDER *)*((_QWORD *)v7 + 366);
      v12 = *((_QWORD *)v11 + 2);
      if ( !*(_QWORD *)(v12 + 904) || *(int *)(v12 + 2552) < 0x2000 )
      {
        WdLogSingleEntry1(2LL, 10022LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Clock calibration cannot be queried if the driver does nto support it.",
          10022LL,
          0LL,
          0LL,
          0LL,
          0LL);
        PairingAdapters = -1073741823;
        goto LABEL_27;
      }
      ClockCalibration = ADAPTER_RENDER::DdiCalibrateGpuClock(
                           v11,
                           a2->NodeOrdinal,
                           a2->PhysicalAdapterIndex,
                           &a2->ClockData);
    }
    PairingAdapters = ClockCalibration;
LABEL_23:
    if ( PairingAdapters >= 0 )
      PairingAdapters = 0;
    else
      WdLogSingleEntry3(3LL, PairingAdapters, a2->NodeOrdinal, a2->PhysicalAdapterIndex);
    goto LABEL_27;
  }
  WdLogSingleEntry2(2LL, a1, a2->hAdapter);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Invalid adapter, pDxgProcess=0x%I64x, hAdapter=0x%8x",
    (__int64)a1,
    a2->hAdapter,
    0LL,
    0LL,
    0LL);
  PairingAdapters = -1073741811;
LABEL_28:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v17);
  if ( v19 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v17);
  }
  return (unsigned int)PairingAdapters;
}
