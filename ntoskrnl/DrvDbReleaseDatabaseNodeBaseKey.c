/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x14086585C
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140865658 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A681B0 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140A696A0 (DrvDbGetObjectList.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     ZwClose @ 0x1404124F0 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x140865E78 (DrvDbUnloadDatabaseNode.c)
 */

__int64 __fastcall DrvDbReleaseDatabaseNodeBaseKey(__int64 a1, __int64 a2, __int64 a3, void *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v8; // ebx

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a2 + 152), 1u);
  if ( (*(_DWORD *)(a2 + 64) & 2) == 0 )
  {
    v8 = ZwClose(a4);
    if ( v8 >= 0 )
      v8 = DrvDbUnloadDatabaseNode(a1, a2);
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 152));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  return (unsigned int)v8;
}
