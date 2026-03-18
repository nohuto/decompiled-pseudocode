/*
 * XREFs of ??1CAutoRefCountedBuffer@@QEAA@XZ @ 0x1C00116B0
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C01C22D0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0047E24 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 */

void __fastcall CAutoRefCountedBuffer::~CAutoRefCountedBuffer(void **this)
{
  void *v1; // rcx

  v1 = *this;
  if ( v1 )
    CRefCountedBuffer::RefCountedBufferRelease(v1);
}
