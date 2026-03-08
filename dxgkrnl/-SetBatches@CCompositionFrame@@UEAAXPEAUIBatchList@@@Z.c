/*
 * XREFs of ?SetBatches@CCompositionFrame@@UEAAXPEAUIBatchList@@@Z @ 0x1C0019EB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CCompositionFrame::SetBatches(CCompositionFrame *this, struct IBatchList *a2)
{
  *((_QWORD *)this + 13) = a2;
}
