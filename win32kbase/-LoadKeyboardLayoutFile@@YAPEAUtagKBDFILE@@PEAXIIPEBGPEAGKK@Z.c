struct tagKBDFILE *__fastcall LoadKeyboardLayoutFile(
        void *a1,
        __int64 a2,
        __int64 a3,
        const unsigned __int16 *a4,
        wchar_t *Str2,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v7; // ebp
  unsigned int v8; // r14d
  __int64 i; // rbx
  __int64 v11; // r8
  __int64 v12; // rax
  struct tagKbdLayer *LayoutFile; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9

  v7 = a3;
  v8 = a2;
  for ( i = *(_QWORD *)(SGDGetUserSessionState(a1, a2, a3, a4) + 13864); i; i = *(_QWORD *)(i + 16) )
  {
    if ( Str2 && !wcsicmp((const wchar_t *)(i + 56), Str2) )
      return (struct tagKBDFILE *)i;
  }
  LOBYTE(v11) = 14;
  v12 = HMAllocObjectEx(0LL, 0LL, v11, 120LL, 0);
  i = v12;
  if ( v12 )
  {
    if ( a1 )
    {
      wcsncpycch((_WORD *)(v12 + 56), (__int64)Str2, 32);
      *(_WORD *)(i + 118) = 0;
      LayoutFile = ReadLayoutFile((struct tagKBDFILE *)i, a1, v8, v7);
      v16 = a6;
      v17 = a7;
      *(_QWORD *)(i + 32) = LayoutFile;
      if ( a6 || a7 )
      {
        if ( LayoutFile )
        {
          *((_DWORD *)LayoutFile + 24) = a6;
          *(_DWORD *)(*(_QWORD *)(i + 32) + 100LL) = a7;
        }
      }
    }
    else
    {
      *(_QWORD *)(v12 + 32) = PrepareFallbackKeyboardFile((struct tagKBDFILE *)v12);
    }
    if ( *(_QWORD *)(i + 32) )
    {
      v18 = *(_QWORD *)(SGDGetUserSessionState(v17, v16, v14, v15) + 13864);
      *(_QWORD *)(i + 16) = v18;
      *(_QWORD *)(SGDGetUserSessionState(v18, v19, v20, v21) + 13864) = i;
      return (struct tagKBDFILE *)i;
    }
    HMFreeObject((void *)i);
  }
  return 0LL;
}
