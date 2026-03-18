/*
 * XREFs of ConvertDmmToDisplayConfigRotation @ 0x1C017CAF4
 * Callers:
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C017C618 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AD190 (DxgkDisplayConfigDeviceInfo.c)
 *     _lambda_6c91b3c659723331424fe42952e4f114_::operator() @ 0x1C02F3DC4 (_lambda_6c91b3c659723331424fe42952e4f114_--operator().c)
 *     _lambda_d553670f9cadd4da475e2936e6caa2f6_::operator() @ 0x1C02F46AC (_lambda_d553670f9cadd4da475e2936e6caa2f6_--operator().c)
 * Callees:
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x1C0002F04 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 */

__int64 __fastcall ConvertDmmToDisplayConfigRotation(enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION a1)
{
  __int64 result; // rax

  result = D3DKMDT_VPPR_GET_CONTENT_ROTATION(a1);
  if ( (_DWORD)result != 1 && (_DWORD)result != 2 && (unsigned int)(result - 3) >= 2 )
    return 1LL;
  return result;
}
