/*
 * XREFs of WheapInitWnfCallbacks @ 0x140863FD4
 * Callers:
 *     WheaInitialize @ 0x140AFF910 (WheaInitialize.c)
 * Callees:
 *     ExSubscribeWnfStateChange @ 0x1406D1FA0 (ExSubscribeWnfStateChange.c)
 */

__int64 WheapInitWnfCallbacks()
{
  __int64 result; // rax
  __int64 v1; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0LL;
  qword_140C0E988 = 0LL;
  WheapOfflineChecker = 0LL;
  result = ExSubscribeWnfStateChange(
             (int)&v1,
             (int)&WNF_MM_BAD_MEMORY_QUARANTINED,
             1,
             0,
             (__int64)WheapProcessOfflineList,
             0LL);
  if ( (int)result >= 0 )
  {
    result = v1;
    qword_140C0E998 = v1;
  }
  return result;
}
