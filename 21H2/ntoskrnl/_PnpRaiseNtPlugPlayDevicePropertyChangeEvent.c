/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140746040
 * Callers:
 *     PipRestoreDevNodeState @ 0x14036D7A0 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14036E5C8 (PnpRemoveLockedDeviceNode.c)
 *     PipSetDevNodeState @ 0x14036F9E8 (PipSetDevNodeState.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140737C58 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1407394EC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140739754 (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x140741988 (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140744490 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x140745380 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x14074561C (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x140746A74 (PipClearDevNodeFlags.c)
 *     PipClearDevNodeUserFlags @ 0x140749BB4 (PipClearDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x14074AB70 (PipProcessStartPhase3.c)
 *     PipSetDevNodeUserFlags @ 0x14074C32C (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14074C844 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x1407C59E8 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407D52E8 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14089DF6C (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x1408B3C6C (PiInitializeDevice.c)
 * Callees:
 *     _CmRaisePropertyChangeEvent @ 0x1407443D4 (_CmRaisePropertyChangeEvent.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1407460B4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x140746728 (_CmMapPropertyKeyToRegProp.c)
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
    v6 = qword_140007FA0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return (__int64)CmRaisePropertyChangeEvent(v3, a2, 1u, 0LL, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
