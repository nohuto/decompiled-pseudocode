/*
 * XREFs of ZwRaiseException @ 0x1403FC720
 * Callers:
 *     RtlRaiseException @ 0x14033D230 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x14033EA40 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x1404077C0 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
