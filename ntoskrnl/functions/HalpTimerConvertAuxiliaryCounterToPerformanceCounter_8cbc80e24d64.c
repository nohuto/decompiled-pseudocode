__int64 __fastcall HalpTimerConvertAuxiliaryCounterToPerformanceCounter(unsigned __int64 a1, _QWORD *a2, _QWORD *a3)
{
  ULONGLONG v6; // rsi
  unsigned __int64 v7; // r14
  int v8; // edx
  ULONGLONG v9; // r15
  ULONGLONG pullResult; // [rsp+40h] [rbp-30h] BYREF
  LARGE_INTEGER v12; // [rsp+48h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-20h] BYREF
  __int64 v14; // [rsp+58h] [rbp-18h] BYREF
  unsigned __int64 v15; // [rsp+60h] [rbp-10h] BYREF
  ULONGLONG ullMultiplicand; // [rsp+B8h] [rbp+48h] BYREF

  v13 = 0LL;
  v12.QuadPart = 0LL;
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
    goto LABEL_10;
  }
  HalpTimerCaptureCurrentAuxiliaryQpcPair(&v12, (__int64 *)&v13, (LARGE_INTEGER *)&ullMultiplicand);
  if ( RtlULongLongMult(ullMultiplicand, 0x3B9ACA00uLL, &pullResult) < 0 )
  {
    v8 = -1073741823;
    goto LABEL_10;
  }
  v9 = pullResult / v6;
  v8 = HalpTimerConvertAuxiliaryCounter(v13, v7, v12.QuadPart, v6, a1, &v14, &v15);
  if ( v8 < 0 )
  {
LABEL_10:
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
