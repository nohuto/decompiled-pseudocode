__int64 __fastcall DrvDbGetConfigurationSubKeyCallback(int a1, int a2, _WORD *a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v7; // r12d
  __int64 v8; // rcx
  NTSTATUS v9; // ebx
  int v10; // eax
  __int64 v11; // r14
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v17; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-40h] BYREF
  __int64 v19; // [rsp+40h] [rbp-38h] BYREF
  int v20; // [rsp+48h] [rbp-30h] BYREF
  wchar_t pszDest[12]; // [rsp+50h] [rbp-28h] BYREF

  v4 = 0;
  v19 = 0LL;
  v18 = 0;
  v7 = 0;
  v20 = 0;
  LODWORD(v17) = 0;
  if ( !a4 )
    return 3;
  v9 = PnpCtxRegOpenKey(a1, a2, (_DWORD)a3, 0, 1, (__int64)&v19);
  if ( v9 >= 0 )
  {
    HIDWORD(v17) = 4;
    if ( *(_BYTE *)(a4 + 16) )
    {
      v10 = PnpCtxRegQueryValue(v8, v19, L"ConfigScope", &v17, &v18, (char *)&v17 + 4);
      v9 = v10;
      if ( v10 < 0 )
        goto LABEL_8;
      if ( (_DWORD)v17 != 4 )
        goto LABEL_32;
      if ( HIDWORD(v17) != 4 )
      {
LABEL_8:
        if ( v10 == -1073741772 )
          v9 = 0;
        goto LABEL_32;
      }
      v7 = v18;
    }
    else
    {
      v9 = PnpCtxRegQueryValue(v8, v19, L"ConfigFlags", &v17, &v20, (char *)&v17 + 4);
      if ( v9 < 0 )
      {
        if ( v9 == -1073741772 )
          v9 = 0;
        goto LABEL_32;
      }
      if ( v17 != 0x400000004LL )
        goto LABEL_32;
    }
    v11 = -1LL;
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v13 = *(unsigned int *)(a4 + 12);
    if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v13 + v12) )
      v9 = -1073741789;
    else
      memmove((void *)(*(_QWORD *)a4 + 2 * v13), a3, 2LL * (unsigned int)v12);
    v14 = (unsigned int)(v12 + *(_DWORD *)(a4 + 12));
    *(_DWORD *)(a4 + 12) = v14;
    if ( !*(_BYTE *)(a4 + 16) )
    {
LABEL_26:
      if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v14 + 1) )
        v9 = -1073741789;
      else
        *(_WORD *)(*(_QWORD *)a4 + 2 * v14) = 0;
      ++*(_DWORD *)(a4 + 12);
      goto LABEL_32;
    }
    if ( *(_DWORD *)(a4 + 8) >= (unsigned int)(v14 + 1) )
      *(_WORD *)(*(_QWORD *)a4 + 2 * v14) = 58;
    ++*(_DWORD *)(a4 + 12);
    v9 = RtlStringCchPrintfW(pszDest, 9uLL, L"%X", v7);
    if ( v9 >= 0 )
    {
      do
        ++v11;
      while ( pszDest[v11] );
      v15 = *(unsigned int *)(a4 + 12);
      if ( *(_DWORD *)(a4 + 8) < (unsigned int)(v15 + v11) )
        v9 = -1073741789;
      else
        memmove((void *)(*(_QWORD *)a4 + 2 * v15), pszDest, 2LL * (unsigned int)v11);
      *(_DWORD *)(a4 + 12) += v11;
      v14 = *(unsigned int *)(a4 + 12);
      goto LABEL_26;
    }
  }
LABEL_32:
  if ( v19 )
    PnpCtxRegCloseKey();
  if ( v9 < 0 )
  {
    *(_DWORD *)(a4 + 20) = v9;
    if ( v9 != -1073741789 )
      return 3;
  }
  return v4;
}
