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
