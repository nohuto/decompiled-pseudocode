/*
 * XREFs of EngGetFilePath @ 0x1C027C120
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C02A9CC8 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C01165A4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

BOOL __stdcall EngGetFilePath(HANDLE h, WCHAR (*pDest)[261])
{
  char *v2; // r8
  BOOL v4; // r11d

  v2 = (char *)*((_QWORD *)h + 10);
  if ( !v2 )
    return 0;
  LOBYTE(v4) = (int)StringCchCopyW((char *)pDest, 261LL, v2) >= 0;
  return v4;
}
