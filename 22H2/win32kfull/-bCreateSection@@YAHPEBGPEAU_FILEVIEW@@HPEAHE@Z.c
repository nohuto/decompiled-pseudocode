/*
 * XREFs of ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0077B60
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0077730 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     bMapFile @ 0x1C028BAB8 (bMapFile.c)
 * Callees:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0078E78 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C0079744 (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
 */

__int64 __fastcall bCreateSection(PCWSTR SourceString, struct _FILEVIEW *a2, int a3, int *a4, unsigned __int8 a5)
{
  void *HandleFromFilePath; // rdi

  HandleFromFilePath = hGetHandleFromFilePath(SourceString, a3 != 0);
  if ( !HandleFromFilePath )
    return 0LL;
  if ( !(unsigned int)bCreateSectionFromHandle(HandleFromFilePath, SourceString, a2, a3, a4, a5) )
  {
    ZwClose(HandleFromFilePath);
    return 0LL;
  }
  if ( (*((_DWORD *)a2 + 10) & 0x10) != 0 )
  {
    ZwClose(*((HANDLE *)a2 + 6));
    *((_QWORD *)a2 + 6) = 0LL;
  }
  return 1LL;
}
