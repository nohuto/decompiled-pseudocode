/*
 * XREFs of ZwCreatePort @ 0x140413A90
 * Callers:
 *     SeRmInitPhase1 @ 0x140B614EC (SeRmInitPhase1.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
