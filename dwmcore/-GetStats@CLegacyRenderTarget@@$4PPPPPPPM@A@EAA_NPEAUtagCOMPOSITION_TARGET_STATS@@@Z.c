/*
 * XREFs of ?GetStats@CLegacyRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801186F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall CLegacyRenderTarget::GetStats(__int64 a1, struct tagCOMPOSITION_TARGET_STATS *a2)
{
  return CLegacyRenderTarget::GetStats((CLegacyRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
