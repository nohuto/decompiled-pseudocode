/*
 * XREFs of PnpLogVetoInformation @ 0x140732AE4
 * Callers:
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1407329B0 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CB850 (ObfDereferenceObjectWithTag.c)
 *     PsGetProcessImageFileName @ 0x140316ED0 (PsGetProcessImageFileName.c)
 *     PnpDiagnosticTraceAppVeto @ 0x14050EF94 (PnpDiagnosticTraceAppVeto.c)
 *     RtlFreeAnsiString @ 0x140602CB0 (RtlFreeAnsiString.c)
 *     PsLookupProcessByProcessId @ 0x140625CA0 (PsLookupProcessByProcessId.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14062F20C (PsGetAllocatedFullProcessImageName.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 *     PnpTraceDeviceRemoveProcessVeto @ 0x1408B1A64 (PnpTraceDeviceRemoveProcessVeto.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

_QWORD *__fastcall PnpLogVetoInformation(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax
  bool i; // zf
  _QWORD *v6; // rdi
  char v7; // r12
  int *p_LockNV; // rsi
  __int64 v9; // rcx
  UNICODE_STRING *v10; // rbx
  const CHAR *ProcessImageFileName; // rax
  _QWORD *j; // rax
  __int64 v13; // rdx
  _QWORD *v14; // r15
  STRING DestinationString; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING v16; // [rsp+30h] [rbp-10h] BYREF
  PVOID P; // [rsp+88h] [rbp+48h] BYREF
  PEPROCESS Process; // [rsp+90h] [rbp+50h] BYREF

  result = (_QWORD *)*a2;
  P = 0LL;
  v16 = 0LL;
  Process = 0LL;
  for ( i = a2 == result; ; i = a2 == result )
  {
    v6 = result - 3;
    if ( i )
      break;
    v7 = 0;
    if ( PsLookupProcessByProcessId((HANDLE)*((unsigned int *)v6 + 4), &Process) >= 0 )
    {
      p_LockNV = &Process->Header.LockNV;
      if ( (int)PsGetAllocatedFullProcessImageName((__int64)Process, &P) >= 0 )
      {
        v10 = (UNICODE_STRING *)P;
        if ( !*(_WORD *)P )
        {
          v7 = 1;
          DestinationString = 0LL;
          ExFreePoolWithTag(P, 0);
          v10 = &v16;
          P = &v16;
          ProcessImageFileName = (const CHAR *)PsGetProcessImageFileName((__int64)p_LockNV);
          RtlInitAnsiString(&DestinationString, ProcessImageFileName);
          RtlAnsiStringToUnicodeString(&v16, &DestinationString, 1u);
        }
      }
      else
      {
        v10 = 0LL;
        P = 0LL;
      }
      PnpDiagnosticTraceAppVeto(v9, p_LockNV[272], (__int64)v10, a1);
      for ( j = (_QWORD *)*v6; ; j = (_QWORD *)v14[1] )
      {
        v14 = j - 1;
        if ( v6 == j )
          break;
        if ( *v14 )
          v13 = *(_QWORD *)(*(_QWORD *)(*v14 + 312LL) + 40LL);
        else
          v13 = 0LL;
        PnpTraceDeviceRemoveProcessVeto(a1, v13 + 40, v10);
      }
      if ( v7 )
      {
        RtlFreeAnsiString(v10);
      }
      else if ( v10 )
      {
        ExFreePoolWithTag(v10, 0);
      }
      ObfDereferenceObjectWithTag(p_LockNV, 0x746C6644u);
    }
    result = (_QWORD *)v6[3];
  }
  return result;
}
