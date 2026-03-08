/*
 * XREFs of ?ReleaseDirtyRegionAnnotationBuffers@CDirtyRegionAnnotationAllocationSet@@AEAAXXZ @ 0x1800DC2F0
 * Callers:
 *     ??1CVisualTree@@UEAA@XZ @ 0x18003B404 (--1CVisualTree@@UEAA@XZ.c)
 *     ?ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ @ 0x1800DC298 (-ClearDirtyRegionAnnotationLists@CDirtyRegion@@AEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CDirtyRegionAnnotationAllocationSet::ReleaseDirtyRegionAnnotationBuffers(
        CDirtyRegionAnnotationAllocationSet *this)
{
  __int64 v2; // rcx
  _QWORD *v3; // rax
  CDirtyRegionAnnotationAllocationSet **v4; // rcx
  CDirtyRegionAnnotationAllocationSet *v5; // rax

  v2 = *((_QWORD *)this + 1);
  if ( *(CDirtyRegionAnnotationAllocationSet **)v2 != this || (v3 = *(_QWORD **)(v2 + 8), *v3 != v2) )
LABEL_8:
    __fastfail(3u);
  *((_QWORD *)this + 1) = v3;
  *v3 = this;
  while ( 1 )
  {
    v4 = *(CDirtyRegionAnnotationAllocationSet ***)this;
    if ( *(CDirtyRegionAnnotationAllocationSet **)this == this )
      break;
    if ( v4[1] != this )
      goto LABEL_8;
    v5 = *v4;
    if ( *((CDirtyRegionAnnotationAllocationSet ***)*v4 + 1) != v4 )
      goto LABEL_8;
    *(_QWORD *)this = v5;
    *((_QWORD *)v5 + 1) = this;
    operator delete(v4, 0x610uLL);
  }
}
