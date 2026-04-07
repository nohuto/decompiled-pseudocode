/*
 * XREFs of ??_GVisualCollection@@UEAAPEAXI@Z @ 0x180095BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180027148 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

VisualCollection *__fastcall VisualCollection::`scalar deleting destructor'(VisualCollection *this, char a2)
{
  *(_QWORD *)this = &VisualCollection::`vftable';
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 2);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, VisualCollection *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
