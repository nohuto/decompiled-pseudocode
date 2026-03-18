/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C00A2CAC
 * Callers:
 *     CitProcessCallout @ 0x1C0016FF0 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0240624 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00A2D08 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  REGHANDLE v0; // rcx

  CitpCleanupGlobalImpactContext(&xmmword_1C029A230);
  WORD2(qword_1C029A224) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C029A201 )
  {
    v0 = qword_1C028D8A8;
    qword_1C028D8A8 = 0LL;
    dword_1C028D888 = 0;
    EtwUnregister(v0);
  }
  byte_1C029A201 = 1;
}
