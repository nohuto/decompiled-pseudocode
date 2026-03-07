__int64 __fastcall DpiGetDriverStorePath(__int64 a1, unsigned __int16 *a2, int *a3)
{
  __int64 v3; // rcx
  int v6; // ebx
  wchar_t *v7; // rax
  wchar_t v8; // cx
  wchar_t *v9; // r8
  wchar_t v10; // dx
  wchar_t *v11; // rax
  int v12; // eax
  __int128 v14; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a1 + 64);
  v14 = 0LL;
  v6 = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v3 + 40) + 32LL), &v14);
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( (unsigned __int16)v14 >= (unsigned __int64)(unsigned int)*a3 - 2 )
  {
    v6 = -2147483643;
    v12 = (unsigned __int16)v14 + 2;
  }
  else
  {
    RtlStringCbCopyW(a2, (unsigned __int16)v14, *((size_t **)&v14 + 1));
    a2[(unsigned __int64)(unsigned __int16)v14 >> 1] = 0;
    v7 = wcsstr_0(a2, L"FileRepository");
    if ( !v7 )
    {
      v6 = -1073741811;
      goto LABEL_19;
    }
    while ( *v7 != 92 && *v7 )
      ++v7;
    v8 = *v7;
    v9 = v7;
    v10 = *v7;
    if ( *v7 )
      v10 = v7[1];
    v11 = v7 + 1;
    if ( !v8 )
      v11 = v9;
    if ( v10 != 92 )
    {
      do
      {
        if ( !*v11 )
          break;
        ++v11;
      }
      while ( *v11 != 92 );
    }
    *v11 = 0;
    v12 = (_DWORD)v11 - (_DWORD)a2;
  }
  *a3 = v12;
LABEL_19:
  if ( *((_QWORD *)&v14 + 1) )
    ExFreePoolWithTag(*((PVOID *)&v14 + 1), 0);
  return (unsigned int)v6;
}
