__int64 __fastcall VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(unsigned int *a1)
{
  char v2; // r8
  unsigned int v3; // ecx
  unsigned int v4; // eax
  bool v5; // zf
  int v6; // ecx
  __int64 result; // rax

  v2 = -1;
  v3 = a1[7];
  v4 = a1[8];
  if ( v3 < v4 )
  {
    a1[4] &= ~(1 << v3);
    v5 = !_BitScanForward(&v3, a1[4]);
    if ( !v5 )
      v2 = v3;
    result = (unsigned int)v2;
    a1[7] = result;
  }
  else
  {
    a1[5] &= ~(1 << v4);
    v5 = !_BitScanForward((unsigned int *)&v6, a1[5]);
    if ( !v5 )
      v2 = v6;
    result = (unsigned int)v2;
    a1[8] = result;
  }
  ++a1[6];
  return result;
}
