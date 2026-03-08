/*
 * XREFs of _HMPkheFromObject @ 0x1C00C3360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__fastcall HMPkheFromObject(_DWORD *a1)
{
  return (char *)gpKernelHandleTable + 24 * (unsigned __int16)*a1;
}
