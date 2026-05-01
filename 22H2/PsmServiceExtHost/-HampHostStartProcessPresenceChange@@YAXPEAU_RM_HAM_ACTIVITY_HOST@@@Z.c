/*
 * XREFs of ?HampHostStartProcessPresenceChange@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026E74
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180005500 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z @ 0x180026BCC (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KKPEA_K@Z.c)
 *     ?HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z @ 0x1800281EC (-HampHostQueryHostGenerationForProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAXPEA_K@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028D9C (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     CempLockSleepConditionVariableExclusive @ 0x1800054A4 (CempLockSleepConditionVariableExclusive.c)
 */

void __fastcall HampHostStartProcessPresenceChange(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 i; // rax

  for ( i = *((_QWORD *)a1 + 81); (i & 0x1000000000000LL) != 0; i = *((_QWORD *)a1 + 81) )
    CempLockSleepConditionVariableExclusive((__int64)a1, (__int64)a1 + 680, 0LL);
  *((_QWORD *)a1 + 81) = i | 0x1000000000000LL;
}
