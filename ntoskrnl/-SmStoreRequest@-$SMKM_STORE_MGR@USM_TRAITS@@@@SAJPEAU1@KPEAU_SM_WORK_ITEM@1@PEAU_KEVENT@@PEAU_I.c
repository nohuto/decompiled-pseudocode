/*
 * XREFs of ?SmStoreRequest@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1405C07D4
 * Callers:
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x1405BDE60 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmProcessResizeRequest @ 0x1409D4470 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1409D4588 (SmProcessStatsRequest.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReference @ 0x140356410 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreRequestEx@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_SM_WORK_ITEM@1@PEAU_KEVENT@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1405C085C (-SmStoreRequestEx@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_SM.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequest(__int64 a1, unsigned int a2, int a3, int a4, __int64 a5)
{
  __int16 v7; // di
  unsigned __int64 v9; // rax
  int v10; // ecx
  int v11; // ebx
  struct _EX_RUNDOWN_REF *v12; // rax

  v7 = a2;
  v9 = SmKmStoreReference(a1, a2);
  if ( v9 )
  {
    v11 = SMKM_STORE_MGR<SM_TRAITS>::SmStoreRequestEx(v10, v9, a3, a4, a5);
    if ( v11 < 0 )
    {
      v12 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, v7 & 0x3FF);
      ExReleaseRundownProtection_0(v12 + 1);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v11;
}
