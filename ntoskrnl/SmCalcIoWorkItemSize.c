/*
 * XREFs of SmCalcIoWorkItemSize @ 0x1405CB034
 * Callers:
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1405C1BF4 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmCalcIoWorkItemSize(_DWORD *a1, __int16 a2, unsigned int a3)
{
  if ( (*a1 & 0x2000) != 0 )
    return 48LL;
  else
    return 8 * (unsigned int)(((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12) + 96;
}
