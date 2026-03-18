/*
 * XREFs of ?Insert@HmgInsertObjectHelper@@QEAAPEAUHOBJ__@@PEAVOBJECT@@EK@Z @ 0x1C0022858
 * Callers:
 *     hfontCreate @ 0x1C0013DE0 (hfontCreate.c)
 *     ?hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ @ 0x1C0022804 (-hrgnAssociate@RGNOBJ@@QEAAPEAUHRGN__@@XZ.c)
 *     ?hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z @ 0x1C0083AA4 (-hspCreateDwmSpriteObj@@YAPEAUHSPRITE__@@PEAUHWND__@@_KPEAUHDEV__@@H@Z.c)
 *     ?hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@@Z @ 0x1C0083E2C (-hlsurfCreateLogicalSurfaceObject@@YAPEAUHLSURF__@@QEAUHDEV__@@KPEAU_CD_HLSURF_CREATIONCONTEXT@@.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00FE390 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     NtGdiCreateClientObj @ 0x1C0142AC0 (NtGdiCreateClientObj.c)
 *     EngCreateDriverObj @ 0x1C0282C50 (EngCreateDriverObj.c)
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0291ACC (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
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
