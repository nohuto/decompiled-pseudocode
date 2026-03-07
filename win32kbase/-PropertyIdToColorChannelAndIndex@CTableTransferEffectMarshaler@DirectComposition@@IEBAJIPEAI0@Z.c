__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::PropertyIdToColorChannelAndIndex(
        DirectComposition::CTableTransferEffectMarshaler *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  if ( (a2 & 0xF) == 0xF && a2 >> 6 < *((_DWORD *)this + 4 * ((a2 >> 4) & 3) + 30) )
  {
    *a4 = a2 >> 6;
    *a3 = (a2 >> 4) & 3;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
