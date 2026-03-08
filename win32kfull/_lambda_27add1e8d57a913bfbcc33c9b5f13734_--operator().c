/*
 * XREFs of _lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator() @ 0x1C0130118
 * Callers:
 *     GreGetRandomRgn @ 0x1C0125C40 (GreGetRandomRgn.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_27add1e8d57a913bfbcc33c9b5f13734_::operator()(__int64 a1, RGNOBJAPI *a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  v4 = a3;
  if ( a3 )
    return RGNOBJAPI::bCopy(a2, (struct RGNOBJ *)&v4) != 0 ? 1 : -1;
  return result;
}
