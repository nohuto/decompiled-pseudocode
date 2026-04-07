/*
 * XREFs of ??_GCRedirectVisualProxy@@MEAAPEAXI@Z @ 0x18003FF20
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x1800245D4 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
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
