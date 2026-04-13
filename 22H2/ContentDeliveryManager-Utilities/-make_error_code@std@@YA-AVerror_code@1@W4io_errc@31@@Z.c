/*
 * XREFs of ?make_error_code@std@@YA?AVerror_code@1@W4io_errc@31@@Z @ 0x18002AFE4
 * Callers:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002B0F0 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::make_error_code(__int64 a1)
{
  *(_DWORD *)a1 = 1;
  *(_QWORD *)(a1 + 8) = std::_Error_objects<int>::_Iostream_object;
  return a1;
}
