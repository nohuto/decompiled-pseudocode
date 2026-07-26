/*
 * XREFs of NdisMIdleNotificationConfirm @ 0x1C00A9A50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C000DD60 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_q @ 0x1C000DE40 (WPP_RECORDER_SF_q.c)
 *     ?ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0014120 (-ndisCancelWaitWake@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015EA8 (-ndisCancelWakeUpDpcTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z4W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0015F34 (-ndisRequestDeviceLowPower@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@P6AXPEAU_DEVICE_.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     ?ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z@Z @ 0x1C003AFE0 (-ndisRequestWaitWake@@YAJPEAU_NDIS_MINIPORT_BLOCK@@P6AXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXP.c)
 *     ?ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005B148 (-ndisAoAcIdleRequestConfirm@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x1C008CE24 (-NdisTraceLoggingUnexpectedSelectiveSuspendError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C00F9820 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 */

void __fastcall NdisMIdleNotificationConfirm(struct _NDIS_MINIPORT_BLOCK *a1, POWER_STATE PowerState)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  KIRQL v5; // bl
  int v6; // eax
  int v7; // r15d
  struct _NDIS_SELECTIVE_SUSPEND *v8; // rbx
  int v9; // eax
  char v10; // bp
  struct _NDIS_SELECTIVE_SUSPEND *v11; // rbx
  KIRQL v12; // al
  KIRQL v13; // bl

  SelectiveSuspend = a1->SelectiveSuspend;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xFu,
      0xFu,
      (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
      (char)a1,
      PowerState.SystemState);
  ndisLogMiniportEvent(a1, NdisMEvent_SSIdleConfirm);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
  v6 = *((_DWORD *)SelectiveSuspend + 126);
  if ( (v6 & 0x100) != 0 )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisAoAcIdleRequestConfirm(a1);
  }
  else
  {
    *((_DWORD *)SelectiveSuspend + 126) = v6 | 8;
    KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 176));
    KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v5);
    ndisCancelWakeUpDpcTimer(a1);
    ndisCancelWaitWake(a1);
    v7 = ndisRequestWaitWake(a1, (PREQUEST_POWER_COMPLETE)ndisIdleWaitWakeCallback);
    if ( v7 != 259 )
    {
      v8 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1);
      *((_WORD *)v8 + 313) = *((_WORD *)v8 + 312);
      *((_WORD *)v8 + 312) = 1;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x10u,
          (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
          v7,
          a1);
    }
    *((POWER_STATE *)SelectiveSuspend + 174) = PowerState;
    v9 = ndisRequestDeviceLowPower(
           a1,
           PowerState,
           (PREQUEST_POWER_COMPLETE)ndisPowerSuspendRequestComplete,
           a1,
           NdisMEventDx_SSIdle);
    v10 = v9;
    if ( v9 == 259 )
    {
      ndisWaitForKernelObject((char *)SelectiveSuspend + 176);
    }
    else
    {
      v11 = a1->SelectiveSuspend;
      NdisTraceLoggingUnexpectedSelectiveSuspendError(a1);
      *((_WORD *)v11 + 313) = *((_WORD *)v11 + 312);
      *((_WORD *)v11 + 312) = 2;
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Lq(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          0xFu,
          0x11u,
          (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
          v10,
          a1);
      v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
      *((_DWORD *)SelectiveSuspend + 126) &= ~8u;
      v13 = v12;
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 176), 0, 0);
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v13);
    }
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        4u,
        0xFu,
        0x12u,
        (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
        a1);
  }
}
