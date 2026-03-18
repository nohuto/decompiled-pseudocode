/*
 * XREFs of MakeSystemRelativePath @ 0x1C02DB990
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C028646C (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     ?EngCreateFile@@YAPEAXPEBG@Z @ 0x1C029CFFC (-EngCreateFile@@YAPEAXPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination)
{
  __int64 v2; // rbx
  const WCHAR *v4; // rdi
  __int64 result; // rax
  const wchar_t *i; // rbx

  v2 = -1LL;
  v4 = Source;
  do
    ++v2;
  while ( Source[v2] );
  Destination->Length = 0;
  Destination->MaximumLength = 2 * v2 + 44;
  if ( 2 * (_DWORD)v2 == -44 )
    result = 0LL;
  else
    result = Win32AllocPool((unsigned int)(2 * v2 + 44), 1818838599LL);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v4[(unsigned int)v2 - 10]; i >= v4; --i )
    {
      if ( !_wcsnicmp(i, L"\\system32\\", 0xAuLL) )
      {
        v4 = i + 10;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
    RtlAppendUnicodeToString(Destination, v4);
    return 1LL;
  }
  return result;
}
