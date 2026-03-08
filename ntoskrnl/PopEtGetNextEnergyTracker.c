/*
 * XREFs of PopEtGetNextEnergyTracker @ 0x140703A54
 * Callers:
 *     PopEtEnumEnergyTrackers @ 0x1407039F4 (PopEtEnumEnergyTrackers.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 */

_QWORD *__fastcall PopEtGetNextEnergyTracker(_QWORD **Object)
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v3; // rcx
  _QWORD *v4; // rsi
  _QWORD **v5; // rax
  _QWORD *i; // rbx

  CurrentThread = KeGetCurrentThread();
  v3 = PopEtGlobals + 16;
  v4 = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = (_QWORD **)PopEtGlobals;
  if ( Object )
    v5 = Object;
  for ( i = *v5; i != (_QWORD *)PopEtGlobals; i = (_QWORD *)*i )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)i) )
    {
      v4 = i;
      break;
    }
  }
  PopReleaseRwLock(PopEtGlobals + 16);
  if ( Object )
    ObfDereferenceObjectWithTag(Object, 0x74456F50u);
  return v4;
}
