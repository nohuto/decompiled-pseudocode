/*
 * XREFs of ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000E02C
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x14000309C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z @ 0x14000E1AC (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXJKIPEAX@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x140005510 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1400071BC (memcpy_0.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14000E264 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 */

void __fastcall DoStackCapture(int a1, int a2, PVOID a3)
{
  volatile int v6; // ecx
  __int64 v7; // rdx
  char *v8; // rbx
  DWORD CurrentThreadId; // eax
  unsigned __int64 *v10; // rax
  USHORT v11; // ax
  PVOID *v12; // rdx
  PVOID *v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  __m128i si128; // xmm0
  PVOID BackTrace[12]; // [rsp+20h] [rbp-88h] BYREF

  if ( !_InterlockedCompareExchange(&dword_140016D48, 1, 0) )
  {
    MilWerRegisterMemoryBlock(&g_StackCaptureFrames, 0x3800u);
    MilWerRegisterMemoryBlock((const void *)&g_nCurrentStackCaptureIndex, 4u);
  }
  do
  {
    v6 = g_nCurrentStackCaptureIndex;
    v7 = (unsigned __int8)(g_nCurrentStackCaptureIndex + 1);
  }
  while ( v6 != _InterlockedCompareExchange(&g_nCurrentStackCaptureIndex, v7, g_nCurrentStackCaptureIndex) );
  v8 = (char *)&g_StackCaptureFrames + 56 * v7;
  *(_DWORD *)v8 = a1;
  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)v8 + 2) = a2;
  *((_DWORD *)v8 + 1) = CurrentThreadId;
  QueryPerformanceCounter((LARGE_INTEGER *)v8 + 2);
  v10 = g_pFrameId;
  if ( g_pFrameId )
    v10 = (unsigned __int64 *)*g_pFrameId;
  *((_QWORD *)v8 + 6) = v10;
  *(_OWORD *)(v8 + 24) = 0LL;
  *((_QWORD *)v8 + 5) = 0LL;
  v11 = RtlCaptureStackBackTrace(1u, 0xBu, BackTrace, 0LL);
  v12 = BackTrace;
  v13 = &BackTrace[v11];
  if ( BackTrace != v13 )
  {
    do
    {
      if ( *v12 == a3 )
        break;
      ++v12;
    }
    while ( v12 != v13 );
  }
  v14 = 3LL;
  v15 = v13 - v12;
  if ( v15 > 3 || (v14 = v15) != 0 )
  {
    memcpy_0(v8 + 24, v12, 8 * v14);
  }
  else
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0e0);
    *(__m128i *)(v8 + 24) = si128;
    *((_QWORD *)v8 + 5) = si128.m128i_i64[0];
  }
}
