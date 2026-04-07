/*
 * XREFs of ??0CRenderDataVisual@@IEAA@XZ @ 0x180025268
 * Callers:
 *     ?Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z @ 0x180009594 (-Create@CAccentBlurBehind@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CRenderDataVisual@@SAJPEAPEAV1@@Z @ 0x1800275E0 (-Create@CRenderDataVisual@@SAJPEAPEAV1@@Z.c)
 *     ??0CTopLevelWindow3D@@IEAA@XZ @ 0x180027D7C (--0CTopLevelWindow3D@@IEAA@XZ.c)
 *     ??0CText@@AEAA@XZ @ 0x180029664 (--0CText@@AEAA@XZ.c)
 *     ??0CThumbnailVisual@@IEAA@XZ @ 0x18002B4C4 (--0CThumbnailVisual@@IEAA@XZ.c)
 *     ??0CAccent@@IEAA@XZ @ 0x18002C2DC (--0CAccent@@IEAA@XZ.c)
 *     ??0CAnimatedTransitionVisual@@IEAA@XZ @ 0x180034278 (--0CAnimatedTransitionVisual@@IEAA@XZ.c)
 *     ?Create@CImage@@SAJPEAPEAV1@@Z @ 0x18003EC04 (-Create@CImage@@SAJPEAPEAV1@@Z.c)
 *     ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180041D48 (--0CTransitionWindowSnapshot@@IEAA@XZ.c)
 *     ??0CAccentAcrylicBlurBehind@@QEAA@XZ @ 0x18004615C (--0CAccentAcrylicBlurBehind@@QEAA@XZ.c)
 *     ?Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z @ 0x180047B8C (-Create@CDesktopWindowReplacement@@SAJPEAPEAV1@@Z.c)
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x18004813C (--0CTouchVisual@@IEAA@_K@Z.c)
 *     ??0CLivePreview@@IEAA@XZ @ 0x18004B1B8 (--0CLivePreview@@IEAA@XZ.c)
 *     ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x18008A99C (--0CImmersiveWindowIconic@@IEAA@XZ.c)
 *     ?Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z @ 0x18008E3A8 (-Create@CProjectionBorderVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z @ 0x180096AD0 (-Create@CDesktopThumbnailCVIVisual@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CScreenRotation@@SAJPEAPEAV1@@Z @ 0x180096BE4 (-Create@CScreenRotation@@SAJPEAPEAV1@@Z.c)
 *     ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x1800B9170 (--0CIconicAnimatedVisual@@IEAA@XZ.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x1800242E0 (--0CVisual@@IEAA@XZ.c)
 */

CRenderDataVisual *__fastcall CRenderDataVisual::CRenderDataVisual(CRenderDataVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CDesktopWindowReplacement::`vftable';
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_QWORD *)(v1 + 264) = 0LL;
  *(_DWORD *)(v1 + 272) = 0;
  *(_QWORD *)(v1 + 240) = 0LL;
  return (CRenderDataVisual *)v1;
}
