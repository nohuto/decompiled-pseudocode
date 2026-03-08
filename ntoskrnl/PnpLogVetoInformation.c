/*
 * XREFs of PnpLogVetoInformation @ 0x140961470
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14096ED2C (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140208B50 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x1402447D0 (RtlAppendUnicodeStringToString.c)
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     PsGetProcessImageFileName @ 0x1402E1550 (PsGetProcessImageFileName.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PnpDiagnosticTraceAppVeto @ 0x140560644 (PnpDiagnosticTraceAppVeto.c)
 *     IopAllocateUnicodeString @ 0x140683958 (IopAllocateUnicodeString.c)
 *     PsLookupProcessByProcessId @ 0x1406AC100 (PsLookupProcessByProcessId.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1407E764C (PsGetAllocatedFullProcessImageName.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     PnpGetProcessCommandLine @ 0x1409613D8 (PnpGetProcessCommandLine.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  char v5; // r12
  PEPROCESS v6; // r14
  UNICODE_STRING *v7; // rbx
  const char *ProcessImageFileName; // rax
  _QWORD *i; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  void *ProcessCommandLine; // rsi
  __int64 v13; // rcx
  _QWORD *v14; // rdi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-30h] BYREF
  STRING SourceString; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING v17; // [rsp+50h] [rbp-10h] BYREF
  PVOID P; // [rsp+A8h] [rbp+48h] BYREF
  PEPROCESS Process; // [rsp+B0h] [rbp+50h] BYREF

  P = 0LL;
  Process = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  IopAllocateUnicodeString((__int64)&DestinationString, 0xC90u);
  for ( result = (_QWORD *)*a2; ; result = (_QWORD *)v14[3] )
  {
    v14 = result - 3;
    if ( a2 == result )
      break;
    v5 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v14 + 4), &Process) >= 0 )
    {
      v6 = Process;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, (__int64 *)&P) >= 0 )
      {
        v7 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v5 = 1;
          SourceString = 0LL;
          ExFreePoolWithTag(P, 0);
          v7 = &v17;
          P = &v17;
          ProcessImageFileName = (const char *)PsGetProcessImageFileName((__int64)v6);
          RtlInitAnsiString(&SourceString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v17, &SourceString, 1u);
        }
      }
      else
      {
        v7 = 0LL;
        P = 0LL;
      }
      for ( i = (_QWORD *)*v14; ; i = (_QWORD *)v11[1] )
      {
        v11 = i - 1;
        if ( v14 == i )
          break;
        v10 = *v11 ? *(_QWORD *)(*(_QWORD *)(*v11 + 312LL) + 40LL) : 0LL;
        if ( RtlAppendUnicodeStringToString(&DestinationString, (PCUNICODE_STRING)(v10 + 40)) < 0
          || RtlAppendUnicodeToString(&DestinationString, L"\r\n") < 0 )
        {
          break;
        }
      }
      ProcessCommandLine = PnpGetProcessCommandLine((struct _EX_RUNDOWN_REF *)v6);
      PnpDiagnosticTraceAppVeto(
        v13,
        (int)v6[1].Header.WaitListHead.Flink,
        (__int64)v7,
        a1,
        (__int64)ProcessCommandLine,
        (__int64)&DestinationString);
      if ( v5 )
      {
        RtlFreeUnicodeString(v7);
      }
      else if ( v7 )
      {
        ExFreePoolWithTag(v7, 0);
        P = 0LL;
      }
      if ( ProcessCommandLine )
        ExFreePoolWithTag(ProcessCommandLine, 0x4F706E50u);
      RtlFreeUnicodeString(&DestinationString);
      ObfDereferenceObjectWithTag(v6, 0x746C6644u);
    }
  }
  return result;
}
