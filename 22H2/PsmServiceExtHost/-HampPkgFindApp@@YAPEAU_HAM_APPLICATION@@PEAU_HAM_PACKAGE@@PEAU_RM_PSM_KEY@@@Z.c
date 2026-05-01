/*
 * XREFs of ?HampPkgFindApp@@YAPEAU_HAM_APPLICATION@@PEAU_HAM_PACKAGE@@PEAU_RM_PSM_KEY@@@Z @ 0x18002665C
 * Callers:
 *     ?HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPLICATION@@@Z @ 0x180026564 (-HampAppFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@PEAPEAU_HAM_APPL.c)
 * Callees:
 *     CemRcTableFind @ 0x18000EBC0 (CemRcTableFind.c)
 */

struct _HAM_APPLICATION *__fastcall HampPkgFindApp(struct _HAM_PACKAGE *a1, struct _RM_PSM_KEY *a2)
{
  return (struct _HAM_APPLICATION *)CemRcTableFind(
                                      (unsigned __int64)a1 + 40,
                                      (__int64)a2,
                                      (__int64 (__fastcall *)(__int64, __int64))HampAppCompareByIdentity);
}
