/*
 * XREFs of _CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor$4 @ 0x18003BB21
 * Callers:
 *     <none>
 * Callees:
 *     ?SetCellularHostProcess@CProcess@@UEAAX_N@Z @ 0x1800051E0 (-SetCellularHostProcess@CProcess@@UEAAX_N@Z.c)
 */

void __fastcall CApplication::RegisterProcessWithApplicationSpecificEndpointInfo_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  CProcess::SetCellularHostProcess(*(CProcess **)(a2 + 144));
}
