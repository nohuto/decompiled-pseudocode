struct IBatchList *__fastcall CCompositionFrame::GetBatches(CCompositionFrame *this)
{
  struct IBatchList *result; // rax

  result = (struct IBatchList *)*((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
