/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C007E7B4
 * Callers:
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0079F18 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     hfontCreate @ 0x1C007B9C0 (hfontCreate.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C007CA2C (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C007CCDC (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C007E760 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     EngCreateDriverObj @ 0x1C0284730 (EngCreateDriverObj.c)
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C02998F4 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C029A94C (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 *     NtGdiCreateClientObj @ 0x1C02A8370 (NtGdiCreateClientObj.c)
 * Callees:
 *     <none>
 */

struct HOBJ__ *__fastcall HmgInsertObjectHelper::Insert(
        HmgInsertObjectHelper *this,
        struct OBJECT *a2,
        unsigned __int8 a3,
        int a4)
{
  struct HOBJ__ *result; // rax

  result = 0LL;
  if ( !*((_QWORD *)this + 4) )
  {
    result = HmgInsertObjectInternal(a2, a4 | 1u, a3);
    if ( result )
      *((_QWORD *)this + 4) = a2;
  }
  return result;
}
