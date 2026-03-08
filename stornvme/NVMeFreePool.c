/*
 * XREFs of NVMeFreePool @ 0x1C000EF54
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C00023F0 (NVMeCompletionDpcRoutine.c)
 *     NVMeRequestComplete @ 0x1C000318C (NVMeRequestComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall NVMeFreePool(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  if ( a2 )
    return StorPortExtendedFunction(1LL, a1, a2, a4);
  return result;
}
