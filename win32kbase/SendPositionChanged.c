/*
 * XREFs of SendPositionChanged @ 0x1C00D3B40
 * Callers:
 *     _lambda_0106af77700bc4a134663e8cc2385985_::_lambda_invoker_cdecl_ @ 0x1C00D4980 (_lambda_0106af77700bc4a134663e8cc2385985_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     SendMessageTo @ 0x1C0081230 (SendMessageTo.c)
 */

__int64 __fastcall SendPositionChanged(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // r9
  _DWORD v4[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v5; // [rsp+28h] [rbp-30h]
  LARGE_INTEGER PerformanceCounter; // [rsp+30h] [rbp-28h]
  __int128 v7; // [rsp+38h] [rbp-20h]

  v1 = *a1;
  v4[1] = 0;
  v7 = 0LL;
  v5 = v1;
  v4[0] = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return SendMessageTo(0LL, (__int64)v4, 40LL, v2);
}
