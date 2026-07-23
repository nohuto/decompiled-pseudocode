/*
 * XREFs of SepIsImageInMinTcbList @ 0x1406F1984
 * Callers:
 *     SepIsMinTCB @ 0x14069CBD4 (SepIsMinTCB.c)
 * Callees:
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     RtlpOpenImageFileOptionsKeyEx @ 0x140604234 (RtlpOpenImageFileOptionsKeyEx.c)
 *     RtlQueryImageFileKeyOption @ 0x14060D7A0 (RtlQueryImageFileKeyOption.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 */

__int64 __fastcall SepIsImageInMinTcbList(
        __int64 a1,
        unsigned int a2,
        UNICODE_STRING *a3,
        char a4,
        unsigned __int8 a5,
        char a6,
        _BYTE *a7,
        _BYTE *a8,
        unsigned __int8 *a9)
{
  unsigned int v9; // ebx
  unsigned int v14; // edi
  _DWORD *i; // r14
  __int64 v16; // r15
  __int64 *v17; // rdx
  __int64 v18; // r8
  unsigned __int64 v20; // rcx
  unsigned __int8 v21; // di
  _BYTE *v22; // r14
  char v23; // al
  _BYTE *v24; // rsi
  char v25; // bp
  unsigned __int8 *v26; // r15
  ULONG v27; // edx
  HANDLE Handle; // [rsp+30h] [rbp-38h] BYREF
  ULONG v29; // [rsp+78h] [rbp+10h] BYREF

  v9 = 0;
  v14 = 0;
  if ( a2 )
  {
    for ( i = (_DWORD *)(a1 + 20); ; i += 6 )
    {
      v16 = v14;
      if ( RtlEqualUnicodeString(a3, (PCUNICODE_STRING)(a1 + 24LL * v14), 1u) )
      {
        if ( !*i || *i == dword_140C197B0 )
          break;
      }
      if ( ++v14 >= a2 )
        return (unsigned int)-1073741275;
    }
    v20 = 3LL * v14;
    v21 = *(_BYTE *)(a1 + 24LL * v14 + 18);
    if ( v21 )
      goto LABEL_9;
    if ( a5 )
      v21 = a5;
    if ( v21 )
    {
LABEL_9:
      v22 = a7;
      v17 = &SeProtectedMapping;
      v20 = (unsigned __int64)v21 >> 4;
      *a7 = *((_BYTE *)&SeProtectedMapping + 2 * v20);
      v23 = *((_BYTE *)&SeProtectedMapping + 2 * v20 + 1);
    }
    else
    {
      v22 = a7;
      *a7 = *(_BYTE *)(a1 + 24 * v16 + 16);
      v23 = *(_BYTE *)(a1 + 24 * v16 + 17);
    }
    v24 = a8;
    v25 = a6;
    *a8 = v23;
    if ( !qword_140C1DB20 || (LOBYTE(v20) = *v22, LOBYTE(v17) = v25, !(unsigned int)qword_140C1DB20(v20, v17, v18)) )
      *v22 = v25;
    if ( !qword_140C1DB20 || (LOBYTE(v20) = *v24, LOBYTE(v17) = v25, !(unsigned int)qword_140C1DB20(v20, v17, v18)) )
      *v24 = v25;
    v26 = a9;
    if ( (v21 & 7) != 1 && ((a4 & 1) != 0 || (v21 & 7) == 2) )
    {
      if ( (*v24 & 0xFu) < 4 )
        *v24 = *v22;
      v21 = *v26 & 8 | v21 & 0xF2 | 2;
    }
    *v26 = v21;
    v29 = 0;
    Handle = 0LL;
    if ( !*v26 && !*v24 && (int)RtlpOpenImageFileOptionsKeyEx(&a3->Length, (__int64)v17, v18, &Handle) >= 0 )
    {
      if ( RtlQueryImageFileKeyOption(Handle, L"AuditLevel", 4, &v29, 4u, 0LL) >= 0 )
      {
        v27 = v29 & 0xF;
        if ( v27 - 2 <= 0xD )
        {
          *v24 = v27;
          *v26 = 8;
        }
      }
      ZwClose(Handle);
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return v9;
}
