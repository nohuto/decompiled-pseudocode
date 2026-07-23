/*
 * XREFs of StartFirstUserProcess @ 0x140A4CB74
 * Callers:
 *     Phase1InitializationIoReady @ 0x140A4D104 (Phase1InitializationIoReady.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     RtlCopyUnicodeString @ 0x14035E210 (RtlCopyUnicodeString.c)
 *     InbvIsBootDriverInstalled @ 0x1403B4FC0 (InbvIsBootDriverInstalled.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     ZwSetInformationProcess @ 0x1403FA900 (ZwSetInformationProcess.c)
 *     ZwResumeThread @ 0x1403FAFC0 (ZwResumeThread.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     memset @ 0x140414300 (memset.c)
 *     FinalizeBootLogo @ 0x1404FF13C (FinalizeBootLogo.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     RtlCreateUserProcessEx @ 0x140A4CD54 (RtlCreateUserProcessEx.c)
 *     QueryRegistryHideMachine @ 0x140A4D008 (QueryRegistryHideMachine.c)
 *     RegistryOverwriteCentralProcessor @ 0x140A8D5C0 (RegistryOverwriteCentralProcessor.c)
 */

void StartFirstUserProcess()
{
  __int64 MaximumLength; // rsi
  __int64 v1; // rbx
  SIZE_T v2; // r14
  char *PoolWithTag; // rax
  char *v4; // rdi
  __int128 v5; // xmm0
  BOOLEAN v6; // r8
  PRTL_USER_PROCESS_EXTENDED_PARAMETERS v7; // r9
  ULONG_PTR v8; // rbx
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-49h] BYREF
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [rsp+40h] [rbp-39h] BYREF
  int v13; // [rsp+E0h] [rbp+67h] BYREF
  LARGE_INTEGER Interval; // [rsp+E8h] [rbp+6Fh] BYREF

  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  memset(&ProcessInformation, 0, sizeof(ProcessInformation));
  if ( (unsigned __int8)QueryRegistryHideMachine() )
    RegistryOverwriteCentralProcessor();
  MaximumLength = stru_140D24938.MaximumLength;
  v1 = stru_140D24928.MaximumLength + 1148LL;
  v2 = v1 + stru_140D24938.MaximumLength;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v2, 0x62537350u);
  v4 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x6Du, 0xFFFFFFFFC000009AuLL, 0LL, 0LL, 0LL);
  memset(PoolWithTag, 0, v2);
  *((_DWORD *)v4 + 1) = v1;
  *(_DWORD *)v4 = v1;
  *((_QWORD *)v4 + 16) = &v4[v1];
  *((_DWORD *)v4 + 2) = 4194305;
  *((_QWORD *)v4 + 126) = MaximumLength;
  *((_OWORD *)v4 + 5) = 0LL;
  *((_QWORD *)v4 + 11) = 0LL;
  *((_QWORD *)v4 + 8) = v4 + 1088;
  *((_WORD *)v4 + 29) = stru_140D24928.MaximumLength;
  RtlCopyUnicodeString((PUNICODE_STRING)(v4 + 56), &stru_140D24928);
  *((_QWORD *)v4 + 13) = &v4[*((unsigned __int16 *)v4 + 29) + 1088];
  *((_WORD *)v4 + 49) = 60;
  RtlCopyUnicodeString((PUNICODE_STRING)v4 + 6, &NtInitialUserProcess);
  v5 = *((_OWORD *)v4 + 6);
  DestinationString.Buffer = (wchar_t *)*((_QWORD *)v4 + 16);
  *((_OWORD *)v4 + 7) = v5;
  DestinationString.Length = 0;
  DestinationString.MaximumLength = MaximumLength;
  RtlCopyUnicodeString(&DestinationString, &stru_140D24938);
  v8 = RtlCreateUserProcessEx((PUNICODE_STRING)v4 + 6, (PRTL_USER_PROCESS_PARAMETERS)v4, v6, v7, &ProcessInformation);
  if ( InbvIsBootDriverInstalled() )
    FinalizeBootLogo();
  if ( (v8 & 0x80000000) != 0LL )
    KeBugCheckEx(0x6Du, v8, 0LL, 1uLL, 0LL);
  v13 = 1;
  v9 = ZwSetInformationProcess(ProcessInformation.ProcessHandle, ProcessBreakOnTermination, &v13, 4u);
  if ( v9 < 0 )
    KeBugCheckEx(0x6Du, v9, 0LL, 2uLL, 0LL);
  v10 = ZwResumeThread(ProcessInformation.ThreadHandle, 0LL);
  if ( v10 < 0 )
    KeBugCheckEx(0x6Du, v10, 0LL, 3uLL, 0LL);
  byte_140C50BBC = 1;
  Interval.QuadPart = -50000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  ZwClose(ProcessInformation.ThreadHandle);
  ZwClose(ProcessInformation.ProcessHandle);
  ExFreePoolWithTag(v4, 0);
}
