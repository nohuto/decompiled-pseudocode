/*
 * XREFs of ?zzzSetCursorPos@@YA_NHH@Z @ 0x1C009BDD0
 * Callers:
 *     NtUserSetCursorPos @ 0x1C009BCC0 (NtUserSetCursorPos.c)
 * Callees:
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0023CB0 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ?zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z @ 0x1C009BF80 (-zzzInternalSetCursorPos@@YAXHHKW4_SetCursorPosReason@@@Z.c)
 *     CheckWinstaAttributeAccess @ 0x1C009EAE0 (CheckWinstaAttributeAccess.c)
 *     ?IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z @ 0x1C00F5CE8 (-IsGpqForegroundAccessibleExplicit@@YAHHPEAUtagTHREADINFO@@UtagUIPI_INFO@@H@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
char __fastcall zzzSetCursorPos(unsigned int a1, unsigned int a2)
{
  struct tagTHREADINFO *CurrentLogicalCursorThread; // rdi
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rcx
  bool v8; // bl
  __int64 v9; // r9
  __m128i v10; // xmm0
  PDEVICE_OBJECT v12; // rcx
  int v13; // edx
  int v14; // edx
  int v15; // r8d
  __int16 v16; // [rsp+30h] [rbp-18h]

  CurrentLogicalCursorThread = _GetCurrentLogicalCursorThread();
  if ( !(unsigned int)CheckWinstaAttributeAccess(0x10u)
    && !(unsigned int)IsImmersiveAppRestricted(*((_QWORD *)CurrentLogicalCursorThread + 53)) )
  {
    v12 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = 10;
LABEL_32:
    v16 = v13;
    LOBYTE(v13) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      v12->AttachedDevice,
      v13,
      v5,
      v6,
      2,
      20,
      v16,
      (__int64)&WPP_58c419ce52093655f2aed2f228788a11_Traceguids);
    return 0;
  }
  v7 = *((_QWORD *)CurrentLogicalCursorThread + 57);
  if ( v7 && v7 != grpdeskRitInput )
  {
    v12 = WPP_GLOBAL_Control;
    v8 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = 11;
    goto LABEL_32;
  }
  v8 = 1;
  if ( !(unsigned int)IsGpqForegroundAccessibleExplicit(
                        1LL,
                        CurrentLogicalCursorThread,
                        *(_QWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 880LL),
                        *(_DWORD *)(*((_QWORD *)CurrentLogicalCursorThread + 53) + 12LL) & 0x80000000) )
  {
    EtwTraceUIPIInputError(CurrentLogicalCursorThread, 0LL, gpqForeground, *(_QWORD *)(gpqForeground + 424LL), 1);
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
      || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
    {
      v8 = 0;
    }
    LOBYTE(v5) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( !v8 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0;
    v13 = 12;
    goto LABEL_32;
  }
  if ( (unsigned __int8)IsSpatialDelegationEnabledForThread(gptiCurrent) )
  {
    SaveCursorPosition(__PAIR64__(a2, a1));
    LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        13,
        2,
        20,
        13,
        (__int64)&WPP_58c419ce52093655f2aed2f228788a11_Traceguids);
    }
  }
  else
  {
    zzzInternalSetCursorPos(a1, a2, 1LL);
    v9 = *(_QWORD *)(*gpDispInfo + 24LL);
    v10 = _mm_srli_si128(*(__m128i *)(*gpDispInfo + 24LL), 8);
    *((_DWORD *)&gaptMouse + 6 * gptInd) = (unsigned __int16)gptCursorAsync | ((unsigned __int16)(v10.m128i_i16[0]
                                                                                                - v9
                                                                                                - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 1) = LOWORD(gptCursorAsync->y) | ((v10.m128i_i32[1] - HIDWORD(v9) - 1) << 16);
    *((_DWORD *)&gaptMouse + 6 * gptInd + 2) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    *((_QWORD *)&gaptMouse + 3 * gptInd + 2) = 0LL;
    gptInd = (gptInd + 1) & 0x3F;
  }
  return 1;
}
