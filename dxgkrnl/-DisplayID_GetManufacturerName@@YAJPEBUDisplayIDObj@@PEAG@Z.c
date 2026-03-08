/*
 * XREFs of ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071F08
 * Callers:
 *     ?AppendManufacturerName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z @ 0x1C03CB9F0 (-AppendManufacturerName@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAU_UNICODE_STRING@@@Z.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00154F0 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C00721C0 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00725C4 (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 */

NTSTATUS __fastcall DisplayID_GetManufacturerName(const struct DisplayIDObj *a1, unsigned __int16 *a2)
{
  NTSTATUS result; // eax
  unsigned __int8 *v3; // rdx
  unsigned __int16 *v4; // r10
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v5; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
    return -1073741811;
  v5 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v5);
  if ( result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v5) )
      return RtlStringCchPrintfW(v4, 7uLL, (size_t *)L"%06x", v3[5] + ((v3[4] + (v3[3] << 8)) << 8));
    else
      return -1073741637;
  }
  return result;
}
