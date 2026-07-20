/*
 * XREFs of SmpGetDumpDestination @ 0x1400157C8
 * Callers:
 *     SmpCheckForCrashDump @ 0x14000A4B8 (SmpCheckForCrashDump.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000203C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpEventWriteString @ 0x14001565C (SmpEventWriteString.c)
 *     SmpQueryFileExists @ 0x140015ACC (SmpQueryFileExists.c)
 *     SmpQueryFileSize @ 0x140015B48 (SmpQueryFileSize.c)
 *     SmpQuerySameVolume @ 0x140015D64 (SmpQuerySameVolume.c)
 *     SmpQueryVolumeFreeSpace @ 0x140015EDC (SmpQueryVolumeFreeSpace.c)
 *     SmpDeleteFile @ 0x140016E48 (SmpDeleteFile.c)
 */

__int64 __fastcall SmpGetDumpDestination(
        __int64 a1,
        struct _UNICODE_STRING *a2,
        __int64 a3,
        __int64 a4,
        PUNICODE_STRING DestinationString)
{
  __int64 v8; // rsi
  unsigned __int8 v9; // r14
  __int64 result; // rax
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  NTSTATUS v13; // ebx
  unsigned __int64 v14; // r15
  int v15; // esi
  __m128i v16; // xmm0
  char *v17; // xmm0_8
  __int16 v18; // si
  __int64 OpenOptions; // [rsp+28h] [rbp-D8h]
  char v20[8]; // [rsp+30h] [rbp-D0h] BYREF
  void *FileHandle; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v22; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v23; // [rsp+48h] [rbp-B8h] BYREF
  char *v24; // [rsp+50h] [rbp-B0h]
  __int64 v25; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING NtPathName; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING v27; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  WCHAR SourceString[8]; // [rsp+C0h] [rbp-40h] BYREF
  wchar_t pszDest[264]; // [rsp+D0h] [rbp-30h] BYREF

  v20[0] = 0;
  v22 = 0LL;
  wcscpy(SourceString, L"?:\\");
  v8 = 0LL;
  v9 = 0;
  if ( *(_DWORD *)(a1 + 3992) == 4 )
  {
LABEL_11:
    v9 = 1;
    goto LABEL_12;
  }
  result = SmpQuerySameVolume(a3, a2, v20);
  if ( (int)result < 0 )
    return result;
  if ( v20[0] != 1 )
  {
    if ( *(_DWORD *)&a2[1].Length )
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 64;
      ObjectAttributes.ObjectName = a2;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( NtOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x60u) >= 0 )
      {
        SmpQueryFileSize(FileHandle, &v22);
        NtClose(FileHandle);
        v8 = v22;
      }
    }
    goto LABEL_11;
  }
  if ( (unsigned __int8)SmpQueryFileExists(a2) )
  {
    if ( !*(_DWORD *)&a2[1].Length )
      return 3221225473LL;
    SmpDeleteFile(a2);
  }
LABEL_12:
  v11 = *(_QWORD *)(a1 + 4000);
  result = SmpQueryVolumeFreeSpace(a2, &v25);
  v13 = result;
  if ( (int)result < 0 )
    return result;
  if ( v11 >= v8 + v25 )
  {
    v16 = *(__m128i *)a2;
    v23 = *(_QWORD *)&a2->Length;
    v17 = (char *)_mm_srli_si128(v16, 8).m128i_u64[0];
    v24 = v17;
    if ( v17 )
    {
      v18 = v23;
      if ( (unsigned __int16)v23 >= 8u && RtlCompareMemory(v17, L"\\??\\", 8uLL) == 8 )
      {
        v24 = v17 + 8;
        LOWORD(v23) = v18 - 8;
      }
    }
    SmpEventWriteString(v12, (unsigned __int16 *)&v23);
LABEL_29:
    v13 = -1073741670;
    goto LABEL_30;
  }
  if ( v9 )
  {
    RtlInitUnicodeString(&v27, SourceString);
    SourceString[0] = *(_WORD *)(*(_QWORD *)(a4 + 8) + 8LL);
    v14 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v15 = 0;
    while ( 1 )
    {
      LODWORD(OpenOptions) = (unsigned __int16)(v15 + v14);
      v13 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", v27.Buffer, L"DUMP", OpenOptions);
      if ( v13 < 0 )
        goto LABEL_30;
      if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
        goto LABEL_22;
      if ( !(unsigned __int8)SmpQueryFileExists(&NtPathName) )
      {
        v13 = 0;
        *DestinationString = NtPathName;
        goto LABEL_30;
      }
      RtlFreeUnicodeString(&NtPathName);
      if ( (unsigned int)++v15 >= 0x64 )
      {
LABEL_22:
        v13 = -1073741823;
        goto LABEL_30;
      }
    }
  }
  if ( !RtlCreateUnicodeString(DestinationString, a2->Buffer) )
    goto LABEL_29;
LABEL_30:
  *(_DWORD *)(&a2[1].MaximumLength + 1) = v9;
  return (unsigned int)v13;
}
