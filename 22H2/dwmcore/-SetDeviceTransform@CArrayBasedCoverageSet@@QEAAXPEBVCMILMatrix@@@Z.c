/*
 * XREFs of ?SetDeviceTransform@CArrayBasedCoverageSet@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800C38A0
 * Callers:
 *     ?SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z @ 0x180076DE8 (-SetDeviceTransform@COcclusionContext@@QEBAJPEBVCMILMatrix@@@Z.c)
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x180076FE4 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUMilRectF@@UMil3D.c)
 * Callees:
 *     ?UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z @ 0x1800C399C (-UpdateDeviceRect@CZOrderedRect@@QEAAXPEBVCMILMatrix@@@Z.c)
 */

void __fastcall CArrayBasedCoverageSet::SetDeviceTransform(CArrayBasedCoverageSet *this, const struct CMILMatrix *a2)
{
  __int64 v2; // rbx
  unsigned int i; // esi

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
    CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*(_QWORD *)this + 36LL * i), a2);
  if ( *((_DWORD *)this + 104) )
  {
    do
    {
      CZOrderedRect::UpdateDeviceRect((CZOrderedRect *)(*((_QWORD *)this + 49) + 36 * v2), a2);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < *((_DWORD *)this + 104) );
  }
}
