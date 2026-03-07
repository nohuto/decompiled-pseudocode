__int64 __fastcall ExpParseArcPathName(_WORD *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4, char *a5)
{
  _WORD *v5; // r15
  char v6; // r12
  char v9; // di
  unsigned int v10; // esi
  wchar_t *v11; // rbx
  _WORD *v12; // r8
  __int64 v13; // rdx
  __int16 v14; // ax
  _WORD *v15; // rcx
  __int16 v16; // ax
  wchar_t Dst[12]; // [rsp+38h] [rbp-70h] BYREF

  v5 = 0LL;
  v6 = 0;
  v9 = 1;
  if ( !a1 )
    return 3221225485LL;
  wcscpy_s(Dst, 0xBuLL, L"signature(");
  v10 = 0;
  v11 = Dst;
  while ( towlower(*(wchar_t *)((char *)v11 + (char *)a1 - (char *)Dst)) == *v11 )
  {
    ++v10;
    ++v11;
    if ( v10 >= 0xA )
      goto LABEL_7;
  }
  v9 = 0;
LABEL_7:
  v12 = a1 + 10;
  LODWORD(v13) = 0;
  if ( v9 != 1 )
    v12 = a1;
  v14 = *v12;
  if ( *v12 )
  {
    v15 = v12;
    while ( v14 != 92 )
    {
      if ( v9 == 1 && v14 == 41 )
      {
        v6 = 1;
        v16 = v12[(unsigned int)(v13 + 1)];
        v9 = 0;
        if ( v16 != 92 )
        {
          if ( v16 )
            return 3221225485LL;
        }
      }
      v13 = (unsigned int)(v13 + 1);
      v15 = &v12[v13];
      v14 = *v15;
      if ( !*v15 )
        goto LABEL_19;
    }
    v5 = v15;
  }
LABEL_19:
  if ( v9 == 1 || !(_DWORD)v13 )
    return 3221225485LL;
  *a2 = v12;
  *a3 = v5;
  *a4 = v13;
  *a5 = v6;
  return 0LL;
}
