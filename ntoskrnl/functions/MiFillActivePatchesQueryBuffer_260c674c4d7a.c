UNICODE_STRING *__fastcall MiFillActivePatchesQueryBuffer(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD **a5,
        UNICODE_STRING **a6,
        wchar_t **a7,
        _DWORD **a8,
        _QWORD *a9,
        PCUNICODE_STRING SourceString,
        int a11)
{
  UNICODE_STRING *v13; // rcx
  unsigned __int16 Length; // ax
  UNICODE_STRING *v15; // rcx
  UNICODE_STRING *result; // rax
  _DWORD *v17; // rcx

  v13 = *a6;
  **a5 = *a9;
  Length = SourceString->Length;
  v13->Length = SourceString->Length;
  v13->MaximumLength = Length;
  v13->Buffer = *a7;
  RtlCopyUnicodeString(v13, SourceString);
  v15 = *a6;
  ++*a5;
  v15->Buffer = (wchar_t *)((char *)v15->Buffer - a4);
  *a7 = (wchar_t *)((char *)*a7 + v15->Length);
  result = v15 + 1;
  v17 = *a8;
  *a6 = result;
  if ( v17 )
  {
    *v17 = a11;
    result = (UNICODE_STRING *)(v17 + 1);
    *a8 = v17 + 1;
  }
  ++*(_DWORD *)(a1 + 16);
  return result;
}
