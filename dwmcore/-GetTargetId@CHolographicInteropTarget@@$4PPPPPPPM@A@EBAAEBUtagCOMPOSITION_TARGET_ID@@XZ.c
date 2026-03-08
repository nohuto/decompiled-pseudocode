/*
 * XREFs of ?GetTargetId@CHolographicInteropTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18011D650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CHolographicInteropTarget::GetTargetId(__int64 a1)
{
  return CHolographicInteropTarget::GetTargetId((CHolographicInteropTarget *)(a1 - *(int *)(a1 - 4)));
}
