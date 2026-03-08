/*
 * XREFs of ?GetStats@CDDisplayRenderTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801186D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CDDisplayRenderTarget::GetStats(__int64 a1, struct tagCOMPOSITION_TARGET_STATS *a2)
{
  return CDDisplayRenderTarget::GetStats((CDDisplayRenderTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
