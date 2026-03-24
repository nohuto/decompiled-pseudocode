/*
 * XREFs of ZwAlpcConnectPort @ 0x1403FB2C0
 * Callers:
 *     DbgkRegisterErrorPort @ 0x140886A44 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
