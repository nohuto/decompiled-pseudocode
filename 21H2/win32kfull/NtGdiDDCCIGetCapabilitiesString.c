/*
 * XREFs of NtGdiDDCCIGetCapabilitiesString @ 0x1C0272150
 * Callers:
 *     <none>
 * Callees:
 *     ?DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z @ 0x1C0270D48 (-DdcciGetCapabilitiesString@CMonitorAPI@@QEAAJPEAXPEADK@Z.c)
 */

__int64 __fastcall NtGdiDDCCIGetCapabilitiesString(CMonitorAPI *a1, char *a2, unsigned int a3)
{
  if ( a3 )
    return CMonitorAPI::DdcciGetCapabilitiesString(a1, a1, a2, a3);
  else
    return 3221225485LL;
}
