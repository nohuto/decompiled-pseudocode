/*
 * XREFs of ?GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180118770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CLegacyRenderTarget::GetTargetId(__int64 a1)
{
  return CLegacyRenderTarget::GetTargetId((CLegacyRenderTarget *)(a1 - *(int *)(a1 - 4) - 16));
}
