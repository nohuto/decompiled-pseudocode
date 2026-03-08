/*
 * XREFs of ?GetDeviceTarget@CStereoRenderTargetBitmap@@$4PPPPPPPM@KI@EAAPEAVIDeviceTarget@@XZ @ 0x18011F7D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IDeviceTarget *__fastcall CStereoRenderTargetBitmap::GetDeviceTarget(__int64 a1)
{
  return CRenderTargetBitmap::GetDeviceTarget((CRenderTargetBitmap *)(a1 - *(int *)(a1 - 4) - 168));
}
