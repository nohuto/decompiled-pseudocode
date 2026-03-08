/*
 * XREFs of ?GetBatches@CCompositionFrame@@UEAAPEAUIBatchList@@XZ @ 0x1C0019E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct IBatchList *__fastcall CCompositionFrame::GetBatches(CCompositionFrame *this)
{
  struct IBatchList *result; // rax

  result = (struct IBatchList *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
