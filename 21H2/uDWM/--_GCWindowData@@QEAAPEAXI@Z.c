/*
 * XREFs of ??_GCWindowData@@QEAAPEAXI@Z @ 0x18002B21C
 * Callers:
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x18002A7C8 (--1CWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowIconic@@MEAA@XZ @ 0x180044378 (--1CWindowIconic@@MEAA@XZ.c)
 * Callees:
 *     ??1CWindowData@@QEAA@XZ @ 0x180014AB0 (--1CWindowData@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

CWindowData **__fastcall CWindowData::`scalar deleting destructor'(CWindowData **this)
{
  CWindowData::~CWindowData(this);
  (*(void (__fastcall **)(WPF::HeapBase *, CWindowData **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    this);
  return this;
}
