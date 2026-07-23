/*
 * XREFs of VrpBecomeDiffHiveEntryTransitionOwner @ 0x1405D6600
 * Callers:
 *     VrpLoadDifferencingHive @ 0x1405D5E44 (VrpLoadDifferencingHive.c)
 *     VrpUnloadDifferencingHive @ 0x1405D6264 (VrpUnloadDifferencingHive.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402CA920 (KeAbPreAcquire.c)
 */

char __fastcall VrpBecomeDiffHiveEntryTransitionOwner(__int64 a1)
{
  _QWORD *v1; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax

  v1 = (_QWORD *)(a1 + 40);
  if ( *v1 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  *v1 = KeGetCurrentThread();
  v3 = KeAbPreAcquire((ULONG_PTR)v1, 0LL, 0);
  if ( v3 )
    *(_BYTE *)(v3 + 26) |= 1u;
  return 1;
}
