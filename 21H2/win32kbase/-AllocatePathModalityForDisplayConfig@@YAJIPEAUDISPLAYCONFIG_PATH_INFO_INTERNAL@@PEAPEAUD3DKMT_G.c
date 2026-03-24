/*
 * XREFs of ?AllocatePathModalityForDisplayConfig@@YAJIPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0142C5C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0019050 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C0147434 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ?AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z @ 0x1C009DC34 (-AllocPathsModality@@YAPEAUD3DKMT_GETPATHSMODALITY@@G@Z.c)
 */

__int64 __fastcall AllocatePathModalityForDisplayConfig(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int v3; // ebx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v5; // rdi
  __int64 v6; // r9
  __int64 v7; // rax
  struct D3DKMT_GETPATHSMODALITY *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v13; // rax

  v3 = 0;
  v5 = a2;
  if ( !(_DWORD)a1 )
    goto LABEL_10;
  v6 = (unsigned int)a1;
  do
  {
    v7 = *(_QWORD *)a2;
    a1 = v3++;
    a2 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)a2 + 200);
    if ( v7 >= 0 )
      v3 = a1;
    --v6;
  }
  while ( v6 );
  if ( v3 )
  {
    v8 = AllocPathsModality(v3);
    *a3 = v8;
    if ( v8 )
    {
      return 0LL;
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v11 + 24) = v3;
      WdLogEvent5_WdError(v11);
      return 3221225495LL;
    }
  }
  else
  {
LABEL_10:
    v13 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v13 + 24) = v5;
    WdLogEvent5_WdError(v13);
    return 3221225485LL;
  }
}
