/*
 * XREFs of RtlQueryProcessDebugInformation @ 0x1800D7740
 * Callers:
 *     RtlpQueryProcessDebugInformationFromWow64 @ 0x1800D8BA0 (RtlpQueryProcessDebugInformationFromWow64.c)
 *     RtlpQueryProcessDebugInformationRemote @ 0x1800D8C40 (RtlpQueryProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800487F0 (RtlpCreateUserThreadEx.c)
 *     RtlWow64GetProcessMachines @ 0x18007BE00 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D560 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x18009D980 (ZwQueryInformationThread.c)
 *     NtOpenProcess @ 0x18009D9A0 (NtOpenProcess.c)
 *     ZwDuplicateObject @ 0x18009DC60 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009DCC0 (ZwReadVirtualMemory.c)
 *     NtTerminateThread @ 0x18009DF40 (NtTerminateThread.c)
 *     memset @ 0x1800A4600 (memset.c)
 *     RtlQueryProcessBackTraceInformation @ 0x1800D75B0 (RtlQueryProcessBackTraceInformation.c)
 *     RtlQueryProcessHeapInformation @ 0x1800D7C20 (RtlQueryProcessHeapInformation.c)
 *     RtlQueryProcessLockInformation @ 0x1800D8000 (RtlQueryProcessLockInformation.c)
 *     RtlQueryProcessModuleInformation @ 0x1800D82A0 (RtlQueryProcessModuleInformation.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800D85D0 (RtlpChangeQueryDebugBufferTarget.c)
 *     RtlpCopyRemoteDebugInformation @ 0x1800D8960 (RtlpCopyRemoteDebugInformation.c)
 *     RtlpQueryCriticalSectionOwnerInformation @ 0x1800D8B4C (RtlpQueryCriticalSectionOwnerInformation.c)
 *     RtlpValidateRemoteDebugInformation @ 0x1800D901C (RtlpValidateRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x1800DB0F4 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlpCreateExecutionRequiredRequest @ 0x18010AFD4 (RtlpCreateExecutionRequiredRequest.c)
 *     RtlpDestroyExecutionRequiredRequest @ 0x18010B0D4 (RtlpDestroyExecutionRequiredRequest.c)
 */

NTSTATUS __cdecl RtlQueryProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  NTSTATUS (__cdecl *v3)(PVOID); // rbx
  _QWORD *v4; // r15
  NTSTATUS result; // eax
  SIZE_T OffsetFree; // r8
  bool v10; // dl
  NTSTATUS v11; // eax
  HANDLE v12; // rcx
  unsigned int v13; // r15d
  HANDLE v14; // r14
  HANDLE TargetProcessHandle; // rcx
  HANDLE v16; // rcx
  HANDLE v17; // r15
  int v18; // eax
  ULONG Options; // [rsp+30h] [rbp-D0h]
  HANDLE ProcessHandle; // [rsp+60h] [rbp-A0h] BYREF
  USHORT ProcessMachine[2]; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v22; // [rsp+6Ch] [rbp-94h]
  HANDLE TargetHandle; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v24; // [rsp+78h] [rbp-88h] BYREF
  PUSER_THREAD_START_ROUTINE v25; // [rsp+80h] [rbp-80h]
  _CLIENT_ID ClientId; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR NumberOfBytesRead; // [rsp+98h] [rbp-68h] BYREF
  LARGE_INTEGER Timeout; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE Handle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE v30; // [rsp+B0h] [rbp-50h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _QWORD v32[17]; // [rsp+E8h] [rbp-18h] BYREF
  _DWORD ThreadInformation[12]; // [rsp+170h] [rbp+70h] BYREF
  _BYTE Buffera[64]; // [rsp+1A0h] [rbp+A0h] BYREF
  NTSTATUS (__cdecl *v35)(PVOID); // [rsp+1E0h] [rbp+E0h]

  v3 = 0LL;
  v25 = (PUSER_THREAD_START_ROUTINE)RtlpQueryProcessDebugInformationRemote;
  v4 = 0LL;
  ProcessHandle = 0LL;
  v22 = 0;
  if ( Buffer->TargetProcessId && Buffer->TargetProcessId != UniqueProcessId )
    return -1073741811;
  if ( (Flags & 0x3FFFFFBE) != 0 && (Flags & 0x40000000) != 0 )
    return -1073741637;
  Buffer->Flags = Flags;
  OffsetFree = Buffer->OffsetFree;
  Timeout.QuadPart = -600000000LL;
  if ( OffsetFree )
    memset(&Buffer[1], 0, OffsetFree - 208);
  Buffer->OffsetFree = 208LL;
  v10 = 0;
  if ( (Flags & 0x3FFFFFBE) == 0 )
    v10 = (Flags & 0x80000000) != 0 && (Flags & 0x41) != 0;
  if ( v10 )
  {
    if ( (Flags & 0x40000000) != 0 )
    {
      v4 = UniqueProcessId;
    }
    else if ( NtCurrentTeb()->ClientId.UniqueProcess != UniqueProcessId )
    {
      ObjectAttributes.Length = 48;
      memset(&ObjectAttributes.RootDirectory, 0, 20);
      ClientId.UniqueProcess = UniqueProcessId;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ClientId.UniqueThread = 0LL;
      v11 = NtOpenProcess(&ProcessHandle, 0x1FFFFFu, &ObjectAttributes, &ClientId);
      v12 = ProcessHandle;
      v4 = v32;
      v32[1] = RtlpQueryReadVirtualMemory;
      if ( v11 < 0 )
        v12 = 0LL;
      v32[2] = NtQueryInformationProcess;
      ProcessHandle = v12;
      v32[0] = v12;
    }
  }
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId || (Flags & 0x40000000) != 0 || ProcessHandle )
  {
    if ( (Flags & 0x41) == 0 || (LODWORD(v3) = RtlQueryProcessModuleInformation(v4, Flags, Buffer), !(_DWORD)v3) )
    {
      if ( (Flags & 2) == 0 || (LODWORD(v3) = RtlQueryProcessBackTraceInformation(Buffer), !(_DWORD)v3) )
      {
        if ( (Flags & 0x20) == 0 || (LODWORD(v3) = RtlQueryProcessLockInformation(Buffer), !(_DWORD)v3) )
        {
          if ( (Flags & 0x21C) == 0 || (LODWORD(v3) = RtlQueryProcessHeapInformation(Buffer), !(_DWORD)v3) )
          {
            if ( (Flags & 0x80u) == 0 || (LODWORD(v3) = AVrfpQueryProcessVerifierOptions(Buffer), !(_DWORD)v3) )
            {
              if ( (Flags & 0xC00) != 0 )
                LODWORD(v3) = RtlpQueryCriticalSectionOwnerInformation(Buffer, Flags);
            }
          }
        }
      }
    }
    v16 = ProcessHandle;
    if ( !ProcessHandle )
      return (int)v3;
    goto LABEL_71;
  }
  if ( ((Flags - 1024) & 0xFFFFFBFF) == 0 )
  {
    ObjectAttributes.Length = 48;
    memset(&ObjectAttributes.RootDirectory, 0, 20);
    ClientId.UniqueProcess = UniqueProcessId;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ClientId.UniqueThread = 0LL;
    if ( NtOpenProcess(&ProcessHandle, 0x1000u, &ObjectAttributes, &ClientId) >= 0 )
    {
      if ( RtlWow64GetProcessMachines(ProcessHandle, ProcessMachine, 0LL) >= 0
        && ProcessMachine[0]
        && ZwDuplicateObject(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             ProcessHandle,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x10u,
             0,
             0) >= 0 )
      {
        if ( ZwReadVirtualMemory(TargetHandle, &LdrSystemDllInitBlock, Buffera, 0xF0uLL, &NumberOfBytesRead) >= 0
          && NumberOfBytesRead == 240 )
        {
          v3 = v35;
        }
        NtClose(TargetHandle);
        if ( v3 )
        {
          v25 = v3;
          v22 = 1;
        }
      }
      NtClose(ProcessHandle);
    }
    ProcessHandle = 0LL;
  }
  v13 = v22;
  v24 = 0LL;
  result = RtlpChangeQueryDebugBufferTarget(Buffer, UniqueProcessId, v22, &v24);
  if ( result >= 0 )
  {
    v14 = v24;
    TargetProcessHandle = v24;
    if ( !v24 )
      TargetProcessHandle = Buffer->TargetProcessHandle;
    LODWORD(v3) = RtlpCreateExecutionRequiredRequest(TargetProcessHandle, &v30);
    v16 = v14;
    if ( (int)v3 >= 0 )
    {
      LODWORD(v3) = RtlpCreateUserThreadEx(v14, 0LL, 6, 0, 0LL, 0LL, Options, v25, Buffer->ViewBaseTarget, &Handle, 0LL);
      if ( (int)v3 >= 0 )
      {
        v17 = Handle;
        v18 = NtWaitForSingleObject(Handle, 1u, &Timeout);
        LODWORD(v3) = v18;
        if ( v18 < 0 )
        {
          NtTerminateThread(v17, v18);
        }
        else
        {
          LODWORD(v3) = ZwQueryInformationThread(v17, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
          if ( (int)v3 >= 0 )
            LODWORD(v3) = ThreadInformation[0];
        }
        NtClose(v17);
        v13 = v22;
      }
      NtClose(v14);
      if ( v30 )
        RtlpDestroyExecutionRequiredRequest(v30);
      if ( (int)v3 < 0 )
        return (int)v3;
      if ( v13 == 1 )
      {
        LODWORD(v3) = 0;
        Buffer->CriticalSectionOwnerThread = (HANDLE)(unsigned int)_mm_cvtsi128_si32(
                                                                     _mm_srli_si128(
                                                                       *(__m128i *)((char *)&Buffer->CommitSize
                                                                                  + Buffer->ViewSize),
                                                                       4));
      }
      else
      {
        if ( !v13 )
          LODWORD(v3) = RtlpCopyRemoteDebugInformation(Buffer);
        if ( (int)v3 < 0 )
          return (int)v3;
      }
      if ( (Flags & 1) != 0 && !Buffer->Modules )
        LODWORD(v3) = -1073741558;
      if ( (Flags & 0x40) != 0 && !Buffer->Modules )
        LODWORD(v3) = -1073741558;
      if ( (int)v3 >= 0 )
        LODWORD(v3) = RtlpValidateRemoteDebugInformation(Buffer, Flags, &Buffer[1], Buffer->OffsetFree - 208);
      return (int)v3;
    }
LABEL_71:
    NtClose(v16);
    return (int)v3;
  }
  return result;
}
