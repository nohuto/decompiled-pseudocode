/*
 * XREFs of ??_GCDDisplayManager@@EEAAPEAXI@Z @ 0x180087D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 *     ??1CDDisplayManager@@EEAA@XZ @ 0x180087CD4 (--1CDDisplayManager@@EEAA@XZ.c)
 */

CDDisplayManager *__fastcall CDDisplayManager::`scalar deleting destructor'(CDDisplayManager *this, char a2)
{
  CDDisplayManager::~CDDisplayManager(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDDisplayManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
