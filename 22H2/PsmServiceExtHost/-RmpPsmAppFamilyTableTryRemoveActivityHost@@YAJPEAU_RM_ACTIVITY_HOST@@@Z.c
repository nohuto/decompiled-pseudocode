/*
 * XREFs of ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000694C
 * Callers:
 *     ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800058A0 (-RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000B898 (-RmpActivityHostCreateHostPsm@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_I.c)
 * Callees:
 *     ?RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000679C (-RmpPsmAppFamilyTryRemoveActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006834 (-RmpPsmAppFamilyTableCheckDelete@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z.c)
 *     ?RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x180009DFC (-RmpPsmAppFamilyIdFromPsmAppInstanceId@@YAJPEAU_RM_PSM_HOST_INFO@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z.c)
 *     ?RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY_ID@@@Z @ 0x18000CD80 (-RmpPsmAppFamilyTableFind@@YAPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FA.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 */

int __fastcall RmpPsmAppFamilyTableTryRemoveActivityHost(struct _RM_ACTIVITY_HOST *a1)
{
  struct _RM_SERVICE_GLOBALS *v1; // rsi
  int result; // eax
  struct _RM_PSM_APP_FAMILY *v4; // rbx
  _BYTE v5[544]; // [rsp+20h] [rbp-238h] BYREF

  v1 = (struct _RM_SERVICE_GLOBALS *)*((_QWORD *)a1 + 6);
  result = RmpPsmAppFamilyIdFromPsmAppInstanceId(
             (struct _RM_ACTIVITY_HOST *)((char *)a1 + 88),
             (struct _RM_PSM_APP_FAMILY_ID *)v5);
  if ( result >= 0 )
  {
    v4 = RmpPsmAppFamilyTableFind(v1, (struct _RM_PSM_APP_FAMILY_ID *)v5);
    if ( v4 )
    {
      result = RmpPsmAppFamilyTryRemoveActivityHost(v4, a1);
      if ( result >= 0 )
      {
        if ( *((struct _RM_ACTIVITY_HOST **)v4 + 72) == (struct _RM_ACTIVITY_HOST *)((char *)a1 + 64) )
          *((_QWORD *)v4 + 72) = 0LL;
        RmpPsmAppFamilyTableCheckDelete(*((struct _RM_SERVICE_GLOBALS **)a1 + 6), v4);
        return 0;
      }
    }
    else
    {
      return -1073741275;
    }
  }
  return result;
}
