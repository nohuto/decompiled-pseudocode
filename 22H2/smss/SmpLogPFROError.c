/*
 * XREFs of SmpLogPFROError @ 0x140017440
 * Callers:
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     RtlStringCbPrintfExW @ 0x140016690 (RtlStringCbPrintfExW.c)
 *     SmpGetTime @ 0x1400171B4 (SmpGetTime.c)
 */

bool __fastcall SmpLogPFROError(__int64 a1, const wchar_t *a2, int a3)
{
  ULONG v6; // ebx
  NTSTATUS v8; // eax
  HANDLE v9; // rcx
  const wchar_t *v10; // r11
  wchar_t *v11; // rdi
  __int64 ShareAccess; // [rsp+30h] [rbp-D0h]
  ULONG CreateDisposition[2]; // [rsp+38h] [rbp-C8h]
  ULONG CreateOptions[2]; // [rsp+40h] [rbp-C0h]
  PVOID EaBuffer; // [rsp+48h] [rbp-B8h]
  __int64 EaLength; // [rsp+50h] [rbp-B0h]
  size_t pcbRemaining; // [rsp+80h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-78h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-68h] BYREF
  struct _TIME_FIELDS TimeFields; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE FileInformation[8]; // [rsp+D8h] [rbp-28h] BYREF
  size_t v22; // [rsp+E0h] [rbp-20h]
  wchar_t pszDest[256]; // [rsp+F0h] [rbp-10h] BYREF

  v6 = 48;
  if ( !SmpLogFileHandle )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"(*";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtCreateFile(&SmpLogFileHandle, 0x120002u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 0, 3u, 0x64u, 0LL, 0) < 0 )
    {
LABEL_3:
      SmpLogFileHandle = 0LL;
      return 0;
    }
    v8 = NtQueryInformationFile(SmpLogFileHandle, &IoStatusBlock, FileInformation, 0x18u, FileStandardInformation);
    v9 = SmpLogFileHandle;
    if ( v8 < 0 )
    {
LABEL_5:
      NtClose(v9);
      goto LABEL_3;
    }
    pcbRemaining = v22;
    if ( NtSetInformationFile(SmpLogFileHandle, &IoStatusBlock, &pcbRemaining, 8u, FilePositionInformation) < 0 )
    {
      v9 = SmpLogFileHandle;
      goto LABEL_5;
    }
  }
  SmpGetTime(&TimeFields);
  v10 = L"$&";
  v11 = pszDest;
  if ( *a2 )
    v10 = a2;
  LODWORD(EaLength) = TimeFields.Minute;
  LODWORD(EaBuffer) = TimeFields.Hour;
  CreateOptions[0] = TimeFields.Year;
  CreateDisposition[0] = TimeFields.Day;
  LODWORD(ShareAccess) = TimeFields.Month;
  if ( RtlStringCbPrintfExW(
         pszDest,
         0x200uLL,
         0LL,
         &pcbRemaining,
         0,
         L"%d/%d/%d %d:%d:%d - PFRO Error: %wZ, %wZ, 0x%x\r\n",
         ShareAccess,
         *(_QWORD *)CreateDisposition,
         *(_QWORD *)CreateOptions,
         EaBuffer,
         EaLength,
         TimeFields.Second,
         a1,
         v10,
         a3) >= 0 )
    v6 = 512 - pcbRemaining;
  else
    v11 = L"Error logging PFRO error";
  return NtWriteFile(SmpLogFileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v11, v6, 0LL, 0LL) >= 0;
}
