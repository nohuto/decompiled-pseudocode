/*
 * XREFs of ?IsValidBlock@DisplayID_ProductId_Parser@@QEBA_NXZ @ 0x1C00725C4
 * Callers:
 *     ?DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z @ 0x1C0071E94 (-DisplayID_GetManufactureDate@@YAJPEBUDisplayIDObj@@PEAEPEAG@Z.c)
 *     ?DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071F08 (-DisplayID_GetManufacturerName@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0071FD8 (-DisplayID_GetProductCode@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z @ 0x1C0072050 (-DisplayID_GetSerialNumber@@YAJPEBUDisplayIDObj@@PEAG@Z.c)
 *     ?DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z @ 0x1C00720DC (-DisplayID_GetUserFriendlyName@@YAJPEBUDisplayIDObj@@PEAGEPEAE@Z.c)
 *     ?DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z @ 0x1C00723F4 (-DisplayID_UpdateForTelemetry@@YAJPEAUDisplayIDObj@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayID_ProductId_Parser::IsValidBlock(DisplayID_ProductId_Parser *this)
{
  return **(_BYTE **)this == 32 && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)this + 2LL) - 12) <= 0xECu;
}
