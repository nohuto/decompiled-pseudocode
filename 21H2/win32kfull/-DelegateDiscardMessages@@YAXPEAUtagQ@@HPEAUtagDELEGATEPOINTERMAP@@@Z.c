/*
 * XREFs of ?DelegateDiscardMessages@@YAXPEAUtagQ@@HPEAUtagDELEGATEPOINTERMAP@@@Z @ 0x1C01E9DA0
 * Callers:
 *     _DelegateCapturePointers @ 0x1C01EAC24 (_DelegateCapturePointers.c)
 * Callees:
 *     DelQEntry @ 0x1C005BE3C (DelQEntry.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C0078850 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0079D94 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     IsPointerInputMessage @ 0x1C00AC3A0 (IsPointerInputMessage.c)
 *     ?GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z @ 0x1C01EA1CC (-GetPwndFromPointerMsgId@@YAPEAUtagWND@@_K@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_HL @ 0x1C01EA794 (WPP_RECORDER_AND_TRACE_SF_HL.c)
 *     WPP_RECORDER_AND_TRACE_SF_L @ 0x1C01EA870 (WPP_RECORDER_AND_TRACE_SF_L.c)
 *     WPP_RECORDER_AND_TRACE_SF_LqLL @ 0x1C01EAB0C (WPP_RECORDER_AND_TRACE_SF_LqLL.c)
 */

void __fastcall DelegateDiscardMessages(struct tagQ *a1, int a2, struct tagDELEGATEPOINTERMAP *a3, int a4)
{
  struct tagDELEGATEPOINTERMAP *v4; // r14
  int v5; // esi
  char v7; // di
  __int64 v8; // rbx
  struct tagWND *v9; // rsi
  int v10; // eax
  PDEVICE_OBJECT v11; // rcx
  __int16 v12; // ax
  int v13; // r12d
  int v14; // ecx
  unsigned __int64 v15; // rbp
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  int v19; // edx
  int v20; // r8d
  bool v21; // bl
  char FrameIdFromPointerMsgId; // al
  int v23; // r8d
  int v24; // edx
  int v25; // [rsp+20h] [rbp-68h]
  int v26; // [rsp+28h] [rbp-60h]
  int v27; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+38h] [rbp-50h]
  __int64 v29; // [rsp+90h] [rbp+8h]

  v4 = a3;
  v5 = a2;
  if ( !*((_DWORD *)a1 + 10) )
    return;
  v7 = 1;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && _bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_HL(WPP_GLOBAL_Control->AttachedDevice, a2, (_DWORD)a3, a4);
  }
  v8 = *((_QWORD *)a1 + 3);
  if ( v5 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = 0LL;
    if ( !v8 )
      goto LABEL_19;
    do
    {
      if ( (*(_DWORD *)(v8 + 100) & 0x40) != 0 )
      {
        v10 = *(_DWORD *)(v8 + 24);
        if ( (v10 == 582 || v10 == 585)
          && *(_WORD *)(v8 + 32) == *(_WORD *)v4
          && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v8 + 40)) == *((_DWORD *)v4 + 1) )
        {
          break;
        }
      }
      v8 = *(_QWORD *)v8;
    }
    while ( v8 );
    if ( !v8 )
    {
LABEL_19:
      v11 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || !_bittest((const signed __int32 *)&WPP_GLOBAL_Control->Timer + 1, 0x12u)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
      {
        v7 = 0;
      }
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v12 = 13;
LABEL_78:
        LOBYTE(a2) = v7;
        WPP_RECORDER_AND_TRACE_SF_(
          v11->AttachedDevice,
          a2,
          (_DWORD)a3,
          a4,
          4,
          19,
          v12,
          (__int64)&WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids);
      }
      return;
    }
  }
  v13 = 0;
  if ( v8 )
  {
    while ( !v13 )
    {
      v29 = *(_QWORD *)v8;
      if ( IsPointerInputMessage(*(_DWORD *)(v8 + 24)) && (*(_DWORD *)(v8 + 100) & 0x40) != 0 )
      {
        v15 = *(_QWORD *)(v8 + 40);
        if ( *(_WORD *)(v8 + 32) == *(_WORD *)v4 )
        {
          if ( v14 == 582
            && CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, *(_QWORD *)(v8 + 40)) != *((_DWORD *)v4 + 1) )
          {
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v7 = 0;
            }
            v21 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              FrameIdFromPointerMsgId = CTouchProcessor::GetFrameIdFromPointerMsgId(gpTouchProcessor, v15);
              LOBYTE(v23) = v21;
              LOBYTE(v24) = v7;
              WPP_RECORDER_AND_TRACE_SF_L(
                WPP_GLOBAL_Control->AttachedDevice,
                v24,
                v23,
                WPP_MAIN_CB.Queue.ListEntry.Flink,
                v25,
                v26,
                v27,
                v28,
                FrameIdFromPointerMsgId);
            }
            return;
          }
          if ( *(_DWORD *)(v8 + 24) == 581 && (*(_BYTE *)(v8 + 34) & 4) == 0 )
          {
            v11 = WPP_GLOBAL_Control;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v7 = 0;
            }
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v12 = 15;
              goto LABEL_78;
            }
            return;
          }
          if ( *((_DWORD *)v4 + 25) == 2 )
            v9 = (struct tagWND *)*((_QWORD *)v4 + 11);
          if ( GetPwndFromPointerMsgId(v15) == v9 )
          {
            v18 = *(_DWORD *)(v8 + 24);
            if ( v18 == 583 )
              v13 = 1;
            if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
              || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
              || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
            {
              v9 = 0LL;
              LOBYTE(v16) = 0;
            }
            else
            {
              LOBYTE(v16) = 1;
              v9 = 0LL;
            }
            if ( (_BYTE)v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LOBYTE(v17) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
              WPP_RECORDER_AND_TRACE_SF_LqLL(
                WPP_GLOBAL_Control->AttachedDevice,
                v16,
                v17,
                v18,
                v25,
                v26,
                v27,
                v28,
                v18,
                *(_QWORD *)(v8 + 16),
                *(_DWORD *)(v8 + 32),
                *(_DWORD *)(v8 + 40));
            }
            DelQEntry((__int64)a1 + 24, v8, 1);
            if ( *((_QWORD *)a1 + 10) == v8 )
            {
              if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20000) == 0
                || (LOBYTE(v19) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
              {
                LOBYTE(v19) = 0;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                || (LOBYTE(v20) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
              {
                LOBYTE(v20) = 0;
              }
              if ( (_BYTE)v19 || (_BYTE)v20 )
                WPP_RECORDER_AND_TRACE_SF_qq(
                  WPP_GLOBAL_Control->AttachedDevice,
                  v19,
                  v20,
                  WPP_MAIN_CB.Queue.ListEntry.Flink,
                  5,
                  18,
                  17,
                  (__int64)&WPP_94b4deb4f8103cc2d3486d23bf68d8c9_Traceguids,
                  (char)a1);
              *((_QWORD *)a1 + 10) = 0LL;
            }
          }
          else
          {
            v9 = 0LL;
          }
        }
      }
      v8 = v29;
      if ( !v29 )
        return;
    }
  }
}
