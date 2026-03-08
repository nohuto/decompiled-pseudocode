/*
 * XREFs of ?FindLowestPriorityOverlayCandidateIndex@COverlayContext@@CAHAEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@@Z @ 0x1801DA3B4
 * Callers:
 *     ?TrimCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801DB284 (-TrimCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ??A?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayContext@@_K@Z @ 0x18012B5A2 (--A-$span@PEAVOverlayPlaneInfo@COverlayContext@@$0-0@gsl@@QEBAAEAPEAVOverlayPlaneInfo@COverlayCo.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x1801DAB88 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 */

__int64 __fastcall COverlayContext::FindLowestPriorityOverlayCandidateIndex(gsl::details *a1)
{
  int v1; // edi
  unsigned int i; // ebp
  const struct COverlayContext::OverlayPlaneInfo *v4; // rbx
  const struct COverlayContext::OverlayPlaneInfo **v5; // rax

  v1 = -1;
  if ( *(_QWORD *)a1 )
  {
    v1 = 0;
    for ( i = 1; i < *(_DWORD *)a1; ++i )
    {
      v4 = *(const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                 a1,
                                                                 v1);
      v5 = (const struct COverlayContext::OverlayPlaneInfo **)gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](
                                                                a1,
                                                                i);
      if ( !COverlayContext::IsHigherProprity(*v5, v4) )
        v1 = i;
    }
  }
  return (unsigned int)v1;
}
