/*
 * XREFs of SmpShuffleMove @ 0x140017C34
 * Callers:
 *     SmpProcessFileRenames @ 0x140009054 (SmpProcessFileRenames.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x14000203C (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpCheckFolderForRedirections @ 0x14000EE7C (SmpCheckFolderForRedirections.c)
 *     SmpQueryFileExists @ 0x140015ACC (SmpQueryFileExists.c)
 *     SmpOpenTargetFile @ 0x140017680 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017798 (SmpRenameTargetFile.c)
 */

__int64 __fastcall SmpShuffleMove(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  int v6; // ebx
  unsigned __int64 v7; // r15
  int v8; // edi
  __int64 v10; // [rsp+28h] [rbp-D8h]
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE v12; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING NtPathName; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _OBJECT_ATTRIBUTES v16; // [rsp+70h] [rbp-90h] BYREF
  wchar_t pszDest[264]; // [rsp+A0h] [rbp-60h] BYREF

  Handle = 0LL;
  UnicodeString.Buffer = 0LL;
  v12 = (HANDLE)-1LL;
  if ( a3 != 1 || SmpCheckFolderForRedirections(&a1->Length, &v12) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)SmpTempFilesDir.Buffer + 4);
    v7 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
    v8 = 0;
    while ( 1 )
    {
      LODWORD(v10) = (unsigned __int16)(v8 + v7);
      v6 = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", DestinationString.Buffer, L"SMSS-PFRO", v10);
      if ( v6 < 0 )
        break;
      if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
      {
        v6 = -1073741823;
        break;
      }
      if ( !SmpQueryFileExists(&NtPathName) )
      {
        UnicodeString = NtPathName;
        v16.RootDirectory = 0LL;
        v16.Length = 48;
        v16.Attributes = 64;
        v16.ObjectName = a1;
        *(_OWORD *)&v16.SecurityDescriptor = 0LL;
        v6 = SmpOpenTargetFile(&Handle, 0x110000u, &v16, 1, 3u);
        if ( v6 >= 0 )
        {
          v6 = SmpRenameTargetFile((const void **)&UnicodeString, Handle, 1, a3);
          if ( v6 >= 0 )
          {
            v6 = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
            if ( v6 >= 0 )
              v6 = 0;
            else
              SmpRenameTargetFile((const void **)a1, Handle, 1, a3);
          }
        }
        break;
      }
      RtlFreeUnicodeString(&NtPathName);
      if ( (unsigned int)++v8 >= 0x64 )
      {
        v6 = -1073741823;
        break;
      }
    }
  }
  else
  {
    v6 = -1073740533;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    NtClose(Handle);
  if ( v12 != (HANDLE)-1LL )
    NtClose(v12);
  return (unsigned int)v6;
}
