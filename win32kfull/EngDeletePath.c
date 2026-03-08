/*
 * XREFs of EngDeletePath @ 0x1C014D9C0
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C014DC28 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     EngLineTo @ 0x1C028FDB0 (EngLineTo.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C029BFDC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiEngDeletePath @ 0x1C02CBE60 (NtGdiEngDeletePath.c)
 * Callees:
 *     <none>
 */

void __stdcall EngDeletePath(PATHOBJ *ppo)
{
  if ( ppo )
  {
    EPATHOBJ::vUnlock((EPATHOBJ *)ppo);
    Win32FreePool(ppo);
  }
}
