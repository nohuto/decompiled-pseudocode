__int64 __fastcall ExpQueryModuleInformationEx(__int64 a1, _WORD *a2, unsigned int a3, int a4, unsigned int *a5)
{
  _WORD *v6; // rsi
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // edi
  unsigned int *v10; // rbx
  PVOID *i; // r14
  unsigned int v12; // eax

  v6 = a2;
  v7 = 0;
  v8 = 0;
  v9 = 2;
  if ( a3 < 2 )
  {
    v10 = a5;
    if ( a5 )
      *a5 = 2;
    v8 = -1073741820;
  }
  else
  {
    *a2 = 0;
    v10 = a5;
  }
  for ( i = (PVOID *)PsLoadedModuleList; i != &PsLoadedModuleList; i = (PVOID *)*i )
  {
    v12 = v9 + 320;
    if ( v9 + 320 < v9 )
      return 3221225473LL;
    v9 += 320;
    if ( a3 < v12 )
    {
      if ( v10 )
        *v10 = v12;
      v8 = -1073741820;
    }
    else
    {
      *v6 = 320;
      ExpConvertLdrEntryToModuleInfo(i, v7, v6);
      if ( a4 )
        *((_DWORD *)v6 + 77) = 0;
      v6 += 160;
      *v6 = 0;
    }
    ++v7;
  }
  if ( v10 )
    *v10 = v9;
  return v8;
}
