/*
 * XREFs of HalpTimerConvertAuxiliaryCounter @ 0x1404FC324
 * Callers:
 *     HalpTimerConvertAuxiliaryCounterToPerformanceCounter @ 0x1404FC420 (HalpTimerConvertAuxiliaryCounterToPerformanceCounter.c)
 *     HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FC550 (HalpTimerConvertPerformanceCounterToAuxiliaryCounter.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 */

__int64 __fastcall HalpTimerConvertAuxiliaryCounter(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        ULONGLONG a4,
        unsigned __int64 a5,
        __int64 *a6,
        unsigned __int64 *a7)
{
  unsigned __int64 v7; // rdi
  __int64 *v9; // r11
  ULONGLONG v10; // rbx
  __int64 result; // rax
  ULONGLONG v14; // r10
  ULONGLONG v15; // r8
  __int64 v16; // rdx
  unsigned __int64 *v17; // rcx
  ULONGLONG pullResult; // [rsp+40h] [rbp+8h] BYREF

  pullResult = 0LL;
  v7 = 0LL;
  v9 = a6;
  v10 = a5 - a1;
  if ( a1 >= a5 )
    v10 = a1 - a5;
  if ( v10 / a2 >= 0xA )
  {
    result = 3221225485LL;
    goto LABEL_13;
  }
  if ( RtlULongLongMult(a4, v10, &pullResult) < 0 )
    goto LABEL_6;
  v15 = pullResult / a2;
  v7 = 0x3B9ACA00 / a4;
  if ( a1 >= a5 )
  {
    if ( v14 < v15 )
    {
LABEL_6:
      result = 3221225473LL;
      goto LABEL_13;
    }
    result = 0LL;
    *v9 = v14 - v15;
  }
  else
  {
    v16 = -1LL;
    if ( v15 + v14 >= v15 )
      v16 = v15 + v14;
    result = v15 + v14 < v15 ? 0xC0000095 : 0;
    *v9 = v16;
  }
LABEL_13:
  v17 = a7;
  if ( a7 )
    *a7 = v7;
  if ( (int)result < 0 )
  {
    if ( v17 )
      *v17 = 0LL;
    *v9 = 0LL;
  }
  return result;
}
