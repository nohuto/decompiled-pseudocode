/*
 * XREFs of ?HampProcessSnapshotCleanup@@YAXPEAU_HAM_PROCESS_SNAPSHOT@@@Z @ 0x180005818
 * Callers:
 *     ?HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180005500 (-HampHostTerminateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007DD7C (-HampHostCollectErrorReport@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampProcessSnapshotCleanup(struct _HAM_PROCESS_SNAPSHOT *a1)
{
  __int64 i; // rdi
  void *v3; // r8

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)a1 + 4); i = (unsigned int)(i + 1) )
    NtClose(*(HANDLE *)(*(_QWORD *)a1 + 8 * i));
  if ( *(_QWORD *)a1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *(PVOID *)a1);
  v3 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
}
