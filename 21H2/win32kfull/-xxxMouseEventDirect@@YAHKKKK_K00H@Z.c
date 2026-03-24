/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC
 * Callers:
 *     xxxSendInput @ 0x1C00C0268 (xxxSendInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004DA78 (WPP_RECORDER_SF_.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C005BA00 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C00D5ADC (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C0103B20 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     CheckGrantedAccess @ 0x1C0103D34 (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C0122CA4 (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C0165D70 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D85AC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     WPP_RECORDER_SF_D @ 0x1C01D9B90 (WPP_RECORDER_SF_D.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall xxxMouseEventDirect(
        unsigned int a,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        int a8)
{
  int v8; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ecx
  unsigned __int64 v17; // r14
  LARGE_INTEGER PerformanceCounter; // rdx
  int v19; // r10d
  BOOL v20; // ecx
  int v21; // r9d
  unsigned int v22; // eax
  int v23; // r8d
  unsigned int v24; // edx
  unsigned int v25; // edx
  __int16 v26; // ax
  int v27; // esi
  int v28; // ecx
  __int16 v29; // ax
  __int64 v30; // rcx
  INT v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  ULONG v35; // eax
  __int64 v36; // rdx
  __int64 v37; // r8
  int v38; // edx
  int v39; // ecx
  int v40; // r9d
  ULONG v41; // eax
  __int64 v42; // rdx
  __int64 v43; // r8
  int v44; // r9d
  int v45; // ecx
  int v46; // ecx
  __m128i v47; // xmm6
  int v48; // ebx
  int v49; // eax
  int v50; // ebx
  __int64 v51; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v53; // xmm6
  int v54; // eax
  int v55; // eax
  unsigned int aa; // [rsp+38h] [rbp-71h]
  __int64 v57; // [rsp+40h] [rbp-69h] BYREF
  _DWORD v58[2]; // [rsp+48h] [rbp-61h] BYREF
  LARGE_INTEGER v59; // [rsp+50h] [rbp-59h]
  __int64 v60; // [rsp+58h] [rbp-51h] BYREF
  __int64 QuadPart; // [rsp+60h] [rbp-49h] BYREF
  char v62[16]; // [rsp+68h] [rbp-41h] BYREF
  __int16 v63; // [rsp+78h] [rbp-31h] BYREF
  __int16 v64; // [rsp+7Ah] [rbp-2Fh]
  unsigned int v65; // [rsp+7Ch] [rbp-2Dh]
  int v66; // [rsp+80h] [rbp-29h]
  unsigned __int64 v67; // [rsp+84h] [rbp-25h]
  int v68; // [rsp+8Ch] [rbp-1Dh]

  v8 = 0;
  v64 = 0;
  aa = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v35 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v35, v36, v37);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 21;
LABEL_57:
      LOBYTE(v38) = 2;
      WPP_RECORDER_SF_(v39, v38, 20, v40, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
    }
    return 0LL;
  }
  if ( !(unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 888LL), 32LL)
    && PsGetCurrentProcess(v14, v13, v15) != gpepCSRSS )
  {
    v41 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v41, v42, v43);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v40 = 22;
      goto LABEL_57;
    }
    return 0LL;
  }
  v16 = gptiBlockInput;
  if ( gptiBlockInput && gptiBlockInput != gptiCurrent )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = 23;
LABEL_63:
      LOBYTE(v13) = 2;
      WPP_RECORDER_SF_(v16, v13, 20, v44, (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids);
      return 1LL;
    }
    return 1LL;
  }
  if ( !(unsigned int)IsGpqForegroundAccessibleCurrent(1) )
  {
    MSGLUA_GPQFOREGROUND();
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v44 = 24;
      goto LABEL_63;
    }
    return 1LL;
  }
  v17 = a5;
  EtwTraceBeginInjectMouse((unsigned int)a5, a, a2);
  if ( a5 )
  {
    PerformanceCounter.QuadPart = a6;
  }
  else
  {
    v17 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  }
  v59 = PerformanceCounter;
  if ( (unsigned int)dword_1C0330B20 > 4 && (qword_1C0330B30 & 0x40) != 0 && (qword_1C0330B38 & 0x40) == qword_1C0330B38 )
  {
    QuadPart = PerformanceCounter.QuadPart;
    v60 = (__int64)"SendInput";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
      (int)&dword_1C0330B20,
      (__int64)&QuadPart,
      (__int64)&v60);
  }
  v19 = a4 & 0x40000;
  gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
  v20 = (a4 & 0x40000) != 0;
  v21 = a4 & 0x10000;
  v22 = v20 + 1;
  if ( (a4 & 0x10000) == 0 )
    v22 = (a4 & 0x40000) != 0;
  if ( v22 > 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(PerformanceCounter.LowPart) = 2;
      WPP_RECORDER_SF_D(
        v20,
        PerformanceCounter.LowPart,
        20,
        25,
        (__int64)&WPP_630c8375e76c3e1e29d982db09ca2999_Traceguids,
        a4);
    }
    return 0LL;
  }
  v23 = 0;
  v24 = a4 & 0x187E;
  if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
  {
    v24 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) == 0x1800 )
  {
    v24 = a4 & 0x7E;
  }
  else if ( (a4 & 0x1800) != 0 )
  {
    if ( a3 > 32766 )
    {
      v23 = 0x7FFF;
    }
    else
    {
      v23 = a3;
      if ( a3 < -32768 )
        v23 = -32768;
    }
  }
  else if ( (a3 & 0xFFFFFFFC) == 0 )
  {
    if ( (a4 & 0x80u) != 0 )
    {
      v45 = v24 | 0x80;
      if ( (a3 & 1) == 0 )
        v45 = a4 & 0x187E;
      v24 = v45;
      if ( (a3 & 2) != 0 )
        v24 = v45 | 0x200;
    }
    if ( (a4 & 0x100) != 0 )
    {
      v46 = v24 | 0x100;
      if ( (a3 & 1) == 0 )
        v46 = v24;
      v24 = v46;
      if ( (a3 & 2) != 0 )
        v24 = v46 | 0x400;
    }
  }
  v25 = v24 >> 1;
  v63 = -2;
  v26 = (a4 & 0x8000) != 0;
  v64 = v26;
  if ( (a4 & 0x4000) != 0 )
  {
    v26 |= 2u;
    v64 = v26;
  }
  if ( (a4 & 0x2000) != 0 )
  {
    v26 |= 8u;
    v64 = v26;
  }
  if ( (a4 & 0x20000) != 0 )
  {
    v26 |= 0x20u;
    v64 = v26;
  }
  v27 = 16;
  if ( v21 )
  {
    v26 |= 0x10u;
    v64 = v26;
  }
  v28 = 0;
  if ( v19 )
    v64 = v26 | 0x40;
  v65 = v25;
  v29 = HIWORD(v25);
  if ( !v19 )
  {
    LOBYTE(v28) = v21 == 0;
    v8 = v28;
  }
  v30 = 49153LL;
  if ( v23 )
    v29 = v23;
  HIWORD(v65) = v29;
  if ( (a4 & 0xC001) != 0xC001
    || (W32GetCurrentThreadDpiAwarenessContext(49153LL) & 0xF) == 2
    || (v30 = gpDispInfo, *(_DWORD *)*gpDispInfo <= 1u) )
  {
    v31 = aa;
  }
  else
  {
    v47 = *(__m128i *)GetScreenRect(v62);
    v48 = _mm_cvtsi128_si32(v47);
    v49 = v48 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v47, 8)) - v48, 0xFFFF);
    v50 = _mm_cvtsi128_si32(_mm_srli_si128(v47, 4));
    v58[0] = v49;
    v57 = 0LL;
    v58[1] = v50 + EngMulDiv(aa, _mm_cvtsi128_si32(_mm_srli_si128(v47, 12)) - v50, 0xFFFF);
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v51);
    LogicalToPhysicalDPIPoint(&v57, v58, CurrentThreadDpiAwarenessContext, 0LL);
    v53 = *(__m128i *)(*gpDispInfo + 24LL);
    v54 = _mm_cvtsi128_si32(v53);
    a = EngMulDiv(v57 - v54, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v53, 8)) - v54);
    v55 = _mm_cvtsi128_si32(_mm_srli_si128(v53, 4));
    v31 = EngMulDiv(HIDWORD(v57) - v55, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v53, 12)) - v55);
    aa = v31;
  }
  v68 = a7;
  v66 = 0;
  v67 = __PAIR64__(v31, a);
  if ( gdwInAtomicOperation )
  {
    v30 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v30);
  if ( (a4 & 1) != 0 )
  {
    if ( !v8 )
      v27 = 18;
  }
  else
  {
    v67 = 0LL;
    v64 &= ~1u;
    v27 = 24;
  }
  if ( (unsigned __int8)Enforced(v32) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) < 0 )
    v27 |= 0x40u;
  v33 = v27 | 0x100;
  if ( a8 )
    v33 = v27;
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))SynthesizeMouseInput)(
    0LL,
    &v63,
    v17,
    (LARGE_INTEGER)v59.QuadPart,
    v33,
    0LL);
  if ( a8 )
    ProcessMouseEvent();
  EnterCrit(0LL, 1LL);
  if ( (gdwPUDFlags & 0x100) != 0 )
    ResetAccessibilityCountersOnMouseInput();
  EtwTraceEndInjectMouse((unsigned int)v17, a, aa);
  return 1LL;
}
