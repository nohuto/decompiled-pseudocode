/*
 * XREFs of DxgkpCheckProcessForVirtualMachineManagementAccess @ 0x1C036B268
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C01E4AC0 (DpiFdoDispatchIoctl.c)
 *     ?EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ @ 0x1C0367F90 (-EnsureVirtualGpuProcess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C039DE00 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C039E23C (DpiSriovAttach.c)
 * Callees:
 *     DxgkpIsDrtEnabled @ 0x1C030A784 (DxgkpIsDrtEnabled.c)
 */

bool DxgkpCheckProcessForVirtualMachineManagementAccess()
{
  __int64 v0; // rcx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( (int)RtlCheckTokenMembership(0LL, SeExports->SeLocalSystemSid, &v2) >= 0 && v2 )
    return 1;
  if ( DxgkpIsDrtEnabled(v0) && (int)RtlCheckTokenMembership(0LL, SeExports->SeAliasAdminsSid, &v2) >= 0 )
    return v2 != 0;
  return 0;
}
