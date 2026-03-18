/*
 * XREFs of CmInitializeThreadInfo @ 0x140337F30
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1407AC5E0 (ExpWatchProductTypeWork.c)
 * Callees:
 *     CmpInitializeThreadInfo @ 0x14022E660 (CmpInitializeThreadInfo.c)
 */

_OWORD *__fastcall CmInitializeThreadInfo(__int64 a1)
{
  return CmpInitializeThreadInfo(a1);
}
