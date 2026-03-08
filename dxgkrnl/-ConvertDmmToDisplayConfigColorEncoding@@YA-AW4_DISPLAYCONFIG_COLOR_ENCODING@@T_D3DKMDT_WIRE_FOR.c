/*
 * XREFs of ?ConvertDmmToDisplayConfigColorEncoding@@YA?AW4_DISPLAYCONFIG_COLOR_ENCODING@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@@Z @ 0x1C01D8934
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C01AB2A0 (DxgkDisplayConfigDeviceInfo.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z @ 0x1C01B9FC8 (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1AEAUQDC_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDmmToDisplayConfigColorEncoding(unsigned int a1)
{
  if ( (a1 & 0xFC) != 0 )
    return 0LL;
  if ( (a1 & 0x3F00) != 0 )
    return 1LL;
  if ( (a1 & 0xFC000) != 0 )
    return 2LL;
  if ( (a1 & 0x3F00000) != 0 )
    return 3LL;
  return a1 < 0x4000000 ? -1 : 4;
}
