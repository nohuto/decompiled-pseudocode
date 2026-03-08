/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C018DE48
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0025C00 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C0027994 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C0027A4C (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct D3DKMT_GETPATHSMODALITY **a1,
        unsigned int a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int i; // r15d
  __int64 v7; // rsi
  int PathsModality; // eax
  unsigned int v9; // ebx
  int v11; // eax
  unsigned int v12; // ebp
  unsigned int v13; // ebx
  int v14; // edx
  struct D3DKMT_GETPATHSMODALITY *v15; // rax
  struct D3DKMT_GETPATHSMODALITY *v16; // rax
  struct D3DKMT_GETPATHSMODALITY *v17; // rcx
  _OWORD *v18; // r8
  _OWORD *v19; // rax
  __int128 v20; // xmm1

  i = 0;
  v7 = 2LL;
  if ( a2 < 2 )
  {
    PathsModality = GetPathsModality((__int64)a1, a3, a2 != 0 ? 8 : 1, 0);
    v9 = PathsModality;
    if ( PathsModality < 0 )
      WdLogSingleEntry2(2LL, PathsModality);
    return v9;
  }
  if ( !*a1 )
  {
    if ( a2 != 2 )
      WdLogSingleEntry0(1LL);
    v11 = GetPathsModality((__int64)a1, a1, 0x10u, 0);
    v12 = v11;
    if ( v11 < 0 )
    {
      WdLogSingleEntry2(2LL, v11);
      return v12;
    }
    if ( !*a1 )
      WdLogSingleEntry0(1LL);
  }
  v13 = a2 - 1;
  if ( !v13 )
    WdLogSingleEntry0(1LL);
  v14 = 0;
  while ( v13 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      if ( _bittest64((const signed __int64 *)*a1 + 37 * i + 7, 0x38u) )
      {
        if ( v14 != 1 && !--v13 )
          break;
      }
    }
    if ( (unsigned int)++v14 >= 2 )
    {
      if ( v13 )
        return 2147483674LL;
      break;
    }
  }
  v15 = AllocPathsModality(1u);
  *a3 = v15;
  if ( !v15 )
  {
    v9 = -1073741670;
    WdLogSingleEntry1(6LL, -1073741670LL);
    return v9;
  }
  *((_WORD *)v15 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v16 = *a1;
  v17 = *a3;
  *(_OWORD *)v17 = *(_OWORD *)*a1;
  *((_DWORD *)v17 + 4) = *((_DWORD *)v16 + 4);
  v18 = (_OWORD *)((char *)*a3 + 56);
  v19 = (_OWORD *)((char *)*a1 + 296 * i + 56);
  do
  {
    *v18 = *v19;
    v18[1] = v19[1];
    v18[2] = v19[2];
    v18[3] = v19[3];
    v18[4] = v19[4];
    v18[5] = v19[5];
    v18[6] = v19[6];
    v18 += 8;
    v20 = v19[7];
    v19 += 8;
    *(v18 - 1) = v20;
    --v7;
  }
  while ( v7 );
  *v18 = *v19;
  v18[1] = v19[1];
  *((_QWORD *)v18 + 4) = *((_QWORD *)v19 + 4);
  *((_QWORD *)*a3 + 38) = 0LL;
  return 0LL;
}
