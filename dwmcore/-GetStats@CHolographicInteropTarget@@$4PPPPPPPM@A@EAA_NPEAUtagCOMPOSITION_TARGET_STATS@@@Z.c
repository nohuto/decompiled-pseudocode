/*
 * XREFs of ?GetStats@CHolographicInteropTarget@@$4PPPPPPPM@A@EAA_NPEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x18011D630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CHolographicInteropTarget::GetStats(__int64 a1, struct tagCOMPOSITION_TARGET_STATS *a2)
{
  return CHolographicInteropTarget::GetStats((CHolographicInteropTarget *)(a1 - *(int *)(a1 - 4)), a2);
}
