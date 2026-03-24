/*
 * XREFs of ?CitpCleanup@@YAXXZ @ 0x1C008BE4C
 * Callers:
 *     CitProcessCallout @ 0x1C0045FB0 (CitProcessCallout.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C01FE9D0 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C008BEA8 (-CitpCleanupGlobalImpactContext@@YAXPEAPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitpCleanup(void)
{
  REGHANDLE v0; // rcx

  CitpCleanupGlobalImpactContext(&xmmword_1C0255560);
  WORD2(qword_1C0255554) = 0;
  if ( (_BYTE)g_CompatImpact && !byte_1C0255531 )
  {
    v0 = qword_1C024A438;
    qword_1C024A438 = 0LL;
    dword_1C024A418 = 0;
    EtwUnregister(v0);
  }
  byte_1C0255531 = 1;
}
