/*
 * XREFs of ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C5A0
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C750 (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C640 (-RmpEmptyWorkerStart@@YAJPEAU_RM_EMPTY_WORKER_CONTEXT@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180027C64 (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x180047B3A (memset_0.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeCommon(struct _RM_ACTIVITY_HOST *a1)
{
  int v2; // edi
  __int128 v3; // xmm1
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int128 v6; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  v6 = 0LL;
  v2 = RmpEmptyWorkerStart((struct _RM_EMPTY_WORKER_CONTEXT *)&v5, a1);
  if ( v2 < 0 )
  {
    RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)&v5);
  }
  else
  {
    v2 = 0;
    memset_0((char *)a1 + 1200, 0, 0x80uLL);
    *((_OWORD *)a1 + 73) = 0LL;
    *((_OWORD *)a1 + 74) = 0LL;
    *((_DWORD *)a1 + 298) = 1;
    RtlInitializeConditionVariable((char *)a1 + 1232);
    v3 = v6;
    *((_OWORD *)a1 + 81) = v5;
    *((_OWORD *)a1 + 82) = v3;
  }
  return (unsigned int)v2;
}
