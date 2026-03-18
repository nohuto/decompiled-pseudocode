/*
 * XREFs of MiDereferenceSessionGlobal @ 0x14063757C
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140A34680 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A3BDD8 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x140706D8C (MiReleaseProcessReferenceToSessionDataPage.c)
 */

__int64 __fastcall MiDereferenceSessionGlobal(void *a1)
{
  return MiReleaseProcessReferenceToSessionDataPage(a1);
}
