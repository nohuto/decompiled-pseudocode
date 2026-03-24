/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C004BA1C
 * Callers:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C004B9D8 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, __int64 a2)
{
  __int64 v2; // rax

  if ( (_DWORD)a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  v2 = WdLogNewEntry5_WdAssertion(this, a2);
  *(_QWORD *)(v2 + 24) = 54LL;
  WdLogEvent5_WdAssertion(v2);
  return 0LL;
}
