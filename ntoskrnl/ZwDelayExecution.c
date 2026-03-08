/*
 * XREFs of ZwDelayExecution @ 0x140412990
 * Callers:
 *     IovUnloadDrivers @ 0x140ABE7F0 (IovUnloadDrivers.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwDelayExecution(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
