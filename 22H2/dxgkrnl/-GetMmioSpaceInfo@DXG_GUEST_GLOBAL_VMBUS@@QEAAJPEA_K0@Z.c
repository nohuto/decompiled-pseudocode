/*
 * XREFs of ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x1C0375908
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x1C02B7EE4 (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00282B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(
        DXG_GUEST_GLOBAL_VMBUS *this,
        unsigned __int64 *a2,
        unsigned __int64 *a3)
{
  ((void (__fastcall *)(_QWORD))qword_1C0141F00)(*(_QWORD *)this);
  if ( *a3 >= *((_QWORD *)DXGGLOBAL::GetGlobal() + 220) && *a2 )
    return 0LL;
  WdLogSingleEntry1(2LL, 13915LL);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"GetMmioSpaceInfo failed", 13915LL, 0LL, 0LL, 0LL, 0LL);
  return 3221225485LL;
}
