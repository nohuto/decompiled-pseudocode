/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C000D9D0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FDB8 (PALLOCMEM2.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x1C00A096C (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00A8A44 (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  __int64 v0; // rax
  struct _STRING *v1; // rax
  unsigned int v2; // r8d
  char v3; // r9
  wchar_t *v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+68h] [rbp-9h] BYREF
  STRING Source; // [rsp+78h] [rbp+7h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v8[1] = L"\\SystemRoot\\Fonts";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  v8[0] = 2359330LL;
  Source.Buffer = (PCHAR)L"\\";
  IoStatusBlock = 0LL;
  *(_QWORD *)&Source.Length = 262146LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v1 = (struct _STRING *)PALLOCMEM2(0x190uLL);
    gpniFontsDirectory = v1;
    if ( v1
      && (QueryNameStringFromHandle(FileHandle, (struct _OBJECT_NAME_INFORMATION *)v1, v2, v3) < 0
       || RtlAppendStringToString(gpniFontsDirectory, &Source) < 0) )
    {
      Win32FreePool(gpniFontsDirectory);
      gpniFontsDirectory = 0LL;
    }
    v4 = (wchar_t *)PALLOCMEM2(0x208uLL);
    gpwszFontsDirectory = v4;
    if ( v4 )
    {
      if ( (unsigned int)bAppendSysDirectory(v4, &word_1C02E497C, v5) )
      {
        v6 = -1LL;
        do
          ++v6;
        while ( gpwszFontsDirectory[v6] );
        gcwcFontsDirectory = v6 + 1;
      }
      else
      {
        Win32FreePool(gpwszFontsDirectory);
        gpwszFontsDirectory = 0LL;
        gcwcFontsDirectory = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = PALLOCMEM2(0x190uLL);
    gpniScratch = v0;
  }
  return v0;
}
