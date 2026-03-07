__int64 __fastcall BiCreateFileDeviceElement(const wchar_t *Src, _QWORD *a2, unsigned int *a3)
{
  int v4; // edi
  wchar_t *v5; // rax
  const wchar_t *v6; // r14
  __int64 v7; // rbx
  char *Pool2; // rbp
  size_t v9; // rbx
  __int64 v10; // rsi
  __int64 v11; // rax
  int v12; // r12d
  __int64 v13; // rax
  unsigned int v14; // r13d
  char *v15; // rax
  char *v16; // rbx
  __int64 v17; // rdx

  v4 = 0;
  if ( wcsnicmp(Src, L"\\Device\\HarddiskVolume", 0x16uLL) )
    return (unsigned int)-1073741811;
  v5 = wcschr(Src + 22, 0x5Cu);
  if ( (v6 = v5) == 0LL )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v7 = v5 - Src;
    Pool2 = (char *)ExAllocatePool2(258LL, 2LL * (unsigned int)(v7 + 1), 1262764866LL);
    if ( Pool2 )
    {
      v9 = 2LL * (unsigned int)v7;
      memmove(Pool2, Src, v9);
      v10 = -1LL;
      *(_WORD *)&Pool2[v9] = 0;
      v11 = -1LL;
      do
        ++v11;
      while ( v6[v11] );
      v12 = 2 * v11 + 46;
      v13 = -1LL;
      do
        ++v13;
      while ( *(_WORD *)&Pool2[2 * v13] );
      v14 = v12 + 2 * (v13 + 11);
      v15 = (char *)ExAllocatePool2(258LL, v14, 1262764866LL);
      v16 = v15;
      if ( v15 )
      {
        memset(v15, 0, v14);
        v17 = -1LL;
        *((_DWORD *)v16 + 5) = v12;
        *(_DWORD *)v16 = 3;
        do
          ++v17;
        while ( v6[v17] );
        wcscpy_s((wchar_t *)v16 + 12, v17 + 1, v6);
        *(_DWORD *)&v16[v12] = 2;
        do
          ++v10;
        while ( *(_WORD *)&Pool2[2 * v10] );
        wcscpy_s((wchar_t *)&v16[v12 + 20], v10 + 1, (const wchar_t *)Pool2);
        *a2 = v16;
        *a3 = v14;
      }
      else
      {
        v4 = -1073741670;
      }
      ExFreePoolWithTag(Pool2, 0x4B444342u);
      if ( v4 < 0 && v16 )
        ExFreePoolWithTag(v16, 0x4B444342u);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return (unsigned int)v4;
}
