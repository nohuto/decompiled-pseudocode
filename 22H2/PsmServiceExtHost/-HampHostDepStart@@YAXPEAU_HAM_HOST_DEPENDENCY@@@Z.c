/*
 * XREFs of ?HampHostDepStart@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x1800091EC
 * Callers:
 *     ?HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_ACTIVITY_HOST@@KPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18000B07C (-HampDepGroupCheckCreateDependencyActivity@@YAJPEAU_HAM_ADD_DEPENDENCY_PARAMETERS@@PEAU_RM_HAM_A.c)
 * Callees:
 *     <none>
 */

void __fastcall HampHostDepStart(struct _HAM_HOST_DEPENDENCY *a1)
{
  if ( !*((_BYTE *)a1 + 40) )
  {
    TpSetWait(*((_QWORD *)a1 + 10), *((_QWORD *)a1 + 8), 0LL);
    TpSetWait(*((_QWORD *)a1 + 11), *((_QWORD *)a1 + 9), 0LL);
  }
  *((_DWORD *)a1 + 8) |= 0x10u;
}
