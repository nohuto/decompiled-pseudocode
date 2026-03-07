bool __fastcall TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::IsInfinite(_DWORD *a1)
{
  return *a1 <= (unsigned int)TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::sc_rcInfinite
      && a1[2] >= (unsigned int)dword_1803E1F98
      || a1[1] <= (unsigned int)dword_1803E1F94 && a1[3] >= (unsigned int)dword_1803E1F9C;
}
