/*
 * XREFs of MakeSystemDriversRelativePath @ 0x1C0199F54
 * Callers:
 *     ?ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z @ 0x1C00B1D40 (-ldevLoadImageInternal@@YAPEAU_LDEV@@PEBGHPEAHHH@Z.c)
 * Callees:
 *     ?Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z @ 0x1C0062994 (-Allocate@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_K0I@Z.c)
 *     _wcsnicmp @ 0x1C00DACB8 (_wcsnicmp.c)
 */

__int64 __fastcall MakeSystemDriversRelativePath(PCWSTR Source, PUNICODE_STRING Destination, int a3)
{
  __int64 v3; // rbx
  int v4; // r14d
  const WCHAR *v6; // rdi
  unsigned int v7; // ebp
  __int64 result; // rax
  const wchar_t *i; // rbx

  v3 = -1LL;
  v4 = a3;
  v6 = Source;
  do
    ++v3;
  while ( Source[v3] );
  v7 = 2 * v3 + 58;
  if ( a3 )
  {
    if ( (unsigned int)v3 < 4 || wcsnicmp(&Source[(unsigned int)v3 - 4], L".DLL", 4uLL) )
      v7 = 2 * v3 + 66;
    else
      v4 = 0;
  }
  Destination->Length = 0;
  Destination->MaximumLength = v7;
  if ( v7 )
    result = NSInstrumentation::CLeakTrackingAllocator::Allocate(gpLeakTrackingAllocator, 260LL, v7, 0x6C694647u);
  else
    result = 0LL;
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v6[(unsigned int)v3 - 17]; i >= v6; --i )
    {
      if ( !wcsnicmp(i, L"\\system32\\Drivers", 0x11uLL) )
      {
        v6 = i + 17;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\Drivers\\");
    RtlAppendUnicodeToString(Destination, v6);
    if ( v4 )
      RtlAppendUnicodeToString(Destination, L".dll");
    return 1LL;
  }
  return result;
}
