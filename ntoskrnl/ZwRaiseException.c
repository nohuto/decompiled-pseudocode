/*
 * XREFs of ZwRaiseException @ 0x140415150
 * Callers:
 *     RtlUnwindEx @ 0x1402809E0 (RtlUnwindEx.c)
 *     RtlRaiseException @ 0x140364BF0 (RtlRaiseException.c)
 *     RtlRaiseNoncontinuableException @ 0x140420D50 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
