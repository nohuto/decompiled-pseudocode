/*
 * XREFs of SepNotifyFileSystems @ 0x140923C70
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1402AB110 (ExAcquireFastMutexUnsafe.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402AB2A0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall SepNotifyFileSystems(char *P)
{
  struct _KTHREAD *CurrentThread; // rax
  void (__fastcall **i)(char *); // rdi
  PVOID j; // rdi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  void *v8; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&SepRmNotifyMutex);
  for ( i = (void (__fastcall **)(char *))SeFileSystemNotifyRoutinesHead; i; i = (void (__fastcall **)(char *))*i )
    i[1](P + 32);
  for ( j = SeFileSystemNotifyRoutinesExHead; j; j = *(PVOID *)j )
    (*((void (__fastcall **)(char *, _QWORD, _QWORD))j + 1))(P + 32, *((_QWORD *)P + 5), *((_QWORD *)j + 2));
  ExReleaseFastMutexUnsafe(&SepRmNotifyMutex);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v5, v6, v7);
  v8 = (void *)*((_QWORD *)P + 5);
  if ( v8 )
    ObfDereferenceObjectWithTag(v8, 0x53466553u);
  ExFreePoolWithTag(P, 0);
}
