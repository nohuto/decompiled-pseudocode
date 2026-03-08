/*
 * XREFs of IoPropagateIrpExtension @ 0x1402B20E0
 * Callers:
 *     <none>
 * Callees:
 *     IoPropagateIrpExtensionEx @ 0x1402B2100 (IoPropagateIrpExtensionEx.c)
 */

__int64 __fastcall IoPropagateIrpExtension(__int64 a1, __int64 a2, unsigned int a3)
{
  return IoPropagateIrpExtensionEx(a1, a2, 0LL, a3);
}
