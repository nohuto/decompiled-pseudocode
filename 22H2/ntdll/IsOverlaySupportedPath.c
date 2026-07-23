/*
 * XREFs of IsOverlaySupportedPath @ 0x180047B00
 * Callers:
 *     GetOverlayFilePath @ 0x180047A24 (GetOverlayFilePath.c)
 * Callees:
 *     RtlGetNtSystemRoot @ 0x180016BB0 (RtlGetNtSystemRoot.c)
 *     IsProgramFilesPath @ 0x18004A744 (IsProgramFilesPath.c)
 *     _wcsnicmp @ 0x18008E480 (_wcsnicmp.c)
 */

__int64 __fastcall IsOverlaySupportedPath(wchar_t *String1, size_t *a2, const wchar_t **a3)
{
  const wchar_t *NtSystemRoot; // rax
  size_t v7; // rbx
  const wchar_t *v8; // rax

  *a3 = 0LL;
  *a2 = 0LL;
  NtSystemRoot = RtlGetNtSystemRoot();
  v7 = -1LL;
  do
    ++v7;
  while ( NtSystemRoot[v7] );
  if ( !wcsnicmp(String1, NtSystemRoot, v7) )
  {
    *a2 = v7;
    v8 = L"\\Windows";
LABEL_5:
    *a3 = v8;
    return 0LL;
  }
  if ( (int)IsProgramFilesPath(String1) >= 0 )
  {
    v8 = L"\\Program Files";
    goto LABEL_5;
  }
  return 3221225659LL;
}
