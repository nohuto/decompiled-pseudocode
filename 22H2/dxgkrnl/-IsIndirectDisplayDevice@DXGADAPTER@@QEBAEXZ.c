/*
 * XREFs of ?IsIndirectDisplayDevice@DXGADAPTER@@QEBAEXZ @ 0x1C0014FBC
 * Callers:
 *     ?DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z @ 0x1C018FB80 (-DxgkQueryAdapterInfoImpl@@YAJPEBU_D3DKMT_QUERYADAPTERINFO@@EPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DXGADAPTER::IsIndirectDisplayDevice(DXGADAPTER *this)
{
  return BYTE1(*((_DWORD *)this + 109)) & 1;
}
