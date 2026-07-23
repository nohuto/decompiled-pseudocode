/*
 * XREFs of RtlWow64SuspendThread @ 0x1800DC370
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800487F0 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetSharedInfoProcess @ 0x18007AB40 (RtlWow64GetSharedInfoProcess.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwQueryObject @ 0x18009D6E0 (ZwQueryObject.c)
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 *     ZwDuplicateObject @ 0x18009DC60 (ZwDuplicateObject.c)
 *     NtSuspendThread @ 0x1800A0C90 (NtSuspendThread.c)
 *     RtlpWow64OpenThreadProcess @ 0x1800DC5B8 (RtlpWow64OpenThreadProcess.c)
 */

__int64 __fastcall RtlWow64SuspendThread(HANDLE ThreadHandle, int *PreviousSuspendCount)
{
  HANDLE v2; // rdi
  int SharedInfoProcess; // ebx
  void *v6; // rdx
  ULONG Options; // [rsp+30h] [rbp-D0h]
  _BYTE v9[8]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE TargetProcessHandle; // [rsp+68h] [rbp-98h]
  HANDLE Handle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE TargetHandle; // [rsp+78h] [rbp-88h] BYREF
  __int64 v13[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v14[40]; // [rsp+98h] [rbp-68h] BYREF
  int ThreadInformation[12]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE ObjectInformation[56]; // [rsp+F0h] [rbp-10h] BYREF

  TargetProcessHandle = 0LL;
  TargetHandle = 0LL;
  v2 = 0LL;
  Handle = 0LL;
  SharedInfoProcess = RtlpWow64OpenThreadProcess(ThreadHandle, (__int64)v13);
  if ( SharedInfoProcess < 0 )
    goto LABEL_20;
  if ( (void *)v13[0] == NtCurrentTeb()->ClientId.UniqueProcess
    && (void *)v13[1] == NtCurrentTeb()->ClientId.UniqueThread )
  {
    goto LABEL_18;
  }
  SharedInfoProcess = RtlWow64GetSharedInfoProcess(TargetProcessHandle, v9, v14);
  if ( SharedInfoProcess < 0 )
  {
LABEL_19:
    v2 = Handle;
    goto LABEL_20;
  }
  if ( !v9[0] || (v14[4] & 2) == 0 )
  {
LABEL_18:
    SharedInfoProcess = NtSuspendThread(ThreadHandle, (PULONG)PreviousSuspendCount);
    goto LABEL_19;
  }
  SharedInfoProcess = ZwQueryObject(ThreadHandle, ObjectBasicInformation, ObjectInformation, 0x38u, 0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_19;
  if ( (ObjectInformation[4] & 2) == 0 )
  {
    SharedInfoProcess = -1073741790;
    goto LABEL_19;
  }
  SharedInfoProcess = ZwDuplicateObject(
                        (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                        ThreadHandle,
                        TargetProcessHandle,
                        &TargetHandle,
                        0x10080Au,
                        0,
                        0);
  if ( SharedInfoProcess < 0 )
    goto LABEL_19;
  v6 = TargetHandle;
  if ( (void *)v13[0] != NtCurrentTeb()->ClientId.UniqueProcess )
    v6 = (void *)((unsigned __int64)TargetHandle | 1);
  SharedInfoProcess = RtlpCreateUserThreadEx(
                        TargetProcessHandle,
                        0LL,
                        102,
                        0,
                        0LL,
                        0LL,
                        Options,
                        RtlpWow64SuspendThreadWorker,
                        v6,
                        &Handle,
                        0LL);
  if ( SharedInfoProcess < 0 )
    goto LABEL_19;
  v2 = Handle;
  NtWaitForSingleObject(Handle, 0, 0LL);
  ZwQueryInformationThread(v2, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
  SharedInfoProcess = ThreadInformation[0];
  if ( ThreadInformation[0] >= 0 )
  {
    if ( PreviousSuspendCount )
      *PreviousSuspendCount = ThreadInformation[0];
    SharedInfoProcess = 0;
  }
LABEL_20:
  if ( TargetHandle )
    ZwDuplicateObject(TargetProcessHandle, TargetHandle, 0LL, 0LL, 0, 0, 3u);
  if ( TargetProcessHandle )
    NtClose(TargetProcessHandle);
  if ( v2 )
    NtClose(v2);
  return (unsigned int)SharedInfoProcess;
}
