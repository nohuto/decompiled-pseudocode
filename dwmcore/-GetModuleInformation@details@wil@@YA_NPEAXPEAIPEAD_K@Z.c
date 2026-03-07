char __fastcall wil::details::GetModuleInformation(LPCWSTR lpModuleName, _DWORD *a2, unsigned int *a3, char *a4)
{
  HMODULE v6; // rcx
  __int64 v9; // rax
  CHAR *i; // rcx
  __int64 v11; // r8
  signed __int64 v12; // rcx
  char v13; // dl
  unsigned int *v14; // rcx
  HMODULE phModule; // [rsp+20h] [rbp-148h] BYREF
  CHAR Filename[272]; // [rsp+30h] [rbp-138h] BYREF

  v6 = 0LL;
  phModule = 0LL;
  if ( lpModuleName )
  {
    if ( !GetModuleHandleExW(6u, lpModuleName, &phModule) )
    {
      if ( a2 )
        *a2 = 0;
      return 0;
    }
    v6 = phModule;
  }
  if ( a2 )
  {
    if ( lpModuleName )
      LODWORD(lpModuleName) = (_DWORD)lpModuleName - (_DWORD)v6;
    *a2 = (_DWORD)lpModuleName;
  }
  if ( !a3 )
    return 1;
  if ( GetModuleFileNameA(v6, Filename, 0x104u) )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( Filename[v9] );
    for ( i = &Filename[v9]; i > Filename && *(i - 1) != 92; --i )
      ;
    if ( a4 )
    {
      if ( (unsigned __int64)a4 > 0x7FFFFFFF )
      {
        *(_BYTE *)a3 = 0;
      }
      else
      {
        v11 = 2147483646LL - (_QWORD)a4;
        v12 = i - (CHAR *)a3;
        do
        {
          if ( !&a4[v11] )
            break;
          v13 = *((_BYTE *)a3 + v12);
          if ( !v13 )
            break;
          *(_BYTE *)a3 = v13;
          a3 = (unsigned int *)((char *)a3 + 1);
          --a4;
        }
        while ( a4 );
        v14 = (unsigned int *)((char *)a3 - 1);
        if ( a4 )
          v14 = a3;
        *(_BYTE *)v14 = 0;
      }
    }
    return 1;
  }
  return 0;
}
