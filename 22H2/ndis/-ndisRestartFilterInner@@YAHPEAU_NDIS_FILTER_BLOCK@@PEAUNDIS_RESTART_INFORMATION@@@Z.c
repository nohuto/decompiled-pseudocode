/*
 * XREFs of ?ndisRestartFilterInner@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C012DDE8
 * Callers:
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C0100EE0 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001A398 (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C0029780 (WPP_RECORDER_SF_qqZZ.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C003EA54 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0066510 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z @ 0x1C0101044 (-ndisFInvokeRestart@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_FILTER_RESTART_PARAMETERS@@@Z.c)
 */

__int64 __fastcall ndisRestartFilterInner(struct _NDIS_FILTER_BLOCK *a1, struct NDIS_RESTART_INFORMATION *a2)
{
  _NDIS_MINIPORT_BLOCK *Miniport; // rdi
  KIRQL v5; // dl
  __int64 v6; // rdx
  __int64 v7; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rcx
  _NDIS_MINIPORT_BLOCK *v9; // rcx
  unsigned int v10; // edi
  KIRQL v11; // dl
  char v13[8]; // [rsp+38h] [rbp-39h]
  __int128 v14; // [rsp+58h] [rbp-19h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-9h] BYREF
  struct _NDIS_FILTER_RESTART_PARAMETERS v16; // [rsp+80h] [rbp+Fh] BYREF
  KIRQL NewIrql; // [rsp+D8h] [rbp+67h] BYREF

  Miniport = a1->Miniport;
  *((_DWORD *)&v16.MiniportPhysicalMediaType + 1) = 0;
  *(&v16.LowerIfIndex + 1) = 0;
  *(_QWORD *)&v16.Flags = 0LL;
  v14 = 0LL;
  memset(&Event, 0, sizeof(Event));
  NewIrql = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xFu,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      a1);
  NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
  FILTER_CLEAR_ALL_STATE_FLAGS(a1);
  v5 = NewIrql;
  a1->Flags |= 0x20u;
  a1->LockThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v5);
  a1->State = NdisFilterRestarting;
  if ( (byte_1C00E71C3 & 1) != 0 )
    McTemplateK0juqjzzz_EtwWriteTransfer(
      (__int64)&a1->Miniport->InterfaceGuid,
      (__int64)a1->FilterInstanceName.__ptr_.__value_,
      &a1->InterfaceGuid,
      (__int64)&a1->InterfaceGuid,
      3,
      3,
      (__int64)&a1->Miniport->InterfaceGuid,
      a1->Miniport->pAdapterInstanceName->Buffer,
      a1->FilterInstanceName.__ptr_.__value_->Buffer,
      a1->FilterFriendlyName->Buffer);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  LowerFilter = a1->LowerFilter;
  a1->AsyncOpContext = (_FILTER_PAUSE_RESTART_CONTEXT *)&v14;
  v16.Header = (_NDIS_OBJECT_HEADER)3146139;
  v16.RestartAttributes = &a2->Attributes;
  if ( LowerFilter )
  {
    v16.MiniportMediaType = LowerFilter->MediaType;
    v16.MiniportPhysicalMediaType = LowerFilter->PhysicalMediaType;
    v16.LowerIfIndex = LowerFilter->IfIndex;
    v16.LowerIfNetLuid.Value = LowerFilter->IfBlock->NetLuid.Value;
  }
  else
  {
    v9 = a1->Miniport;
    v16.MiniportMediaType = v9->MiniportMediaType;
    v16.MiniportPhysicalMediaType = v9->MiniportPhysicalMediumType;
    v16.LowerIfIndex = v9->IfIndex;
    v16.LowerIfNetLuid.Value = v9->NetLuid.Value;
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqZZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      v7,
      0x10u,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      (char)Miniport,
      (char)a1,
      &a1->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
      &Miniport->pAdapterInstanceName->Length);
  v10 = ndisFInvokeRestart(a1, &v16);
  if ( v10 == 259 )
  {
    ndisWaitForKernelObject(&Event);
    v10 = DWORD2(v14);
  }
  a1->AsyncOpContext = 0LL;
  if ( v10 )
  {
    a1->State = NdisFilterPaused;
    if ( (byte_1C00E71C3 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        2,
        4,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    a1->Flags |= 4u;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
  }
  else
  {
    a1->IfBlock->AccessType = a2->General.AccessType;
    a1->IfBlock->ConnectionType = a2->General.ConnectionType;
    a1->IfBlock->ifMtu = a2->General.MtuSize;
    NDIS_ACQUIRE_FILTER_SPIN_LOCK(a1, &NewIrql);
    FILTER_CLEAR_ALL_STATE_FLAGS(a1);
    v11 = NewIrql;
    a1->Flags |= 0x10u;
    a1->LockThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, v11);
    a1->State = NdisFilterRunning;
    if ( (byte_1C00E71C3 & 1) != 0 )
      McTemplateK0juqjzzz_EtwWriteTransfer(
        (__int64)&a1->Miniport->InterfaceGuid,
        (__int64)a1->FilterInstanceName.__ptr_.__value_,
        &a1->InterfaceGuid,
        (__int64)&a1->InterfaceGuid,
        4,
        5,
        (__int64)&a1->Miniport->InterfaceGuid,
        a1->Miniport->pAdapterInstanceName->Buffer,
        a1->FilterInstanceName.__ptr_.__value_->Buffer,
        a1->FilterFriendlyName->Buffer);
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v10;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_c229d34f9dad36469b52bf5a53ae9d53_Traceguids,
      (char)a1,
      *(_QWORD *)v13);
  }
  return v10;
}
