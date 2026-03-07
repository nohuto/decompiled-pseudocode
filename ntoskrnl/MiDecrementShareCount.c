__int64 __fastcall MiDecrementShareCount(__int64 a1)
{
  __int64 v1; // rdx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v1 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v1 ^ (((v1 & 0x3FFFFFFFFFFFFFFFLL) - 1) ^ v1) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v1 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
