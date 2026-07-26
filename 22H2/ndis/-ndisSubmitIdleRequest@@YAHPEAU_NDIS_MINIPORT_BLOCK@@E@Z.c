/*
 * XREFs of ?ndisSubmitIdleRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00A8398
 * Callers:
 *     ?ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C005CE08 (-ndisNicQuietCheckRef@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C00A71D0 (-ndisSSIdleTimerWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0006D8C (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0012E28 (-ndisReferenceMiniport@@YAEPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0017B50 (-ndisLogMiniportEvent@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     WPP_RECORDER_SF_Lq @ 0x1C0017D3C (WPP_RECORDER_SF_Lq.c)
 *     Feature_ScreenON_NAPS__private_ReportDeviceUsage @ 0x1C004017C (Feature_ScreenON_NAPS__private_ReportDeviceUsage.c)
 *     _guard_dispatch_icall_nop @ 0x1C0040820 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ql @ 0x1C00630B8 (WPP_RECORDER_SF_ql_ea_1C00630B8.c)
 *     McTemplateK0qq_EtwWriteTransfer @ 0x1C0084BC8 (McTemplateK0qq_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00A4D5C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A5F5C (-ndisClearIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A6684 (-ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8280 (-ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisSubmitIdleRequest(struct _NDIS_MINIPORT_BLOCK *a1, unsigned __int8 a2)
{
  struct _NDIS_SELECTIVE_SUSPEND *SelectiveSuspend; // rsi
  char v3; // bp
  int v4; // r14d
  KIRQL v7; // r15
  int v8; // r12d
  __int64 v9; // rdx
  unsigned int v10; // r14d
  int *v11; // rcx
  KIRQL v12; // al
  KIRQL v13; // bl
  int v14; // edx
  int *v15; // rcx
  bool v16; // bl
  struct _GUID *v17; // [rsp+20h] [rbp-48h]

  SelectiveSuspend = a1->SelectiveSuspend;
  v3 = 0;
  v4 = a2;
  if ( a2 || (a1->PMHardwareCapabilities.Flags & 4) == 0 )
    goto LABEL_7;
  if ( ndisIsScreenOnNapsEnabled )
    Feature_ScreenON_NAPS__private_ReportDeviceUsage();
  if ( ndisShouldEngageNicAutoPowerSaver(a1) )
  {
LABEL_7:
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
    if ( (*((_DWORD *)SelectiveSuspend + 126) & 0x404) != 0 || !ndisReferenceMiniport(a1, 0x15u) )
    {
      v16 = (*((_DWORD *)SelectiveSuspend + 126) & 4) != 0;
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
      return v16 ? 259 : -1073676271;
    }
    else
    {
      v8 = v4;
      *((_DWORD *)SelectiveSuspend + 126) = *((_DWORD *)SelectiveSuspend + 126) ^ (*((_DWORD *)SelectiveSuspend + 126) ^ (v4 << 8)) & 0x100 | 4;
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 200));
      KeClearEvent((PRKEVENT)((char *)SelectiveSuspend + 224));
      KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v7);
      ndisLogMiniportEvent(a1, NdisMEvent_SSIdleReq);
      LOBYTE(v9) = v4;
      v10 = a1->DriverHandle->IdleNotificationHandler(a1->MiniportAdapterContext, v9);
      KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 224), 0, 0);
      if ( v10 == 259 )
      {
        v15 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ql(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            4u,
            0xFu,
            0xEu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            (char)a1,
            v8);
        if ( (byte_1C00E71C1 & 8) != 0 )
          McTemplateK0q_EtwWriteTransfer(
            (__int64)v15,
            &SSIdleDetected,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF);
        ndisClearIdleTimer(a1);
        return 259LL;
      }
      else
      {
        v11 = &WPP_RECORDER_INITIALIZED;
        if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lq(
            *((_QWORD *)WPP_GLOBAL_Control + 8),
            2u,
            0xFu,
            0xDu,
            (struct _GUID *)&WPP_2a2dccd345f53e67cf9f0e5760ed0100_Traceguids,
            v10,
            a1);
        if ( (byte_1C00E71C1 & 8) != 0 )
        {
          LODWORD(v17) = v10;
          McTemplateK0qq_EtwWriteTransfer(
            (__int64)v11,
            &SSIdleDeclined,
            &a1->InterfaceGuid,
            (a1->NetLuid.Value >> 24) & 0xFFFFFF,
            (__int64)v17);
        }
        v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)SelectiveSuspend);
        *((_DWORD *)SelectiveSuspend + 126) &= ~0x100u;
        v13 = v12;
        v14 = *((_DWORD *)SelectiveSuspend + 126);
        if ( (v14 & 4) != 0 )
        {
          *((_DWORD *)SelectiveSuspend + 126) = v14 & 0xFFFFFFFB;
          KeSetEvent((PRKEVENT)((char *)SelectiveSuspend + 200), 0, 0);
          *((_DWORD *)SelectiveSuspend + 126) &= ~0x80u;
          v3 = 1;
        }
        KeReleaseSpinLock((PKSPIN_LOCK)SelectiveSuspend, v13);
        if ( v3 )
          ndisDereferenceMiniport(a1, 0x15u);
        return v10;
      }
    }
  }
  else
  {
    ndisNicAutoPowerSaverControlIdleTimer(a1);
    return 3221291025LL;
  }
}
