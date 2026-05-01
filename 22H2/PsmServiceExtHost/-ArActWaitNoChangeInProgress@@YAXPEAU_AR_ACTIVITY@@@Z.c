/*
 * XREFs of ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180084BB0
 * Callers:
 *     ?ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z @ 0x1800842B0 (-ArHamCallback@@YAXPEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008455C (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008471C (-ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     ?ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@PEAU_ACTIVITY_RESTARTER@@@Z @ 0x180084D2C (-ArSrvCreateActivity@@YAJPEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@.c)
 * Callees:
 *     <none>
 */

void __fastcall ArActWaitNoChangeInProgress(struct _AR_ACTIVITY *a1)
{
  unsigned __int64 v2; // rdi
  char v3; // al
  char v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) + 48;
  while ( 1 )
  {
    RtlAcquireSRWLockExclusive(v2);
    *(_DWORD *)(v2 + 8) = GetCurrentThreadId();
    v3 = *((_BYTE *)a1 + 53);
    if ( (v3 & 1) == 0 )
      break;
    v4 = *((_BYTE *)a1 + 53);
    *(_DWORD *)(v2 + 8) = 0;
    RtlReleaseSRWLockExclusive(v2);
    RtlWaitOnAddress((char *)a1 + 53, &v4, 1LL);
  }
  *((_BYTE *)a1 + 53) = v3 | 1;
  *(_DWORD *)(v2 + 8) = 0;
  RtlReleaseSRWLockExclusive(v2);
}
