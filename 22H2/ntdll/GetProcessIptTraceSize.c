/*
 * XREFs of GetProcessIptTraceSize @ 0x180117EE0
 * Callers:
 *     PsspCaptureIptTrace @ 0x180114C10 (PsspCaptureIptTrace.c)
 * Callees:
 *     RtlReleasePrivilege @ 0x180081470 (RtlReleasePrivilege.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtDeviceIoControlFile @ 0x18009D5C0 (NtDeviceIoControlFile.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwCreateFile @ 0x18009DF80 (ZwCreateFile.c)
 *     AcquireDebugPrivilege @ 0x180117D50 (AcquireDebugPrivilege.c)
 */

NTSTATUS __fastcall GetProcessIptTraceSize(__int64 a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  bool v5; // bl
  NTSTATUS v6; // edi
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-98h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  _DWORD InputBuffer[4]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v11; // [rsp+B8h] [rbp-48h]
  __int64 v12; // [rsp+C0h] [rbp-40h]
  _IO_STATUS_BLOCK v13; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE OutputBuffer[8]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+F0h] [rbp-10h]

  *a2 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 0;
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_1801666F0;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = NtCreateFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 1u, 1u, 0x4Cu, 0LL, 0);
  if ( result >= 0 )
  {
    v5 = AcquireDebugPrivilege((PVOID *)&IoStatusBlock);
    InputBuffer[1] = 0;
    InputBuffer[0] = 1;
    InputBuffer[2] = 1;
    v11 = 1;
    v12 = a1;
    v6 = NtDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &v13, 0x220004u, InputBuffer, 0x30u, OutputBuffer, 0x18u);
    NtClose(FileHandle);
    if ( v5 )
      RtlReleasePrivilege(IoStatusBlock.Pointer);
    if ( v6 >= 0 )
    {
      if ( v15 <= 0xFFFFFFFF )
      {
        *a2 = v15;
        return 0;
      }
      else
      {
        return -1073740757;
      }
    }
    else
    {
      return v6;
    }
  }
  return result;
}
