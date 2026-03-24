/*
 * XREFs of VidSchSignalSyncObjectsFromCpu @ 0x1C0035700
 * Callers:
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0032C40 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 *     VidSchSignalPagingFences @ 0x1C0067DDC (VidSchSignalPagingFences.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006C260 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C006DDC0 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000B000 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0011E50 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00128EC (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00331A8 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromCpu(__int64 a1, struct _VIDSCH_SYNC_OBJECT **a2, __int64 a3, char *a4)
{
  __int64 v4; // rbx
  unsigned int v7; // r14d
  __int64 v8; // rax
  unsigned int v9; // ebx
  __int64 v10; // rcx
  _QWORD v12[2]; // [rsp+30h] [rbp-40h] BYREF
  char v13; // [rsp+40h] [rbp-30h]
  _QWORD v14[4]; // [rsp+48h] [rbp-28h] BYREF
  __int16 v15; // [rsp+68h] [rbp-8h]

  v4 = (unsigned int)a3;
  v7 = a1;
  if ( (a3 & 4) == (_DWORD)a3 )
  {
    v10 = *((_QWORD *)*a2 + 1);
    v15 = 0;
    v14[0] = v10 + 1712;
    AcquireSpinLock::Acquire((Acquire *)v14);
    v12[1] = v12;
    v13 = 0;
    v12[0] = v12;
    v9 = VidSchiSignalSyncObjectsFromCpu(
           (struct HwQueueStagingList *)v12,
           (unsigned __int64 *)v7,
           a2,
           (struct _D3DDDICB_SIGNALFLAGS)v4,
           a4,
           0LL);
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v12);
    AcquireSpinLock::Release((AcquireSpinLock *)v14);
  }
  else
  {
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    *(_QWORD *)(v8 + 24) = v4;
    v9 = -1073741811;
    *(_QWORD *)(v8 + 32) = -1073741811LL;
    WdLogEvent5_WdAssertion(v8);
  }
  return v9;
}
