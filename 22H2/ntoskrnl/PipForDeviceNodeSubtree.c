/*
 * XREFs of PipForDeviceNodeSubtree @ 0x1407CD688
 * Callers:
 *     PpProcessClearProblem @ 0x1403B0AE0 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x1407CD4F0 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407CD638 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x140813294 (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x140958020 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x140959904 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1409638C0 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406C99AC (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406C9A40 (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x1407CD710 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0);
  return (unsigned int)a1;
}
