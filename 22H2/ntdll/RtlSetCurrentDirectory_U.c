/*
 * XREFs of RtlSetCurrentDirectory_U @ 0x18005E530
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18001B430 (RtlGetFullPathName_Ustr.c)
 *     RtlpIsDosDeviceName_Ustr @ 0x18001BE90 (RtlpIsDosDeviceName_Ustr.c)
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002A9A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     RtlpCheckForSameCurdir @ 0x18005E6D0 (RtlpCheckForSameCurdir.c)
 *     RtlULongToUShort @ 0x18005E954 (RtlULongToUShort.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005FCFC (RtlpCreateNewDirectoryReference.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

NTSTATUS __cdecl RtlSetCurrentDirectory_U(PUNICODE_STRING PathName)
{
  struct _PEB *v1; // rax
  void *ProcessHeap; // r14
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rdi
  unsigned int MaximumLength; // esi
  SIZE_T i; // r8
  NTSTATUS v8; // ebx
  unsigned int FullPathName_Ustr; // eax
  unsigned __int64 v10; // rbx
  unsigned __int16 v11; // ax
  NTSTATUS v12; // esi
  __int64 v13; // r8
  HANDLE *v14; // rbx
  __int16 v15; // [rsp+30h] [rbp-10h] BYREF
  unsigned __int16 v16; // [rsp+32h] [rbp-Eh] BYREF
  PVOID BaseAddress; // [rsp+38h] [rbp-8h]
  __int64 v18; // [rsp+78h] [rbp+38h] BYREF
  char v19; // [rsp+80h] [rbp+40h] BYREF

  v1 = NtCurrentPeb();
  ProcessHeap = v1->ProcessHeap;
  ProcessParameters = v1->ProcessParameters;
  if ( (unsigned __int8)RtlpCheckForSameCurdir(PathName) )
    return 0;
  if ( (unsigned int)RtlpIsDosDeviceName_Ustr((__int64)PathName) )
    return -1073741565;
  MaximumLength = ProcessParameters->CurrentDirectory.DosPath.MaximumLength;
  for ( i = ProcessParameters->CurrentDirectory.DosPath.MaximumLength; ; i = (unsigned int)(v10 + 4) )
  {
    BaseAddress = RtlAllocateHeap(ProcessHeap, 0, i);
    if ( !BaseAddress )
      return -1073741801;
    v15 = 0;
    v8 = RtlULongToUShort(MaximumLength, &v16);
    if ( v8 < 0 )
      goto LABEL_22;
    FullPathName_Ustr = RtlGetFullPathName_Ustr(
                          &PathName->Length,
                          MaximumLength,
                          (wchar_t *)BaseAddress,
                          0LL,
                          0LL,
                          (__int64)&v19);
    v10 = FullPathName_Ustr;
    if ( !FullPathName_Ustr )
    {
      v8 = -1073741773;
      goto LABEL_22;
    }
    v11 = v16;
    if ( v10 <= (unsigned __int64)v16 - 4 )
      goto LABEL_9;
    if ( (NtCurrentPeb()->BitField & 0x80u) == 0 )
      break;
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    MaximumLength = v10 + 4;
  }
  v11 = v16;
LABEL_9:
  if ( (unsigned int)v10 > v11 )
  {
    v8 = -1073741562;
    goto LABEL_22;
  }
  v8 = RtlULongToUShort((unsigned int)v10, &v15);
  if ( v8 < 0 )
  {
LABEL_22:
    RtlFreeHeap(ProcessHeap, 0, BaseAddress);
    return v8;
  }
  v12 = RtlpCreateNewDirectoryReference(&v15, v16, &v18);
  RtlFreeHeap(ProcessHeap, 0, BaseAddress);
  if ( v12 >= 0 )
  {
    RtlEnterCriticalSection(&FastPebLock);
    v13 = v18;
    v14 = (HANDLE *)RtlpCurDirRef;
    ProcessParameters->CurrentDirectory.Handle = *(void **)(v18 + 8);
    ProcessParameters->CurrentDirectory.DosPath.Buffer = *(wchar_t **)(v13 + 32);
    ProcessParameters->CurrentDirectory.DosPath.Length = *(_WORD *)(v13 + 24);
    RtlpCurDirRef = (PVOID)v13;
    RtlLeaveCriticalSection(&FastPebLock);
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v14, 0xFFFFFFFF) == 1 )
      {
        NtClose(v14[1]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v14);
      }
    }
  }
  return v12;
}
