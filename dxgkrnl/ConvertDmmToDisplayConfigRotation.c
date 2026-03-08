/*
 * XREFs of ConvertDmmToDisplayConfigRotation @ 0x1C01BA4A4
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C01B9FC8 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     _lambda_6c91b3c659723331424fe42952e4f114_::operator() @ 0x1C02EEF94 (_lambda_6c91b3c659723331424fe42952e4f114_--operator().c)
 *     _lambda_d553670f9cadd4da475e2936e6caa2f6_::operator() @ 0x1C02EF87C (_lambda_d553670f9cadd4da475e2936e6caa2f6_--operator().c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C000A260 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigRotation(unsigned int a1)
{
  __int64 result; // rax

  result = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  if ( (_DWORD)result != 1 && (_DWORD)result != 2 && (unsigned int)(result - 3) >= 2 )
    return 1LL;
  return result;
}
