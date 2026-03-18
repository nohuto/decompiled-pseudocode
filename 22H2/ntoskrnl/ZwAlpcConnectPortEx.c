/*
 * XREFs of ZwAlpcConnectPortEx @ 0x14041B5E0
 * Callers:
 *     CmFcpConnectToAlpcServer @ 0x140680B8C (CmFcpConnectToAlpcServer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcConnectPortEx(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
