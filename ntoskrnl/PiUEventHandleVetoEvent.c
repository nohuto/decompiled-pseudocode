/*
 * XREFs of PiUEventHandleVetoEvent @ 0x14087E074
 * Callers:
 *     PiUEventHandleIoctl @ 0x14068DF6C (PiUEventHandleIoctl.c)
 * Callees:
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseFastMutex @ 0x140262170 (ExReleaseFastMutex.c)
 *     ExAcquireFastMutex @ 0x140262DC0 (ExAcquireFastMutex.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x1402E1550 (PsGetProcessImageFileName.c)
 *     RtlStringCchCopyNW @ 0x140303EF8 (RtlStringCchCopyNW.c)
 *     RtlCopyUnicodeString @ 0x14030E970 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14068DE6C (PiUEventDequeuePendingEventWorker.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407E764C (PsGetAllocatedFullProcessImageName.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUEventHandleVetoEvent(__int64 a1, __int64 *a2, int a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  int AllocatedFullProcessImageName; // esi
  PEPROCESS v7; // r12
  UNICODE_STRING *v8; // rdi
  char v9; // r13
  __int64 v10; // rbx
  struct _FAST_MUTEX *v11; // rcx
  _QWORD *v12; // r15
  __int64 result; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rdx
  __int64 v16; // rax
  NTSTATUS v17; // eax
  const char *ProcessImageFileName; // rax
  __int16 v19; // r11
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  STRING DestinationString; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING v22; // [rsp+38h] [rbp-18h] BYREF
  PEPROCESS Process; // [rsp+80h] [rbp+30h] BYREF

  v5 = *(_QWORD *)(a1 + 32);
  Process = 0LL;
  P = 0LL;
  AllocatedFullProcessImageName = 0;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0;
  v22 = 0LL;
  if ( !v5 || !a2 || a3 != 8 )
  {
    AllocatedFullProcessImageName = -1073741811;
LABEL_7:
    if ( v8 && v8 != &v22 )
      ExFreePoolWithTag(v8, 0);
    goto LABEL_8;
  }
  v10 = *a2;
  v11 = *(struct _FAST_MUTEX **)(v5 + 16);
  *(_QWORD *)&DestinationString.Length = *a2;
  ExAcquireFastMutex(v11);
  v12 = *(_QWORD **)(v5 + 96);
  if ( v12 == (_QWORD *)(v5 + 96) )
  {
    AllocatedFullProcessImageName = -1073741811;
    ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 16));
    goto LABEL_10;
  }
  if ( *(_BYTE *)(v12[3] + 69LL) )
  {
    ExAcquireFastMutex(&PiUEventUsermodeEventQueueLock);
    v14 = v12[3];
    v15 = *(_DWORD **)(v14 + 32);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v14 + 40);
      if ( v16 )
      {
        if ( !*v15 )
        {
          if ( (_BYTE)v10 )
          {
            *v15 = *(_DWORD *)(&DestinationString.MaximumLength + 1);
            v17 = PsLookupProcessByProcessId(*(HANDLE *)(v5 + 48), &Process);
            v7 = Process;
            if ( v17 < 0
              || (AllocatedFullProcessImageName = PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P),
                  AllocatedFullProcessImageName < 0) )
            {
              v8 = &v22;
              RtlInitUnicodeString(&v22, &word_1408834C0);
              AllocatedFullProcessImageName = 0;
            }
            else
            {
              v8 = (UNICODE_STRING *)P;
              if ( !*(_WORD *)P )
              {
                v9 = 1;
                DestinationString = 0LL;
                ExFreePoolWithTag(P, 0);
                v8 = &v22;
                ProcessImageFileName = (const char *)PsGetProcessImageFileName((__int64)v7);
                RtlInitAnsiString(&DestinationString, ProcessImageFileName);
                RtlAnsiStringToUnicodeString(&v22, &DestinationString, 1u);
              }
            }
            if ( v8->Length > 0x400u )
            {
              AllocatedFullProcessImageName = RtlStringCchCopyNW(
                                                *(NTSTRSAFE_PWSTR *)(*(_QWORD *)(v12[3] + 40LL) + 8LL),
                                                0x200uLL,
                                                v8->Buffer,
                                                0x1FFuLL);
              *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40LL) + 8LL) + 1022LL) = 0;
              **(_WORD **)(v12[3] + 40LL) = v19;
            }
            else
            {
              RtlCopyUnicodeString(*(PUNICODE_STRING *)(v12[3] + 40LL), v8);
            }
            KeSetEvent(*(PRKEVENT *)(v12[3] + 24LL), 0, 0);
          }
          else
          {
            **(_WORD **)(v16 + 8) = 0;
            **(_WORD **)(v14 + 40) = 0;
            **(_DWORD **)(v14 + 32) = 0;
          }
        }
      }
    }
    ExReleaseFastMutex(&PiUEventUsermodeEventQueueLock);
  }
  PiUEventDequeuePendingEventWorker(v5, v12, 1);
  ExReleaseFastMutex(*(PFAST_MUTEX *)(v5 + 16));
  if ( !v9 )
    goto LABEL_7;
  RtlFreeUnicodeString(v8);
LABEL_8:
  if ( v7 )
    ObfDereferenceObjectWithTag(v7, 0x746C6644u);
LABEL_10:
  result = (unsigned int)AllocatedFullProcessImageName;
  *(_QWORD *)(a5 + 8) = 0LL;
  return result;
}
