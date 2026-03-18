/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0224308
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C0223E20 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C02240A0 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0346860 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C0346F00 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C03471C0 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C0347A90 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000B330 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool CheckTokenForResourceManagerAccess(void)
{
  __int64 v0; // rdx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 38059);
  return v0 && (int)RtlCheckTokenMembership(0LL, v0, &v2) >= 0 && v2 != 0;
}
