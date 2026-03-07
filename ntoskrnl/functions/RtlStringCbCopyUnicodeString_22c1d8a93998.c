NTSTATUS __stdcall RtlStringCbCopyUnicodeString(NTSTRSAFE_PWSTR pszDest, size_t cbDest, PCUNICODE_STRING SourceString)
{
  size_t v3; // rbx
  NTSTATUS result; // eax
  size_t v6; // rcx
  signed __int64 v7; // rdx
  NTSTRSAFE_PWSTR v8; // rax
  ULONG v9; // [rsp+20h] [rbp-18h]
  size_t v10; // [rsp+48h] [rbp+10h] BYREF
  wchar_t *v11; // [rsp+58h] [rbp+20h] BYREF

  v3 = cbDest >> 1;
  if ( (cbDest >> 1) - 1 > 0x7FFE )
    return -1073741811;
  v11 = 0LL;
  v10 = 0LL;
  result = RtlUnicodeStringValidateSrcWorker(SourceString, &v11, &v10, (const size_t)SourceString, v9);
  if ( result < 0 )
  {
    *pszDest = 0;
  }
  else
  {
    v6 = v10 - v3;
    v7 = (char *)v11 - (char *)pszDest;
    do
    {
      if ( !(v6 + v3) )
        break;
      *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v7);
      ++pszDest;
      --v3;
    }
    while ( v3 );
    v8 = pszDest - 1;
    if ( v3 )
      v8 = pszDest;
    *v8 = 0;
    return v3 == 0 ? 0x80000005 : 0;
  }
  return result;
}
