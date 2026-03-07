__int64 __fastcall MiReduceShareCount(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
    MiBadShareCount(a1);
  v3 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)(a1 + 24) = v3 ^ (((v3 & 0x3FFFFFFFFFFFFFFFLL) - a2) ^ v3) & 0x3FFFFFFFFFFFFFFFLL;
  if ( (v3 & 0x3FFFFFFFFFFFFFFFLL) == a2 )
    return MiPfnShareCountIsZero(a1);
  else
    return 2LL;
}
