/*
 * XREFs of DrvDbReleaseDatabaseNodeBaseKey @ 0x14087728C
 * Callers:
 *     DrvDbOpenObjectRegKey @ 0x140877088 (DrvDbOpenObjectRegKey.c)
 *     DrvDbDeleteObjectRegKey @ 0x140A6AEB0 (DrvDbDeleteObjectRegKey.c)
 *     DrvDbGetObjectList @ 0x140A6C3A0 (DrvDbGetObjectList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14022F700 (KeLeaveCriticalRegionThread.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ZwClose @ 0x14041A880 (ZwClose.c)
 *     DrvDbUnloadDatabaseNode @ 0x1408778A8 (DrvDbUnloadDatabaseNode.c)
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
