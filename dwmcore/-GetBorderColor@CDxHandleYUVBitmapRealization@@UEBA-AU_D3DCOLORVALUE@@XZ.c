/*
 * XREFs of ?GetBorderColor@CDxHandleYUVBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x18010823C
 * Callers:
 *     ?GetBorderColor@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_D3DCOLORVALUE@@XZ @ 0x18011ED90 (-GetBorderColor@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_D3DCOLORVALUE@@XZ.c)
 * Callees:
 *     <none>
 */

struct _D3DCOLORVALUE *__fastcall CDxHandleYUVBitmapRealization::GetBorderColor(
        CDxHandleYUVBitmapRealization *this,
        struct _D3DCOLORVALUE *__return_ptr retstr)
{
  struct _D3DCOLORVALUE *result; // rax

  result = retstr;
  *(struct _D3DCOLORVALUE *)&retstr->r = *(struct _D3DCOLORVALUE *)((char *)this - 388);
  return result;
}
