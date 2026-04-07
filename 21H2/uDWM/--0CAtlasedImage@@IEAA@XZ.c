/*
 * XREFs of ??0CAtlasedImage@@IEAA@XZ @ 0x18002475C
 * Callers:
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x180001AEC (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800234D0 (-InitializeVisualTreeClone@CAtlasedRectsVisual@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?Create@CAtlasButton@@SAJPEAPEAV1@@Z @ 0x18002731C (-Create@CAtlasButton@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CAtlasedImage *__fastcall CAtlasedImage::CAtlasedImage(CAtlasedImage *this)
{
  CAtlasedImage *result; // rax

  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 17) = -1;
  *(_QWORD *)this = &CAtlasedImage::`vftable';
  *((_DWORD *)this + 13) = 0x80000000;
  *((_DWORD *)this + 12) = 0x80000000;
  result = this;
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 8) = 0x7FFFFFFF;
  *((_DWORD *)this + 10) = 0x7FFFFFFF;
  *((_DWORD *)this + 9) = 0x7FFFFFFF;
  *((_DWORD *)this + 11) = 0x7FFFFFFF;
  *((_DWORD *)this + 15) = 0x7FFFFFFF;
  *((_DWORD *)this + 14) = 0x7FFFFFFF;
  *((_DWORD *)this + 30) = 22;
  return result;
}
