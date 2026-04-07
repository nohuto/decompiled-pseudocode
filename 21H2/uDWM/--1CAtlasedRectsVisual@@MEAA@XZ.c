/*
 * XREFs of ??1CAtlasedRectsVisual@@MEAA@XZ @ 0x18002699C
 * Callers:
 *     ??1CButton@@MEAA@XZ @ 0x1800278B4 (--1CButton@@MEAA@XZ.c)
 *     ??_ECAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180027D30 (--_ECAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z @ 0x180028E50 (--_GCTopLevelAtlasedRectsVisual@@MEAAPEAXI@Z.c)
 *     ??1CAnimatedGlassSheet@@UEAA@XZ @ 0x18009AE58 (--1CAnimatedGlassSheet@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ @ 0x1800269F8 (-RemoveAllAtlasImages@CAtlasedRectsVisual@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800581D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAtlasedRectsVisual::~CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  *(_QWORD *)this = &CAtlasedRectsVisual::`vftable';
  CAtlasedRectsVisual::RemoveAllAtlasImages(this);
  (*(void (__fastcall **)(WPF::HeapBase *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
    WPF::g_pProcessHeap,
    *((_QWORD *)this + 34));
  if ( *((_QWORD *)this + 30) != *((_QWORD *)this + 31) )
  {
    (*(void (__fastcall **)(WPF::HeapBase *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
    *((_QWORD *)this + 30) = 0LL;
  }
  CVisual::~CVisual(this);
}
