/*
 * XREFs of ??1CSubDrawingContext@@QEAA@XZ @ 0x180021298
 * Callers:
 *     ?DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180021010 (-DrawSubVisualTree@CDrawingContext@@QEAAJPEBVCVisualTree@@AEBV-$TMil3DRect@MV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z @ 0x1800213C8 (-UpdateContextOwner@CD2DContext@@QEAAJPEBVID2DContextOwner@@@Z.c)
 *     ??1CpuClipRealization@CCpuClippingData@@QEAA@XZ @ 0x1800F1FB0 (--1CpuClipRealization@CCpuClippingData@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

void __fastcall CSubDrawingContext::~CSubDrawingContext(CSubDrawingContext *this)
{
  int updated; // eax
  void *v3; // rdi
  void *v4; // rcx
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 1) )
  {
    updated = CD2DContext::UpdateContextOwner(
                (CD2DContext *)(*(_QWORD *)(*(_QWORD *)this + 40LL) + 16LL),
                (const struct ID2DContextOwner *)((*(_QWORD *)this + 24LL) & -(__int64)(*(_QWORD *)this != 0LL)));
    if ( updated < 0 )
      ModuleFailFastForHRESULT((unsigned int)updated, retaddr);
  }
  v3 = (void *)*((_QWORD *)this + 10);
  if ( v3 )
  {
    CCpuClippingData::CpuClipRealization::~CpuClipRealization(*((CCpuClippingData::CpuClipRealization **)this + 10));
    operator delete(v3, 0x88uLL);
  }
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
    operator delete(v4, 0x44uLL);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 1);
}
