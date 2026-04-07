/*
 * XREFs of ??_GCDesktopThumbnailCVIVisual@@MEAAPEAXI@Z @ 0x180096260
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800173F4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ??1CRenderDataVisual@@MEAA@XZ @ 0x180025FBC (--1CRenderDataVisual@@MEAA@XZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B520 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180057EB0 (_guard_dispatch_icall_nop.c)
 */

CDesktopThumbnailCVIVisual *__fastcall CDesktopThumbnailCVIVisual::`scalar deleting destructor'(
        CDesktopThumbnailCVIVisual *this,
        char a2)
{
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx

  *(_QWORD *)this = &CDesktopThumbnailCVIVisual::`vftable';
  v4 = (CBaseObject *)*((_QWORD *)this + 35);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 37);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 38);
  if ( v6 )
    CBaseObject::Release(v6);
  VisualCollection::RemoveAll((CDesktopThumbnailCVIVisual *)((char *)this + 32));
  CRenderDataVisual::~CRenderDataVisual((CBaseObject **)this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::HeapBase *, CDesktopThumbnailCVIVisual *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
