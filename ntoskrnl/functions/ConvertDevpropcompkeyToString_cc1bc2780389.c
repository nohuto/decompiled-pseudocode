__int64 __fastcall ConvertDevpropcompkeyToString(__int64 a1, wchar_t *a2, unsigned int a3, unsigned int *a4)
{
  size_t v4; // rsi
  int v8; // ebx
  int v9; // edx
  int v10; // ecx
  const wchar_t *v11; // r8
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ecx
  const wchar_t *v15; // rcx
  const wchar_t *v16; // rax
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-28h] BYREF

  v4 = a3;
  UnicodeString = 0LL;
  if ( a3 >= 2 )
    *a2 = 0;
  v8 = RtlStringFromGUIDEx((unsigned int *)a1, (__int64)&UnicodeString, 1);
  if ( v8 >= 0 )
  {
    v9 = *(_DWORD *)(a1 + 20);
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        goto LABEL_23;
      }
      v10 = 44;
    }
    else
    {
      v10 = 48;
    }
    v11 = *(const wchar_t **)(a1 + 24);
    if ( v11 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v11[v12] );
      v13 = 2 * v12;
    }
    else
    {
      v13 = 12;
    }
    v14 = v13 + UnicodeString.Length + v10;
    if ( a4 )
      *a4 = v14;
    if ( v14 > (unsigned int)v4 )
    {
      v8 = -1073741789;
    }
    else
    {
      v15 = L"(NULL)";
      v16 = L"System";
      if ( v11 )
        v15 = v11;
      if ( v9 )
        v16 = L"User";
      v8 = RtlStringCbPrintfExW(
             a2,
             v4,
             0LL,
             0LL,
             0x800u,
             L"[(%s %3d) %s %s]",
             UnicodeString.Buffer,
             *(_DWORD *)(a1 + 16),
             v16,
             v15);
    }
  }
LABEL_23:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)v8;
}
