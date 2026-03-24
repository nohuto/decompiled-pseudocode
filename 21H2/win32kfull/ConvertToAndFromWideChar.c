/*
 * XREFs of ConvertToAndFromWideChar @ 0x1C00A4AF4
 * Callers:
 *     cUnicodeRangesSupported @ 0x1C00A49B4 (cUnicodeRangesSupported.c)
 *     WCSToMBEx @ 0x1C00D3558 (WCSToMBEx.c)
 *     RtlWCSMessageWParamCharToMB @ 0x1C012DA10 (RtlWCSMessageWParamCharToMB.c)
 *     RtlMBMessageWParamCharToWCS @ 0x1C025DA60 (RtlMBMessageWParamCharToWCS.c)
 *     EngMultiByteToWideChar @ 0x1C027DB30 (EngMultiByteToWideChar.c)
 *     EngWideCharToMultiByte @ 0x1C027DCA0 (EngWideCharToMultiByte.c)
 *     ?bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z @ 0x1C02BBB70 (-bExtendGlyphSet@@YA_NPEAPEAU_FD_GLYPHSET@@0@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C009FE48 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     memmove @ 0x1C016E4C0 (memmove.c)
 *     memset @ 0x1C016E780 (memset.c)
 *     ConvertToAndFromWideCharSymCP @ 0x1C027D7AC (ConvertToAndFromWideCharSymCP.c)
 *     GetNlsTablePath @ 0x1C027DCC4 (GetNlsTablePath.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ConvertToAndFromWideChar(
        unsigned int a1,
        WCHAR *a2,
        ULONG a3,
        CHAR *a4,
        ULONG MaxBytesInMultiByteString,
        int a6)
{
  struct _CPTABLEINFO *p_CodePageTable; // rdi
  void *v11; // rbx
  NTSTATUS v12; // eax
  ULONG v14; // edi
  void *v15; // rax
  NTSTATUS v16; // eax
  int v17; // edx
  ULONG v18; // eax
  void *v19; // rdi
  ULONG BytesInUnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage; // [rsp+68h] [rbp-98h] BYREF
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-28h]
  _CPTABLEINFO CodePageTable; // [rsp+E0h] [rbp-20h] BYREF
  WCHAR SourceString[264]; // [rsp+120h] [rbp+20h] BYREF

  OemCodePage = 0;
  AnsiCodePage = 0;
  BytesInUnicodeString = 0;
  p_CodePageTable = 0LL;
  v11 = 0LL;
  memset(&CodePageTable, 0, sizeof(CodePageTable));
  RtlGetDefaultCodePage(&AnsiCodePage, &OemCodePage);
  if ( AnsiCodePage == a1 )
  {
    if ( a6 )
      v12 = RtlMultiByteToUnicodeN(a2, a3, &BytesInUnicodeString, a4, MaxBytesInMultiByteString);
    else
      v12 = RtlUnicodeToMultiByteN(a4, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    if ( v12 >= 0 )
      return BytesInUnicodeString;
    return 0xFFFFFFFFLL;
  }
  if ( a1 != 42 )
  {
    GreAcquireFastMutex(ghfmMemory);
    if ( a1 == LastCodePageTranslated && gfLastCPTableInfoInitialized == 1 )
    {
      ++NlsTableUseCount;
      p_CodePageTable = (struct _CPTABLEINFO *)&LastCPTableInfo;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !p_CodePageTable )
    {
      if ( !(unsigned int)GetNlsTablePath(a1, SourceString) )
        return 0xFFFFFFFFLL;
      FileHandle = 0LL;
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      DestinationString = 0LL;
      IoStatusBlock = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) < 0 )
        return 0xFFFFFFFFLL;
      v28 = 0LL;
      FileInformation = 0LL;
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v14 = DWORD2(FileInformation);
        if ( DWORD2(FileInformation) )
        {
          v15 = PALLOCMEM2(DWORD2(FileInformation), 1668768583LL, 1);
          v11 = v15;
          if ( v15 )
          {
            if ( ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v15, v14, 0LL, 0LL) < 0 )
            {
              Win32FreePool(v11);
              v11 = 0LL;
            }
          }
        }
      }
      ZwClose(FileHandle);
      if ( !v11 )
        return 0xFFFFFFFFLL;
      RtlInitCodePageTable((PUSHORT)v11, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v16 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInUnicodeString, a4, MaxBytesInMultiByteString);
    else
      v16 = RtlUnicodeToCustomCPN(p_CodePageTable, a4, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    v17 = v16;
    v18 = BytesInUnicodeString;
    if ( v17 < 0 )
      v18 = -1;
    BytesInUnicodeString = v18;
    if ( p_CodePageTable == &CodePageTable )
    {
      GreAcquireFastMutex(ghfmMemory);
      if ( NlsTableUseCount )
      {
        v19 = v11;
      }
      else
      {
        LastCodePageTranslated = a1;
        memmove(&LastCPTableInfo, p_CodePageTable, 0x40uLL);
        gfLastCPTableInfoInitialized = 1;
        v19 = (void *)LastNlsTableBuffer;
        LastNlsTableBuffer = v11;
      }
      GreReleaseFastMutex(ghfmMemory);
      if ( v19 )
        Win32FreePool(v19);
    }
    else
    {
      GreAcquireFastMutex(ghfmMemory);
      --NlsTableUseCount;
      GreReleaseFastMutex(ghfmMemory);
    }
    return BytesInUnicodeString;
  }
  return ConvertToAndFromWideCharSymCP((_DWORD)a2, a3, (_DWORD)a4, MaxBytesInMultiByteString, a6);
}
