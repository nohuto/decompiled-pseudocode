/*
 * XREFs of ZwAlpcDisconnectPort @ 0x14041C7E0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140929940 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcDisconnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
