/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x140955000
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x1407855F8 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  if ( ControlCode == 2 )
  {
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownConnectionResourceForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownParentPdoForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &PPM_ETW_INTERRUPT_STEERING_STATE_RUNDOWN) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_InterruptResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PnpDiagRundownInterruptResourceForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
