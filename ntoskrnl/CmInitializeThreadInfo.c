/*
 * XREFs of CmInitializeThreadInfo @ 0x1402CCA30
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407586E0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x140263760 (CmpInitializeThreadInfo.c)
 */

_OWORD *__fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
