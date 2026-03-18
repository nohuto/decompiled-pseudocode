/*
 * XREFs of ?SetTransform@CSurfaceBrush@@QEAAJPEAVCComponentTransform2D@@@Z @ 0x1800F8884
 * Callers:
 *     ?ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETTRANSFORM@@@Z @ 0x1800F8834 (-ProcessSetTransform@CSurfaceBrush@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_SURFACEBRUSH_SETTRANS.c)
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z @ 0x180248EDC (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@@Z.c)
 *     ?AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z @ 0x180249148 (-AdjustSurfaceBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCSurfaceBrush@@@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800235AC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RegisterNotifier@CResource@@QEAAJPEAV1@@Z @ 0x18004A8DC (-RegisterNotifier@CResource@@QEAAJPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C0E8C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18011B9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSurfaceBrush::SetTransform(struct CResource **this, struct CComponentTransform2D *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rcx
  struct CResource *v7; // rcx

  v2 = 0;
  if ( a2 != this[15] )
  {
    v5 = CResource::RegisterNotifier((CResource *)this, a2);
    v2 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0x101u, 0LL);
    }
    else
    {
      CResource::UnRegisterNotifierInternal((CResource *)this, this[15]);
      v7 = *this;
      this[15] = a2;
      (*((void (__fastcall **)(struct CResource **, _QWORD, struct CResource **))v7 + 9))(this, 0LL, this);
    }
  }
  return v2;
}
