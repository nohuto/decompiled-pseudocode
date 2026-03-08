/*
 * XREFs of ?GetTargetId@CHolographicInteropTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180107E08
 * Callers:
 *     ?GetTargetId@CHolographicInteropTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18011D650 (-GetTargetId@CHolographicInteropTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CHolographicInteropTarget::GetTargetId(
        CHolographicInteropTarget *this)
{
  return (CHolographicInteropTarget *)((char *)this - 128);
}
