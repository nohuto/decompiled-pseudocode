/*
 * XREFs of ??1CDrawingContext@@MEAA@XZ @ 0x18003C524
 * Callers:
 *     ??_ECGlobalDrawingContext@@UEAAPEAXI@Z @ 0x18003C4E0 (--_ECGlobalDrawingContext@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ??1ClipPlaneIterator@@QEAA@XZ @ 0x18003C628 (--1ClipPlaneIterator@@QEAA@XZ.c)
 *     ??1CLightStack@@QEAA@XZ @ 0x18003C658 (--1CLightStack@@QEAA@XZ.c)
 *     ??1CScopedClipStack@@QEAA@XZ @ 0x18003C724 (--1CScopedClipStack@@QEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?PopAllStacks@CDrawingContext@@AEAAXXZ @ 0x18008C568 (-PopAllStacks@CDrawingContext@@AEAAXXZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x18009598C (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180097680 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800DF2E0 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??_GCVisualTreePath@@QEAAPEAXI@Z @ 0x1801B329C (--_GCVisualTreePath@@QEAAPEAXI@Z.c)
 */

void __fastcall CDrawingContext::~CDrawingContext(void **this)
{
  unsigned int v2; // edx
  CVisualTreePath *v3; // rcx
  CD3DDevice *v4; // rcx

  CDrawingContext::PopAllStacks((CDrawingContext *)this);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 1012));
  v3 = (CVisualTreePath *)this[1010];
  if ( v3 )
    CVisualTreePath::`scalar deleting destructor'(v3, v2);
  CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)(this + 446));
  ClipPlaneIterator::~ClipPlaneIterator((ClipPlaneIterator *)(this + 429));
  operator delete(this[426]);
  operator delete(this[420]);
  operator delete(this[412]);
  operator delete(this[408]);
  CScopedClipStack::~CScopedClipStack((CScopedClipStack *)(this + 112));
  operator delete(this[110]);
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 100);
  CLightStack::~CLightStack((CLightStack *)(this + 70));
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 62);
  operator delete(this[60]);
  operator delete(this[56]);
  operator delete(this[52]);
  operator delete(this[48]);
  v4 = (CD3DDevice *)this[5];
  if ( v4 )
    CD3DDevice::Release(v4);
  wil::com_ptr_t<ID2DBitmap,wil::err_returncode_policy>::~com_ptr_t<ID2DBitmap,wil::err_returncode_policy>((__int64)(this + 4));
}
