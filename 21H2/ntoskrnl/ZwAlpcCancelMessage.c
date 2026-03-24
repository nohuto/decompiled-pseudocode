/*
 * XREFs of ZwAlpcCancelMessage @ 0x1403FB2A0
 * Callers:
 *     PopUmpoProcessMessage @ 0x14067A514 (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
