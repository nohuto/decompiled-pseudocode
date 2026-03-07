// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  ULONG v12; // eax
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  PDEVICE_OBJECT v16; // rcx
  bool v17; // di
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  ULONG v21; // eax
  PDEVICE_OBJECT v22; // rcx
  int v23; // r9d
  char v24; // di
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r15
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v29; // eax
  int v31; // r8d
  unsigned int v32; // edx
  int v33; // eax
  int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // edx
  __int16 v37; // ax
  __int16 v38; // ax
  __int64 v39; // rcx
  __m128i v40; // xmm6
  int v41; // ebx
  int v42; // eax
  int v43; // ebx
  __int64 v44; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v46; // xmm6
  int v47; // eax
  int v48; // eax
  __int64 v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int16 v52; // [rsp+38h] [rbp-81h]
  unsigned int v53; // [rsp+58h] [rbp-61h]
  unsigned int a; // [rsp+5Ch] [rbp-5Dh]
  __int64 v55; // [rsp+60h] [rbp-59h] BYREF
  _DWORD v56[2]; // [rsp+68h] [rbp-51h] BYREF
  LARGE_INTEGER v57; // [rsp+70h] [rbp-49h]
  __m128i v58; // [rsp+78h] [rbp-41h] BYREF
  __int16 v59; // [rsp+88h] [rbp-31h]
  __int16 v60; // [rsp+8Ah] [rbp-2Fh]
  unsigned int v61; // [rsp+8Ch] [rbp-2Dh]
  int v62; // [rsp+90h] [rbp-29h]
  unsigned __int64 v63; // [rsp+94h] [rbp-25h]
  int v64; // [rsp+9Ch] [rbp-1Dh]

  v60 = 0;
  a = a1;
  v53 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v12 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v12);
    v16 = WPP_GLOBAL_Control;
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v52 = 24;
LABEL_20:
    LOBYTE(v13) = v17;
    WPP_RECORDER_AND_TRACE_SF_(
      v16->AttachedDevice,
      v13,
      v14,
      v15,
      2,
      20,
      v52,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(_DWORD *)(gptiCurrent + 896LL), 0x20u)
    && PsGetCurrentProcess(v19, v18, v20) != gpepCSRSS )
  {
    v21 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v21);
    v16 = WPP_GLOBAL_Control;
    v17 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v17 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v13 = 25;
    v52 = 25;
    goto LABEL_20;
  }
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v23 = 26;
    goto LABEL_38;
  }
  v24 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
  {
    MSGLUA_GPQFOREGROUND(v25);
    v22 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(v18) = 0;
    }
    LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !(_BYTE)v18 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 1LL;
    v23 = 27;
LABEL_38:
    WPP_RECORDER_AND_TRACE_SF_(
      v22->AttachedDevice,
      v18,
      v20,
      v23,
      2,
      20,
      v23,
      (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids);
    return 1LL;
  }
  v26 = a2;
  LODWORD(v27) = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a1, v26);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v27 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v57 = PerformanceCounter;
  InputTraceLogging::Mouse::InjectInput();
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
  v29 = ((a4 & 0x40000) != 0) + 1;
  if ( (a4 & 0x10000) == 0 )
    v29 = (a4 & 0x40000) != 0;
  if ( v29 > 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v24 = 0;
    }
    if ( v24 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_D(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v24,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gFullLog,
        2u,
        0x14u,
        0x1Cu,
        (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
        a4);
    return 0LL;
  }
  v31 = 0;
  v32 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v32 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v32 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    v31 = 0x7FFF;
    v33 = -32768;
    if ( a3 >= -32768 )
      v33 = a3;
    if ( v33 < 0x7FFF )
    {
      v31 = -32768;
      if ( a3 >= -32768 )
        v31 = a3;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v34 = v32 | 0x80;
      if ( (a3 & 1) == 0 )
        v34 = a4 & 0x187E;
      v32 = v34;
      if ( (a3 & 2) != 0 )
        v32 = v34 | 0x200;
    }
    v35 = v32;
    if ( (a4 & 0x100) != 0 )
    {
      v32 |= 0x100u;
      if ( (a3 & 1) == 0 )
        v32 = v35;
      if ( (a3 & 2) != 0 )
        v32 |= 0x400u;
    }
  }
  v36 = v32 >> 1;
  v59 = -2;
  v37 = (a4 & 0x8000) != 0;
  v60 = v37;
  if ( (a4 & 0x4000) != 0 )
  {
    v37 |= 2u;
    v60 = v37;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v37 |= 8u;
    v60 = v37;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v37 |= 0x20u;
    v60 = v37;
  }
  if ( (a4 & 0x10000) != 0 )
  {
    v37 |= 0x10u;
    v60 = v37;
  }
  if ( (a4 & 0x40000) != 0 )
    v60 = v37 | 0x40;
  v61 = v36;
  v38 = HIWORD(v36);
  v39 = 49153LL;
  if ( v31 )
    v38 = v31;
  HIWORD(v61) = v38;
  if ( (a4 & 0xC001) == 0xC001 && (W32GetCurrentThreadDpiAwarenessContext(49153LL) & 0xF) != 2 )
  {
    v39 = gpDispInfo;
    if ( *(_DWORD *)*gpDispInfo > 1u )
    {
      v40 = *GetScreenRect(&v58);
      v41 = _mm_cvtsi128_si32(v40);
      v42 = v41 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v40, 8)) - v41, 0xFFFF);
      v43 = _mm_cvtsi128_si32(_mm_srli_si128(v40, 4));
      v56[0] = v42;
      v55 = 0LL;
      v56[1] = v43 + EngMulDiv(v53, _mm_cvtsi128_si32(_mm_srli_si128(v40, 12)) - v43, 0xFFFF);
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v44);
      LogicalToPhysicalDPIPoint(&v55, v56, CurrentThreadDpiAwarenessContext, 0LL);
      v46 = *(__m128i *)(*gpDispInfo + 24LL);
      v47 = _mm_cvtsi128_si32(v46);
      a = EngMulDiv(v55 - v47, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v46, 8)) - v47);
      v48 = _mm_cvtsi128_si32(_mm_srli_si128(v46, 4));
      v53 = EngMulDiv(HIDWORD(v55) - v48, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v46, 12)) - v48);
    }
  }
  v63 = __PAIR64__(v53, a);
  v64 = a7;
  v62 = 0;
  UserSessionSwitchLeaveCrit(v39);
  if ( (a4 & 1) == 0 )
  {
    v63 = 0LL;
    v60 &= ~1u;
  }
  Enforced(v49);
  SynthesizeMouseInput(0LL);
  if ( a8 )
    ProcessMouseEvent(v50);
  EnterCrit(1LL, 0LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput(v51);
  EtwTraceEndInjectMouse((unsigned int)v27, a, v53);
  return 1LL;
}
