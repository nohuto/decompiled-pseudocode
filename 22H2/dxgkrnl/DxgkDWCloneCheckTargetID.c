/*
 * XREFs of DxgkDWCloneCheckTargetID @ 0x1C0197A4C
 * Callers:
 *     DpiFdoEnumChildDevices @ 0x1C0197594 (DpiFdoEnumChildDevices.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

_BOOL8 __fastcall DxgkDWCloneCheckTargetID(__int64 a1, __int64 a2)
{
  int v2; // ebx

  v2 = a1;
  DXGGLOBAL::GetGlobal(a1, a2);
  return (v2 & 0xFF000000) == 0;
}
