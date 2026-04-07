/*
 * XREFs of ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x1800128A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800128E8 (--1UdwmDcompVisual@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

UdwmDcompVisual *__fastcall UdwmDcompVisual::`vector deleting destructor'(UdwmDcompVisual *this, char a2)
{
  UdwmDcompVisual::~UdwmDcompVisual(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, UdwmDcompVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
