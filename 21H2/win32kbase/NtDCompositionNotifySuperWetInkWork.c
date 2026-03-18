/*
 * XREFs of NtDCompositionNotifySuperWetInkWork @ 0x1C0211DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0010268 (-ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C00BB95C (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtDCompositionNotifySuperWetInkWork(unsigned int a1)
{
  int v1; // ebx
  struct DirectComposition::CApplicationChannel *v2; // rsi
  __int64 v3; // rdi
  __int64 v4; // rcx
  struct DirectComposition::CApplicationChannel *v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = 0LL;
  v1 = DirectComposition::CApplicationChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v1 >= 0 )
  {
    v2 = v6;
    v3 = *((_QWORD *)v6 + 5);
    DirectComposition::CCriticalSection::AcquireShared(*(PERESOURCE *)(v3 + 8));
    v4 = *(_QWORD *)(v3 + 80);
    if ( v4 )
      KeSetEvent(*(PRKEVENT *)(v4 + 8), 1, 0);
    ExReleaseResourceLite(*(PERESOURCE *)(v3 + 8));
    KeLeaveCriticalRegion();
    (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  }
  return (unsigned int)v1;
}
