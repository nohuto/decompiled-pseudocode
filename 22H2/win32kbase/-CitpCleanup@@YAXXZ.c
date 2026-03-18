/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00A3AD4
 * Callers:
 *     CitProcessCallout @ 0x1C00362EC (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0234774 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A4464 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&xmmword_1C0293D30);
  *((_WORD *)&qword_1C0293D24 + 2) = 0;
  byte_1C0293D11 = 1;
}
