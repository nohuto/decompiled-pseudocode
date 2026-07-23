/*
 * XREFs of LdrInitializeThunk @ 0x180075C10
 * Callers:
 *     <none>
 * Callees:
 *     LdrpInitialize @ 0x180075C38 (LdrpInitialize.c)
 *     ZwContinue @ 0x18009DD40 (ZwContinue.c)
 *     RtlRaiseStatus @ 0x180102540 (RtlRaiseStatus.c)
 */

void __cdecl __noreturn LdrInitializeThunk(PCONTEXT ContextRecord, PVOID Parameter)
{
  NTSTATUS v3; // eax

  LdrpInitialize(ContextRecord, Parameter);
  v3 = ZwContinue(ContextRecord, 1u);
  RtlRaiseStatus(v3);
}
