/*
 * XREFs of ?ndisSelectiveSuspendStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00A7A00
 * Callers:
 *     ?ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0016038 (-ndisPowerSaveStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005CE08 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00629C0 (NdisWdfPnpPowerEventHandler.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00FEDE0 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C0105670 (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C013AA18 (-ndisPmInitializeMiniport@@_Y2PAGENPNP@@AHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014120 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z @ 0x1C00A5CEC (-ndisCancelIdleRequestSync@@YAXPEAU_NDIS_MINIPORT_BLOCK@@KKE@Z.c)
 *     ?ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z @ 0x1C00A6348 (-ndisIsPowerReferencedForSelectiveSuspend@@YAEPEAU_NDIS_SELECTIVE_SUSPEND@@E@Z.c)
 *     ndisSelectiveSuspendSetResumeBusyReason @ 0x1C00A7818 (ndisSelectiveSuspendSetResumeBusyReason.c)
 *     ?ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A8BB4 (-ndisWdfAcquirePowerReferenceHelper@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C00A8CBC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall ndisSelectiveSuspendStop(struct _NDIS_MINIPORT_BLOCK *a1, signed int a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rbx
  char v5; // r12
  char v6; // bp
  int v7; // r14d
  KIRQL v8; // r15
  char v9; // r13
  bool v10; // zf
  int v11; // eax
  KIRQL v12; // dl
  unsigned __int8 v13; // dl
  KIRQL v14; // al

  SelectiveSuspend = a1->SelectiveSuspend;
  v5 = 0;
  v6 = 0;
  v7 = a1->Flags & 0x80;
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v9 = ndisIsPowerReferencedForSelectiveSuspend(SelectiveSuspend, v7 != 0) == 0;
  if ( v7
    && !*((_DWORD *)SelectiveSuspend + 128)
    && !*((_DWORD *)SelectiveSuspend + 129)
    && !*((_DWORD *)SelectiveSuspend + 132)
    && !*((_DWORD *)SelectiveSuspend + 133)
    && !*((_DWORD *)SelectiveSuspend + 130)
    && !*((_DWORD *)SelectiveSuspend + 131)
    && !*((_DWORD *)SelectiveSuspend + 144)
    && !*((_DWORD *)SelectiveSuspend + 127) )
  {
    v6 = 1;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 272));
  }
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0x22u,
      (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      (char)a1,
      a2);
  if ( a2 > 6 )
  {
    switch ( a2 )
    {
      case 7:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x40u;
        break;
      case 8:
        ++*((_DWORD *)SelectiveSuspend + 134);
        *((_DWORD *)SelectiveSuspend + 127) |= 0x80u;
        break;
      case 11:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x400u;
        break;
      case 13:
        ++*((_DWORD *)SelectiveSuspend + 135);
        *((_DWORD *)SelectiveSuspend + 127) |= 0x1000u;
        break;
    }
  }
  else
  {
    switch ( a2 )
    {
      case 6:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x20u;
        break;
      case 1:
        *((_DWORD *)SelectiveSuspend + 127) |= 1u;
        break;
      case 2:
        *((_DWORD *)SelectiveSuspend + 127) |= 2u;
        break;
      case 3:
        *((_DWORD *)SelectiveSuspend + 127) |= 4u;
        *((_DWORD *)SelectiveSuspend + 126) |= 0x400u;
        break;
      case 4:
        *((_DWORD *)SelectiveSuspend + 127) |= 8u;
        break;
      case 5:
        *((_DWORD *)SelectiveSuspend + 127) |= 0x10u;
        break;
    }
  }
  ndisSelectiveSuspendSetResumeBusyReason(SelectiveSuspend, v9, a2, 0);
  if ( v7 )
  {
    if ( v6 )
      goto LABEL_42;
    v10 = KeReadStateEvent((PRKEVENT)((char *)SelectiveSuspend + 272)) == 0;
  }
  else
  {
    v11 = *((_DWORD *)SelectiveSuspend + 126);
    if ( (v11 & 1) != 0 )
    {
      KeCancelTimer((PKTIMER)((char *)SelectiveSuspend + 16));
      *((_DWORD *)SelectiveSuspend + 126) &= ~1u;
      v5 = 1;
      v11 = *((_DWORD *)SelectiveSuspend + 126);
    }
    v10 = (v11 & 0x200) == 0;
  }
  if ( !v10 )
  {
    v12 = v8;
LABEL_51:
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v12);
    return;
  }
LABEL_42:
  KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v8);
  if ( !v7 )
  {
    ndisCancelWaitWake(a1);
    if ( v5 )
    {
      KeFlushQueuedDpcs();
      ndisWaitForKernelObject((char *)SelectiveSuspend + 152);
    }
    ndisCancelIdleRequestSync(a1, a2, 0, 1);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    *((_DWORD *)SelectiveSuspend + 126) |= 0x200u;
    v12 = v14;
    goto LABEL_51;
  }
  if ( a2 == 6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 0, 0);
    ndisWdfSelectiveSuspendResumeOperations(a1, v13, 1u);
  }
  else if ( v6 )
  {
    ndisWdfAcquirePowerReferenceHelper(a1, 1u, 0);
  }
  else
  {
    KeWaitForSingleObject((char *)SelectiveSuspend + 272, Executive, 0, 0, 0LL);
  }
}
