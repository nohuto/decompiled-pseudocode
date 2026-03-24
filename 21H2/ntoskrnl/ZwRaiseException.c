/*
 * XREFs of ZwRaiseException @ 0x1403FD0A0
 * Callers:
 *     RtlRaiseException @ 0x140274220 (RtlRaiseException.c)
 *     RtlUnwindEx @ 0x140275A30 (RtlUnwindEx.c)
 *     RtlRaiseNoncontinuableException @ 0x140408140 (RtlRaiseNoncontinuableException.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRaiseException(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
