/*
 * XREFs of EtwpDeleteSessionDemuxObject @ 0x14093EFA0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140206F80 (KeLeaveCriticalRegionThread.c)
 *     RtlRbRemoveNode @ 0x1402C1170 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402CB580 (ExReleasePushLockEx.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140361820 (PsGetCurrentServerSiloGlobals.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpDeleteSessionDemuxObject(_QWORD *a1, __int64 a2)
{
  _RTL_BALANCED_NODE *v2; // rdi
  _RTL_RB_TREE *v4; // rbp
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rax

  v2 = (_RTL_BALANCED_NODE *)a1[3];
  if ( v2 )
  {
    v4 = (_RTL_RB_TREE *)*((_QWORD *)PsGetCurrentServerSiloGlobals((__int64)a1, a2) + 108);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[256], 0LL);
    v6 = *a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v7 = (_QWORD *)a1[1], (_QWORD *)*v7 != a1) )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    a1[3] = 0LL;
    if ( v2[1].Children[1] == (_RTL_BALANCED_NODE *)&v2[1].Right )
    {
      RtlRbRemoveNode(v4 + 255, v2);
      ExFreePoolWithTag(v2, 0);
    }
    ExReleasePushLockEx((ULONG_PTR)&v4[256], 0LL);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
}
