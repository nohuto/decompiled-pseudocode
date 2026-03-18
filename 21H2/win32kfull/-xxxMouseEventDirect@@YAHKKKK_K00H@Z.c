/*
 * XREFs of ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C
 * Callers:
 *     xxxSendInput @ 0x1C007EDD4 (xxxSendInput.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?IsGpqForegroundAccessibleCurrent@@YAHH@Z @ 0x1C007FB78 (-IsGpqForegroundAccessibleCurrent@@YAHH@Z.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C007FBC0 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     _tlgKeywordOn @ 0x1C00CD6B0 (_tlgKeywordOn.c)
 *     CheckGrantedAccess @ 0x1C00F5C8C (CheckGrantedAccess.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x1C01D3D40 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

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
  int v8; // r12d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r8d
  char v16; // di
  __int64 v17; // r8
  unsigned __int64 v18; // r15
  int v19; // r8d
  LARGE_INTEGER PerformanceCounter; // r9
  int v21; // r10d
  int v22; // r9d
  unsigned int v23; // eax
  int v24; // r8d
  unsigned int v25; // edx
  __int64 v26; // rdx
  __int16 v27; // ax
  int v28; // r14d
  int v29; // ecx
  bool v30; // zf
  __int16 v31; // ax
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v34; // eax
  ULONG v36; // eax
  __int64 v37; // rdx
  int v38; // r8d
  int v39; // r9d
  PDEVICE_OBJECT v40; // rcx
  bool v41; // di
  int v42; // edx
  ULONG v43; // eax
  __int64 v44; // rdx
  int v45; // edx
  int v46; // r8d
  int v47; // r9d
  __int64 v48; // r9
  int v49; // edx
  int v50; // eax
  int v51; // ecx
  int v52; // ecx
  __m128i v53; // xmm6
  int v54; // ebx
  int v55; // eax
  int v56; // ebx
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // eax
  __m128i v60; // xmm6
  int v61; // eax
  int v62; // eax
  __int16 v63; // [rsp+38h] [rbp-91h]
  unsigned int v64; // [rsp+58h] [rbp-71h]
  unsigned int a; // [rsp+5Ch] [rbp-6Dh]
  __int64 v66; // [rsp+60h] [rbp-69h] BYREF
  _DWORD v67[2]; // [rsp+68h] [rbp-61h] BYREF
  LARGE_INTEGER v68; // [rsp+70h] [rbp-59h]
  __int64 v69; // [rsp+78h] [rbp-51h] BYREF
  __int64 v70; // [rsp+80h] [rbp-49h] BYREF
  _BYTE v71[16]; // [rsp+88h] [rbp-41h] BYREF
  __int16 v72; // [rsp+98h] [rbp-31h] BYREF
  __int16 v73; // [rsp+9Ah] [rbp-2Fh]
  int v74; // [rsp+9Ch] [rbp-2Dh]
  int v75; // [rsp+A0h] [rbp-29h]
  unsigned int v76; // [rsp+A4h] [rbp-25h]
  unsigned int v77; // [rsp+A8h] [rbp-21h]
  int v78; // [rsp+ACh] [rbp-1Dh]

  v8 = 0;
  v73 = 0;
  a = a1;
  v64 = a2;
  if ( *(_QWORD *)(gptiCurrent + 456LL) != grpdeskRitInput )
  {
    v36 = RtlNtStatusToDosError(-1073741790);
    UserSetLastError(v36, v37);
    v40 = WPP_GLOBAL_Control;
    v41 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
       && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
       && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v41 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v42 = 21;
    goto LABEL_68;
  }
  if ( (unsigned int)CheckGrantedAccess(*(unsigned int *)(gptiCurrent + 888LL), 32LL)
    || PsGetCurrentProcess(v14, v13) == gpepCSRSS )
  {
    if ( !gptiBlockInput || gptiBlockInput == gptiCurrent )
    {
      v16 = 1;
      if ( (unsigned int)IsGpqForegroundAccessibleCurrent(1u) )
      {
        v17 = a2;
        v18 = a5;
        EtwTraceBeginInjectMouse((unsigned int)a5, a1, v17);
        if ( a5 )
        {
          PerformanceCounter.QuadPart = a6;
        }
        else
        {
          v18 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
               * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
        }
        v68 = PerformanceCounter;
        if ( (unsigned int)dword_1C032BE20 > 4 && tlgKeywordOn((__int64)&dword_1C032BE20, 64LL) )
        {
          v70 = v48;
          v69 = (__int64)"SendInput";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
            (int)&dword_1C032BE20,
            (__int64)&v70,
            (__int64)&v69);
        }
        v21 = a4 & 0x40000;
        gppiInputProvider = *(_QWORD *)(gptiCurrent + 424LL);
        v22 = a4 & 0x10000;
        v23 = ((a4 & 0x40000) != 0) + 1;
        if ( (a4 & 0x10000) == 0 )
          v23 = (a4 & 0x40000) != 0;
        if ( v23 > 1 )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            v16 = 0;
          }
          if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v49 = 25;
            LOBYTE(v49) = v16;
            LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              v49,
              v19,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              20,
              25,
              (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
              a4);
          }
          return 0LL;
        }
        v24 = 0;
        v25 = a4 & 0x187E;
        if ( ((a4 & 0x800) != 0 || (a4 & 0x1000) != 0) && (a4 & 0x180) != 0 )
        {
          v25 = a4 & 0x7E;
        }
        else if ( (a4 & 0x1800) == 0x1800 )
        {
          v25 = a4 & 0x7E;
        }
        else if ( (a4 & 0x1800) != 0 )
        {
          v24 = 0x7FFF;
          v50 = -32768;
          if ( a3 >= -32768 )
            v50 = a3;
          if ( v50 < 0x7FFF )
          {
            v24 = -32768;
            if ( a3 >= -32768 )
              v24 = a3;
          }
        }
        else if ( (a3 & 0xFFFFFFFC) == 0 )
        {
          if ( (a4 & 0x80u) != 0 )
          {
            v51 = v25 | 0x80;
            if ( (a3 & 1) == 0 )
              v51 = a4 & 0x187E;
            v25 = v51;
            if ( (a3 & 2) != 0 )
              v25 = v51 | 0x200;
          }
          if ( (a4 & 0x100) != 0 )
          {
            v52 = v25 | 0x100;
            if ( (a3 & 1) == 0 )
              v52 = v25;
            v25 = v52;
            if ( (a3 & 2) != 0 )
              v25 = v52 | 0x400;
          }
        }
        v26 = v25 >> 1;
        v72 = -2;
        v27 = (a4 & 0x8000) != 0;
        v73 = v27;
        if ( (a4 & 0x4000) != 0 )
        {
          v27 |= 2u;
          v73 = v27;
        }
        if ( (a4 & 0x2000) != 0 )
        {
          v27 |= 8u;
          v73 = v27;
        }
        if ( (a4 & 0x20000) != 0 )
        {
          v27 |= 0x20u;
          v73 = v27;
        }
        v28 = 16;
        if ( v22 )
        {
          v27 |= 0x10u;
          v73 = v27;
        }
        v29 = 0;
        v30 = v21 == 0;
        if ( v21 )
        {
          v73 = v27 | 0x40;
          v30 = v21 == 0;
        }
        if ( v30 )
        {
          LOBYTE(v29) = v22 == 0;
          v8 = v29;
        }
        v74 = v26;
        v31 = WORD1(v26);
        v32 = 49153LL;
        if ( v24 )
          v31 = v24;
        HIWORD(v74) = v31;
        if ( (a4 & 0xC001) == 0xC001 && (W32GetCurrentThreadDpiAwarenessContext(49153LL, v26) & 0xF) != 2 )
        {
          v32 = gpDispInfo;
          if ( *(_DWORD *)*gpDispInfo > 1u )
          {
            v53 = *(__m128i *)GetScreenRect(v71);
            v54 = _mm_cvtsi128_si32(v53);
            v55 = v54 + EngMulDiv(a, _mm_cvtsi128_si32(_mm_srli_si128(v53, 8)) - v54, 0xFFFF);
            v56 = _mm_cvtsi128_si32(_mm_srli_si128(v53, 4));
            v67[0] = v55;
            v66 = 0LL;
            v67[1] = v56 + EngMulDiv(v64, _mm_cvtsi128_si32(_mm_srli_si128(v53, 12)) - v56, 0xFFFF);
            CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v58, v57);
            LogicalToPhysicalDPIPoint(&v66, v67, CurrentThreadDpiAwarenessContext, 0LL);
            v60 = *(__m128i *)(*gpDispInfo + 24LL);
            v61 = _mm_cvtsi128_si32(v60);
            a = EngMulDiv(v66 - v61, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v60, 8)) - v61);
            v62 = _mm_cvtsi128_si32(_mm_srli_si128(v60, 4));
            v64 = EngMulDiv(HIDWORD(v66) - v62, 0xFFFF, _mm_cvtsi128_si32(_mm_srli_si128(v60, 12)) - v62);
          }
        }
        v75 = 0;
        v76 = a;
        v77 = v64;
        v78 = a7;
        UserSessionSwitchLeaveCrit(v32);
        if ( (a4 & 1) != 0 )
        {
          if ( !v8 )
            v28 = 18;
        }
        else
        {
          v76 = 0;
          v28 = 24;
          v77 = 0;
          v73 &= ~1u;
        }
        if ( (unsigned __int8)Enforced(v33) && *(int *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) < 0 )
          v28 |= 0x40u;
        v34 = v28 | 0x100;
        if ( a8 )
          v34 = v28;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))SynthesizeMouseInput)(
          0LL,
          &v72,
          v18,
          (LARGE_INTEGER)v68.QuadPart,
          v34);
        if ( a8 )
          ProcessMouseEvent();
        EnterCrit(1LL, 0LL);
        if ( (gdwPUDFlags & 0x100) != 0 )
          ResetAccessibilityCountersOnMouseInput();
        EtwTraceEndInjectMouse((unsigned int)v18, a, v64);
      }
      else
      {
        MSGLUA_GPQFOREGROUND();
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || (LOBYTE(v45) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v45) = 0;
        }
        if ( (_BYTE)v45 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v46) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v45,
            v46,
            v47,
            2,
            20,
            24,
            (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
        }
      }
    }
    else
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v15,
          23,
          2,
          20,
          23,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
      }
    }
    return 1LL;
  }
  v43 = RtlNtStatusToDosError(-1073741790);
  UserSetLastError(v43, v44);
  v40 = WPP_GLOBAL_Control;
  v41 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
     && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
  LOBYTE(v38) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v41 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v42 = 22;
LABEL_68:
    v63 = v42;
    LOBYTE(v42) = v41;
    WPP_RECORDER_AND_TRACE_SF_(
      v40->AttachedDevice,
      v42,
      v38,
      v39,
      2,
      20,
      v63,
      (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids);
  }
  return 0LL;
}
