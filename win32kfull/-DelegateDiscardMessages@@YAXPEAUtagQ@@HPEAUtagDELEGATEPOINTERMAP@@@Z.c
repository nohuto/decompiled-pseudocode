void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3, int a4)
{
  struct tagDELEGATEPOINTERMAP *v4; // r14
  int v5; // esi
  PDEVICE_OBJECT v7; // rcx
  char v8; // di
  __int64 v9; // rbx
  struct tagWND *v10; // rsi
  int v11; // eax
  __int64 v12; // rax
  PDEVICE_OBJECT v13; // rcx
  __int16 v14; // ax
  int v15; // r12d
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  int v19; // edx
  int v20; // r8d
  int v21; // eax
  int v22; // r9d
  char v23; // dl
  char v24; // r8
  bool v25; // bl
  __int64 v26; // rax
  char FrameIdFromPointerMsgId; // al
  int v28; // r8d
  int v29; // edx
  int v30; // [rsp+20h] [rbp-78h]
  int v31; // [rsp+28h] [rbp-70h]
  int v32; // [rsp+30h] [rbp-68h]
  int v33; // [rsp+38h] [rbp-60h]
  __int64 v34; // [rsp+B8h] [rbp+20h]

  v4 = a3;
  v5 = a2;
  if ( *((_DWORD *)a1 + 10) )
  {
    v7 = WPP_GLOBAL_Control;
    v8 = 1;
    LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
              && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_HL(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, a4);
    }
    v9 = *((_QWORD *)a1 + 3);
    if ( v5 )
    {
      v10 = 0LL;
LABEL_29:
      v15 = 0;
      if ( v9 )
      {
        while ( !v15 )
        {
          v34 = *(_QWORD *)v9;
          if ( IsPointerInputMessage(*(_DWORD *)(v9 + 24)) && (*(_DWORD *)(v9 + 100) & 0x40) != 0 )
          {
            v17 = *(_QWORD *)(v9 + 40);
            if ( *(_WORD *)(v9 + 32) == *(_WORD *)v4 )
            {
              if ( (_DWORD)v16 == 582 )
              {
                v18 = SGDGetUserSessionState(v16);
                if ( CTouchProcessor::GetFrameIdFromPointerMsgId(*(CTouchProcessor **)(v18 + 3424), v17) != *((_DWORD *)v4 + 1) )
                {
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
                    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                  {
                    v8 = 0;
                  }
                  v25 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    v26 = SGDGetUserSessionState(WPP_GLOBAL_Control);
                    FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(
                                                *(CTouchProcessor **)(v26 + 3424),
                                                v17);
                    LOBYTE(v28) = v25;
                    LOBYTE(v29) = v8;
                    WPP_RECORDER_AND_TRACE_SF_L(
                      WPP_GLOBAL_Control->AttachedDevice,
                      v29,
                      v28,
                      (_DWORD)gFullLog,
                      v30,
                      v31,
                      v32,
                      v33,
                      FrameIdFromPointerMsgId);
                  }
                  return;
                }
                a2 = 2;
              }
              if ( *(_DWORD *)(v9 + 24) == 581 && (*(_BYTE *)(v9 + 34) & 4) == 0 )
              {
                v13 = WPP_GLOBAL_Control;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
                  || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
                {
                  v8 = 0;
                }
                LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  v14 = 15;
                  goto LABEL_85;
                }
                return;
              }
              if ( *((_DWORD *)v4 + 25) == a2 )
                v10 = (struct tagWND *)*((_QWORD *)v4 + 11);
              if ( GetPwndFromPointerMsgId(v17) == v10 )
              {
                v10 = 0LL;
                if ( !gbIgnoreStressedOutStuff )
                {
                  v21 = *(_DWORD *)(v9 + 24);
                  if ( v21 != 583 && v21 != 586 && (*(_BYTE *)(v9 + 34) & 4) == 0 )
                    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 1240);
                }
                v22 = *(_DWORD *)(v9 + 24);
                if ( v22 == 583 )
                  v15 = 1;
                if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
                  || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
                {
                  LOBYTE(v19) = 0;
                }
                if ( (_BYTE)v19 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                {
                  LOBYTE(v20) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
                  WPP_RECORDER_AND_TRACE_SF_LqLL(
                    WPP_GLOBAL_Control->AttachedDevice,
                    v19,
                    v20,
                    v22,
                    v30,
                    v31,
                    v32,
                    v33,
                    v22,
                    *(_QWORD *)(v9 + 16),
                    *(_DWORD *)(v9 + 32),
                    *(_DWORD *)(v9 + 40));
                }
                DelQEntry((__int64)a1 + 24, v9, 1);
                if ( *((_QWORD *)a1 + 11) == v9 )
                {
                  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                    || (v23 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
                  {
                    v23 = 0;
                  }
                  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                    || (v24 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
                  {
                    v24 = 0;
                  }
                  if ( v23 || v24 )
                    WPP_RECORDER_AND_TRACE_SF_qq(
                      (__int64)WPP_GLOBAL_Control->AttachedDevice,
                      v23,
                      v24,
                      (__int64)gFullLog,
                      5u,
                      0x12u,
                      0x11u,
                      (__int64)&WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids);
                  *((_QWORD *)a1 + 11) = 0LL;
                }
              }
              else
              {
                v10 = 0LL;
              }
            }
          }
          v9 = v34;
          if ( !v34 )
            return;
        }
      }
    }
    else
    {
      v10 = 0LL;
      while ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 100) & 0x40) != 0 )
        {
          v11 = *(_DWORD *)(v9 + 24);
          if ( (v11 == 582 || v11 == 585) && *(_WORD *)(v9 + 32) == *(_WORD *)v4 )
          {
            v12 = SGDGetUserSessionState(v7);
            if ( CTouchProcessor::GetFrameIdFromPointerMsgId(*(CTouchProcessor **)(v12 + 3424), *(_QWORD *)(v9 + 40)) == *((_DWORD *)v4 + 1) )
              goto LABEL_29;
          }
        }
        v9 = *(_QWORD *)v9;
      }
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v8 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 13;
LABEL_85:
        LOBYTE(a2) = v8;
        WPP_RECORDER_AND_TRACE_SF_(
          v13->AttachedDevice,
          a2,
          (_DWORD)a3,
          a4,
          4,
          19,
          v14,
          (__int64)&WPP_ac6b3b87b43738d947ed688996d08d73_Traceguids);
      }
    }
  }
}
