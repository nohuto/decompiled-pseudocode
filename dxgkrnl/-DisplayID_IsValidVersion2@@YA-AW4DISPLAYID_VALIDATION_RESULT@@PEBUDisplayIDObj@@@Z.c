/*
 * XREFs of ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x1C0072358
 * Callers:
 *     ?GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03CC030 (-GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA-AW4MonitorDescriptorParseResult@2@XZ.c)
 * Callees:
 *     ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C00721C0 (-DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDEN.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C0072A9C (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 */

__int64 __fastcall DisplayID_IsValidVersion2(__int64 a1)
{
  unsigned int v1; // ebx
  struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !a1 || !*(_DWORD *)(a1 + 20) || !*(_BYTE *)(a1 + 16) )
    return 1LL;
  if ( (**(_BYTE **)a1 & 0xF0) != 0x20 )
    return 2LL;
  if ( (int)DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK((const struct DisplayIDObj *)a1, &v4) < 0 )
    return 3LL;
  if ( (int)DisplayID_GetBlock(a1, 34LL, &v4) < 0 )
    return 4LL;
  if ( (int)DisplayID_GetBlock(a1, 33LL, &v4) < 0 )
    return 5;
  return v1;
}
