__int64 __fastcall AllocatePathModalityForDisplayConfig(
        unsigned int a1,
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a2,
        struct D3DKMT_GETPATHSMODALITY **a3)
{
  unsigned int v3; // ebx
  struct DISPLAYCONFIG_PATH_INFO_INTERNAL *v5; // r9
  __int64 v6; // r10
  __int64 v7; // rax
  int v8; // ecx
  struct D3DKMT_GETPATHSMODALITY *v9; // rax

  v3 = 0;
  v5 = a2;
  if ( !a1 )
    goto LABEL_10;
  v6 = a1;
  do
  {
    v7 = *(_QWORD *)v5;
    v8 = v3++;
    v5 = (struct DISPLAYCONFIG_PATH_INFO_INTERNAL *)((char *)v5 + 216);
    if ( v7 >= 0 )
      v3 = v8;
    --v6;
  }
  while ( v6 );
  if ( v3 )
  {
    v9 = AllocPathsModality(v3);
    *a3 = v9;
    if ( v9 )
    {
      return 0LL;
    }
    else
    {
      WdLogSingleEntry1(2LL, v3);
      return 3221225495LL;
    }
  }
  else
  {
LABEL_10:
    WdLogSingleEntry1(2LL, a2);
    return 3221225485LL;
  }
}
