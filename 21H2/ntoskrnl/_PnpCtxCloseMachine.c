/*
 * XREFs of _PnpCtxCloseMachine @ 0x140974714
 * Callers:
 *     PiDevCfgInitDriverDatabaseCallback @ 0x1408A6BF8 (PiDevCfgInitDriverDatabaseCallback.c)
 *     PipMigratePnpState @ 0x140A52084 (PipMigratePnpState.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExDeleteResourceLite @ 0x1402FFDF0 (ExDeleteResourceLite.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     _PnpCtxDestroyNode @ 0x1409747D8 (_PnpCtxDestroyNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PnpCtxCloseMachine(PERESOURCE *P)
{
  struct _KTHREAD *CurrentThread; // rax
  int v2; // esi
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _ERESOURCE *v10; // rbx

  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(P[30], 1u);
  do
  {
    if ( P[1] == (PERESOURCE)(P + 1) )
      break;
    v4 = P[2];
    v5 = *v4;
    if ( *(_QWORD **)(*v4 + 8LL) == v4 )
    {
      v6 = (_QWORD *)v4[1];
      if ( (_QWORD *)*v6 == v4 )
        continue;
    }
    __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    v2 = PnpCtxDestroyNode(v4);
  }
  while ( v2 >= 0 );
  ExReleaseResourceLite(P[30]);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v7, v8, v9);
  if ( v2 >= 0 )
  {
    v10 = P[30];
    ExDeleteResourceLite(v10);
    ExFreePoolWithTag(v10, 0);
    ExFreePoolWithTag(P, 0);
  }
  return (unsigned int)v2;
}
