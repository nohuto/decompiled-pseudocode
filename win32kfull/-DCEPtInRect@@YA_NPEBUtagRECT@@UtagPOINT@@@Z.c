/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0144B14
 * Callers:
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01D7120 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C01D74F0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01D9320 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C01D96B0 (NtUserPhysicalToLogicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x1C01F8960 (EditionQueryInertiaWorker.c)
 * Callees:
 *     <none>
 */

bool __fastcall DCEPtInRect(const struct tagRECT *a1, struct tagPOINT a2)
{
  bool result; // al

  result = 0;
  if ( a1 && a2.x >= a1->left && a2.x <= a1->right && a2.y >= a1->top )
    return a2.y <= a1->bottom;
  return result;
}
