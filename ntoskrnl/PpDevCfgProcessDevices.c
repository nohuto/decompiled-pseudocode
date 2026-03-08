/*
 * XREFs of PpDevCfgProcessDevices @ 0x14081B964
 * Callers:
 *     PnpBootPhaseComplete @ 0x14081BD60 (PnpBootPhaseComplete.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     PnpRequestDeviceAction @ 0x1402F5074 (PnpRequestDeviceAction.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     PpDeviceRegistration @ 0x140680F5C (PpDeviceRegistration.c)
 *     _CmGetDeviceStatus @ 0x1406C8624 (_CmGetDeviceStatus.c)
 *     PpDevNodeUnlockTree @ 0x1406CB8B0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1406CB944 (PpDevNodeLockTree.c)
 *     PiPnpRtlEndOperation @ 0x1406CCB7C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1406CDF98 (PiPnpRtlBeginOperation.c)
 *     PipForDeviceNodeSubtree @ 0x1407855F8 (PipForDeviceNodeSubtree.c)
 *     RtlFreeUnicodeString @ 0x1407F0430 (RtlFreeUnicodeString.c)
 *     _CmDeleteDevice @ 0x140A5E810 (_CmDeleteDevice.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 PpDevCfgProcessDevices()
{
  PVOID *v0; // rbx
  char v1; // si
  int v2; // edi
  PVOID *i; // rbx
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v6; // rax
  unsigned int v7; // [rsp+30h] [rbp-20h]
  PVOID P[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+80h] [rbp+30h] BYREF
  __int64 v10; // [rsp+88h] [rbp+38h] BYREF
  __int64 v11; // [rsp+90h] [rbp+40h] BYREF
  PVOID v12; // [rsp+98h] [rbp+48h] BYREF

  v12 = 0LL;
  v9 = 0;
  v0 = P;
  LODWORD(v11) = 0;
  v1 = 0;
  LODWORD(v10) = 0;
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
      v2 = PiPnpRtlBeginOperation((__int64 **)&v12);
      if ( v2 >= 0 )
      {
        for ( i = (PVOID *)P[0]; i != P; i = (PVOID *)*i )
        {
          if ( (int)CmGetDeviceStatus(PiPnpRtlCtx, (const WCHAR *)i[3], 0, &v9, &v11, &v10, v7) < 0 || (v9 & 2) == 0 )
          {
            PpDevNodeLockTree(3);
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
            PpDeviceRegistration((__int64)(i + 2), 0LL, 0LL, 1);
            if ( (int)CmDeleteDevice(*(_QWORD *)&PiPnpRtlCtx, i[3], 0LL) >= 0 )
              v1 = 1;
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            PpDevNodeUnlockTree(3);
          }
        }
        PiPnpRtlEndOperation((PVOID **)v12);
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
    if ( v0[1] != P || (v6 = *v0, *((PVOID **)*v0 + 1) != v0) )
      __fastfail(3u);
    P[0] = *v0;
    v6[1] = P;
    RtlFreeUnicodeString((PUNICODE_STRING)v0 + 1);
    ExFreePoolWithTag(v0, 0);
LABEL_18:
    v0 = (PVOID *)P[0];
  }
  return (unsigned int)v2;
}
