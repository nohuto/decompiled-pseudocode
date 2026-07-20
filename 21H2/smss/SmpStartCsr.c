/*
 * XREFs of SmpStartCsr @ 0x140002100
 * Callers:
 *     SmpApiCallback @ 0x140002A70 (SmpApiCallback.c)
 *     SmpCreateInitialSession @ 0x14000E750 (SmpCreateInitialSession.c)
 * Callees:
 *     SmpAllocateInitialCommandBuffer @ 0x140001F24 (SmpAllocateInitialCommandBuffer.c)
 *     SmpAllocateControlBlock @ 0x140002970 (SmpAllocateControlBlock.c)
 *     SmpDereferenceKnownSubSys @ 0x140003A94 (SmpDereferenceKnownSubSys.c)
 *     SmpDestroyControlBlock @ 0x140003BF4 (SmpDestroyControlBlock.c)
 *     SmpReleaseControlBlock @ 0x140003C8C (SmpReleaseControlBlock.c)
 *     SmpRecordControlBlock @ 0x140003E88 (SmpRecordControlBlock.c)
 *     SmpExecuteCommand @ 0x140004568 (SmpExecuteCommand.c)
 *     SmpStopCsr @ 0x1400059D0 (SmpStopCsr.c)
 *     SmpGetCoreProcessIds @ 0x14000E518 (SmpGetCoreProcessIds.c)
 *     __security_check_cookie @ 0x14000E8D0 (__security_check_cookie.c)
 *     memset_0 @ 0x140011B7F (memset_0.c)
 */

__int64 __fastcall SmpStartCsr(__int64 a1)
{
  __int64 v2; // rcx
  __int64 ControlBlock; // rax
  HANDLE *v4; // rbx
  int CoreProcessIds; // edi
  int v6; // eax
  _QWORD *v7; // rcx
  unsigned int v8; // eax
  NTSTATUS v9; // eax
  PVOID v11; // rcx
  int ProcessInformation; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE EventInformation[4]; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h]
  PVOID BaseAddress[2]; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE Object[2]; // [rsp+60h] [rbp-A0h] BYREF
  ULONG v18; // [rsp+70h] [rbp-90h] BYREF
  HANDLE ProcessHandle; // [rsp+78h] [rbp-88h]
  HANDLE ThreadHandle; // [rsp+80h] [rbp-80h]
  void *v21; // [rsp+88h] [rbp-78h]
  _BYTE v22[40]; // [rsp+E0h] [rbp-20h] BYREF
  int v23; // [rsp+108h] [rbp+8h]
  int v24; // [rsp+110h] [rbp+10h]

  memset_0(&v18, 0, 0x68uLL);
  v2 = *(unsigned int *)(a1 + 48);
  *(_OWORD *)BaseAddress = 0LL;
  if ( (unsigned int)v2 < SmpNumberInitialSessions )
  {
    CoreProcessIds = SmpGetCoreProcessIds(v2, BaseAddress);
    *(_DWORD *)(a1 + 48) = *(_DWORD *)(SmpCoreProcessIds + 40LL * *(unsigned int *)(a1 + 48));
    if ( CoreProcessIds >= 0 )
    {
      v11 = BaseAddress[0];
      if ( BaseAddress[0] && *((_DWORD *)BaseAddress[0] + 6) == 2 )
        *(_QWORD *)(a1 + 320) = *((_QWORD *)BaseAddress[0] + 6);
      else
        CoreProcessIds = -1073741823;
      if ( v11 )
        SmpDereferenceKnownSubSys(v11);
      if ( CoreProcessIds >= 0 )
      {
        *(PVOID *)(a1 + 312) = BaseAddress[1];
        return 0LL;
      }
      v24 = *(_DWORD *)(a1 + 48);
      v23 = 6;
      SmpStopCsr(v22, 0LL, 0LL);
      return (unsigned int)CoreProcessIds;
    }
  }
  NtWaitForSingleObject(SmpSessionCreateBlockEvent, 0, 0LL);
  UnicodeString.Length = *(_WORD *)(a1 + 52);
  UnicodeString.MaximumLength = UnicodeString.Length;
  UnicodeString.Buffer = (PWSTR)(a1 + 56);
  ControlBlock = SmpAllocateControlBlock();
  v4 = (HANDLE *)ControlBlock;
  if ( !ControlBlock )
    return 3221225626LL;
  CoreProcessIds = SmpAllocateInitialCommandBuffer(*(_QWORD *)(ControlBlock + 24), (__m128i *)&UnicodeString);
  if ( CoreProcessIds >= 0 )
  {
    CoreProcessIds = SmpExecuteCommand((int)&UnicodeString, (PRTL_USER_PROCESS_PARAMETERS)&v18);
    RtlFreeUnicodeString(&UnicodeString);
    if ( CoreProcessIds >= 0 )
    {
      v6 = NtQueryInformationProcess(ProcessHandle, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
      CoreProcessIds = v6;
      if ( v6 >= 0 )
      {
        v7 = v4[2];
        *v7 = v4[4];
        v7[1] = v4[5];
        v4[6] = ProcessHandle;
        v4[7] = v21;
        *((_DWORD *)v4 + 2) = ProcessInformation;
        v8 = _InterlockedIncrement(&dword_1400293B0);
        if ( v8 > SmpNumberInitialSessions )
          _InterlockedDecrement(&dword_1400293B0);
        else
          *(_DWORD *)(SmpCoreProcessIds + 40LL * (v8 - 1)) = ProcessInformation;
        *((_OWORD *)v4 + 4) = *(_OWORD *)a1;
        *((_OWORD *)v4 + 5) = *(_OWORD *)(a1 + 16);
        v4[12] = *(HANDLE *)(a1 + 32);
        SmpRecordControlBlock(v4);
        CoreProcessIds = NtResumeThread(ThreadHandle, 0LL);
        NtClose(ThreadHandle);
        if ( CoreProcessIds >= 0 )
        {
          Object[0] = v4[6];
          Object[1] = v4[4];
          v9 = NtWaitForMultipleObjects(2u, Object, WaitAny, 0, 0LL);
          CoreProcessIds = v9;
          if ( v9 < 0 )
          {
            if ( (*(_BYTE *)v4 & 1) != 0
              || (_m_prefetchw(v4), (_InterlockedOr((volatile signed __int32 *)v4, 1u) & 1) != 0) )
            {
              CoreProcessIds = 0;
            }
          }
          else
          {
            if ( v9 )
              goto LABEL_11;
            NtQueryEvent(v4[4], EventBasicInformation, EventInformation, 8u, 0LL);
            if ( !v15 )
            {
              if ( (*(_BYTE *)v4 & 1) == 0 )
                _InterlockedOr((volatile signed __int32 *)v4, 1u);
              CoreProcessIds = -1073741823;
LABEL_31:
              SmpDestroyControlBlock(v4);
              goto LABEL_26;
            }
            CoreProcessIds = NtClearEvent(v4[4]);
          }
LABEL_11:
          if ( CoreProcessIds >= 0 )
          {
            SmpReleaseControlBlock(v4);
            return 259LL;
          }
          goto LABEL_31;
        }
        if ( (*(_BYTE *)v4 & 1) == 0 )
          _InterlockedOr((volatile signed __int32 *)v4, 1u);
        goto LABEL_31;
      }
      NtTerminateProcess(ProcessHandle, v6);
      NtClose(ProcessHandle);
      NtClose(ThreadHandle);
    }
  }
LABEL_26:
  SmpReleaseControlBlock(v4);
  return (unsigned int)CoreProcessIds;
}
