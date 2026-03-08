/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C0040990
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C003D700 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C00881C0 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00A33B0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     VidSchSignalPagingFences @ 0x1C00B57E0 (VidSchSignalPagingFences.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C346 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(
        unsigned int a1,
        struct _VIDSCH_SYNC_OBJECT **a2,
        struct _D3DDDICB_SIGNALFLAGS a3,
        char *a4)
{
  __int64 Value; // rbx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  _QWORD v11[2]; // [rsp+58h] [rbp+17h] BYREF
  char v12; // [rsp+68h] [rbp+27h]
  _QWORD v13[4]; // [rsp+70h] [rbp+2Fh] BYREF
  __int16 v14; // [rsp+90h] [rbp+4Fh]

  Value = a3.Value;
  if ( (*(_BYTE *)&a3.0 & 4) == a3.0 )
  {
    v9 = *((_QWORD *)*a2 + 1);
    v14 = 0;
    v13[0] = v9 + 1728;
    AcquireSpinLock::Acquire((Acquire *)v13);
    v11[1] = v11;
    v12 = 0;
    v11[0] = v11;
    v10 = VidSchiSignalSyncObjectsFromCpu(
            (struct HwQueueStagingList *)v11,
            a1,
            a2,
            (struct _D3DDDICB_SIGNALFLAGS)Value,
            a4,
            0LL);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v11);
    AcquireSpinLock::Release((AcquireSpinLock *)v13);
    return v10;
  }
  else
  {
    WdLogSingleEntry2(1LL, a3.Value, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Invalid Flags value of 0x%I64x, only AllowFenceRewind is valid for signaling from CPU, returning 0x%I64x.\n",
      Value,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
