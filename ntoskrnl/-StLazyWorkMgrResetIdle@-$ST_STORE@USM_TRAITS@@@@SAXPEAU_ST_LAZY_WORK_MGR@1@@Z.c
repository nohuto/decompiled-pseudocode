/*
 * XREFs of ?StLazyWorkMgrResetIdle@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@@Z @ 0x1405C63DC
 * Callers:
 *     ?StWorkItemProcess@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C7294 (-StWorkItemProcess@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     ?StLazyWorkMgrRunExpiredWork@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C6438 (-StLazyWorkMgrRunExpiredWork@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 *     ?StLazyWorkMgrSetSchedule@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z @ 0x1405C6530 (-StLazyWorkMgrSetSchedule@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_LAZY_WORK_MGR@1@_K@Z.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StLazyWorkMgrResetIdle(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 UnbiasedInterruptTime; // rax
  __int64 v3; // r11

  v1 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( *(_QWORD *)(a1 + 168) != -1LL )
  {
    UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
    if ( *(_QWORD *)(v3 + 168) <= UnbiasedInterruptTime )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrRunExpiredWork(v3, UnbiasedInterruptTime);
    }
    else if ( v1 )
    {
      ST_STORE<SM_TRAITS>::StLazyWorkMgrSetSchedule(v3, UnbiasedInterruptTime);
    }
  }
}
