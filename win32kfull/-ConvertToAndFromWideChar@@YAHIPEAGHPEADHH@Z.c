__int64 __fastcall ConvertToAndFromWideChar(
        unsigned int a1,
        unsigned __int16 *a2,
        ULONG a3,
        char *a4,
        ULONG MaxBytesInMultiByteString,
        int a6)
{
  CHAR *v9; // r15
  struct _CPTABLEINFO *p_CodePageTable; // rsi
  void *v11; // rdi
  Gre::Base *v12; // rcx
  NTSTATUS v13; // eax
  struct Gre::Base::SESSION_GLOBALS *v15; // r14
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  ULONG v18; // esi
  void *Buffer; // rax
  NTSTATUS v20; // eax
  __int64 v21; // rcx
  void *v22; // rsi
  ULONG BytesInUnicodeString; // [rsp+60h] [rbp-A0h] BYREF
  USHORT AnsiCodePage; // [rsp+64h] [rbp-9Ch] BYREF
  USHORT OemCodePage[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v26; // [rsp+6Ch] [rbp-94h]
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  char *v28; // [rsp+78h] [rbp-88h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  __int128 FileInformation; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v33; // [rsp+E0h] [rbp-20h]
  _CPTABLEINFO CodePageTable; // [rsp+F0h] [rbp-10h] BYREF
  WCHAR SourceString[264]; // [rsp+130h] [rbp+30h] BYREF

  v26 = a1;
  v28 = a4;
  OemCodePage[0] = 0;
  AnsiCodePage = 0;
  BytesInUnicodeString = 0;
  v9 = a4;
  p_CodePageTable = 0LL;
  v11 = 0LL;
  memset_0(&CodePageTable, 0, sizeof(CodePageTable));
  RtlGetDefaultCodePage(&AnsiCodePage, OemCodePage);
  if ( AnsiCodePage == a1 )
  {
    if ( a6 )
      v13 = RtlMultiByteToUnicodeN(a2, a3, &BytesInUnicodeString, v9, MaxBytesInMultiByteString);
    else
      v13 = RtlUnicodeToMultiByteN(v9, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    if ( v13 >= 0 && (BytesInUnicodeString & 0x80000000) == 0 )
      return BytesInUnicodeString;
    return 0xFFFFFFFFLL;
  }
  if ( a1 != 42 )
  {
    v15 = Gre::Base::Globals(v12);
    GreAcquireFastMutex(*((_QWORD *)v15 + 18));
    v17 = *(_DWORD **)(SGDGetSessionState(v16) + 32);
    if ( v26 == v17[5034] && v17[5053] == 1 )
    {
      ++v17[5052];
      p_CodePageTable = (struct _CPTABLEINFO *)(v17 + 5036);
    }
    GreReleaseFastMutex(*((_QWORD *)v15 + 18));
    if ( !p_CodePageTable )
    {
      if ( !GetNlsTablePath(v26, SourceString) )
        return 0xFFFFFFFFLL;
      FileHandle = 0LL;
      *(&ObjectAttributes.Length + 1) = 0;
      *(&ObjectAttributes.Attributes + 1) = 0;
      DestinationString = 0LL;
      IoStatusBlock = 0LL;
      RtlInitUnicodeString(&DestinationString, SourceString);
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0) < 0 )
        return 0xFFFFFFFFLL;
      v33 = 0LL;
      FileInformation = 0LL;
      if ( ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation) >= 0 )
      {
        v18 = DWORD2(FileInformation);
        if ( DWORD2(FileInformation) )
        {
          Buffer = (void *)Win32AllocPoolZInit(DWORD2(FileInformation), 1668768583LL);
          v11 = Buffer;
          if ( Buffer && ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, v18, 0LL, 0LL) < 0 )
          {
            Win32FreePool(v11);
            v11 = 0LL;
          }
          v9 = v28;
        }
      }
      ZwClose(FileHandle);
      if ( !v11 )
        return 0xFFFFFFFFLL;
      RtlInitCodePageTable((PUSHORT)v11, &CodePageTable);
      p_CodePageTable = &CodePageTable;
    }
    if ( a6 )
      v20 = RtlCustomCPToUnicodeN(p_CodePageTable, a2, a3, &BytesInUnicodeString, v9, MaxBytesInMultiByteString);
    else
      v20 = RtlUnicodeToCustomCPN(p_CodePageTable, v9, MaxBytesInMultiByteString, &BytesInUnicodeString, a2, a3);
    if ( v20 < 0 || (BytesInUnicodeString & 0x80000000) != 0 )
      BytesInUnicodeString = -1;
    v21 = *((_QWORD *)v15 + 18);
    if ( p_CodePageTable == &CodePageTable )
    {
      GreAcquireFastMutex(v21);
      if ( v17[5052] )
      {
        v22 = v11;
      }
      else
      {
        v17[5034] = v26;
        memmove(v17 + 5036, p_CodePageTable, 0x40uLL);
        v22 = (void *)*((_QWORD *)v15 + 375);
        *((_QWORD *)v15 + 375) = v11;
        v17[5053] = 1;
      }
      GreReleaseFastMutex(*((_QWORD *)v15 + 18));
      if ( v22 )
        Win32FreePool(v22);
    }
    else
    {
      GreAcquireFastMutex(v21);
      --v17[5052];
      GreReleaseFastMutex(*((_QWORD *)v15 + 18));
    }
    return BytesInUnicodeString;
  }
  return ConvertToAndFromWideCharSymCP(a2, a3, v9, MaxBytesInMultiByteString, a6);
}
