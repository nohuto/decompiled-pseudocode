/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18010544C
 * Callers:
 *     ?GetTargetId@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180118730 (-GetTargetId@CDDisplayRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CDDisplayRenderTarget::GetTargetId(CDDisplayRenderTarget *this)
{
  return (CDDisplayRenderTarget *)((char *)this - 304);
}
