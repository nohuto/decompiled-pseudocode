/*
 * XREFs of ?GetTargetId@CLegacyRenderTarget@@UEBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x18010545C
 * Callers:
 *     ?GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180118750 (-GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@A@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 *     ?GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ @ 0x180118770 (-GetTargetId@CLegacyRenderTarget@@$4PPPPPPPM@BA@EBAAEBUtagCOMPOSITION_TARGET_ID@@XZ.c)
 * Callees:
 *     <none>
 */

const struct tagCOMPOSITION_TARGET_ID *__fastcall CLegacyRenderTarget::GetTargetId(CLegacyRenderTarget *this)
{
  return (CLegacyRenderTarget *)((char *)this - 320);
}
