/*
 * XREFs of KeIsImageIATProtected @ 0x14056A0EC
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A323A8 (MiApplyHotPatchToLoadedDriver.c)
 *     MiMapAndApplyPatchInSession @ 0x140A37338 (MiMapAndApplyPatchInSession.c)
 *     VfUtilIsProtectedDriver @ 0x140ABF7CC (VfUtilIsProtectedDriver.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsImageIATProtected(__int64 a1)
{
  return HIBYTE(*(unsigned __int16 *)(a1 + 110)) & 1;
}
