/*
 * XREFs of ??_ECRotateTransformProxy@@UEAAPEAXI@Z @ 0x180009970
 * Callers:
 *     <none>
 * Callees:
 *     ??1CResourceProxy@@MEAA@XZ @ 0x180023D94 (--1CResourceProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CRotateTransformProxy *__fastcall CRotateTransformProxy::`vector deleting destructor'(
        CRotateTransformProxy *this,
        char a2)
{
  CResourceProxy::~CResourceProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CRotateTransformProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
