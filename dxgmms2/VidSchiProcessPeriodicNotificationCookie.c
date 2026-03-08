/*
 * XREFs of VidSchiProcessPeriodicNotificationCookie @ 0x1C003B0C4
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000A580 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C003A0D4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C001BE4A (McTemplateK0q_EtwWriteTransfer.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C346 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     McTemplateK0pqqiix_EtwWriteTransfer @ 0x1C0038848 (McTemplateK0pqqiix_EtwWriteTransfer.c)
 *     McTemplateK0qqix_EtwWriteTransfer @ 0x1C00399F4 (McTemplateK0qqix_EtwWriteTransfer.c)
 *     VidSchiCalculatePeriodicTargetFrameNumber @ 0x1C003A394 (VidSchiCalculatePeriodicTargetFrameNumber.c)
 */

void __fastcall VidSchiProcessPeriodicNotificationCookie(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rdi
  union _SLIST_HEADER *v7; // rbx
  union _SLIST_HEADER *v8; // r14
  ULONGLONG Alignment; // rsi
  struct _VIDSCH_SYNC_OBJECT **v10; // rsi
  unsigned __int64 v11; // r14
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rbx
  struct _VIDSCH_GLOBAL *v22; // [rsp+20h] [rbp-39h]
  struct VIDSCH_HW_QUEUE **v23; // [rsp+28h] [rbp-31h]
  _QWORD v24[2]; // [rsp+50h] [rbp-9h] BYREF
  char v25; // [rsp+60h] [rbp+7h]
  _QWORD v26[4]; // [rsp+68h] [rbp+Fh] BYREF
  __int16 v27; // [rsp+88h] [rbp+2Fh]
  int v28; // [rsp+C0h] [rbp+67h] BYREF
  unsigned __int64 v29; // [rsp+C8h] [rbp+6Fh] BYREF

  v5 = *(unsigned int *)(a2 + 48);
  v6 = *(unsigned int *)(a2 + 52);
  v7 = (union _SLIST_HEADER *)*((_QWORD *)a1 + v5 + 400);
  v8 = v7 + 2763;
  if ( (byte_1C00769C1 & 2) != 0 )
    McTemplateK0qqix_EtwWriteTransfer((__int64)a1, v5, a3, v5, v6, v8->Alignment, v7[2762].Alignment);
  ExpInterlockedPushEntrySList(v7 + 4926, (PSLIST_ENTRY)(a2 + 16));
  v27 = 0;
  v26[0] = (char *)a1 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v26);
  v25 = 0;
  v24[1] = v24;
  v24[0] = v24;
  Alignment = v7[4925].Alignment;
  if ( Alignment
    && (v10 = *(struct _VIDSCH_SYNC_OBJECT ***)(Alignment + 8LL * (unsigned __int8)v6)) != 0LL
    && *((_DWORD *)v10 + 6) == (_DWORD)v6 )
  {
    v11 = v8->Alignment;
    v12 = v7[2762].Alignment;
    v28 = 0;
    v13 = VidSchiCalculatePeriodicTargetFrameNumber((__int64)v10, v11, v12, &v28, a1, (__int64)v7);
    v29 = v13;
    v16 = v13;
    if ( v10[7] == (struct _VIDSCH_SYNC_OBJECT *)v13 )
    {
      WdLogSingleEntry1(1LL, v13);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, unsigned __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"New periodic monitored fence value has the same value as the last signaled value %d",
        v29,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else if ( (unsigned __int64)v10[7] <= v13 )
    {
      v17 = VidSchiSignalSyncObjectsFromCpu((struct HwQueueStagingList *)v24, 1u, v10, 0, (char *)&v29, 0LL);
      if ( v17 < 0 )
      {
        v21 = v17;
        WdLogSingleEntry3(1LL, *((unsigned int *)v10 + 2), v6, v17);
        ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, _QWORD, __int64, __int64, _QWORD, _QWORD))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Failed to signal periodic monitored fence with VidPnSourceID:%d NotificationID:%u, returning 0x%I64x",
          *((unsigned int *)v10 + 2),
          v6,
          v21,
          0LL,
          0LL);
      }
      else
      {
        v10[7] = (struct _VIDSCH_SYNC_OBJECT *)v29;
        if ( (byte_1C00769C1 & 2) != 0 )
        {
          LODWORD(v23) = v6;
          LODWORD(v22) = *((_DWORD *)v10 + 2);
          McTemplateK0pqqiix_EtwWriteTransfer(v19, v18, v20, *v10, v22, v23, v11, 0LL, v29);
        }
      }
    }
    else
    {
      if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
      {
        McTemplateK0q_EtwWriteTransfer(v14, &EventPerformanceWarning, v15, 25);
        v16 = v29;
      }
      WdLogSingleEntry2(1LL, v16, v10[7]);
      ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, unsigned __int64, struct _VIDSCH_SYNC_OBJECT *, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"New periodic monitored fence value %d is less than the last signaled value %d",
        v29,
        v10[7],
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, v6);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Storage for periodic monitored fence notification %d is invalid",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v24);
  AcquireSpinLock::Release((AcquireSpinLock *)v26);
}
