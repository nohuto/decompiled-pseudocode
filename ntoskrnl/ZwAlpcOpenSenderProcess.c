/*
 * XREFs of ZwAlpcOpenSenderProcess @ 0x1404133F0
 * Callers:
 *     PopUmpoProcessMessage @ 0x14073B3C8 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcOpenSenderProcess(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
