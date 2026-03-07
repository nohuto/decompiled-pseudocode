__int64 __fastcall SepConvertTokenPrivilegesToLuidAndAttributes(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned int i; // r10d
  __int64 v4; // r9

  v2 = 0LL;
  for ( i = 0; i <= 0x24; ++i )
  {
    if ( ((1LL << i) & a1[8]) != 0 )
    {
      v4 = 3 * v2;
      *(_QWORD *)(a2 + 4 * v4) = (int)i;
      *(_DWORD *)(a2 + 4 * v4 + 8) = (((1LL << i) & a1[9]) != 0 ? 2 : 0) | (((1LL << i) & a1[10]) != 0);
      v2 = (unsigned int)(v2 + 1);
    }
  }
  return (unsigned int)v2;
}
