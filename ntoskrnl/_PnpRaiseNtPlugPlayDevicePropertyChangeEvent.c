/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140687320
 * Callers:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B1C68 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1403B1D8C (PnpRemoveLockedDeviceNode.c)
 *     IopIncDisableableDepends @ 0x140680D8C (IopIncDisableableDepends.c)
 *     PipSetDevNodeUserFlags @ 0x140680EF0 (PipSetDevNodeUserFlags.c)
 *     PipProcessStartPhase3 @ 0x14068203C (PipProcessStartPhase3.c)
 *     PipClearDevNodeUserFlags @ 0x1406831A8 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x140685510 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1406857DC (PipSetDevNodeFlags.c)
 *     PiProcessNewDeviceNode @ 0x140685858 (PiProcessNewDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x14068816C (PipClearDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x1406C644C (PipCallDriverAddDevice.c)
 *     PipNotifyDependenciesChanged @ 0x140838D1C (PipNotifyDependenciesChanged.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140862FDC (PnpUnlinkDeviceRemovalRelations.c)
 *     PipClearDevNodeProblem @ 0x14086666C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeProblem @ 0x1408667BC (PipSetDevNodeProblem.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14086CE8C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopDecDisableableDepends @ 0x140969D60 (IopDecDisableableDepends.c)
 *     PiInitializeDevice @ 0x14096AB74 (PiInitializeDevice.c)
 * Callees:
 *     _CmMapPropertyKeyToRegProp @ 0x140687394 (_CmMapPropertyKeyToRegProp.c)
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140687404 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmRaisePropertyChangeEvent @ 0x14086A444 (_CmRaisePropertyChangeEvent.c)
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
    v6 = qword_1400080D0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
