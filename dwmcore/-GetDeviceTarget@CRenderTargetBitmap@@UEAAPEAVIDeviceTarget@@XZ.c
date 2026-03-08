/*
 * XREFs of ?GetDeviceTarget@CRenderTargetBitmap@@UEAAPEAVIDeviceTarget@@XZ @ 0x180108210
 * Callers:
 *     ?GetDeviceTarget@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAPEAVIDeviceTarget@@XZ @ 0x18011F7D0 (-GetDeviceTarget@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAPEAVIDeviceTarget@@XZ.c)
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CRenderTargetBitmap::GetDeviceTarget(CRenderTargetBitmap *this)
{
  return (struct IDeviceTarget *)*((_QWORD *)this + 2);
}
