/*
 * XREFs of ZwAlpcConnectPort @ 0x140413230
 * Callers:
 *     DifZwAlpcConnectPortWrapper @ 0x1405EAAA0 (DifZwAlpcConnectPortWrapper.c)
 *     DbgkRegisterErrorPort @ 0x1409369A4 (DbgkRegisterErrorPort.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPort(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
