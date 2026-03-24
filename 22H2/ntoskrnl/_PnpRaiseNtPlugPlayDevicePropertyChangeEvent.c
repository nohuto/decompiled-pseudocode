/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1407424E0
 * Callers:
 *     PipSetDevNodeState @ 0x14036EEA8 (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x140370078 (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x140371258 (PipRestoreDevNodeState.c)
 *     PipClearDevNodeProblem @ 0x140735BFC (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x14073DE28 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140740930 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140741820 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x140741ABC (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140742F14 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x140746054 (PipClearDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x140747010 (PipProcessStartPhase3.c)
 *     PipSetDevNodeUserFlags @ 0x1407487CC (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140748CE4 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14074AADC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x14074C18C (PipSetDevNodeProblem.c)
 *     IopIncDisableableDepends @ 0x1407C61A8 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407D5208 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14089DFBC (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1408B3CBC (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x140740874 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140742554 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x140742BC8 (_CmMapPropertyKeyToRegProp.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_140007FC0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
