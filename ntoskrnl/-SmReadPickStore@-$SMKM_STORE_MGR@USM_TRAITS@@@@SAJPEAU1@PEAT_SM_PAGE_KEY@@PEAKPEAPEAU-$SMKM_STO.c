/*
 * XREFs of ?SmReadPickStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEAPEAU?$SMKM_STORE@USM_TRAITS@@@@2@Z @ 0x1405BDF60
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14045C966 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14022B950 (KeQueryPerformanceCounter.c)
 *     SmKmStoreReferenceEx @ 0x140356558 (SmKmStoreReferenceEx.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x1405BD5E0 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmReadPickStore(
        __int64 a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        _DWORD *a5)
{
  unsigned int v7; // ebx
  unsigned int v9; // esi
  unsigned __int64 v10; // rax
  _DWORD *v11; // rdx
  bool v12; // zf
  unsigned int v14; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int64 v15[4]; // [rsp+38h] [rbp-20h] BYREF
  int v16; // [rsp+70h] [rbp+18h] BYREF

  v14 = *a3;
  v7 = 0;
  v15[0] = 0LL;
  v16 = 0;
  v9 = SMKM_STORE_MGR<SM_TRAITS>::SmFeReadInitiate(a1, a2, &v14, v15, &v16);
  if ( v9 != 1024 )
  {
    ++*(_DWORD *)(a1 + 1884);
    if ( v15[0] && v15[0] > *(_QWORD *)&KeQueryPerformanceCounter(0LL) + (unsigned __int64)*(unsigned int *)(a1 + 1880) )
      return (unsigned int)-1073741763;
    v10 = SmKmStoreReferenceEx(a1, v9);
    if ( v10 )
    {
      v11 = a5;
      v12 = v16 == 0;
      *a4 = v10;
      *v11 = !v12;
      *a3 = v14;
      return v7;
    }
  }
  return (unsigned int)-1073741275;
}
