/*
 * XREFs of ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0071E94
 * Callers:
 *     ?GetManufactureDate@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z @ 0x1C03CBFD0 (-GetManufactureDate@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAEAEAG@Z.c)
 * Callees:
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C00721C0 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00725C4 (-IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetManufactureDate(
        const struct DisplayIDObj *a1,
        unsigned __int8 *a2,
        unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v4; // rdx
  _WORD *v5; // r10
  _BYTE *v6; // r11
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
    return 3221225485LL;
  v7 = 0LL;
  result = DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(a1, &v7);
  if ( (int)result >= 0 )
  {
    if ( DisplayID_ProductId_Parser::IsValidBlock((DisplayID_ProductId_Parser *)&v7) )
    {
      *v6 = *(_BYTE *)(v4 + 12);
      *v5 = *(unsigned __int8 *)(v4 + 13) + 2000;
      return 0LL;
    }
    else
    {
      return 3221225659LL;
    }
  }
  return result;
}
