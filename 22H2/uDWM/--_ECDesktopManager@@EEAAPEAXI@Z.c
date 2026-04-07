/*
 * XREFs of ??_ECDesktopManager@@EEAAPEAXI@Z @ 0x180085990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x1800855F0 (--1CDesktopManager@@EEAA@XZ.c)
 */

CDesktopManager *__fastcall CDesktopManager::`vector deleting destructor'(CDesktopManager *this, __int64 a2)
{
  char v2; // bl

  v2 = a2;
  CDesktopManager::~CDesktopManager(this, a2);
  if ( (v2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDesktopManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
