/*
 * XREFs of EtwTraceFlipManagerPresentSkipped @ 0x1C0163430
 * Callers:
 *     <none>
 * Callees:
 *     GetQpcFrequency @ 0x1C0161710 (GetQpcFrequency.c)
 *     McTemplateK0qxxxxxi_EtwWriteTransfer @ 0x1C01678E8 (McTemplateK0qxxxxxi_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall EtwTraceFlipManagerPresentSkipped(
        int a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _UNKNOWN **result; // rax
  char v7; // di
  __int64 v12; // rax
  int v13; // edx
  double v14; // xmm0_8
  unsigned __int64 v15; // rcx
  double v16; // xmm1_8
  double v17; // xmm0_8
  double v18; // xmm6_8
  __int64 QpcFrequency; // rax
  double v20; // xmm0_8
  double v21; // xmm6_8
  char v22; // bp
  double v23; // xmm6_8
  __int64 v24; // rax
  double v25; // xmm0_8
  double v26; // xmm6_8
  char v27; // bl
  double v28; // xmm6_8
  __int64 v29; // rax
  int v30; // r8d
  double v31; // xmm0_8
  double v32; // xmm6_8
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+50h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+A8h] [rbp+0h] BYREF

  result = &retaddr;
  v7 = 0;
  if ( a6 )
  {
    v12 = qword_1C02D86A0;
    if ( !qword_1C02D86A0 )
    {
      PerformanceFrequency.QuadPart = 0LL;
      KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedCompareExchange64(&qword_1C02D86A0, PerformanceFrequency.QuadPart, 0LL);
      v12 = qword_1C02D86A0;
    }
    v13 = a6 - a4;
    if ( (__int64)(a6 - a4) < 0 )
    {
      v15 = v13 & 1 | ((a6 - a4) >> 1);
      v14 = (double)(int)v15 + (double)(int)v15;
    }
    else
    {
      v14 = (double)v13;
    }
    if ( v12 < 0 )
      v16 = (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1))
          + (double)(int)(v12 & 1 | ((unsigned __int64)v12 >> 1));
    else
      v16 = (double)(int)v12;
    result = 0LL;
    v17 = v14 / v16 * 10000000.0;
    if ( v17 >= 9.223372036854776e18 )
    {
      v17 = v17 - 9.223372036854776e18;
      if ( v17 < 9.223372036854776e18 )
        result = (_UNKNOWN **)0x8000000000000000LL;
    }
    v7 = (_BYTE)result + (int)v17;
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
  {
    if ( (a5 & 0x8000000000000000uLL) != 0LL )
      v18 = (double)(int)(a5 & 1 | (a5 >> 1)) + (double)(int)(a5 & 1 | (a5 >> 1));
    else
      v18 = (double)(int)a5;
    QpcFrequency = GetQpcFrequency();
    if ( QpcFrequency < 0 )
      v20 = (double)(int)(QpcFrequency & 1 | ((unsigned __int64)QpcFrequency >> 1))
          + (double)(int)(QpcFrequency & 1 | ((unsigned __int64)QpcFrequency >> 1));
    else
      v20 = (double)(int)QpcFrequency;
    v21 = v18 / v20 * 10000000.0;
    if ( v21 >= 9.223372036854776e18 )
      v21 = v21 - 9.223372036854776e18;
    v22 = (int)v21;
    if ( a4 < 0 )
      v23 = (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1)) + (double)(int)(a4 & 1 | ((unsigned __int64)a4 >> 1));
    else
      v23 = (double)(int)a4;
    v24 = GetQpcFrequency();
    if ( v24 < 0 )
      v25 = (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1))
          + (double)(int)(v24 & 1 | ((unsigned __int64)v24 >> 1));
    else
      v25 = (double)(int)v24;
    v26 = v23 / v25 * 10000000.0;
    if ( v26 >= 9.223372036854776e18 )
      v26 = v26 - 9.223372036854776e18;
    v27 = (int)v26;
    if ( (a6 & 0x8000000000000000uLL) != 0LL )
      v28 = (double)(int)(a6 & 1 | (a6 >> 1)) + (double)(int)(a6 & 1 | (a6 >> 1));
    else
      v28 = (double)(int)a6;
    v29 = GetQpcFrequency();
    if ( v29 < 0 )
      v31 = (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1))
          + (double)(int)(v29 & 1 | ((unsigned __int64)v29 >> 1));
    else
      v31 = (double)(int)v29;
    v32 = v28 / v31 * 10000000.0;
    if ( v32 >= 9.223372036854776e18 )
      v32 = v32 - 9.223372036854776e18;
    return (_UNKNOWN **)McTemplateK0qxxxxxi_EtwWriteTransfer(
                          0,
                          (unsigned int)&FlipManagerPresentSkipped,
                          v30,
                          a1,
                          a2,
                          a3,
                          (int)v32,
                          v27,
                          v22,
                          v7);
  }
  return result;
}
