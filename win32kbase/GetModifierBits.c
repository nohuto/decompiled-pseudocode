__int64 __fastcall GetModifierBits(unsigned __int8 **a1, __int64 a2)
{
  unsigned __int8 *v2; // r8
  unsigned __int16 v3; // r10

  v2 = *a1;
  v3 = 0;
  while ( *v2 )
  {
    if ( ((unsigned __int8)(1 << (2 * (*v2 & 3))) & *(_BYTE *)(((unsigned __int64)*v2 >> 2) + a2)) != 0 )
      v3 |= v2[1];
    v2 += 2;
  }
  return v3;
}
