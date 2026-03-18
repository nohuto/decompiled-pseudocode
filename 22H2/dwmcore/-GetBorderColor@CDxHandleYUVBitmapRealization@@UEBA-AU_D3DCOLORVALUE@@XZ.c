/*
 * XREFs of ?GetBorderColor@CDxHandleYUVBitmapRealization@@UEBA?AU_D3DCOLORVALUE@@XZ @ 0x180108D7C
 * Callers:
 *     ?GetBorderColor@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA?AU_D3DCOLORVALUE@@XZ @ 0x180122F40 (-GetBorderColor@CDxHandleYUVBitmapRealization@@$4PPPPPPPM@A@EBA-AU_D3DCOLORVALUE@@XZ.c)
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
