/*
 * XREFs of KeIsImageIATProtected @ 0x14056C58C
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A350D8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A3A024 (MiMapAndApplyPatchInSession.c)
 *     VfUtilIsProtectedDriver @ 0x140AC37CC (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}
