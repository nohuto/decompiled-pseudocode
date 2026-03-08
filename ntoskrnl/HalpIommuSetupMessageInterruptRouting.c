/*
 * XREFs of HalpIommuSetupMessageInterruptRouting @ 0x140A8DD50
 * Callers:
 *     HalpIommuConfigureInterrupt @ 0x1403A4968 (HalpIommuConfigureInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuSetupMessageInterruptRouting(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD))(a1 + 280))(
           *(_QWORD *)(a1 + 16),
           a2,
           *(_QWORD *)(a1 + 512),
           *(unsigned int *)(a1 + 520));
}
