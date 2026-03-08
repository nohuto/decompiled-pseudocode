/*
 * XREFs of ?StDmDeviceError@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@W4_ST_DEVICE_FAIL_TYPE@1@J@Z @ 0x1405C2E40
 * Callers:
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C2FD8 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KiQueryUnbiasedInterruptTime @ 0x14034A074 (KiQueryUnbiasedInterruptTime.c)
 *     SmKmStoreReference @ 0x140356410 (SmKmStoreReference.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x1405CADD8 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDmDeviceError(__int64 a1, int a2, unsigned int a3)
{
  _DWORD *v3; // rbx
  unsigned int v4; // r11d
  unsigned int v7; // ecx
  int v8; // ecx
  unsigned __int64 UnbiasedInterruptTime; // rax
  int *v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // zf
  int v13; // edx

  v3 = *(_DWORD **)(a1 + 1816);
  v4 = a3;
  if ( v3
    && a3 + 1073741549 > 1
    && a3 != -1073741670
    && a3 != -1073741691
    && a3 != -1073741801
    && a3 != -1073741058
    && ((*(_DWORD *)(a1 + 776) & 0x2000) == 0 || a3 != -2147483626) )
  {
    if ( a2 )
    {
      UnbiasedInterruptTime = KiQueryUnbiasedInterruptTime();
      v10 = v3 + 3;
      v11 = UnbiasedInterruptTime >> 23;
      v12 = *v3 == v3[4];
      v3[4] = *v3;
      if ( !v12 )
        *v10 = 0;
      v13 = *v10;
      if ( !*v10 )
      {
        *v10 = v11;
        return;
      }
      v8 = 4;
      if ( (unsigned int)(v11 - v13) <= 7 )
        v8 = 7;
    }
    else
    {
      if ( (++v3[1] & 0xF) != 0 )
        return;
      v7 = (*v3 - v3[2]) & 0xFFFFFFE0;
      v3[2] = *v3;
      if ( v7 > 0x200 )
        return;
      v8 = 3;
    }
    if ( v8 != 7
      && ((unsigned int)(v8 - 3) > 1
       || (int)SMKM_STORE_MGR<SM_TRAITS>::SmStoreTerminate(
                 *(_QWORD *)(*(_QWORD *)(a1 + 800) + 6728LL),
                 *(_QWORD *)(a1 + 800),
                 v8 != 3,
                 v4) < 0)
      && !a2 )
    {
      --v3[1];
    }
  }
}
