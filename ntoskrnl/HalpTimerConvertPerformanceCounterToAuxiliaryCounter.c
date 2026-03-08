/*
 * XREFs of HalpTimerConvertPerformanceCounterToAuxiliaryCounter @ 0x1404FC550
 * Callers:
 *     <none>
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     HalpTimerCaptureCurrentAuxiliaryQpcPair @ 0x1404FC260 (HalpTimerCaptureCurrentAuxiliaryQpcPair.c)
 *     HalpTimerConvertAuxiliaryCounter @ 0x1404FC324 (HalpTimerConvertAuxiliaryCounter.c)
 */

__int64 __fastcall HalpTimerConvertPerformanceCounterToAuxiliaryCounter(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned __int64 v6; // rsi
  ULONGLONG v7; // r14
  int v8; // edx
  ULONGLONG v9; // r12
  ULONGLONG pullResult; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h] BYREF
  LARGE_INTEGER v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+B8h] [rbp+48h] BYREF

  v12 = 0LL;
  v13.QuadPart = 0LL;
  ullMultiplicand = 0LL;
  pullResult = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( !HalpAuxiliaryCounter
    || (v6 = HalpTimerQpcFreqForAuxQpcConversion,
        v7 = *(_QWORD *)(HalpAuxiliaryCounter + 192),
        !HalpTimerQpcFreqForAuxQpcConversion)
    || !v7 )
  {
    v8 = -1073741637;
    goto LABEL_12;
  }
  if ( a1 < HalpTimerEarliestQpcAllowedToConvert )
  {
    v8 = -1073741811;
    goto LABEL_12;
  }
  HalpTimerCaptureCurrentAuxiliaryQpcPair(&v13, &v12, (LARGE_INTEGER *)&ullMultiplicand);
  if ( RtlULongLongMult(ullMultiplicand, 0x3B9ACA00uLL, &pullResult) < 0 )
  {
    v8 = -1073741823;
    goto LABEL_12;
  }
  v9 = pullResult / v6;
  v8 = HalpTimerConvertAuxiliaryCounter(v13.QuadPart, v6, v12, v7, a1, &v14, &v15);
  if ( v8 < 0 )
  {
LABEL_12:
    *a2 = 0LL;
    if ( a3 )
      *a3 = 0LL;
    return (unsigned int)v8;
  }
  *a2 = v14;
  if ( a3 )
    *a3 = v9 + v15;
  return (unsigned int)v8;
}
