/*
 * XREFs of PipSetDevNodeProblem @ 0x1408667BC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x140681528 (PnpProcessAssignResources.c)
 *     PipProcessEnumeratedChildDevice @ 0x14068571C (PipProcessEnumeratedChildDevice.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x1406882B4 (PnpQueryID.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1406C3364 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14081CE14 (IopInitializeDeviceInstanceKey.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     PiDevCfgProcessDevice @ 0x140873308 (PiDevCfgProcessDevice.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x14087E214 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     IopQueueDeviceResetEvent @ 0x14095467C (IopQueueDeviceResetEvent.c)
 *     PnpDisableDevice @ 0x1409559A8 (PnpDisableDevice.c)
 *     PiProcessSetDeviceProblem @ 0x1409566C8 (PiProcessSetDeviceProblem.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1409607E0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 *     PnpRebalance @ 0x14096B948 (PnpRebalance.c)
 *     PiProcessQueryRemoveNoFdo @ 0x14096EA58 (PiProcessQueryRemoveNoFdo.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     _PnpGetObjectProperty @ 0x1406D0FB4 (_PnpGetObjectProperty.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14070F610 (SeAuditingWithTokenForSubcategory.c)
 *     PnpTraceSetDevNodeProblem @ 0x14086697C (PnpTraceSetDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14096C730 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  unsigned int v6; // edi
  int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  PVOID **v11; // rcx
  int v12; // [rsp+60h] [rbp-10h] BYREF
  PVOID P; // [rsp+68h] [rbp-8h] BYREF
  int v14; // [rsp+A0h] [rbp+30h] BYREF
  int v15; // [rsp+B8h] [rbp+48h] BYREF

  P = 0LL;
  v12 = 0;
  v15 = 0;
  v14 = 0;
  v6 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v6 != a2 || v7 != a3 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipSetDevNodeFlags(a1, 0x2000);
    v8 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v8 )
    {
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v8,
                  1LL,
                  0LL,
                  0LL,
                  (__int64)DEVPKEY_Device_ProblemStatusOverride,
                  (__int64)&v14,
                  (__int64)&v12,
                  4,
                  (__int64)&v15,
                  0) >= 0
        && v14 == 24
        && v15 == 4
        && v12 )
      {
        *(_DWORD *)(a1 + 408) = v12;
      }
      if ( *(_DWORD *)(a1 + 404) != v6 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v9, *(_QWORD *)(a1 + 48), 12);
      if ( *(_DWORD *)(a1 + 408) != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v9, *(_QWORD *)(a1 + 48), 13);
      PnpTraceSetDevNodeProblem(
        a1 + 40,
        a1 + 56,
        *(_DWORD *)(a1 + 300),
        *(_DWORD *)(a1 + 404),
        *(_DWORD *)(a1 + 408),
        v6,
        v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(137, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v6, *(unsigned int *)(a1 + 404));
    }
    v10 = 3LL * *(unsigned int *)(a1 + 880);
    *(_QWORD *)(a1 + 8 * v10 + 784) = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(a1 + 8 * v10 + 792) = 1;
    *(_DWORD *)(a1 + 8 * v10 + 796) = a2;
    *(_DWORD *)(a1 + 8 * v10 + 800) = a3;
    v11 = (PVOID **)P;
    *(_DWORD *)(a1 + 880) = ((unsigned __int8)*(_DWORD *)(a1 + 880) + 1) & 3;
    if ( v11 )
      PiPnpRtlEndOperation(v11);
  }
}
