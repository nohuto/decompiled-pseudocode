char __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rdi
  _QWORD *v5; // rbx
  int v6; // r8d
  int v7; // r9d
  PDEVICE_OBJECT v8; // rcx
  bool v9; // si
  int v10; // edx
  __int64 v11; // rcx
  int v13; // edx
  int v14; // r8d
  __m128i v15; // xmm6
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 y_low; // rcx
  int v19; // edi
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rbx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int16 v30; // [rsp+30h] [rbp-38h]

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  v5 = (_QWORD *)((char *)CurrentLogicalCursorThread + 424);
  if ( !(unsigned int)CheckWinstaAttributeAccess(16LL) && !(unsigned int)IsImmersiveAppRestricted(*v5) )
  {
    v8 = WPP_GLOBAL_Control;
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = 10;
LABEL_29:
    v30 = v10;
    LOBYTE(v10) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      v8->AttachedDevice,
      v10,
      v6,
      v7,
      2,
      20,
      v30,
      (__int64)&WPP_571f7f6e4b61309acaf3ef5a24d82078_Traceguids);
    return 0;
  }
  v11 = *((_QWORD *)CurrentLogicalCursorThread + 57);
  if ( v11 && v11 != grpdeskRitInput )
  {
    v8 = WPP_GLOBAL_Control;
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = 11;
    goto LABEL_29;
  }
  v9 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(
                        1,
                        CurrentLogicalCursorThread,
                        *(_QWORD *)(*v5 + 864LL),
                        *(_DWORD *)(*v5 + 12LL) & 0x80000000) )
  {
    EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 432LL), 1);
    v8 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v9 = 0;
    }
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v9 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v10 = 12;
    goto LABEL_29;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SaveCursorPosition(__PAIR64__(a2, a1));
    LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v13,
        v14,
        13,
        2,
        20,
        13,
        (__int64)&WPP_571f7f6e4b61309acaf3ef5a24d82078_Traceguids);
    }
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, 1, 0);
    v15 = *(__m128i *)(*gpDispInfo + 24LL);
    v16 = SGDGetUserSessionState((unsigned __int16)gptCursorAsync) + 14368;
    *(_DWORD *)(v16 + 24LL * *(unsigned int *)(SGDGetUserSessionState(v17) + 14364)) = (unsigned __int16)gptCursorAsync | ((unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v15, 8)) - _mm_cvtsi128_si32(v15) - 1) << 16);
    y_low = LOWORD(gptCursorAsync->y);
    v19 = y_low | ((unsigned __int16)(_mm_cvtsi128_si32(_mm_srli_si128(v15, 12))
                                    - _mm_cvtsi128_si32(_mm_srli_si128(v15, 4))
                                    - 1) << 16);
    v20 = SGDGetUserSessionState(y_low) + 14368;
    *(_DWORD *)(v20 + 24LL * *(unsigned int *)(SGDGetUserSessionState(v21) + 14364) + 4) = v19;
    v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v23 = SGDGetUserSessionState(0xFFFFF78000000004uLL) + 14368;
    v25 = *(unsigned int *)(SGDGetUserSessionState(v24) + 14364);
    *(_DWORD *)(v23 + 24 * v25 + 8) = v22;
    v26 = SGDGetUserSessionState(v25) + 14368;
    v28 = *(unsigned int *)(SGDGetUserSessionState(v27) + 14364);
    *(_QWORD *)(v26 + 24 * v28 + 16) = 0LL;
    LODWORD(v26) = ((unsigned __int8)*(_DWORD *)(SGDGetUserSessionState(v28) + 14364) + 1) & 0x3F;
    *(_DWORD *)(SGDGetUserSessionState(v29) + 14364) = v26;
  }
  return 1;
}
