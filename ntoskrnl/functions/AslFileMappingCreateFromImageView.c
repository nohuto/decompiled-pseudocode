__int64 __fastcall AslFileMappingCreateFromImageView(wchar_t ***a1, const wchar_t *a2, wchar_t *a3, wchar_t *a4)
{
  wchar_t **v8; // rax
  wchar_t **v9; // rbx
  int v10; // edi
  _DWORD *v11; // rdi

  if ( !a2 || !*a2 || !a1 || !a3 )
    return 3221225485LL;
  *a1 = 0LL;
  v8 = (wchar_t **)AslAlloc((__int64)a1, 0x58uLL);
  v9 = v8;
  if ( v8 )
  {
    v10 = AslStringDuplicate(v8, a2);
    if ( v10 < 0 )
    {
      AslLogCallPrintf(1LL);
      AslFileMappingDelete((PVOID *)v9);
    }
    else
    {
      *((_DWORD *)v9 + 20) = 1;
      v9[6] = 0LL;
      v11 = v9 + 8;
      v9[7] = (wchar_t *)0x1000000;
      v9[1] = 0LL;
      v9[2] = 0LL;
      v9[3] = a4;
      v9[4] = a3;
      v9[5] = a4;
      if ( a4 )
      {
        if ( (int)AslpFileMappingGetFileKind(v9 + 1, (int *)v9 + 16) < 0 )
        {
          AslLogCallPrintf(1LL);
          *v11 = 3;
        }
      }
      else
      {
        *v11 = 1;
      }
      *a1 = v9;
      return 0;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v10;
}
