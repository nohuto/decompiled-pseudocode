/*
 * XREFs of ?ndisSetDevicePower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@W4_DEVICE_POWER_STATE@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014E7C
 * Callers:
 *     ?ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015314 (-ndisSetPower@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z @ 0x1C0014000 (-ndisPrepForLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_DEVICE_POWER_STATE@@@Z.c)
 *     ?ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z @ 0x1C0015188 (-ndisQuerySetMiniportDeviceState@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@KE@Z.c)
 *     ?ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015E08 (-ndisWaitForResetCompletion@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015EA8 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_LqZ @ 0x1C0017598 (WPP_RECORDER_SF_LqZ.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0018AF4 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BB18 (WPP_RECORDER_SF_qdL.c)
 *     McTemplateK0jqxd_EtwWriteTransfer @ 0x1C0060BB8 (McTemplateK0jqxd_EtwWriteTransfer.c)
 *     McTemplateK0jqxddq_EtwWriteTransfer @ 0x1C0067E98 (McTemplateK0jqxddq_EtwWriteTransfer.c)
 *     McTemplateK0jqxqq_EtwWriteTransfer @ 0x1C0071C9C (McTemplateK0jqxqq_EtwWriteTransfer.c)
 *     ?Acquire@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FC27C (-Acquire@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00FEBB4 (-ndisSetDeviceInterfaceState@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?Release@?$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@Z @ 0x1C00FED00 (-Release@-$KNeutralLock@W4NDIS_MINIPORT_POLICY_OWNER@@@Rtl@@QEAAXW4NDIS_MINIPORT_POLICY_OWNER@@@.c)
 *     ?ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0122550 (-ndisSetPowerResume@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01225D8 (-ndisSetPowerSuspend@@YAJPEAU_IRP@@PEAU_IO_STACK_LOCATION@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013A878 (-ndisPmHaltMiniport@@_Y2PAGENPNP@@AXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSetDevicePower(
        PIRP Irp,
        struct _IO_STACK_LOCATION *a2,
        enum _NDIS_DEVICE_POWER_STATE a3,
        struct _NDIS_MINIPORT_BLOCK *a4)
{
  const struct _GUID *v8; // rcx
  struct _NDIS_SELECTIVE_SUSPEND *v9; // rbx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // r8
  unsigned int PnPFlags; // eax
  unsigned int SetMiniportDeviceState; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r8
  unsigned int v18; // ebx
  _IO_STACK_LOCATION *v19; // rax
  _IO_STACK_LOCATION *v20; // rax
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _IO_STACK_LOCATION *v24; // rax
  KIRQL v25; // al
  unsigned int InterlockedFlags; // eax
  unsigned int v28; // ett
  struct _IO_STACK_LOCATION *v29; // rdx
  KIRQL v30; // al

  v8 = &WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_LqZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      a3,
      110,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a3,
      (char)a4,
      (__int64)a4->pAdapterInstanceName);
  if ( (byte_1C00E71C1 & 8) != 0 )
    McTemplateK0jqxqq_EtwWriteTransfer(
      (_DWORD)v8,
      (unsigned int)&MiniportPowerDeviceState,
      (_DWORD)a4 + 4008,
      (_DWORD)a4 + 4008,
      a4->IfIndex,
      a4->NetLuid.Value,
      1,
      a3);
  if ( a3 == NdisDeviceStateD0 )
  {
    if ( a4->AoAc )
      *((_QWORD *)a4->AoAc + 140) = KeQueryUnbiasedInterruptTime();
    _m_prefetchw(&a4->InterlockedFlags);
    if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFD) & 2) != 0 )
    {
      SelectiveSuspend = a4->SelectiveSuspend;
      if ( SelectiveSuspend )
      {
        v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
        if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x120) == 0x20 )
        {
          KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v30);
          return (unsigned int)ndisSetPowerResume(Irp, v29, a4);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v30);
      }
      CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
      CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
      CurrentStackLocation[-1].Control = 0;
      v24 = Irp->Tail.Overlay.CurrentStackLocation;
      v24[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerOnComplete;
      v24[-1].Context = a4;
      v24[-1].Control = -32;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          4u,
          0xEu,
          0x6Fu,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a4);
      goto LABEL_22;
    }
    goto LABEL_52;
  }
  if ( (unsigned int)(a3 - 2) > 2 )
  {
    v18 = -1073741811;
LABEL_43:
    Irp->IoStatus.Status = v18;
    IofCompleteRequest(Irp, 0);
    return v18;
  }
  _m_prefetchw(&a4->InterlockedFlags);
  if ( (_InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFFB) & 4) == 0 )
  {
LABEL_52:
    _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 8u);
    Irp->IoStatus.Status = 0;
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    return (unsigned int)IofCallDriver(a4->NextDeviceObject, Irp);
  }
  v9 = a4->SelectiveSuspend;
  if ( !v9 )
    goto LABEL_9;
  v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)a4->SelectiveSuspend);
  if ( (*((_DWORD *)v9 + 126) & 0x108) == 8 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v9, v25);
    return (unsigned int)ndisSetPowerSuspend(Irp, a2, a4);
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v9, v25);
LABEL_9:
  if ( ndisIsMiniportStarted(a4) && a4->PnPDeviceState == NdisPnPDeviceStarted )
  {
    PnPFlags = a4->PnPFlags;
    if ( (PnPFlags & 0x800) == 0 )
    {
      KeClearEvent(&a4->OpenReadyEvent.Event);
      ndisPrepForLowPower(a4, a3);
      PnPFlags = a4->PnPFlags;
    }
    if ( (PnPFlags & 0x20) == 0 )
    {
      if ( (a4->DriverHandle->Flags & 1) == 0 )
      {
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_q(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xEu,
            0x72u,
            (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
            a4);
        if ( (byte_1C00E71C3 & 4) != 0 )
          McTemplateK0jqxd_EtwWriteTransfer(
            v11,
            (unsigned int)&PowerHaltMiniport,
            (_DWORD)a4 + 4008,
            (_DWORD)a4 + 4008,
            a4->IfIndex,
            a4->NetLuid.Value,
            1);
        if ( (a4->PnPFlags & 0x100) == 0 )
        {
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner, v10, v12);
          ndisPmHaltMiniport(a4);
          Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Acquire(&a4->MiniportOwner, 1LL);
        }
      }
      goto LABEL_19;
    }
    ndisCancelWakeUpDpcTimer(a4);
    ndisWaitForResetCompletion(a4);
    if ( (a4->PnPFlags & 0x800) != 0 )
    {
      ndisSetDeviceInterfaceState(a4, 0);
      _InterlockedOr((volatile signed __int32 *)&a4->InterlockedFlags, 0x10u);
    }
    SetMiniportDeviceState = ndisQuerySetMiniportDeviceState(a4, (enum _DEVICE_POWER_STATE)a3, 0xFD010101, 1u);
    v18 = SetMiniportDeviceState;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qdL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        14,
        112,
        (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
        (char)a4,
        a3,
        SetMiniportDeviceState);
    if ( v18 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xEu,
          0x71u,
          (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
          a4);
      if ( (byte_1C00E71C3 & 0x40) != 0 )
        McTemplateK0jqxddq_EtwWriteTransfer(
          v16,
          (unsigned int)&PowerDownFailed,
          (_DWORD)a4 + 4008,
          (_DWORD)a4 + 4008,
          a4->IfIndex,
          a4->NetLuid.Value,
          v18,
          1,
          0);
      Rtl::KNeutralLock<enum NDIS_MINIPORT_POLICY_OWNER>::Release(&a4->MiniportOwner, v15, v17);
      _m_prefetchw(&a4->InterlockedFlags);
      InterlockedFlags = a4->InterlockedFlags;
      do
      {
        v28 = InterlockedFlags;
        InterlockedFlags = _InterlockedCompareExchange(
                             (volatile signed __int32 *)&a4->InterlockedFlags,
                             InterlockedFlags,
                             InterlockedFlags);
      }
      while ( v28 != InterlockedFlags );
      if ( (InterlockedFlags & 0x10) != 0 )
      {
        ndisSetDeviceInterfaceState(a4, 1u);
        _InterlockedAnd((volatile signed __int32 *)&a4->InterlockedFlags, 0xFFFFFFEF);
      }
      goto LABEL_43;
    }
  }
LABEL_19:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xEu,
      0x73u,
      (struct _GUID *)&WPP_edff7b97c941354592c797b15dc3b8f6_Traceguids,
      a4);
  v19 = Irp->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v19[-1].MajorFunction = *(_OWORD *)&v19->MajorFunction;
  *(_OWORD *)&v19[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v19->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v19[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v19->Parameters.ReadWriteConfig.Length;
  v19[-1].FileObject = v19->FileObject;
  v19[-1].Control = 0;
  v20 = Irp->Tail.Overlay.CurrentStackLocation;
  v20[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))ndisSetDevicePowerDownComplete;
  v20[-1].Context = a4;
  v20[-1].Control = -32;
LABEL_22:
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  IofCallDriver(a4->NextDeviceObject, Irp);
  return 259;
}
