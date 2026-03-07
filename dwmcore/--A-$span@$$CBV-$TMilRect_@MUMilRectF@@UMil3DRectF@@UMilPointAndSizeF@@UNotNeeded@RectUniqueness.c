__int64 __fastcall gsl::span<TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded> const,-1>::operator[](
        gsl::details *a1,
        unsigned __int64 a2)
{
  if ( a2 >= *(_QWORD *)a1 )
  {
    gsl::details::terminate(a1);
    JUMPOUT(0x180021EAFLL);
  }
  return *((_QWORD *)a1 + 1) + 16 * a2;
}
