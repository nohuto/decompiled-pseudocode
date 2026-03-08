/*
 * XREFs of TtmiCloseEventQueue @ 0x1409A8F78
 * Callers:
 *     TtmiWriteEventToAllQueues @ 0x1409A1ED8 (TtmiWriteEventToAllQueues.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall TtmiCloseEventQueue(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD **v3; // rbx
  _QWORD *v4; // rcx
  _QWORD *v5; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 24), 1u);
  *(_BYTE *)(a1 + 168) = 0;
  v3 = (_QWORD **)(a1 + 152);
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == v3 )
      break;
    if ( (_QWORD **)v4[1] != v3 || (v5 = (_QWORD *)*v4, *(_QWORD **)(*v4 + 8LL) != v4) )
      __fastfail(3u);
    *v3 = v5;
    v5[1] = v3;
    ExFreePoolWithTag(v4, 0x716D7454u);
  }
  KeSetEvent((PRKEVENT)(a1 + 128), 0, 0);
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KeLeaveCriticalRegion();
}
