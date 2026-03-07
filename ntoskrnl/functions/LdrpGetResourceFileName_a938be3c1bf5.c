int __fastcall LdrpGetResourceFileName(
        __int64 a1,
        char a2,
        const WCHAR *a3,
        const WCHAR *a4,
        UNICODE_STRING *Destination)
{
  int v9; // edx
  __int64 v10; // r8
  size_t v11; // rdi
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  WCHAR *i; // rcx
  WCHAR *v15; // rdx
  int result; // eax
  WCHAR v17[2]; // [rsp+1Ch] [rbp-25Ch] BYREF
  WCHAR Source[264]; // [rsp+20h] [rbp-258h] BYREF

  if ( !a1 || !Destination || !a4 )
    return -1073741811;
  v9 = *(unsigned __int16 *)(a1 + 72);
  v10 = *(unsigned __int16 *)(a1 + 88);
  if ( (unsigned __int64)*(unsigned __int16 *)(a1 + 72) - v10 >= 0x208 || (unsigned __int16)v9 <= (unsigned __int16)v10 )
    return -1073020927;
  v11 = (unsigned int)(v9 - v10);
  memmove(Source, *(const void **)(a1 + 80), v11);
  v12 = v11 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v12 >= 0x208 )
    _report_rangecheckfailure();
  *(WCHAR *)((char *)Source + v12) = 0;
  if ( !a2 )
  {
    v15 = Source;
LABEL_17:
    result = RtlAppendUnicodeToString(Destination, v15);
    if ( result >= 0 )
    {
      if ( !a2 )
      {
        RtlAppendUnicodeToString(Destination, a4);
        RtlAppendUnicodeToString(Destination, L"\\");
      }
      result = RtlAppendUnicodeToString(Destination, *(PCWSTR *)(a1 + 96));
      if ( result >= 0 )
      {
        if ( a3 )
          return RtlAppendUnicodeToString(Destination, a3);
      }
    }
    return result;
  }
  v13 = -1LL;
  do
    ++v13;
  while ( Source[v13] );
  for ( i = &v17[(unsigned int)v13]; ; --i )
  {
    if ( i <= Source )
      return -1073741686;
    if ( *i == 92 )
      break;
  }
  i[1] = 0;
  result = RtlAppendUnicodeToString(Destination, Source);
  if ( result >= 0 )
  {
    v15 = (WCHAR *)L"SystemResources\\";
    goto LABEL_17;
  }
  return result;
}
