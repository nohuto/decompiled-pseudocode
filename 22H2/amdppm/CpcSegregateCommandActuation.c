/*
 * XREFs of CpcSegregateCommandActuation @ 0x1C0003E90
 * Callers:
 *     CpcAcquirePerformance @ 0x1C0003C50 (CpcAcquirePerformance.c)
 *     CpcCommitPerformance @ 0x1C0003CB0 (CpcCommitPerformance.c)
 *     CpcReadFeedback @ 0x1C0003D70 (CpcReadFeedback.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000EAD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CpcSegregateCommandActuation(void (__fastcall *a1)(__int64 *, int *), __int64 a2, char a3)
{
  __int64 *i; // rbx

  dword_1C0013978 = dword_1C0013958;
  qword_1C0013980 = a2;
  byte_1C0013988 = a3;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(WdfDriverGlobals, qword_1C0013938);
  for ( i = (__int64 *)qword_1C0013948; i != &qword_1C0013948; i = (__int64 *)*i )
    a1(i, &dword_1C0013978);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
           WdfDriverGlobals,
           qword_1C0013938);
}
