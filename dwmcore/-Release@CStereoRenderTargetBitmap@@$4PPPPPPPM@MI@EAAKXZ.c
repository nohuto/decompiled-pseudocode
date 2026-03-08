/*
 * XREFs of ?Release@CStereoRenderTargetBitmap@@$4PPPPPPPM@MI@EAAKXZ @ 0x18011F990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CStereoRenderTargetBitmap::Release(__int64 a1)
{
  return CDxHandleYUVBitmapRealization::Release((volatile signed __int32 *)(a1 - *(int *)(a1 - 4) - 200));
}
