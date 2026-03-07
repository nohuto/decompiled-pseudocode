__int64 __fastcall GetPathsModality(
        __int64 a1,
        struct D3DKMT_GETPATHSMODALITY **a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  int v4; // esi
  unsigned __int16 i; // ax
  bool v8; // zf
  struct D3DKMT_GETPATHSMODALITY *v9; // rax
  __int64 DxgkWin32kInterface; // rax
  __int64 v11; // rdx
  int v12; // edi
  struct D3DKMT_GETPATHSMODALITY *v13; // rax
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // [rsp+48h] [rbp+20h] BYREF

  v4 = a4;
  if ( a3 == 32 )
    WdLogSingleEntry0(1LL);
  for ( i = v4 + 8; ; i = v4 + v15 )
  {
    v8 = *a2 == 0LL;
    v16 = i;
    if ( v8 )
    {
      v9 = AllocPathsModality(i);
      *a2 = v9;
      if ( !v9 )
        break;
    }
    DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(a1, a2);
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct D3DKMT_GETPATHSMODALITY *, unsigned __int16 *))(DxgkWin32kInterface
                                                                                                  + 144))(
            a3,
            *a2,
            &v16);
    if ( v12 != -1073741789 )
    {
      v13 = *a2;
      if ( v12 < 0 )
      {
        FreePathsModality(*a2, v11);
        *a2 = 0LL;
        return (unsigned int)v12;
      }
      v11 = v4 + (unsigned int)*((unsigned __int16 *)v13 + 10);
      if ( (unsigned int)v11 <= *((unsigned __int16 *)v13 + 11) )
        return (unsigned int)v12;
    }
    FreePathsModality(*a2, v11);
    v15 = v16;
    *a2 = 0LL;
  }
  WdLogSingleEntry1(2LL, v16);
  return 3221225495LL;
}
