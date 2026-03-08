/*
 * XREFs of ?GetParseResult@DisplayIdMonitorDescriptor@DxgMonitor@@UEBA?AW4MonitorDescriptorParseResult@2@XZ @ 0x1C03CC030
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_IsValidVersion2@@YA?AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z @ 0x1C0072358 (-DisplayID_IsValidVersion2@@YA-AW4DISPLAYID_VALIDATION_RESULT@@PEBUDisplayIDObj@@@Z.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetParseResult(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 40) )
    return 2 - (unsigned int)((unsigned int)DisplayID_IsValidVersion2(a1 + 24) != 0);
  else
    return 0LL;
}
