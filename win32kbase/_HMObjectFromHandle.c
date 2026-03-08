/*
 * XREFs of _HMObjectFromHandle @ 0x1C00A7170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HMObjectFromHandle(unsigned __int16 a1)
{
  return *((_QWORD *)gpKernelHandleTable + 3 * a1);
}
