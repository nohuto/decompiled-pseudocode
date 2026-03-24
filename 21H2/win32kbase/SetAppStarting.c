/*
 * XREFs of SetAppStarting @ 0x1C0095320
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00B88C4 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00CF710 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SetAppStarting(__int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  *(_DWORD *)(a1 + 12) |= 0x40u;
  v1 = 0LL;
  result = gppiStarting;
  *(_QWORD *)(a1 + 368) = gppiStarting;
  gppiStarting = a1;
  if ( gptmrMaster )
  {
    if ( qword_1C0256FA8 )
      result = qword_1C0256FA8();
    else
      result = 3221225659LL;
    if ( (int)result >= 0 )
    {
      result = (__int64)qword_1C0256FB0;
      if ( qword_1C0256FB0 )
      {
        result = qword_1C0256FB0(qword_1C0251810, (unsigned int)(gdwHungAppTimeout + 30000), CheckAppStarting, 1LL);
        v1 = result;
      }
    }
    qword_1C0251810 = v1;
  }
  return result;
}
