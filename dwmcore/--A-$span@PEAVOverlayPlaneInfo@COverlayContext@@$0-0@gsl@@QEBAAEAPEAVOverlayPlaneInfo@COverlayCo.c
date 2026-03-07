__int64 __fastcall gsl::span<COverlayContext::OverlayPlaneInfo *,-1>::operator[](gsl::details *a1, unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x18012B5BELL);
  }
  return *((_QWORD *)a1 + 1) + 8 * a2;
}
