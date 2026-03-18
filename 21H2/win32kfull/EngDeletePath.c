/*
 * XREFs of EngDeletePath @ 0x1C016EC90
 * Callers:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C0128098 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     EngLineTo @ 0x1C01338B0 (EngLineTo.c)
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C016EE38 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     NtGdiEngDeletePath @ 0x1C02B14B0 (NtGdiEngDeletePath.c)
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
