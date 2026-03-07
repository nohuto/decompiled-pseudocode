__int64 __fastcall ObpHashBoundaryFunction(__int64 a1, __int64 a2)
{
  unsigned int v2; // r8d
  _BYTE *v3; // r10
  char v4; // r9

  v2 = 8;
  v3 = (_BYTE *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > 8u )
  {
    v4 = *(_BYTE *)(a2 + 40);
    do
    {
      v4 += *v3;
      ++v2;
      ++v3;
      *(_BYTE *)(a2 + 40) = v4;
    }
    while ( v2 < *(_DWORD *)(a1 + 4) );
  }
  return 1LL;
}
