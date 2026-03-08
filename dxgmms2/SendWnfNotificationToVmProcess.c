/*
 * XREFs of SendWnfNotificationToVmProcess @ 0x1C002D098
 * Callers:
 *     ?SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z @ 0x1C00A7AC4 (-SendWnfNotificationToProcess@VIDMM_GLOBAL@@KAJPEAVVIDMM_PROCESS@@PEBU_WNF_STATE_NAME@@PEAXK@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SendWnfNotificationToVmProcess(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, void *, __int64))DxgCoreInterface[81])(
           a1,
           &WNF_DX_VIDMM_TRIM_NOTIFICATION,
           24LL);
}
