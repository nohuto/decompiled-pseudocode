/*
 * XREFs of ??_EUdwmDcompVisual@@UEAAPEAXI@Z @ 0x180012060
 * Callers:
 *     <none>
 * Callees:
 *     ??1UdwmDcompVisual@@UEAA@XZ @ 0x1800120A8 (--1UdwmDcompVisual@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
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
