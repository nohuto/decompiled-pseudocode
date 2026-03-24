/*
 * XREFs of ClearAppStarting @ 0x1C0048460
 * Callers:
 *     DestroyProcessInfo @ 0x1C0046DC0 (DestroyProcessInfo.c)
 *     InitSystemThread @ 0x1C0085D20 (InitSystemThread.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClearAppStarting(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx

  result = gppiStarting;
  v2 = &gppiStarting;
  while ( result )
  {
    if ( result == a1 )
    {
      result = *(_QWORD *)(a1 + 368);
      *v2 = result;
      break;
    }
    v2 = (__int64 *)(result + 368);
    result = *(_QWORD *)(result + 368);
  }
  *(_DWORD *)(a1 + 12) &= ~0x40u;
  return result;
}
