void __fastcall EtwTraceFlipManagerPresentPosted(int a1, char a2, __int64 a3)
{
  __int64 v6; // rax
  double v7; // xmm0_8
  double v8; // xmm1_8
  unsigned __int64 v9; // rax
  double v10; // xmm0_8
  unsigned __int64 v11; // rbx
  LARGE_INTEGER PerformanceCounter; // rax
  double LowPart; // xmm6_8
  __int64 QpcFrequency; // rax
  int v15; // r8d
  double v16; // xmm0_8
  double v17; // xmm6_8
  union _LARGE_INTEGER v18; // [rsp+88h] [rbp+20h] BYREF

  if ( ((unsigned __int64)WPP_MAIN_CB.Reserved & 0x8000000000001000uLL) != 0
    && (unsigned __int8)(byte_1C02C4068 - 1) > 2u
    && (qword_1C02C4050 & 0x8000000000001000uLL) != 0
    && (qword_1C02C4058 & 0x8000000000001000uLL) == qword_1C02C4058 )
  {
    v6 = qword_1C02D86A0;
    if ( !qword_1C02D86A0 )
    {
      v18.QuadPart = 0LL;
      KeQueryPerformanceCounter(&v18);
      _InterlockedCompareExchange64(&qword_1C02D86A0, v18.QuadPart, 0LL);
      v6 = qword_1C02D86A0;
    }
    if ( a3 < 0 )
      v7 = (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1)) + (double)(int)(a3 & 1 | ((unsigned __int64)a3 >> 1));
    else
      v7 = (double)(int)a3;
    if ( v6 < 0 )
      v8 = (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1)) + (double)(int)(v6 & 1 | ((unsigned __int64)v6 >> 1));
    else
      v8 = (double)(int)v6;
    v9 = 0LL;
    v10 = v7 / v8 * 10000000.0;
    if ( v10 >= 9.223372036854776e18 )
    {
      v10 = v10 - 9.223372036854776e18;
      if ( v10 < 9.223372036854776e18 )
        v9 = 0x8000000000000000uLL;
    }
    v11 = v9 + (unsigned int)(int)v10;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( PerformanceCounter.QuadPart < 0 )
      LowPart = (double)(int)(PerformanceCounter.LowPart & 1 | ((unsigned __int64)PerformanceCounter.QuadPart >> 1))
              + (double)(int)(PerformanceCounter.LowPart & 1 | ((unsigned __int64)PerformanceCounter.QuadPart >> 1));
    else
      LowPart = (double)(int)PerformanceCounter.LowPart;
    QpcFrequency = GetQpcFrequency();
    if ( QpcFrequency < 0 )
      v16 = (double)(int)(QpcFrequency & 1 | ((unsigned __int64)QpcFrequency >> 1))
          + (double)(int)(QpcFrequency & 1 | ((unsigned __int64)QpcFrequency >> 1));
    else
      v16 = (double)(int)QpcFrequency;
    v17 = LowPart / v16 * 10000000.0;
    if ( v17 >= 9.223372036854776e18 )
      v17 = v17 - 9.223372036854776e18;
    if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
      McTemplateK0qxxxx_EtwWriteTransfer(
        v11 - (int)v17,
        (int)v17,
        v15,
        a1,
        a2,
        v11,
        (int)v17,
        v11 != 0 ? v11 - (int)v17 : 0);
  }
}
