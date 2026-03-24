/*
 * XREFs of CmpCallCallBacks @ 0x1406E081C
 * Callers:
 *     CmpDoQueryKeyName @ 0x140347BE0 (CmpDoQueryKeyName.c)
 *     CmUnloadKey @ 0x14066C6BC (CmUnloadKey.c)
 *     CmpDeleteKeyObject @ 0x1406E03B0 (CmpDeleteKeyObject.c)
 * Callees:
 *     CmpCallCallBacksEx @ 0x140640B60 (CmpCallCallBacksEx.c)
 */

__int64 __fastcall CmpCallCallBacks(unsigned int a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  return CmpCallCallBacksEx(a1, a2, 0LL, 1, a4, a5, a6);
}
