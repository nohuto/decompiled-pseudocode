/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x140ADFFB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     VfThunkHookExportAddress @ 0x140AD852C (VfThunkHookExportAddress.c)
 */

__int64 __fastcall VerifierMmGetSystemRoutineAddress(__int64 a1)
{
  __int64 result; // rax

  result = ((__int64 (*)(void))pXdvMmGetSystemRoutineAddress)();
  if ( result )
    return VfThunkHookExportAddress(result, a1);
  return result;
}
