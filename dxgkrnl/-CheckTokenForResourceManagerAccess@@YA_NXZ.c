/*
 * XREFs of ?CheckTokenForResourceManagerAccess@@YA_NXZ @ 0x1C0215D28
 * Callers:
 *     DxgkGetYieldPercentage @ 0x1C0215840 (DxgkGetYieldPercentage.c)
 *     DxgkGetMemoryBudgetTarget @ 0x1C0215AC0 (DxgkGetMemoryBudgetTarget.c)
 *     DxgkGetProcessSchedulingPriorityBand @ 0x1C0341E20 (DxgkGetProcessSchedulingPriorityBand.c)
 *     DxgkSetMemoryBudgetTarget @ 0x1C03424C0 (DxgkSetMemoryBudgetTarget.c)
 *     DxgkSetProcessSchedulingPriorityBand @ 0x1C0342780 (DxgkSetProcessSchedulingPriorityBand.c)
 *     DxgkSetYieldPercentage @ 0x1C0343050 (DxgkSetYieldPercentage.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

bool CheckTokenForResourceManagerAccess(void)
{
  __int64 v0; // rdx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v0 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 38059);
  return v0 && (int)RtlCheckTokenMembership(0LL, v0, &v2) >= 0 && v2 != 0;
}
