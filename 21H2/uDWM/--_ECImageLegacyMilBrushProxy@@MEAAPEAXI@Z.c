/*
 * XREFs of ??_ECImageLegacyMilBrushProxy@@MEAAPEAXI@Z @ 0x18003CA90
 * Callers:
 *     <none>
 * Callees:
 *     ??1CImageLegacyMilBrushProxy@@MEAA@XZ @ 0x18003CAD8 (--1CImageLegacyMilBrushProxy@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

CImageLegacyMilBrushProxy *__fastcall CImageLegacyMilBrushProxy::`vector deleting destructor'(
        CImageLegacyMilBrushProxy *this,
        char a2)
{
  CImageLegacyMilBrushProxy::~CImageLegacyMilBrushProxy(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CImageLegacyMilBrushProxy *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
