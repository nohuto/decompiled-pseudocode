struct tagWND *__fastcall xxxSetFocus(struct tagWND *a1, PDEVICE_OBJECT a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 v5; // rdi
  __int64 v6; // r15
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  int v12; // ecx
  struct tagWND *v13; // rsi
  char v14; // cl
  PDEVICE_OBJECT **v15; // r12
  _DWORD *v16; // r13
  struct tagWND *v17; // r14
  PDEVICE_OBJECT v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  int v21; // ecx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  char v25; // dl
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int128 v29; // [rsp+50h] [rbp-48h] BYREF
  __int64 v30; // [rsp+60h] [rbp-38h]

  v3 = 0LL;
  v29 = 0LL;
  v5 = gptiCurrent;
  v30 = 0LL;
  v6 = gptiCurrent + 432LL;
  if ( a1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == *(_QWORD *)v6
      || CoreWindowProp::IsHostThreadOf(gptiCurrent, a1)
      || (unsigned int)CoreWindowProp::IsComponentThreadOf(gptiCurrent, a1) )
    {
      v13 = a1;
      do
      {
        v14 = *(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL);
        if ( (v14 & 0x20) != 0 || (v14 & 8) != 0 )
        {
          v12 = 87;
          goto LABEL_71;
        }
        if ( (v14 & 0xC0) != 0x40 )
          break;
        v13 = (struct tagWND *)*((_QWORD *)v13 + 13);
      }
      while ( v13 );
      *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v29;
      *((_QWORD *)&v29 + 1) = v13;
      if ( v13 )
        HMLockObject(v13);
      v15 = (PDEVICE_OBJECT **)(gptiCurrent + 464LL);
      v16 = (_DWORD *)(gptiCurrent + 680LL);
      v17 = *(struct tagWND **)(*(_QWORD *)v6 + 120LL);
      if ( a1 != v17 )
      {
        v18 = **v15;
        v19 = (unsigned int)(*v16 | LODWORD(v18->NextDevice));
        if ( ((*(_BYTE *)v16 | LOBYTE(v18->NextDevice)) & 0x40) != 0 )
        {
          v20 = 0LL;
          if ( v17 )
            v20 = *(_QWORD *)v17;
          if ( (unsigned int)xxxCallHook(9, *(_QWORD *)a1, v20, 5) )
          {
            v21 = 5;
LABEL_27:
            UserSetLastError(v21);
            ThreadUnlock1(v23, v22, v24);
            return 0LL;
          }
        }
        if ( v13 != *(struct tagWND **)(*(_QWORD *)v6 + 128LL) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(v19) = 0;
          }
          if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v19,
              a3,
              (unsigned int)&WPP_RECORDER_INITIALIZED,
              4,
              2,
              91,
              (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
          }
          if ( *(_QWORD *)v6 == gpqForeground )
          {
            v18 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
              || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
            {
              LOBYTE(v19) = 0;
            }
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              WPP_RECORDER_AND_TRACE_SF_(
                WPP_GLOBAL_Control->AttachedDevice,
                v19,
                a3,
                (unsigned int)&WPP_RECORDER_INITIALIZED,
                4,
                2,
                92,
                (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
            goto LABEL_55;
          }
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) == 0
            || (v25 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            v25 = 0;
          }
          if ( v25 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_AND_TRACE_SF_q(
              (__int64)WPP_GLOBAL_Control->AttachedDevice,
              v25,
              WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
              93LL,
              4u,
              2u,
              0x5Du,
              (__int64)&WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
              *(_QWORD *)v13);
          if ( anonymous_namespace_::FAllowForegroundActivate((__int64)v13) )
          {
            if ( (*(_BYTE *)(*((_QWORD *)v13 + 5) + 31LL) & 0x10) == 0 )
              *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 12LL) |= 0x100u;
            if ( !xxxForceForegroundWindowNoRestoreFocus((__int64)v13, 8LL, a3) )
            {
LABEL_57:
              v21 = 87;
              goto LABEL_27;
            }
          }
LABEL_55:
          if ( v13 != *(struct tagWND **)(*(_QWORD *)v6 + 128LL)
            && !(unsigned __int8)anonymous_namespace_::xxxLocalActivateWindow(v13) )
          {
            goto LABEL_57;
          }
        }
        v17 = *(struct tagWND **)(*(_QWORD *)v6 + 120LL);
        ThreadUnlock1(v18, v19, a3);
        *(_QWORD *)&v29 = *(_QWORD *)(gptiCurrent + 416LL);
        *(_QWORD *)(gptiCurrent + 416LL) = &v29;
        *((_QWORD *)&v29 + 1) = v17;
        if ( v17 )
          HMLockObject(v17);
        anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, a1);
      }
      v26 = *(_QWORD *)(*(_QWORD *)v6 + 120LL);
      if ( v26 )
        v5 = *(_QWORD *)(v26 + 16);
      v27 = *(_QWORD *)(v5 + 440);
      if ( v27 )
      {
        v28 = *(_QWORD *)(v27 + 40);
        if ( *(_QWORD *)(SGDGetUserSessionState(v26) + 13928) != v28 )
        {
          a2 = **v15;
          if ( ((*v16 | LODWORD(a2->NextDevice)) & 0x800) != 0 )
          {
            *(_QWORD *)(SGDGetUserSessionState(v26) + 13928) = v28;
            xxxCallHook(8, 0LL, v28, 10);
          }
        }
      }
      if ( v17 )
        v3 = *(_QWORD *)v17;
      ThreadUnlock1(v26, a2, a3);
      goto LABEL_9;
    }
    v12 = 5;
LABEL_71:
    UserSetLastError(v12);
  }
  else
  {
    if ( ((*(_BYTE *)(gptiCurrent + 680LL) | *(_BYTE *)(**(_QWORD **)(gptiCurrent + 464LL) + 16LL)) & 0x40) == 0 )
      goto LABEL_6;
    v7 = 0LL;
    v8 = *(__int64 **)(*(_QWORD *)v6 + 120LL);
    if ( v8 )
      v7 = *v8;
    if ( !(unsigned int)xxxCallHook(9, 0LL, v7, 5) )
    {
LABEL_6:
      v9 = *(__int64 **)(*(_QWORD *)v6 + 120LL);
      if ( v9 )
        v3 = *v9;
      anonymous_namespace_::xxxSendFocusMessages(gptiCurrent, 0LL);
LABEL_9:
      LOBYTE(v10) = 1;
      return (struct tagWND *)HMValidateHandleNoSecure(v3, v10);
    }
  }
  return 0LL;
}
