/*
 * XREFs of ??_GCRedirectVisualProxy@@MEAAPEAXI@Z @ 0x18003FE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180023D94 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CRedirectVisualProxy *__fastcall CRedirectVisualProxy::`scalar deleting destructor'(
        CRedirectVisualProxy *this,
        char a2)
{
  *(_QWORD *)this = &CRedirectVisualProxy::`vftable';
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CRedirectVisualProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
