/*
 * XREFs of PiDmListAddObjectWorker @ 0x1406CD594
 * Callers:
 *     PiDmListAddObject @ 0x1406CBAD4 (PiDmListAddObject.c)
 *     PiDmListAddList @ 0x14087DCD8 (PiDmListAddList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140869528 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListAddObjectWorker(int a1, struct _ERESOURCE *a2, __int64 a3, __int64 a4, char *a5)
{
  __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  char v12; // si
  _QWORD *v13; // rax
  char *result; // rax

  v8 = 5LL * a1;
  v9 = (_QWORD *)(a4 + PiDmListDefs[v8 + 3]);
  v10 = a3 + PiDmListDefs[v8 + 1];
  if ( *v9 )
  {
    v12 = 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = 0;
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(a2, 1u);
    ++*(_DWORD *)(a3 + 12);
    ExReleaseResourceLite(a2);
    KeLeaveCriticalRegion();
    v13 = *(_QWORD **)(v10 + 8);
    if ( *v13 != v10 )
      __fastfail(3u);
    *v9 = v10;
    v9[1] = v13;
    *v13 = v9;
    *(_QWORD *)(v10 + 8) = v9;
    ++*(_DWORD *)(v10 + 16);
    PiDmListUpdateAggregationCountWorker(a3, a4, 1LL);
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
