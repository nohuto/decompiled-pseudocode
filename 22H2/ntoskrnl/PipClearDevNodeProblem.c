/*
 * XREFs of PipClearDevNodeProblem @ 0x14086966C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B6A4C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     PnpProcessAssignResourcesWorker @ 0x140791170 (PnpProcessAssignResourcesWorker.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x140814744 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PipAttemptDependentStart @ 0x140861FA4 (PipAttemptDependentStart.c)
 *     PiRestartRemovalRelations @ 0x1408639FC (PiRestartRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 *     PiDevCfgProcessDevice @ 0x14087A6C0 (PiDevCfgProcessDevice.c)
 *     PnpDisableDevice @ 0x1409589C8 (PnpDisableDevice.c)
 *     PiProcessClearDeviceProblem @ 0x140959420 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x140959584 (PiProcessResourceRequirementsChanged.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140963800 (PiProfileUpdateDeviceTreeCallback.c)
 *     PnpRebalance @ 0x14096E968 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x140971A78 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     SeAuditingWithTokenForSubcategory @ 0x1406BB250 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x140788CDC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788EE0 (PiPnpRtlBeginOperation.c)
 *     _PnpSetObjectProperty @ 0x14079708C (_PnpSetObjectProperty.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797720 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipClearDevNodeFlags @ 0x14079856C (PipClearDevNodeFlags.c)
 *     PnpTraceClearDevNodeProblem @ 0x140869ADC (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14096F750 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipClearDevNodeProblem(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rcx
  PVOID **v8; // rcx
  PVOID P; // [rsp+60h] [rbp+8h] BYREF

  P = 0LL;
  v2 = *(_DWORD *)(a1 + 404);
  v3 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v2 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipClearDevNodeFlags(a1, 0x2000);
    v5 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v5 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v4, v5, 12);
      if ( *(_DWORD *)(a1 + 408) != v3 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v6, *(_QWORD *)(a1 + 48), 13);
      PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v2, v3);
      if ( v2 == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        0LL,
        0LL,
        (__int64)DEVPKEY_Device_ProblemStatusOverride,
        0,
        0LL,
        0,
        0);
    }
    v7 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v7 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v7 + 792) = 2;
    *(_DWORD *)(a1 + 8 * v7 + 796) = v2;
    *(_DWORD *)(a1 + 8 * v7 + 800) = v3;
    v8 = (PVOID **)P;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( v8 )
      PiPnpRtlEndOperation(v8);
  }
}
