/*
 * XREFs of RtlWow64SuspendProcess @ 0x1800DC200
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800487F0 (RtlpCreateUserThreadEx.c)
 *     RtlIsCurrentProcess @ 0x180075BE0 (RtlIsCurrentProcess.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18007AB40 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwQueryObject @ 0x18009D6E0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 *     ZwSuspendProcess @ 0x1800A0C70 (ZwSuspendProcess.c)
 */

__int64 __fastcall RtlWow64SuspendProcess(HANDLE ProcessHandle)
{
  int SharedInfoProcess; // ebx
  BOOLEAN IsCurrentProcess; // al
  NTSTATUS v4; // eax
  HANDLE v5; // rdi
  int v7; // [rsp+30h] [rbp-E8h]
  _BYTE v8[8]; // [rsp+60h] [rbp-B8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-B0h] BYREF
  _BYTE v10[40]; // [rsp+70h] [rbp-A8h] BYREF
  int ThreadInformation[12]; // [rsp+98h] [rbp-80h] BYREF
  _BYTE ObjectInformation[4]; // [rsp+C8h] [rbp-50h] BYREF
  int v13; // [rsp+CCh] [rbp-4Ch]

  Handle = 0LL;
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(ProcessHandle, v8, v10);
  if ( SharedInfoProcess >= 0 )
  {
    if ( v8[0] && (v10[4] & 2) != 0 )
    {
      SharedInfoProcess = ZwQueryObject(ProcessHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
      if ( SharedInfoProcess >= 0 )
      {
        if ( (v13 & 0x800) != 0 )
        {
          IsCurrentProcess = RtlIsCurrentProcess(ProcessHandle);
          v4 = RtlpCreateUserThreadEx(
                 ProcessHandle,
                 0LL,
                 102,
                 0,
                 0LL,
                 0LL,
                 v7,
                 RtlpWow64SuspendLocalProcess,
                 (PVOID)(IsCurrentProcess == 0),
                 &Handle,
                 0LL);
          v5 = Handle;
          SharedInfoProcess = v4;
          if ( v4 >= 0 )
          {
            NtWaitForSingleObject(Handle, 0, 0LL);
            ZwQueryInformationThread(v5, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
            SharedInfoProcess = ThreadInformation[0];
          }
          if ( v5 )
            NtClose(v5);
        }
        else
        {
          return (unsigned int)-1073741790;
        }
      }
    }
    else
    {
      return (unsigned int)ZwSuspendProcess(ProcessHandle);
    }
  }
  return (unsigned int)SharedInfoProcess;
}
