void __fastcall CD3DBatchExecutionContext::SetStateGroup(
        CD3DBatchExecutionContext *this,
        const struct CGroupBatchCommand *a2)
{
  *((_QWORD *)this + 7) = a2;
}
