/*
 * XREFs of ?CalcDpi@DpiInternal@@YAIII@Z @ 0x1C00D7AFC
 * Callers:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C00D7AB8 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiInternal::CalcDpi(DpiInternal *this, int a2)
{
  if ( a2 )
    return 254 * (int)this / (unsigned int)(10 * a2);
  WdLogSingleEntry0(1LL);
  return 0LL;
}
