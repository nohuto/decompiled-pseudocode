/*
 * XREFs of ?DCEPtInRect@@YA_NPEBUtagRECT@@UtagPOINT@@@Z @ 0x1C00F8768
 * Callers:
 *     NtUserLogicalToPhysicalPoint @ 0x1C00F83A0 (NtUserLogicalToPhysicalPoint.c)
 *     NtUserPhysicalToLogicalPoint @ 0x1C00F8560 (NtUserPhysicalToLogicalPoint.c)
 *     NtUserLogicalToPerMonitorDPIPhysicalPoint @ 0x1C01F8DC0 (NtUserLogicalToPerMonitorDPIPhysicalPoint.c)
 *     NtUserPerMonitorDPIPhysicalToLogicalPoint @ 0x1C01FADC0 (NtUserPerMonitorDPIPhysicalToLogicalPoint.c)
 *     EditionQueryInertiaWorker @ 0x1C02131E0 (EditionQueryInertiaWorker.c)
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
