/*
 * XREFs of ?HampDepGroupRemoveHost@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180004608
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180005C5C (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E0D0 (-HampDepGroupAcquireLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18000E158 (-HampDepGroupReleaseLockExclusive@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002234C (-HampDepGroupQueueWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800285A8 (-HampDepGroupDereference@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 */

void __fastcall HampDepGroupRemoveHost(struct _HAM_DEPENDENCY_GROUP *a1, struct _RM_HAM_ACTIVITY_HOST *a2)
{
  HampDepGroupAcquireLockExclusive(a1);
  RtlRbRemoveNode((char *)a1 + 56, (char *)a2 + 704);
  *((_QWORD *)a2 + 90) = -1LL;
  HampDepGroupQueueWorker(a1);
  HampDepGroupReleaseLockExclusive(a1);
  HampDepGroupDereference(a1);
  *((_QWORD *)a2 + 86) = 0LL;
}
