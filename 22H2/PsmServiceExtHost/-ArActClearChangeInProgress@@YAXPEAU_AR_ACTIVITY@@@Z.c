/*
 * XREFs of ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180084980
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800842B0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008455C (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008471C (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x180084D2C (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     <none>
 */

void __fastcall ArActClearChangeInProgress(struct _AR_ACTIVITY *a1)
{
  unsigned __int64 v2; // rdi

  v2 = *((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL;
  RtlAcquireSRWLockExclusive(v2 + 48);
  *(_DWORD *)(v2 + 56) = GetCurrentThreadId();
  *((_BYTE *)a1 + 53) &= ~1u;
  *(_DWORD *)(v2 + 56) = 0;
  RtlReleaseSRWLockExclusive(v2 + 48);
  RtlWakeAddressAll((char *)a1 + 53);
}
