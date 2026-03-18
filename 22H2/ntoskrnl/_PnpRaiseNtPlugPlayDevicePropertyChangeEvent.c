/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140797720
 * Callers:
 *     PipSetDevNodeState @ 0x14022AEA4 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B6928 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B6A4C (PnpRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDevice @ 0x1406C82E4 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeUserFlags @ 0x140790BCC (PipSetDevNodeUserFlags.c)
 *     PipClearDevNodeUserFlags @ 0x1407938F0 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x140795910 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x140795BDC (PipSetDevNodeFlags.c)
 *     PiProcessNewDeviceNode @ 0x140795C58 (PiProcessNewDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x14079856C (PipClearDevNodeFlags.c)
 *     PipProcessStartPhase3 @ 0x14079BED4 (PipProcessStartPhase3.c)
 *     IopIncDisableableDepends @ 0x1407E71DC (IopIncDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x140839DCC (PipNotifyDependenciesChanged.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140868334 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086966C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408697BC (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086F3AC (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopDecDisableableDepends @ 0x14096CD80 (IopDecDisableableDepends.c)
 *     PiInitializeDevice @ 0x14096DB94 (PiInitializeDevice.c)
 * Callees:
 *     _CmMapPropertyKeyToRegProp @ 0x140797794 (_CmMapPropertyKeyToRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140797804 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x14086D074 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_140008080[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
