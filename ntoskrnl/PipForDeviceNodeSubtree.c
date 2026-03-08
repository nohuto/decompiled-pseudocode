/*
 * XREFs of PipForDeviceNodeSubtree @ 0x1407855F8
 * Callers:
 *     PpProcessClearProblem @ 0x1403ABD90 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140785460 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1407855A8 (PiMarkDeviceTreeForReenumeration.c)
 *     PpDevCfgProcessDevices @ 0x14081B964 (PpDevCfgProcessDevices.c)
 *     PnpDiagRundownRegisterCallback @ 0x140955000 (PnpDiagRundownRegisterCallback.c)
 *     PpResetProblemDevices @ 0x1409568E4 (PpResetProblemDevices.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x1409608A0 (PiProfileUpdateDeviceTreeWorker.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x140785680 (PipForAllChildDeviceNodes.c)
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
