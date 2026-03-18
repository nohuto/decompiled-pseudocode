/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180105F4C
 * Callers:
 *     ?GetTargetId@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18011C8E0 (-GetTargetId@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CDDisplayRenderTarget::GetTargetId(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this - 304);
}
