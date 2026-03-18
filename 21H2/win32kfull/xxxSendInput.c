/*
 * XREFs of xxxSendInput @ 0x1C007EDD4
 * Callers:
 *     NtUserSendInput @ 0x1C007EAF0 (NtUserSendInput.c)
 *     ?xxxSend3FingerTapHotkey@@YAXXZ @ 0x1C0212260 (-xxxSend3FingerTapHotkey@@YAXXZ.c)
 *     ?xxxSend4FingerTapHotkey@@YAXXZ @ 0x1C02123C8 (-xxxSend4FingerTapHotkey@@YAXXZ.c)
 *     ?SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z @ 0x1C0256210 (-SendZoomHotkey@InteractiveControlDefaultScroller@@AEAAHF@Z.c)
 *     ?SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z @ 0x1C02562E8 (-SendZoomModifiers@InteractiveControlDefaultScroller@@CAXEH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0077CC4 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     xxxInternalKeyEventDirect @ 0x1C007F8CC (xxxInternalKeyEventDirect.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C009BC14 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     xxxSynchronizeDWMWindowChanges @ 0x1C00CC8DC (xxxSynchronizeDWMWindowChanges.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C010756C (xxxWaitForDITMouseInjectionFlush.c)
 */

__int64 __fastcall xxxSendInput(unsigned int a1, __int64 a2)
{
  int v3; // r14d
  BOOL v4; // r12d
  unsigned int v5; // esi
  unsigned __int16 v6; // bp
  unsigned int *v7; // rdi
  int v8; // ecx
  PDEVICE_OBJECT *v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  int v13; // ecx
  int v14; // r8d
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rax
  __int16 v18; // ax
  bool v19; // cf
  __int16 v20; // r9

  v3 = 0;
  v4 = glDitMouseHandling == 0;
  v5 = 0;
  v6 = *(_WORD *)(gptiCurrent + 632LL);
  if ( !a1 )
    return v5;
  v7 = (unsigned int *)(a2 + 24);
  do
  {
    v8 = *(v7 - 6);
    v9 = &WPP_GLOBAL_Control;
    v10 = 1281LL;
    v11 = 0x80000LL;
    if ( v8 )
    {
      v12 = (unsigned int)(v8 - 1);
      if ( (_DWORD)v12 )
      {
        if ( (_DWORD)v12 == 1 )
        {
          v12 = (unsigned __int64)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v11) = 0;
          }
          LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            WPP_RECORDER_AND_TRACE_SF_dd(
              WPP_GLOBAL_Control->AttachedDevice,
              v11,
              (_DWORD)v9,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              2,
              20,
              31,
              (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
              v5,
              v6 >= 0x501u);
            v10 = 1281LL;
          }
          if ( v6 >= 0x501u )
          {
            UserSetLastError(120LL, v11);
            return v5;
          }
        }
        goto LABEL_10;
      }
      v13 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( v3 )
        {
          v3 = 0;
          xxxWaitForDITMouseInjectionFlush(gpsi, 0x80000LL, &WPP_GLOBAL_Control, 1281LL);
        }
        v14 = *(v7 - 3);
        if ( (v14 & 4) != 0 && !*((_WORD *)v7 - 8) && (v14 & 0xFFFFFFF9) == 0 )
        {
          LOBYTE(v13) = -25;
          if ( !(unsigned int)xxxInternalKeyEventDirect(
                                v13,
                                *((unsigned __int16 *)v7 - 7),
                                v14,
                                *(v7 - 2),
                                *(_QWORD *)v7) )
          {
            v12 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
              || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
            {
              LOBYTE(v11) = 0;
            }
            LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = v6 < 0x501u;
              v20 = 29;
              goto LABEL_60;
            }
LABEL_61:
            if ( v6 >= 0x501u )
              return v5;
          }
LABEL_10:
          v7 += 10;
          goto LABEL_11;
        }
        LOBYTE(v13) = *((_BYTE *)v7 - 16);
        if ( (unsigned int)xxxInternalKeyEventDirect(v13, *((unsigned __int8 *)v7 - 14), v14, *(v7 - 2), *(_QWORD *)v7) )
          goto LABEL_10;
        v12 = (unsigned __int64)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v11) = 0;
        }
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v19 = v6 < 0x501u;
        v20 = 30;
LABEL_60:
        WPP_RECORDER_AND_TRACE_SF_dd(
          *(_QWORD *)(v12 + 24),
          v11,
          (_DWORD)v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          20,
          v20,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
          v5,
          !v19);
        goto LABEL_61;
      }
      v12 = (unsigned __int64)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 28;
LABEL_44:
        WPP_RECORDER_AND_TRACE_SF_D(
          *(_QWORD *)(v12 + 24),
          v11,
          (_DWORD)v9,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          2,
          20,
          v18,
          (__int64)&WPP_429574f4a2b73b4c193b07039e2ef3d9_Traceguids,
          v5);
      }
    }
    else
    {
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( (*(v7 - 1) & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges(gpsi, 0x80000LL, &WPP_GLOBAL_Control, 1281LL);
        v16 = UpconvertTime(*v7, v11, v9, v10);
        v17 = MilliSecsToQpcCount(v16);
        if ( !v4 )
          v3 = 1;
        if ( (unsigned int)xxxMouseEventDirect(
                             *(v7 - 4),
                             *(v7 - 3),
                             *(v7 - 2),
                             *(v7 - 1),
                             v16,
                             v17,
                             *((_QWORD *)v7 + 1),
                             v4) )
          goto LABEL_10;
        v12 = (unsigned __int64)WPP_GLOBAL_Control;
        LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( !(_BYTE)v11 && WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_61;
        v19 = v6 < 0x501u;
        v20 = 27;
        goto LABEL_60;
      }
      v12 = (unsigned __int64)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || (LOBYTE(v11) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v11) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 26;
        goto LABEL_44;
      }
    }
LABEL_11:
    ++v5;
  }
  while ( v5 < a1 );
  if ( v3 )
    xxxWaitForDITMouseInjectionFlush(v12, v11, v9, v10);
  return v5;
}
