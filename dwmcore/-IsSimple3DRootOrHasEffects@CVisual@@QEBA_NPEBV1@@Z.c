/*
 * XREFs of ?IsSimple3DRootOrHasEffects@CVisual@@QEBA_NPEBV1@@Z @ 0x1800E76A8
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006E820 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z @ 0x1800E7548 (-GetRootTransform@CVisual@@QEBA_NPEAVCMILMatrix@@_N1@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x1801D05E8 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 * Callees:
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x1800AA170 (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x1800C31F4 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall CVisual::IsSimple3DRootOrHasEffects(CVisual *this, const struct CVisual *a2)
{
  int v2; // r15d
  char v4; // bl
  bool v5; // si
  int Count; // r14d
  bool v7; // bp
  bool v8; // al
  struct CEffect *EffectInternal; // rax

  v2 = *((_DWORD *)this + 27);
  v4 = 1;
  v5 = a2 && *((_DWORD *)a2 + 27) == 1;
  Count = CPtrArrayBase::GetCount((CVisual *)((char *)this + 80));
  v7 = 0;
  if ( (**((_DWORD **)this + 29) & 0x400000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal(this);
    if ( (*(unsigned __int8 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 56LL))(
           EffectInternal,
           61LL) )
    {
      v7 = 1;
    }
  }
  v8 = (*(__int64 (__fastcall **)(CVisual *))(*(_QWORD *)this + 216LL))(this) != 0;
  if ( v2 != 1 )
  {
    if ( !v5 )
      return 0;
    if ( Count )
      return v4;
  }
  if ( !v5 || !v7 && !v8 )
    return 0;
  return v4;
}
