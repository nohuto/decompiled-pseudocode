/*
 * XREFs of ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C003D700
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1C0038848 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C003A394 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C003D654 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     VidSchSignalSyncObjectsFromCpu @ 0x1C0040990 (VidSchSignalSyncObjectsFromCpu.c)
 */

void __fastcall VidSchPeriodicMonitoredFenceTimerCallback(struct _EX_TIMER *a1, struct _VIDSCH_SYNC_OBJECT **a2)
{
  struct _VIDSCH_SYNC_OBJECT *v2; // r8
  __int64 v4; // rbx
  struct _VIDSCH_SYNC_OBJECT *v5; // rax
  unsigned __int64 v6; // r14
  __int64 v7; // r8
  unsigned int v8; // edx
  struct _VIDSCH_GLOBAL *v9; // rbx
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r8
  unsigned __int128 v13; // rax
  unsigned __int64 v14; // kr00_8
  unsigned __int64 v15; // rbx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  struct _VIDSCH_GLOBAL *v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-20h] BYREF
  int v26; // [rsp+A8h] [rbp+38h] BYREF
  unsigned __int64 v27; // [rsp+B0h] [rbp+40h] BYREF

  v2 = *a2;
  v4 = *(_QWORD *)(*((_QWORD *)*a2 + 1) + 8LL * *((unsigned int *)a2 + 2) + 3200);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*((_QWORD *)v2 + 1) + 1728LL), &LockHandle);
  v5 = *a2;
  v6 = *(_QWORD *)(v4 + 44208);
  v7 = *(_QWORD *)(v4 + 44192);
  v26 = 0;
  v27 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)a2, v6, v7, &v26, *((struct _VIDSCH_GLOBAL **)v5 + 1), v4);
  v8 = *(_DWORD *)(v4 + 24);
  v9 = (struct _VIDSCH_GLOBAL *)*((_QWORD *)*a2 + 1);
  CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(v9, v8, 0);
  v11 = *((_QWORD *)v9 + 328);
  v12 = CurrentVSyncPeriodQpc;
  v14 = CurrentVSyncPeriodQpc;
  v13 = CurrentVSyncPeriodQpc * (unsigned __int128)0x989680uLL;
  if ( is_mul_ok(v14, 0x989680uLL) )
    v15 = v13 / v11;
  else
    v15 = 10000000 * (v12 / v11) + 10000000 * (v12 % v11) / v11;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  if ( (unsigned __int64)a2[7] < v27 )
  {
    if ( (int)VidSchSignalSyncObjectsFromCpu(1u, a2, 0, &v27) >= 0 )
      a2[7] = (struct _VIDSCH_SYNC_OBJECT *)v27;
    v18 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(v6, v15, (__int64)a2[2], v26);
    if ( v18 > 0 )
    {
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventPerformanceWarning, v19, 25);
      v18 = -(__int64)v15;
    }
    ExSetTimer(a2[5], v18, 0LL, 0LL);
    if ( (byte_1C00769C1 & 2) != 0 )
    {
      LODWORD(v24) = *((_DWORD *)a2 + 6);
      LODWORD(v23) = *((_DWORD *)a2 + 2);
      McTemplateK0pqqiix_EtwWriteTransfer(v21, v20, v22, *a2, v23, v24, v6, v18, v27);
    }
  }
  else
  {
    if ( bTracingEnabled )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0q_EtwWriteTransfer(v27, &EventPerformanceWarning, v16, 25);
    }
    ExSetTimer(a2[5], -(__int64)v15, 0LL, 0LL);
  }
}
