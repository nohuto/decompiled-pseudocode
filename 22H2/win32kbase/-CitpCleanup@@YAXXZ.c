/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C008CCEC
 * Callers:
 *     CitProcessCallout @ 0x1C0047420 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01FE900 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008CD48 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  REGHANDLE v0; // rcx

  CitpCleanupGlobalImpactContext(&xmmword_1C0254590);
  WORD2(qword_1C0254584) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C0254561 )
  {
    v0 = qword_1C0249438;
    qword_1C0249438 = 0LL;
    dword_1C0249418 = 0;
    EtwUnregister(v0);
  }
  byte_1C0254561 = 1;
}
