/*
 * XREFs of PpDevCfgProcessDevices @ 0x1407A34BC
 * Callers:
 *     PnpBootPhaseComplete @ 0x1407A33F4 (PnpBootPhaseComplete.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     PnpRequestDeviceAction @ 0x1403703A4 (PnpRequestDeviceAction.c)
 *     _CmGetDeviceStatus @ 0x1405FF680 (_CmGetDeviceStatus.c)
 *     PipForDeviceNodeSubtree @ 0x140617970 (PipForDeviceNodeSubtree.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PpDevNodeUnlockTree @ 0x14062E9D0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x14062EA64 (PpDevNodeLockTree.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     _CmDeleteDevice @ 0x14072BD4C (_CmDeleteDevice.c)
 *     PpDeviceRegistration @ 0x14074BF20 (PpDeviceRegistration.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 PpDevCfgProcessDevices()
{
  PVOID *v0; // rbx
  char v1; // si
  int v2; // edi
  PVOID *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  unsigned int v10; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v12; // [rsp+80h] [rbp+30h] BYREF
  __int64 v13; // [rsp+88h] [rbp+38h] BYREF
  __int64 v14; // [rsp+90h] [rbp+40h] BYREF
  PVOID v15; // [rsp+98h] [rbp+48h] BYREF

  v15 = 0LL;
  v12 = 0;
  v0 = P;
  LODWORD(v14) = 0;
  v1 = 0;
  LODWORD(v13) = 0;
  P[1] = P;
  P[0] = P;
  if ( (PiDevCfgMode & 2) != 0 )
  {
    v2 = PipForDeviceNodeSubtree((__int64)IopRootDeviceNode, (__int64)PiDevCfgProcessDeviceCallback, (__int64)P);
    if ( v2 < 0 )
      goto LABEL_18;
    v0 = (PVOID *)P[0];
    if ( P[0] != P )
    {
      v2 = PiPnpRtlBeginOperation(&v15);
      if ( v2 >= 0 )
      {
        for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
        {
          if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, (const WCHAR *)i[3], 0, &v12, &v14, &v13, v10) < 0 || (v12 & 2) == 0 )
          {
            PpDevNodeLockTree(3);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            PpDeviceRegistration((__int64)(i + 2), 0LL, 0LL, 1);
            if ( (int)CmDeleteDevice(*(__int64 *)&PiPnpRtlCtx, (__int64)i[3], 0) >= 0 )
              v1 = 1;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v6, v7, v8);
            PpDevNodeUnlockTree(3);
          }
        }
        PiPnpRtlEndOperation((PVOID **)v15);
        if ( v1 )
          PnpRequestDeviceAction(*((PVOID *)IopRootDeviceNode + 4), 8, 0, 0LL, 0LL, 0LL, 0LL);
      }
      goto LABEL_18;
    }
  }
  else
  {
    v2 = 0;
  }
  while ( v0 != P )
  {
    if ( v0[1] != P || (v9 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v9[1] = P;
    RtlFreeAnsiString((PUNICODE_STRING)v0 + 1);
    ExFreePoolWithTag(v0, 0);
LABEL_18:
    v0 = (PVOID *)P[0];
  }
  return (unsigned int)v2;
}
