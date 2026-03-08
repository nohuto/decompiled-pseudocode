/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00B02F4
 * Callers:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C02734F8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0C84 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  CitpCleanupGlobalImpactContext(&xmmword_1C02D4DA0);
  *((_WORD *)&qword_1C02D4D94 + 2) = 0;
  byte_1C02D4D81 = 1;
}
