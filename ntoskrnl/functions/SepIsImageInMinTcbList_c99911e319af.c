__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        const UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // edi
  unsigned int v14; // ebx
  _DWORD *i; // rsi
  __int64 v16; // rbp
  __int64 *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // r8
  char v21; // al
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // si
  _BYTE *v24; // r15
  char v25; // al
  _BYTE *v26; // r14
  char v27; // bp
  unsigned __int8 *v28; // rbp
  int v29; // eax
  ULONG v30; // edx
  HANDLE Handle[2]; // [rsp+30h] [rbp-38h] BYREF
  ULONG v32; // [rsp+78h] [rbp+10h] BYREF

  v9 = 0;
  v14 = 0;
  if ( !a2 )
    return (unsigned int)-1073741275;
  for ( i = (_DWORD *)(a1 + 20); ; i += 6 )
  {
    v16 = a1 + 24LL * v14;
    if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)v16, 1u) )
    {
      if ( !*i || *i == dword_140C316F0 )
        break;
    }
    if ( ++v14 >= a2 )
      return (unsigned int)-1073741275;
  }
  v21 = *(_BYTE *)(v16 + 18);
  if ( !v21 )
  {
    v22 = a5;
    if ( a5 )
    {
      v23 = a5;
      goto LABEL_10;
    }
  }
  v22 = *(_BYTE *)(v16 + 18);
  v23 = v22;
  if ( v21 )
  {
LABEL_10:
    v24 = a7;
    v17 = &SeProtectedMapping;
    v18 = (unsigned __int64)v22 >> 4;
    *a7 = *((_BYTE *)&SeProtectedMapping + 2 * v18);
    v25 = *((_BYTE *)&SeProtectedMapping + 2 * v18 + 1);
    goto LABEL_11;
  }
  v24 = a7;
  *a7 = *(_BYTE *)(v16 + 16);
  v25 = *(_BYTE *)(v16 + 17);
LABEL_11:
  v26 = a8;
  v27 = a6;
  *a8 = v25;
  if ( !qword_140C37600 || (LOBYTE(v18) = *v24, LOBYTE(v17) = v27, !(unsigned int)qword_140C37600(v18, v17)) )
    *v24 = v27;
  if ( !qword_140C37600 || (LOBYTE(v18) = *v26, LOBYTE(v17) = v27, !(unsigned int)qword_140C37600(v18, v17)) )
    *v26 = v27;
  v28 = a9;
  if ( (v22 & 7) != 1 && ((a4 & 1) != 0 || (v22 & 7) == 2) )
  {
    if ( (*v26 & 0xFu) < 4 )
      *v26 = *v24;
    v23 = v22 & 0xF2 | *v28 & 8 | 2;
  }
  *v28 = v23;
  v32 = 0;
  Handle[0] = 0LL;
  if ( !v23 && !*v26 )
  {
    v29 = RtlpOpenImageFileOptionsKeyEx(a3, v17, v19, Handle);
    if ( v29 >= 0 )
    {
      if ( RtlQueryImageFileKeyOption(Handle[0], L"AuditLevel", 4, &v32, 4u, 0LL) >= 0 )
      {
        v30 = v32 & 0xF;
        if ( v30 - 2 <= 0xD )
        {
          *v26 = v30;
          *v28 = 8;
        }
      }
      ZwClose(Handle[0]);
    }
  }
  return v9;
}
