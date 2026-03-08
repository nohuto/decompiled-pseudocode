/*
 * XREFs of ZwRegisterThreadTerminatePort @ 0x140415250
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwRegisterThreadTerminatePort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
