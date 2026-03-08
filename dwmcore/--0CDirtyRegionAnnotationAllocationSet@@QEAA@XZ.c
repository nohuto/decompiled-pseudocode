/*
 * XREFs of ??0CDirtyRegionAnnotationAllocationSet@@QEAA@XZ @ 0x18003A304
 * Callers:
 *     ??0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z @ 0x18003A184 (--0CDirtyRegion@@IEAA@PEAVCVisualTree@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x1801059D0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 */

CDirtyRegionAnnotationAllocationSet *__fastcall CDirtyRegionAnnotationAllocationSet::CDirtyRegionAnnotationAllocationSet(
        CDirtyRegionAnnotationAllocationSet *this)
{
  CDirtyRegionAnnotation *v2; // rdi
  __int64 v3; // rsi
  CDirtyRegionAnnotationAllocationSet *result; // rax

  v2 = (CDirtyRegionAnnotationAllocationSet *)((char *)this + 32);
  v3 = 32LL;
  do
  {
    CDirtyRegionAnnotation::CDirtyRegionAnnotation(v2);
    v2 = (CDirtyRegionAnnotation *)((char *)v2 + 48);
    --v3;
  }
  while ( v3 );
  *((_QWORD *)this + 2) = this;
  *((_QWORD *)this + 3) = this;
  *((_QWORD *)this + 1) = (char *)this + 16;
  *(_QWORD *)this = (char *)this + 16;
  result = this;
  *((_DWORD *)this + 392) = 0;
  return result;
}
