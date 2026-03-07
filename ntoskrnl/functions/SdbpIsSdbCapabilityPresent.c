wchar_t *__fastcall SdbpIsSdbCapabilityPresent(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 i; // r9
  wchar_t *result; // rax
  __int64 v8; // r10
  int v9; // edx
  int v10; // ecx
  unsigned __int64 v11; // rdx
  wchar_t ***v12; // rcx
  wchar_t **v13; // r8
  __int64 v14; // r10
  __int64 v15; // rbx
  int v16; // r11d
  int v17; // r9d

  *a1 = 0;
  for ( i = 0LL; i < 4; ++i )
  {
    result = off_14000B048[i];
    v8 = a3 - (_QWORD)result;
    do
    {
      v9 = *(wchar_t *)((char *)result + v8);
      v10 = *result - v9;
      if ( v10 )
        break;
      ++result;
    }
    while ( v9 );
    if ( !v10 )
    {
LABEL_18:
      *a1 = 1;
      return result;
    }
  }
  v11 = 0LL;
  v12 = (wchar_t ***)(a2 + 1616);
  do
  {
    v13 = *v12;
    if ( !*v12 )
      break;
    result = *v13;
    v14 = 0LL;
    while ( result )
    {
      v15 = a3 - (_QWORD)result;
      do
      {
        v16 = *(wchar_t *)((char *)result + v15);
        v17 = *result - v16;
        if ( v17 )
          break;
        ++result;
      }
      while ( v16 );
      if ( !v17 )
        goto LABEL_18;
      result = v13[++v14];
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 0x10 );
  return result;
}
