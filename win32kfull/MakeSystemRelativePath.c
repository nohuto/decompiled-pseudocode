__int64 __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  const WCHAR *v6; // rdi
  __int64 result; // rax
  const wchar_t *i; // rbx

  v4 = -1LL;
  v6 = Source;
  do
    ++v4;
  while ( Source[v4] );
  Destination->Length = 0;
  Destination->MaximumLength = 2 * v4 + 44;
  if ( 2 * (_DWORD)v4 == -44 )
    result = 0LL;
  else
    result = Win32AllocPool((unsigned int)(2 * v4 + 44), 1818838599LL, a3, a4);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v6[(unsigned int)v4 - 10]; i >= v6; --i )
    {
      if ( !_wcsnicmp(i, L"\\system32\\", 0xAuLL) )
      {
        v6 = i + 10;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
    RtlAppendUnicodeToString(Destination, v6);
    return 1LL;
  }
  return result;
}
