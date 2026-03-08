/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180118730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CDDisplayRenderTarget::GetTargetId(__int64 a1)
{
  return CDDisplayRenderTarget::GetTargetId((CDDisplayRenderTarget *)(a1 - *(int *)(a1 - 4)));
}
