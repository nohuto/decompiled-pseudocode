char __fastcall MiReInitializeFreeSlabPfn(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // rcx
  char result; // al

  v2 = a1;
  a1[1] = (*(_DWORD *)(a2 + 80) != 2) - 2LL;
  a1[3] &= 0xFFFFFF0000000000uLL;
  *a1 = 0LL;
  v3 = a1 + 2;
  *v3 = ZeroPte;
  if ( (*((_BYTE *)v2 + 34) & 7) == 1 )
    MiSetOriginalPtePfnFromFreeList(v3, a2, v2);
  result = *((_BYTE *)v2 + 34) & 0xF8 | 5;
  *((_BYTE *)v2 + 34) = result;
  return result;
}
