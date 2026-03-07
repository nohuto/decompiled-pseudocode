__int64 __fastcall xxxSendInput(__int64 a1, __int64 a2)
{
  unsigned int v3; // r15d
  int v4; // r14d
  unsigned __int16 v5; // bp
  unsigned int v6; // esi
  int v7; // r12d
  unsigned int *v8; // rdi
  __int64 v9; // rdx
  int v10; // ecx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rcx
  int v14; // ecx
  int v15; // r8d
  int v16; // edx
  __int16 v18; // ax
  bool v19; // cf
  __int16 v20; // r9
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // rax

  v3 = a1;
  v4 = 0;
  v5 = *(_WORD *)(gptiCurrent + 632LL);
  v6 = 0;
  v7 = *(_DWORD *)(SGDGetUserSessionState(a1) + 15976);
  if ( !v3 )
    return v6;
  v8 = (unsigned int *)(a2 + 24);
  v9 = 1LL;
  do
  {
    v10 = *(v8 - 6);
    v11 = 1281LL;
    v12 = 0x80000LL;
    if ( v10 )
    {
      v13 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v13 )
      {
        if ( (_DWORD)v13 != 1 )
          goto LABEL_11;
        v13 = (unsigned __int64)WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
          || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        {
          LOBYTE(v9) = 0;
        }
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          WPP_RECORDER_AND_TRACE_SF_dd(
            WPP_GLOBAL_Control->AttachedDevice,
            v9,
            v12,
            (_DWORD)gFullLog,
            2,
            20,
            34,
            (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
            v6,
            v5 >= 0x501u);
          v11 = 1281LL;
        }
        if ( v5 >= 0x501u )
        {
          UserSetLastError(120LL);
          return v6;
        }
        goto LABEL_10;
      }
      v14 = gpsi;
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( v4 )
        {
          v4 = 0;
          xxxWaitForDITMouseInjectionFlush(gpsi, 1LL, 0x80000LL, 1281LL);
        }
        v15 = *(v8 - 3);
        if ( (v15 & 4) == 0 || *((_WORD *)v8 - 8) || (v15 & 0xFFFFFFF9) != 0 )
        {
          LOBYTE(v14) = *((_BYTE *)v8 - 16);
          if ( !(unsigned __int8)xxxInternalKeyEventDirect(
                                   v14,
                                   *((unsigned __int8 *)v8 - 14),
                                   v15,
                                   *(v8 - 2),
                                   *(_QWORD *)v8) )
          {
            v13 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              LOBYTE(v16) = 0;
            }
            else
            {
              v16 = 1;
            }
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = v5 < 0x501u;
              v20 = 33;
              goto LABEL_76;
            }
LABEL_77:
            if ( v5 >= 0x501u )
              return v6;
          }
        }
        else
        {
          LOBYTE(v14) = -25;
          if ( !(unsigned __int8)xxxInternalKeyEventDirect(
                                   v14,
                                   *((unsigned __int16 *)v8 - 7),
                                   v15,
                                   *(v8 - 2),
                                   *(_QWORD *)v8) )
          {
            v13 = (unsigned __int64)WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
            {
              LOBYTE(v16) = 0;
            }
            else
            {
              v16 = 1;
            }
            LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v19 = v5 < 0x501u;
              v20 = 32;
LABEL_76:
              WPP_RECORDER_AND_TRACE_SF_dd(
                *(_QWORD *)(v13 + 24),
                v16,
                v12,
                (_DWORD)gFullLog,
                2,
                20,
                v20,
                (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
                v6,
                !v19);
              goto LABEL_77;
            }
            goto LABEL_77;
          }
        }
LABEL_10:
        v9 = 1LL;
LABEL_11:
        v8 += 10;
        goto LABEL_12;
      }
      v13 = (unsigned __int64)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 31;
LABEL_34:
        WPP_RECORDER_AND_TRACE_SF_d(
          *(_QWORD *)(v13 + 24),
          v9,
          v12,
          (_DWORD)gFullLog,
          2,
          20,
          v18,
          (__int64)&WPP_5e0e61e7905a3063bcd0150bb6aacb62_Traceguids,
          v6);
      }
    }
    else
    {
      if ( (*gpsi & 0x2000) == 0 )
      {
        if ( (*(v8 - 1) & 0xAA) != 0 )
          xxxSynchronizeDWMWindowChanges(gpsi, 1LL, 0x80000LL, 1281LL);
        v21 = UpconvertTime(*v8, v9, v12, v11);
        v22 = MilliSecsToQpcCount(v21);
        if ( v7 )
          v4 = 1;
        if ( !(unsigned int)xxxMouseEventDirect(
                              *(v8 - 4),
                              *(v8 - 3),
                              *(v8 - 2),
                              *(v8 - 1),
                              v21,
                              v22,
                              *((_QWORD *)v8 + 1),
                              v7 == 0) )
        {
          v13 = (unsigned __int64)WPP_GLOBAL_Control;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
            || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          {
            LOBYTE(v16) = 0;
          }
          else
          {
            v16 = 1;
          }
          LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v19 = v5 < 0x501u;
            v20 = 30;
            goto LABEL_76;
          }
          goto LABEL_77;
        }
        goto LABEL_10;
      }
      v13 = (unsigned __int64)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x80000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        LOBYTE(v9) = 0;
      }
      LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v18 = 29;
        goto LABEL_34;
      }
    }
    v9 = 1LL;
LABEL_12:
    ++v6;
  }
  while ( v6 < v3 );
  if ( v4 )
    xxxWaitForDITMouseInjectionFlush(v13, 1LL, v12, v11);
  return v6;
}
