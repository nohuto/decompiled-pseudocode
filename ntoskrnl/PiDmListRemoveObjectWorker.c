/*
 * XREFs of PiDmListRemoveObjectWorker @ 0x140958008
 * Callers:
 *     PiDmListRemoveList @ 0x140957DFC (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140957F4C (PiDmListRemoveObject.c)
 * Callees:
 *     RtlDeleteElementGenericTableAvl @ 0x140244F40 (RtlDeleteElementGenericTableAvl.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     PiDmObjectRelease @ 0x1406D0328 (PiDmObjectRelease.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140869528 (PiDmListUpdateAggregationCountWorker.c)
 */

char *__fastcall PiDmListRemoveObjectWorker(int a1, __int64 a2, unsigned int *a3, __int64 a4, char *a5)
{
  __int64 v7; // rcx
  char *v8; // r10
  __int64 *v9; // rcx
  int v10; // edx
  __int64 v11; // r8
  char v12; // bl
  __int64 **v13; // rax
  int v14; // eax
  char *v15; // rax
  struct _KTHREAD *CurrentThread; // rax
  char *result; // rax
  unsigned int *Buffer; // [rsp+40h] [rbp+18h] BYREF

  Buffer = a3;
  v7 = 5LL * a1;
  v8 = (char *)a3 + PiDmListDefs[v7 + 1];
  v9 = (__int64 *)(a4 + PiDmListDefs[v7 + 3]);
  v10 = 0;
  v11 = *v9;
  if ( *v9 )
  {
    v12 = 1;
    if ( *(__int64 **)(v11 + 8) != v9 || (v13 = (__int64 **)v9[1], *v13 != v9) )
      __fastfail(3u);
    *v13 = (__int64 *)v11;
    *(_QWORD *)(v11 + 8) = v13;
    v14 = *((_DWORD *)v8 + 4);
    if ( v14 )
    {
      v10 = v14 - 1;
    }
    else
    {
      v15 = *(char **)v8;
      while ( v15 != v8 )
      {
        v15 = *(char **)v15;
        ++v10;
      }
    }
    *((_DWORD *)v8 + 4) = v10;
    *v9 = 0LL;
    v9[1] = 0LL;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)a2, 1u);
    if ( !--Buffer[3] )
    {
      RtlDeleteElementGenericTableAvl((PRTL_AVL_TABLE)(a2 + 104), &Buffer);
      PiDmObjectRelease(Buffer);
    }
    ExReleaseResourceLite((PERESOURCE)a2);
    KeLeaveCriticalRegion();
    PiDmListUpdateAggregationCountWorker((__int64)Buffer, a4, -1);
  }
  else
  {
    v12 = 0;
  }
  result = a5;
  if ( a5 )
    *a5 = v12;
  return result;
}
