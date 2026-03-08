/*
 * XREFs of ??$?0E$0?0$0?0$0A@@?$span@$$CBE$0?0@gsl@@QEAA@AEBV?$span@E$0?0@1@@Z @ 0x1801CF5EC
 * Callers:
 *     ?DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ @ 0x1801D08B0 (-DrawDirtyRegionVisualizationForCurrentNode@CDrawingContext@@AEAAJXZ.c)
 *     ?FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z @ 0x1801F26E8 (-FillXBRPass2Buffer@@YAJPEAVCSurfaceShaderComposer@@IIII@Z.c)
 * Callees:
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x1800254CC (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?terminate@details@gsl@@YAXXZ @ 0x1801AEDB0 (-terminate@details@gsl@@YAXXZ.c)
 */

_QWORD *__fastcall gsl::span<unsigned char const,-1>::span<unsigned char const,-1>(_QWORD *a1, __int64 *a2)
{
  gsl::details *v4; // rax
  gsl::details *v5; // rcx
  __int64 v6; // rax
  char v8; // [rsp+30h] [rbp+8h] BYREF

  v4 = gsl::details::extent_type<-1>::extent_type<-1>((gsl::details *)&v8, *a2);
  v5 = (gsl::details *)a2[1];
  v6 = *(_QWORD *)v4;
  *a1 = v6;
  a1[1] = v5;
  if ( v6 == -1 || !v5 && v6 )
  {
    gsl::details::terminate(v5);
    JUMPOUT(0x1801CF63BLL);
  }
  return a1;
}
