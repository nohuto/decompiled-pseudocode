/*
 * XREFs of ?DrvCreatePathModalityFromAllPaths@@YAJPEAPEAUD3DKMT_GETPATHSMODALITY@@I0@Z @ 0x1C0143EF4
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 * Callees:
 *     GetPathsModality @ 0x1C009DB74 (GetPathsModality.c)
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C009DC34 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall DrvCreatePathModalityFromAllPaths(
        struct D3DKMT_GETPATHSMODALITY **a1,
        __int64 a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  int v4; // ebx
  unsigned int i; // ebp
  __int64 v7; // r14
  int PathsModality; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // ebx
  __int64 v20; // rax
  int v21; // edx
  struct D3DKMT_GETPATHSMODALITY *v22; // rax
  __int64 v23; // rax
  struct D3DKMT_GETPATHSMODALITY *v24; // rax
  struct D3DKMT_GETPATHSMODALITY *v25; // rcx
  _OWORD *v26; // rax
  _OWORD *v27; // r8
  __int128 v28; // xmm1

  v4 = a2;
  i = 0;
  v7 = 2LL;
  if ( (unsigned int)a2 < 2 )
  {
    PathsModality = GetPathsModality((__int64)a1, a3, (_DWORD)a2 != 0 ? 8 : 1, 0);
    v11 = PathsModality;
    if ( PathsModality < 0 )
    {
      v12 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v12 + 24) = v11;
      *(_QWORD *)(v12 + 32) = 25746LL;
      WdLogEvent5_WdError(v12);
    }
    return (unsigned int)v11;
  }
  if ( !*a1 )
  {
    if ( (_DWORD)a2 != 2 )
    {
      v14 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = GetPathsModality((__int64)a1, a1, 0x10u, 0);
    v16 = v15;
    if ( v15 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(a1, a2);
      *(_QWORD *)(v17 + 24) = v16;
      *(_QWORD *)(v17 + 32) = 25766LL;
      WdLogEvent5_WdError(v17);
      return (unsigned int)v16;
    }
    if ( !*a1 )
    {
      v18 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v18);
    }
  }
  v19 = v4 - 1;
  if ( !v19 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2);
    WdLogEvent5_WdAssertion(v20);
  }
  v21 = 0;
  while ( v19 )
  {
    for ( i = 0; i < *((unsigned __int16 *)*a1 + 10); ++i )
    {
      if ( (*((_QWORD *)*a1 + 34 * i + 6) & 0x100000000000000LL) != 0 && v21 != 1 && !--v19 )
        break;
    }
    if ( (unsigned int)++v21 >= 2 )
    {
      if ( v19 )
        return 2147483674LL;
      break;
    }
  }
  v22 = AllocPathsModality(1u);
  *a3 = v22;
  if ( !v22 )
  {
    v23 = WdLogNewEntry5_WdLowResource();
    LODWORD(v11) = -1073741670;
    *(_QWORD *)(v23 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v23);
    return (unsigned int)v11;
  }
  *((_WORD *)v22 + 10) = 1;
  *((_DWORD *)*a3 + 8) = 8;
  v24 = *a1;
  v25 = *a3;
  *(_OWORD *)v25 = *(_OWORD *)*a1;
  *((_DWORD *)v25 + 4) = *((_DWORD *)v24 + 4);
  v26 = (_OWORD *)((char *)*a3 + 48);
  v27 = (_OWORD *)((char *)*a1 + 272 * i + 48);
  do
  {
    *v26 = *v27;
    v26[1] = v27[1];
    v26[2] = v27[2];
    v26[3] = v27[3];
    v26[4] = v27[4];
    v26[5] = v27[5];
    v26[6] = v27[6];
    v26 += 8;
    v28 = v27[7];
    v27 += 8;
    *(v26 - 1) = v28;
    --v7;
  }
  while ( v7 );
  *v26 = *v27;
  *((_QWORD *)*a3 + 34) = 0LL;
  return 0LL;
}
