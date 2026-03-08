/*
 * XREFs of ?bCreateSection@@YAHPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BBDF0
 * Callers:
 *     ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C00BB9C0 (-UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     bMapFile @ 0x1C028E338 (bMapFile.c)
 * Callees:
 *     ?bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C00BC0F8 (-bCreateSectionFromHandle@@YAHPEAXPEBGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?hGetHandleFromFilePath@@YAPEAXPEBGH@Z @ 0x1C01153AC (-hGetHandleFromFilePath@@YAPEAXPEBGH@Z.c)
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
