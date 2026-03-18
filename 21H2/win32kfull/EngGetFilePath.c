/*
 * XREFs of EngGetFilePath @ 0x1C027B660
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029D38C (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     StringCchCopyW @ 0x1C027BA40 (StringCchCopyW.c)
 */

BOOL __stdcall EngGetFilePath(HANDLE h, WCHAR (*pDest)[261])
{
  const wchar_t *v2; // r8
  BOOL v4; // r11d

  v2 = (const wchar_t *)*((_QWORD *)h + 10);
  if ( !v2 )
    return 0;
  LOBYTE(v4) = StringCchCopyW((STRSAFE_LPWSTR)pDest, 0x105uLL, v2) >= 0;
  return v4;
}
