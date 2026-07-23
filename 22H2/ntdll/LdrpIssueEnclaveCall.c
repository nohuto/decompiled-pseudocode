/*
 * XREFs of LdrpIssueEnclaveCall @ 0x1800CD740
 * Callers:
 *     RtlEnclaveCallDispatcher @ 0x1800A1470 (RtlEnclaveCallDispatcher.c)
 *     LdrCallEnclave @ 0x1800CCB00 (LdrCallEnclave.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     LdrpObtainLockedEnclave @ 0x18002FA14 (LdrpObtainLockedEnclave.c)
 *     ZwCallEnclave @ 0x18009E6F0 (ZwCallEnclave.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1000 (_guard_dispatch_icall_nop.c)
 *     RtlCallEnclave @ 0x1800A14E0 (RtlCallEnclave.c)
 *     LdrpDereferenceEnclave @ 0x1800CD300 (LdrpDereferenceEnclave.c)
 */

__int64 __fastcall LdrpIssueEnclaveCall(PENCLAVE_ROUTINE Routine, ULONG Flags, PVOID *RoutineParamReturn)
{
  __int64 *v6; // rax
  __int64 *v7; // rdi
  unsigned int v8; // ebx

  v6 = LdrpObtainLockedEnclave((unsigned __int64)Routine, 0);
  v7 = v6;
  v8 = 0;
  if ( v6 )
  {
    RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v6 + 2));
    LdrpDereferenceEnclave(v7);
    if ( *((_DWORD *)v7 + 14) == 16 )
      return (unsigned int)RtlCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
    else
      return (unsigned int)ZwCallEnclave(Routine, 0LL, Flags, RoutineParamReturn);
  }
  else
  {
    *RoutineParamReturn = (PVOID)((__int64 (__fastcall *)(_QWORD))Routine)(*RoutineParamReturn);
  }
  return v8;
}
