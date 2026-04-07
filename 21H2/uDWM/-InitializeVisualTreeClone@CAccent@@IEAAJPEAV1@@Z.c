/*
 * XREFs of ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18002F414
 * Callers:
 *     ?CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z @ 0x18002F390 (-CloneVisualTree@CAccent@@UEAAJPEAPEAVCVisual@@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800012A0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180001760 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ @ 0x180005D88 (-_EnsureBorderShadowAtlas@CAccent@@IEAAJXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800066B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x1800251AC (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z @ 0x180028148 (-SetInsetFromParent@CVisual@@QEAAXAEBU_MARGINS@@@Z.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180028EA0 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 */

__int64 __fastcall CAccent::InitializeVisualTreeClone(CAccent *this, struct CAccent *a2)
{
  int updated; // esi
  int v6; // edi
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct _MARGINS v11; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)this + 70) != 3 )
  {
    updated = CAccent::UpdateAccentPolicy(
                a2,
                (const struct tagRECT *)((char *)this + 616),
                (__m128i *)((char *)this + 280),
                *((struct CBaseGeometryProxy **)this + 52));
    if ( updated < 0 )
    {
      v9 = 614LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)updated);
      return (unsigned int)updated;
    }
  }
  if ( (*((_BYTE *)this + 284) & 0xE0) == 0 )
    return 0LL;
  *((_BYTE *)a2 + 398) = 1;
  v11 = 0LL;
  updated = CRenderDataVisual::ClearInstructions(a2);
  if ( updated < 0 )
  {
    v9 = 622LL;
    goto LABEL_12;
  }
  CVisual::SetInsetFromParent((struct _MARGINS *)a2, &v11);
  *((_DWORD *)a2 + 71) = *((_DWORD *)this + 71);
  v6 = CAccent::_EnsureBorderShadowAtlas(a2);
  if ( v6 < 0 )
  {
    v10 = 625LL;
LABEL_15:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v6 = CAccent::_UpdateBorderShadowParts((CAtlasedRectsVisual **)a2);
  if ( v6 < 0 )
  {
    v10 = 626LL;
    goto LABEL_15;
  }
  v7 = CAccent::_UpdateBorderShadowForAccent(a2);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x273,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)(unsigned int)v7);
  return v8;
}
