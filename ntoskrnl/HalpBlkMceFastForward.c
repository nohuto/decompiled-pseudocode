/*
 * XREFs of HalpBlkMceFastForward @ 0x140B132B0
 * Callers:
 *     HalpBlkMachineCheckAbort @ 0x140B12280 (HalpBlkMachineCheckAbort.c)
 *     HalpBlkNmiInterrupt @ 0x140B12400 (HalpBlkNmiInterrupt.c)
 * Callees:
 *     HalpBlkFatalErrorHalt @ 0x140B110B0 (HalpBlkFatalErrorHalt.c)
 */

volatile signed __int32 *__fastcall HalpBlkMceFastForward(unsigned __int64 a1, char a2)
{
  unsigned __int64 v2; // r9
  char v4; // bl
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // rsi
  volatile signed __int32 *result; // rax
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 384);
  v4 = 0;
  v5 = *(unsigned __int64 *)((char *)&KeGetPcr()->NtTib.ExceptionList[4].Next[3].Next + 4);
  if ( v2 <= v5 && v2 >= v5 - 0x2000 )
  {
    v4 = 1;
    _InterlockedIncrement((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[151].Handler);
  }
  v6 = *(unsigned __int64 *)((char *)&KeGetPcr()->NtTib.ExceptionList[4].Next[2].Handler + 4);
  if ( v2 <= v6 && v2 >= v6 - 0x2000 )
  {
    v4 |= 2u;
    _InterlockedIncrement((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[151].Handler + 1);
  }
  v7 = *(_QWORD *)(a1 + 360);
  if ( v7 >= (unsigned __int64)&HalpBlkMceExitMceTailMceBegin && v7 < (unsigned __int64)&HalpBlkMceExitMceTailMceEnd )
  {
    v4 |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152]);
  }
  if ( v7 >= (unsigned __int64)&HalpBlkMceExitMceTailNmiBegin && v7 < (unsigned __int64)HalpBlkMceExitMceTailNmiEnd )
  {
    v4 |= 4u;
    _InterlockedIncrement((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152]);
  }
  ExceptionList = KeGetPcr()->NtTib.ExceptionList;
  if ( !a2 && (v4 & 1) == 0 )
  {
    result = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedIncrement(result + 612);
LABEL_21:
    v10 = 2264LL;
    goto LABEL_23;
  }
  result = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
  _InterlockedIncrement(result + 611);
  if ( (v4 & 1) != 0 )
  {
    result = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedIncrement(result + 615);
  }
  if ( a2 )
  {
    if ( (v4 & 1) != 0 )
      HalpBlkFatalErrorHalt(2u, a1);
    goto LABEL_21;
  }
  v10 = 2344LL;
LABEL_23:
  if ( (v4 & 4) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[154]);
    *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 360) = *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v10);
    *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 376) = *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v10 + 16);
    *(_QWORD *)(a1 + 392) = *(_EXCEPTION_REGISTRATION_RECORD **)((char *)&ExceptionList[2].Next + v10);
    *(_QWORD *)(a1 + 48) = *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))((char *)&ExceptionList[2].Handler + v10);
    *(_QWORD *)(a1 + 56) = *(_EXCEPTION_REGISTRATION_RECORD **)((char *)&ExceptionList[3].Next + v10);
    *(_QWORD *)(a1 + 64) = *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))((char *)&ExceptionList[3].Handler + v10);
    result = (volatile signed __int32 *)KeGetPcr()->NtTib.ExceptionList;
    _InterlockedIncrement(result + 610);
    *(_WORD *)((char *)&ExceptionList->Handler + v10) = 0;
  }
  if ( !a2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)&KeGetPcr()->NtTib.ExceptionList[152].Next + 1);
    *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v10) = *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 360);
    *(_EXCEPTION_REGISTRATION_RECORD *)((char *)ExceptionList + v10 + 16) = *(_EXCEPTION_REGISTRATION_RECORD *)(a1 + 376);
    *(_EXCEPTION_REGISTRATION_RECORD **)((char *)&ExceptionList[2].Next + v10) = *(_EXCEPTION_REGISTRATION_RECORD **)(a1 + 392);
    *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))((char *)&ExceptionList[2].Handler
                                                                                             + v10) = *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))(a1 + 48);
    *(_EXCEPTION_REGISTRATION_RECORD **)((char *)&ExceptionList[3].Next + v10) = *(_EXCEPTION_REGISTRATION_RECORD **)(a1 + 56);
    result = *(volatile signed __int32 **)(a1 + 64);
    *(_EXCEPTION_DISPOSITION (__fastcall **)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))((char *)&ExceptionList[3].Handler
                                                                                             + v10) = (_EXCEPTION_DISPOSITION (__fastcall *)(_EXCEPTION_RECORD *, void *, _CONTEXT *, void *))result;
  }
  return result;
}
