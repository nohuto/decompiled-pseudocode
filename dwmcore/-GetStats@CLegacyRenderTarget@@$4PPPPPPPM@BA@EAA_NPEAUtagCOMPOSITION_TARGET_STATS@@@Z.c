/*
 * XREFs of ?GetStats@CLegacyRenderTarget@@$4PPPPPPPM@BA@EAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x180118710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacyRenderTarget::GetStats(__int64 a1, struct tagCOMPOSITION_TARGET_STATS *a2)
{
  return CLegacyRenderTarget::GetStats((CLegacyRenderTarget *)(a1 - *(int *)(a1 - 4) - 16), a2);
}
