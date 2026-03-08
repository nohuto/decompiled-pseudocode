/*
 * XREFs of CmSaveKeyToBuffer @ 0x140AF2780
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     CmCleanupThreadInfo @ 0x140263740 (CmCleanupThreadInfo.c)
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 *     ObfDereferenceObject @ 0x1402679B0 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection_0 @ 0x14028D2A0 (ExAcquireRundownProtection_0.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     CmObReferenceObjectByHandle @ 0x140AF2300 (CmObReferenceObjectByHandle.c)
 *     CmpAttachToRegistryProcess @ 0x140AF26E0 (CmpAttachToRegistryProcess.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 */

__int64 __fastcall CmSaveKeyToBuffer(void *a1, __int64 a2, __int64 a3)
{
  int v6; // r9d
  int v7; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // r8
  struct _KTHREAD *v10; // rax
  __int64 v11; // rdx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  __int128 v14; // [rsp+38h] [rbp-48h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-38h] BYREF

  Object = 0LL;
  v14 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeThreadInfo((__int64)&v14);
  if ( v6 == 4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( ExAcquireRundownProtection_0(&CmpShutdownRundown) )
    {
      v7 = CmObReferenceObjectByHandle(a1, 0, v9, 0, &Object, 0LL);
      if ( v7 >= 0 )
      {
        v10 = KeGetCurrentThread();
        --v10->KernelApcDisable;
        CmpAttachToRegistryProcess(&ApcState);
        v7 = CmpDumpKeyToBuffer(Object, v11, a2, a3);
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
        KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      }
      if ( Object )
        ObfDereferenceObject(Object);
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KeLeaveCriticalRegion();
    }
    else
    {
      KeLeaveCriticalRegion();
      v7 = -1073741431;
    }
  }
  else
  {
    v7 = -1073741637;
  }
  CmCleanupThreadInfo((__int64 *)&v14);
  return (unsigned int)v7;
}
