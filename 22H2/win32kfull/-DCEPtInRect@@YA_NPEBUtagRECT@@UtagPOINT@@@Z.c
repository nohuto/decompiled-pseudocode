/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C0151814
 * Callers:
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01D60F0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserLogicalToPhysicalPoint @ 0x1C01D64C0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01D82F0 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C01D8680 (NtUserPhysicalToLogicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x1C01F7790 (EditionQueryInertiaWorker.c)
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
