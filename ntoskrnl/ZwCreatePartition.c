/*
 * XREFs of ZwCreatePartition @ 0x140413A70
 * Callers:
 *     ExpInitializeMemoryMirroring @ 0x140B7267C (ExpInitializeMemoryMirroring.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwCreatePartition(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
