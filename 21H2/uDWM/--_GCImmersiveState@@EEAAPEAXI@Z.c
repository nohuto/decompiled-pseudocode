/*
 * XREFs of ??_GCImmersiveState@@EEAAPEAXI@Z @ 0x18003C5D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027988 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveState *__fastcall CImmersiveState::`scalar deleting destructor'(CImmersiveState *this, char a2)
{
  *(_QWORD *)this = &CImmersiveState::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 2);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CImmersiveState *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
