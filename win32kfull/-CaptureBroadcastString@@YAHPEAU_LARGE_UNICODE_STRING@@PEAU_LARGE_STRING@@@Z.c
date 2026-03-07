__int64 __fastcall CaptureBroadcastString(struct _LARGE_UNICODE_STRING *a1, struct _LARGE_STRING *a2)
{
  int v4; // ecx
  bool v5; // zf
  __int64 v6; // rcx
  WCHAR *v7; // rax
  void **v8; // rdi
  ULONG v9; // edx
  ULONG BytesInMultiByteString; // ecx
  NTSTATUS v11; // edx
  ULONG BytesInUnicodeString; // [rsp+68h] [rbp+10h] BYREF
  char *v14; // [rsp+70h] [rbp+18h]

  v4 = 2 * *(_DWORD *)a2;
  if ( *((int *)a2 + 1) >= 0 )
    v4 = *(_DWORD *)a2;
  v5 = v4 == -2;
  v6 = (unsigned int)(v4 + 2);
  BytesInUnicodeString = v6;
  if ( !v5 )
  {
    v7 = (WCHAR *)Win32AllocPoolWithQuotaZInit(v6, 1936946005LL);
    v8 = (void **)((char *)a1 + 8);
    v14 = (char *)a1 + 8;
    *((_QWORD *)a1 + 1) = v7;
    if ( v7 )
    {
      v9 = BytesInUnicodeString;
      *((_DWORD *)a1 + 1) = BytesInUnicodeString & 0x7FFFFFFF;
      BytesInMultiByteString = *(_DWORD *)a2;
      if ( *((int *)a2 + 1) < 0 )
      {
        v11 = RtlMultiByteToUnicodeN(v7, v9, &BytesInUnicodeString, *((const CHAR **)a2 + 1), BytesInMultiByteString);
        *(_DWORD *)a1 = BytesInUnicodeString;
      }
      else
      {
        *(_DWORD *)a1 = BytesInMultiByteString;
        memmove(v7, *((const void **)a2 + 1), BytesInMultiByteString);
        v11 = 0;
      }
      *((_WORD *)*v8 + ((unsigned __int64)*(unsigned int *)a1 >> 1)) = 0;
      if ( v11 >= 0 )
        return 1LL;
      Win32FreePool(*v8);
    }
  }
  return 0LL;
}
