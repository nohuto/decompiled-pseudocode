/*
 * XREFs of LdrGetProcedureAddressEx @ 0x18006D020
 * Callers:
 *     LdrpGetShimEngineInterface @ 0x18006CCD8 (LdrpGetShimEngineInterface.c)
 * Callees:
 *     LdrGetProcedureAddressForCaller @ 0x18002FDC0 (LdrGetProcedureAddressForCaller.c)
 */

__int64 __fastcall LdrGetProcedureAddressEx(unsigned __int64 a1, const void **a2, unsigned int a3, _QWORD *a4, char a5)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  return LdrGetProcedureAddressForCaller(a1, a2, a3, a4, a5, retaddr);
}
