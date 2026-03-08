/*
 * XREFs of MiClusterVadFull @ 0x1404674C0
 * Callers:
 *     MiTrimSharedPage @ 0x1403A0EBC (MiTrimSharedPage.c)
 *     MiPfnsWorthTrying @ 0x1403B6374 (MiPfnsWorthTrying.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiClusterVadFull(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v6; // r9
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r10
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // r10
  __int64 v12; // rdx

  v6 = (_QWORD *)(a1 + 8);
  v7 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  if ( a3 )
  {
    v8 = *(_QWORD *)(a3 + 8);
    if ( v7 < v8 || v7 >= v8 - 8LL * (*(_DWORD *)(a3 + 52) & 0x3FFFFFFF) + 8LL * *(unsigned int *)(a3 + 44) )
      return 0LL;
    v9 = (__int64)(v7 - v8) >> 3;
  }
  else
  {
    v9 = (v7 >> 3) & 0x1FF;
  }
  if ( (v9 & (a2 - 1)) == ((0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1 + 0x220000000000LL) >> 4)) & (a2 - 1)) )
  {
    v10 = 48 * a2 + a1 - 48;
    v11 = v7 + 8 * (a2 - 1);
    v12 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFFLL;
    if ( a1 >= v10 )
      return 1LL;
    while ( (v6[4] & 0xFFFFFFFFFFLL) == v12
         && (*(_QWORD *)(v10 + 40) & 0xFFFFFFFFFFLL) == v12
         && (*v6 | 0x8000000000000000uLL) == v7
         && (*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) == v11 )
    {
      v6 += 6;
      v10 -= 48LL;
      v7 += 8LL;
      v11 -= 8LL;
      if ( (unsigned __int64)(v6 - 1) >= v10 )
        return 1LL;
    }
  }
  return 0LL;
}
