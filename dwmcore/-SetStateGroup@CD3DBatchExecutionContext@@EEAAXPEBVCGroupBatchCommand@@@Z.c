/*
 * XREFs of ?SetStateGroup@CD3DBatchExecutionContext@@EEAAXPEBVCGroupBatchCommand@@@Z @ 0x180106350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CD3DBatchExecutionContext::SetStateGroup(
        CD3DBatchExecutionContext *this,
        const struct CGroupBatchCommand *a2)
{
  *((_QWORD *)this + 7) = a2;
}
