__int64 __fastcall CBaseClipStack::Top(unsigned int *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rcx

  result = *a1;
  if ( (_DWORD)result )
  {
    v4 = (unsigned int)(result - 1);
    result = *((_QWORD *)a1 + 2);
    *a2 = *(_OWORD *)(result + 16 * v4);
  }
  else
  {
    *a2 = TMilRect<float,MilRectF,Mil3DRectF,RectUniqueness::NotNeeded>::sc_rcInfinite;
  }
  return result;
}
