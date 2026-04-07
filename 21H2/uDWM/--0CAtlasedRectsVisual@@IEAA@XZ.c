/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x1800267B4
 * Callers:
 *     ?Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180027BF8 (-Create@CAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z @ 0x180027D78 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x180028D0C (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z @ 0x18009B134 (-Create@CAnimatedGlassSheet@@SAJPEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180024B20 (--0CVisual@@IEAA@XZ.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CAtlasedRectsVisual::`vftable';
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0LL;
  return (CAtlasedRectsVisual *)v1;
}
