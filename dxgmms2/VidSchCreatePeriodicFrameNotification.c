/*
 * XREFs of VidSchCreatePeriodicFrameNotification @ 0x1C003EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x1C0017488 (-VidSchiGetCurrentVSyncPeriodQpc@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z @ 0x1C003D654 (-VidSchCalculatePeriodicMonitoredFenceTimerDueTime@@YA_J_J00H@Z.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1C003DFD0 (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     VidSchDestroyPeriodicFrameNotification @ 0x1C003EF80 (VidSchDestroyPeriodicFrameNotification.c)
 *     VidSchControlVSyncAdapter @ 0x1C00AD380 (VidSchControlVSyncAdapter.c)
 *     VidSchIsVSyncAvailable @ 0x1C00B49C0 (VidSchIsVSyncAvailable.c)
 */

__int64 __fastcall VidSchCreatePeriodicFrameNotification(
        struct _VIDSCH_GLOBAL *a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 **a6)
{
  __int64 v6; // r15
  char v8; // r12
  __int64 v9; // r13
  __int64 **v10; // r14
  __int64 *Pool2; // rdi
  int v12; // ebx
  unsigned __int64 CurrentVSyncPeriodQpc; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r8
  unsigned __int128 v16; // rax
  unsigned __int64 v17; // kr00_8
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rbx
  const wchar_t *v22; // r9
  __int64 v23; // rcx
  bool v24; // zf
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // ecx
  int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 Timer; // rax
  __int64 v36; // rdx
  __int64 v38; // [rsp+50h] [rbp-39h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-31h] BYREF
  __int128 v40; // [rsp+70h] [rbp-19h] BYREF
  __int128 v41; // [rsp+80h] [rbp-9h]
  __int64 v42; // [rsp+90h] [rbp+7h]
  __int64 v43; // [rsp+E0h] [rbp+57h]

  v6 = a4;
  v42 = 0LL;
  v8 = 0;
  v9 = *((_QWORD *)a1 + a4 + 400);
  v40 = 0LL;
  v41 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned __int8)VidSchIsVSyncAvailable(a1, a4) && (int)VidSchControlVSyncAdapter(a1) >= 0 )
  {
    v10 = a6;
    Pool2 = (__int64 *)ExAllocatePool2(64LL, 72LL, 1650551126LL);
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_1C00768C8);
      WdLogSingleEntry1(6LL, 13927LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        262145LL,
        0xFFFFFFFFLL,
        L"ExAllocatePool for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        13927LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      VidSchControlVSyncAdapter(a1);
LABEL_40:
      *v10 = 0LL;
      return (unsigned int)v12;
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 216, &LockHandle);
    *((_BYTE *)Pool2 + 25) = *(_BYTE *)(v9 + 82928) + 1;
    CurrentVSyncPeriodQpc = VidSchiGetCurrentVSyncPeriodQpc(a1, v6, 0);
    v14 = *((_QWORD *)a1 + 328);
    v15 = CurrentVSyncPeriodQpc;
    v17 = CurrentVSyncPeriodQpc;
    v16 = CurrentVSyncPeriodQpc * (unsigned __int128)0x989680uLL;
    v38 = *((_QWORD *)&v16 + 1);
    if ( is_mul_ok(v17, 0x989680uLL) )
      v18 = v16 / v14;
    else
      v18 = 10000000 * (v15 / v14) + 10000000 * (v15 % v14) / v14;
    v19 = *(_QWORD *)(v9 + 78800);
    v43 = v18;
    if ( v19 )
    {
      v23 = 0LL;
      while ( *(_QWORD *)(v19 + 8 * v23) )
      {
        v23 = (unsigned int)(v23 + 1);
        if ( (unsigned int)v23 >= 8 )
        {
          _InterlockedIncrement(&dword_1C00768C8);
          v21 = 13972LL;
          WdLogSingleEntry1(6LL, 13972LL);
          v22 = L"Cap for ppPeriodicFrameNotificationStorageArray reached, returning STATUS_NO_MEMORY.";
          goto LABEL_11;
        }
      }
    }
    else
    {
      v20 = ExAllocatePool2(64LL, 64LL, 1650551126LL);
      *(_QWORD *)(v9 + 78800) = v20;
      if ( !v20 )
      {
        _InterlockedIncrement(&dword_1C00768C8);
        v21 = 13948LL;
        WdLogSingleEntry1(6LL, 13948LL);
        v22 = L"ExAllocatePool for ppPeriodicFrameNotificationStorageArray failed, returning STATUS_NO_MEMORY.";
LABEL_11:
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          262145LL,
          0xFFFFFFFFLL,
          v22,
          v21,
          0LL,
          0LL,
          0LL,
          0LL);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        v12 = -1073741801;
        goto LABEL_37;
      }
      LOBYTE(v23) = 0;
    }
    *((_BYTE *)Pool2 + 24) = v23;
    *(_QWORD *)(*(_QWORD *)(v9 + 78800) + 8LL * (unsigned __int8)*((_DWORD *)Pool2 + 6)) = Pool2;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    _InterlockedIncrement((volatile signed __int32 *)(a2 + 36));
    v24 = *((_DWORD *)a1 + 58) == 1;
    v25 = *((_QWORD *)a1 + 2);
    *Pool2 = a2;
    Pool2[8] = v25;
    *((_DWORD *)Pool2 + 2) = v6;
    Pool2[6] = v18;
    v26 = *(_QWORD *)(a5 + 16);
    Pool2[2] = v26;
    if ( v24 )
    {
      v12 = -1073741822;
    }
    else
    {
      v27 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v25 + 2920) + 128LL) + 4000 * v6 + 1088);
      DWORD2(v41) = *((_DWORD *)Pool2 + 6);
      DWORD2(v40) = v27;
      *(_QWORD *)&v41 = v26;
      v28 = DxgCoreInterface[71](
              *(ADAPTER_DISPLAY **)(v25 + 2920),
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v40);
      v12 = v28;
      if ( v28 >= 0 )
      {
        v29 = v42;
        Pool2[4] = v42;
        goto LABEL_33;
      }
      if ( (unsigned int)(v28 + 0x3FFFFFFF) > 1 )
      {
LABEL_33:
        *a6 = Pool2;
        if ( (byte_1C00769C1 & 2) != 0 )
          McTemplateK0pqxxqpp_EtwWriteTransfer(
            v29,
            &EventCreatePeriodicFrameNotification,
            v30,
            *Pool2,
            *((_DWORD *)Pool2 + 2),
            Pool2[2],
            v43,
            *((_DWORD *)Pool2 + 6),
            Pool2[4],
            Pool2[5],
            v38,
            LockHandle.LockQueue.Next,
            LockHandle.LockQueue.Lock,
            *(_QWORD *)&LockHandle.OldIrql,
            (_QWORD)v40);
        if ( v12 >= 0 )
          return (unsigned int)v12;
        goto LABEL_36;
      }
    }
    v31 = *((_DWORD *)a1 + 58);
    if ( v31 == 2 )
    {
      WdLogSingleEntry1(3LL, v12);
      v12 = -1073741822;
LABEL_36:
      v10 = a6;
      v8 = 1;
LABEL_37:
      if ( v8 )
      {
        VidSchDestroyPeriodicFrameNotification(*(PVOID *)(*(_QWORD *)(v9 + 78800)
                                                        + 8LL * (unsigned __int8)*((_DWORD *)Pool2 + 6)));
      }
      else
      {
        VidSchControlVSyncAdapter(a1);
        ExFreePoolWithTag(Pool2, 0x62616956u);
      }
      goto LABEL_40;
    }
    if ( v31 != 1 )
    {
      WdLogSingleEntry1(3LL, v12);
      if ( bTracingEnabled )
      {
        if ( (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer(v32, &EventPerformanceWarning, v33, 25);
      }
    }
    v34 = VidSchCalculatePeriodicMonitoredFenceTimerDueTime(*(_QWORD *)(v9 + 44208), v43, Pool2[2], -1);
    Timer = ExAllocateTimer(VidSchPeriodicMonitoredFenceTimerCallback, Pool2, 4LL);
    Pool2[5] = Timer;
    if ( !Timer )
    {
      WdLogSingleEntry0(1LL);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"ExAllocateTimer for VIDSCH_PERIODIC_FRAME_NOTIFICATION_STORAGE failed, returning STATUS_NO_MEMORY.",
        14035LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_36;
    }
    v36 = 0LL;
    if ( v34 <= 0 )
      v36 = v34;
    ExSetTimer(Timer, v36, 0LL, 0LL);
    v12 = 0;
    goto LABEL_33;
  }
  return 3223191558LL;
}
