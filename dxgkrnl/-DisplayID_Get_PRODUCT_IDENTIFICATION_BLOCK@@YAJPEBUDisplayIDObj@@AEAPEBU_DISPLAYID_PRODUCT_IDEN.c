/*
 * XREFs of ?DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK@@YAJPEBUDisplayIDObj@@AEAPEBU_DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK@@@Z @ 0x1C00721C0
 * Callers:
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0071E94 (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071F08 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071FD8 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0072050 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C00720DC (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x1C0072358 (-DisplayID_IsValidVersion2@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_Get_PRODUCT_IDENTIFICATION_BLOCK(
        const struct DisplayIDObj *a1,
        const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // rcx
  const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *v7; // rdx

  if ( !a1 || !*((_DWORD *)a1 + 5) )
    return 3221225485LL;
  if ( !*((_BYTE *)a1 + 16) )
    return 3223126019LL;
  v4 = *(_QWORD *)a1;
  v5 = *(unsigned __int8 *)(v4 + 1);
  v6 = v4 + 4;
  v7 = (const struct _DISPLAYID_PRODUCT_IDENTIFICATION_BLOCK *)(v6 & -(__int64)((_BYTE)v5 != 0));
  if ( (unsigned __int8)v5 < 3u
    || v5 < (unsigned int)*(unsigned __int8 *)((v6 & -(__int64)((_BYTE)v5 != 0)) + 2) + 3
    || *(_BYTE *)v7 != 32 )
  {
    return 3221225659LL;
  }
  *a2 = v7;
  return 0LL;
}
