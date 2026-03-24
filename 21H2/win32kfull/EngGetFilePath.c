/*
 * XREFs of EngGetFilePath @ 0x1C027DAF0
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C029EAAC (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     StringCchCopyW @ 0x1C027DEC0 (StringCchCopyW.c)
 */

BOOL __stdcall EngGetFilePath(HANDLE h, WCHAR (*pDest)[261])
{
  const wchar_t *v2; // r8
  BOOL v3; // ebx

  v2 = (const wchar_t *)*((_QWORD *)h + 10);
  v3 = 0;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = StringCchCopyW((STRSAFE_LPWSTR)pDest, 0x105uLL, v2) >= 0;
  return v3;
}
