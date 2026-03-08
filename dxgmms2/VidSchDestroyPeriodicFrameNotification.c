/*
 * XREFs of VidSchDestroyPeriodicFrameNotification @ 0x1C003EF80
 * Callers:
 *     VidSchiClearPeriodicFrameNotifications @ 0x1C0018928 (VidSchiClearPeriodicFrameNotifications.c)
 *     VidSchCreatePeriodicFrameNotification @ 0x1C003EA40 (VidSchCreatePeriodicFrameNotification.c)
 * Callees:
 *     VidSchiReleaseSyncObjectReference @ 0x1C0004050 (VidSchiReleaseSyncObjectReference.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     ?SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z @ 0x1C0014D1C (-SetToAlwaysSignaled@_VIDSCH_SYNC_OBJECT@@QEAAXPEAVHwQueueStagingList@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqxxqpp_EtwWriteTransfer @ 0x1C003DFD0 (McTemplateK0pqxxqpp_EtwWriteTransfer.c)
 *     VidSchControlVSyncAdapter @ 0x1C00AD380 (VidSchControlVSyncAdapter.c)
 */

void __fastcall VidSchDestroyPeriodicFrameNotification(_DWORD *P, __int64 a2, __int64 a3)
{
  unsigned int *v3; // rsi
  __int64 v5; // rcx
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *v14; // rdx
  __int64 v15; // rbx
  unsigned int v16; // [rsp+28h] [rbp-29h]
  int v17; // [rsp+40h] [rbp-11h]
  __int64 v18; // [rsp+58h] [rbp+7h] BYREF
  __int64 *v19; // [rsp+60h] [rbp+Fh]
  char v20; // [rsp+68h] [rbp+17h]
  _QWORD v21[4]; // [rsp+70h] [rbp+1Fh] BYREF
  __int16 v22; // [rsp+90h] [rbp+3Fh]

  v3 = P + 2;
  if ( (byte_1C00769C1 & 2) != 0 )
  {
    v17 = P[6];
    v16 = *v3;
    McTemplateK0pqxxqpp_EtwWriteTransfer(
      (__int64)P,
      &EventDestroyPeriodicFrameNotification,
      a3,
      *(_QWORD *)P,
      v16,
      *((_QWORD *)P + 2),
      0LL,
      v17,
      *((_QWORD *)P + 4),
      *((_QWORD *)P + 5));
  }
  v5 = *((_QWORD *)P + 5);
  if ( v5 )
  {
    LOBYTE(a3) = 1;
    LOBYTE(a2) = 1;
    ExDeleteTimer(v5, a2, a3, 0LL);
  }
  if ( *((_QWORD *)P + 4) )
  {
    v18 = *((_QWORD *)P + 4);
    v6 = *(_QWORD *)P;
    v19 = 0LL;
    v7 = DxgCoreInterface[72](
           *(ADAPTER_DISPLAY **)(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL) + 2920LL),
           (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v18);
    if ( v7 < 0 )
    {
      v8 = v7;
      WdLogSingleEntry1(1LL, v7);
      ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Periodic monitored fence failed to destroy KMD notification, Status: 0x%I64x",
        v8,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( (int)VidSchControlVSyncAdapter(*(struct _VIDSCH_GLOBAL **)(*(_QWORD *)P + 8LL)) < 0 )
  {
    v9 = -3;
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 2212LL) )
      v10 = *v3;
    else
      v10 = -3;
    WdLogSingleEntry1(1LL, v10);
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)P + 8LL) + 2212LL) )
      v9 = *v3;
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Periodic monitored fence failed to release VSync for VidPnSourceID:0x%I64x.",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = *(_QWORD *)(*(_QWORD *)P + 8LL);
  v22 = 0;
  v21[0] = v11 + 1728;
  AcquireSpinLock::Acquire((Acquire *)v21);
  v12 = *v3;
  v19 = &v18;
  v18 = (__int64)&v18;
  v13 = *(_QWORD *)P;
  v20 = 0;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8 * v12 + 3200) + 78800LL) + 8LL * (unsigned __int8)P[6]) = 0LL;
  _VIDSCH_SYNC_OBJECT::SetToAlwaysSignaled(*(_VIDSCH_SYNC_OBJECT **)P, (struct HwQueueStagingList *)&v18, 1);
  HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)&v18);
  AcquireSpinLock::Release((AcquireSpinLock *)v21);
  VidSchiReleaseSyncObjectReference(*(char **)P, v14);
  v15 = *(_QWORD *)(*(_QWORD *)P + 16LL);
  if ( *(_DWORD *)(v15 + 200) != 6 )
  {
    WdLogSingleEntry1(1LL, 364LL);
    ((void (__fastcall *)(_QWORD, __int64, __int64, const wchar_t *, __int64, _QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[86])(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"GetSyncObjectType() == D3DDDI_PERIODIC_MONITORED_FENCE",
      364LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *(_QWORD *)(v15 + 168) = 0LL;
  ExFreePoolWithTag(P, 0x62616956u);
}
