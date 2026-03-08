/*
 * XREFs of ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C000ED70
 * Callers:
 *     DxgNotifyVSyncCB @ 0x1C000ECB0 (DxgNotifyVSyncCB.c)
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C000EEBC (-NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C0054A98 (-RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::NotifyVSync(KSPIN_LOCK *this, unsigned int a2, __int64 a3)
{
  unsigned int v3; // edi
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  ADAPTER_DISPLAY *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+30h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v12 = -1;
  v13 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v14 = 1;
    v12 = 8009;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(this, &EventProfilerEnter, a3, 8009LL);
  }
  else
  {
    v14 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v12, 8009);
  v16 = 0LL;
  v6 = KeQueryInterruptTimePrecise(&v16);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v17 = v6 / 0xA;
  KeAcquireInStackQueuedSpinLockAtDpcLevel(this + 524, &LockHandle);
  v7 = 0LL;
  if ( (this[349] & 0x10) != 0 )
    v7 = a2;
  if ( !*(_DWORD *)(this[514] + 4 * v7) )
  {
    v8 = *(_QWORD *)(this[525] + 8 * v7);
    if ( v8 )
      _InterlockedExchange64((volatile __int64 *)(this[526] + 8 * v7), v16 - v8);
    *(_QWORD *)(this[525] + 8 * v7) = v16;
  }
  v9 = (ADAPTER_DISPLAY *)this[365];
  if ( v9 )
    ADAPTER_DISPLAY::NotifyVSync(v9, a2, &v17);
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( *((_DWORD *)this + 1060) )
  {
    do
      DXGPOWERSTATISTICSTRANSITIONENGINE::RecordVSync((DXGPOWERSTATISTICSTRANSITIONENGINE *)(this[529]
                                                                                           + 136
                                                                                           + 248LL * v3++));
    while ( v3 < *((_DWORD *)this + 1060) );
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v12);
  if ( v14 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v12);
  }
}
