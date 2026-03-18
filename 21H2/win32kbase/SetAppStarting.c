/*
 * XREFs of SetAppStarting @ 0x1C00A85A0
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C7AC8 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 (*__fastcall SetAppStarting(__int64 a1))(void)
{
  __int64 v1; // rbx
  __int64 (*result)(void); // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  v1 = 0LL;
  result = (__int64 (*)(void))gppiStarting;
  *(_QWORD *)(a1 + 368) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    result = qword_1C029BCF8;
    if ( qword_1C029BCF8 )
    {
      result = (__int64 (*)(void))qword_1C029BCF8();
      if ( (int)result >= 0 )
      {
        result = (__int64 (*)(void))qword_1C029BD00;
        if ( qword_1C029BD00 )
        {
          result = (__int64 (*)(void))qword_1C029BD00(
                                        qword_1C02965A8,
                                        (unsigned int)(gdwHungAppTimeout + 30000),
                                        CheckAppStarting,
                                        1LL);
          v1 = (__int64)result;
        }
      }
    }
    qword_1C02965A8 = v1;
  }
  return result;
}
