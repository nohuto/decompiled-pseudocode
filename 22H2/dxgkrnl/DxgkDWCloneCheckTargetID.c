/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C02177AC
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0217450 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(int a1)
{
  DXGGLOBAL::GetGlobal();
  return (a1 & 0xFF000000) == 0;
}
