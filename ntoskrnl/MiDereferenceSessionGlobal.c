/*
 * XREFs of MiDereferenceSessionGlobal @ 0x1406350F4
 * Callers:
 *     MiActOnPatchInAllSessions @ 0x140A31950 (MiActOnPatchInAllSessions.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiUnapplyDriverHotPatch @ 0x140A390F8 (MiUnapplyDriverHotPatch.c)
 * Callees:
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14072665C (MiReleaseProcessReferenceToSessionDataPage.c)
 */

__int64 __fastcall MiDereferenceSessionGlobal(void *a1)
{
  return MiReleaseProcessReferenceToSessionDataPage(a1);
}
