/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@SAXPEAX@Z @ 0x1C00D8E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    --*(_WORD *)(result + 12);
    *a1 = 0LL;
  }
  return result;
}
