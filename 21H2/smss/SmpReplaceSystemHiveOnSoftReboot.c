/*
 * XREFs of SmpReplaceSystemHiveOnSoftReboot @ 0x14000F3BC
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140009604 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     SmpDeleteFile @ 0x140016E48 (SmpDeleteFile.c)
 *     SmpOpenTargetFile @ 0x140017680 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140017798 (SmpRenameTargetFile.c)
 *     SmpTerminate @ 0x1400181F8 (SmpTerminate.c)
 */

__int64 SmpReplaceSystemHiveOnSoftReboot()
{
  int v0; // r9d
  __int64 result; // rax
  int v2; // eax
  unsigned __int64 v3; // rbx
  HANDLE Handle; // [rsp+30h] [rbp-59h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-51h] BYREF
  struct _UNICODE_STRING v6; // [rsp+48h] [rbp-41h] BYREF
  struct _UNICODE_STRING v7; // [rsp+58h] [rbp-31h] BYREF
  struct _UNICODE_STRING v8; // [rsp+68h] [rbp-21h] BYREF
  struct _UNICODE_STRING v9; // [rsp+78h] [rbp-11h] BYREF
  int v10; // [rsp+88h] [rbp-1h] BYREF
  __int64 v11; // [rsp+90h] [rbp+7h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+98h] [rbp+Fh]
  int v13; // [rsp+A0h] [rbp+17h]
  __int128 v14; // [rsp+A8h] [rbp+1Fh]
  unsigned __int64 Parameters[2]; // [rsp+B8h] [rbp+2Fh] BYREF
  __int128 v16; // [rsp+C8h] [rbp+3Fh]

  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\config\\SYSTEM.ksr.tmp");
  v11 = 0LL;
  p_DestinationString = &DestinationString;
  LOBYTE(v0) = 1;
  v10 = 48;
  v13 = 64;
  v14 = 0LL;
  result = SmpOpenTargetFile((int)&Handle, 1114112, (int)&v10, v0, 3u);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(&v6, L"\\SystemRoot\\System32\\config\\SYSTEM");
    v2 = SmpRenameTargetFile(&v6, Handle, 1LL, 0LL);
    v3 = v2;
    if ( v2 < 0 )
    {
      RtlInitUnicodeString(&v7, L"Failed to replace system hive on soft reboot");
      Parameters[1] = v3;
      Parameters[0] = (unsigned __int64)&v7;
      v16 = 0LL;
      SmpTerminate(Parameters, 1u, 4u);
      JUMPOUT(0x14000F517LL);
    }
    NtClose(Handle);
    RtlInitUnicodeString(&v8, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG1");
    RtlInitUnicodeString(&v9, L"\\SystemRoot\\System32\\config\\SYSTEM.LOG2");
    SmpDeleteFile(&v8);
    return SmpDeleteFile(&v9);
  }
  return result;
}
