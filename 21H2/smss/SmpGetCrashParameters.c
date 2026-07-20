/*
 * XREFs of SmpGetCrashParameters @ 0x14001570C
 * Callers:
 *     SmpCheckForCrashDump @ 0x14000A4B8 (SmpCheckForCrashDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000203C (RtlStringCbPrintfW.c)
 *     SmpQueryDwordFromRegistry @ 0x14000831C (SmpQueryDwordFromRegistry.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpQueryPathFromRegistry @ 0x140015C3C (SmpQueryPathFromRegistry.c)
 */

int __fastcall SmpGetCrashParameters(__int64 a1)
{
  int result; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // [rsp+20h] [rbp-248h] BYREF
  struct _UNICODE_STRING v6; // [rsp+30h] [rbp-238h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-228h] BYREF

  *(_DWORD *)&v6.Length = 1310738;
  LODWORD(v5) = 1179664;
  result = RtlStringCbPrintfW(
             pszDest,
             0x208uLL,
             L"%s\\MEMORY.DMP",
             SmpSystemRoot.Buffer,
             v5,
             L"DumpFile",
             *(_QWORD *)&v6.Length,
             L"Overwrite");
  if ( result >= 0 )
  {
    result = SmpQueryPathFromRegistry(v3, &v5, pszDest, a1);
    if ( result >= 0 )
    {
      result = SmpQueryDwordFromRegistry(v4, &v6, 1, (_DWORD *)(a1 + 16));
      if ( result >= 0 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        return 0;
      }
    }
  }
  return result;
}
