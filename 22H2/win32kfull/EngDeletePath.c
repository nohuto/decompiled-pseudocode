/*
 * XREFs of EngDeletePath @ 0x1C015A800
 * Callers:
 *     ?GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z @ 0x1C015AA68 (-GetCLIPOBJPath@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU_CLIPOBJ@@@Z.c)
 *     EngLineTo @ 0x1C028D530 (EngLineTo.c)
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C02997BC (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 *     NtGdiEngDeletePath @ 0x1C02C97C0 (NtGdiEngDeletePath.c)
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
