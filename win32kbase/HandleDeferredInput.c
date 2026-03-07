int __fastcall HandleDeferredInput(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  int v5; // r12d
  int v6; // r15d
  __int64 v7; // rdi
  bool v8; // r13
  __int64 **v9; // r14
  __int64 *v10; // rbx
  char v11; // bp
  int v12; // eax
  int v13; // edx
  __int64 v14; // r8
  __int64 *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rbx
  unsigned int v18; // edx
  unsigned int v19; // r8d
  unsigned int v20; // ecx
  __int64 v21; // r8
  int v22; // ecx

  v4 = *(_QWORD *)(a1 + 432);
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v8 = (_DWORD)a2 == 4;
  v9 = (__int64 **)(v4 + 24);
LABEL_2:
  v10 = *v9;
  v11 = 0;
  while ( v10 )
  {
    a2 = v10[13];
    if ( a2 == v7 && (unsigned int)(*((_DWORD *)v10 + 6) - 256) <= 9 )
    {
      a1 = *((unsigned int *)v10 + 25);
      if ( (a1 & 0x2000) != 0 || (a1 & 0x4000) != 0 || (*(_DWORD *)(a2 + 1272) & 0x1000000) != 0 && (a1 & 0x8000) == 0 )
      {
        if ( (*(_DWORD *)(v7 + 1272) & 0x1000000) != 0 && v5 != *((_DWORD *)v10 + 39) )
          v11 = 1;
        if ( v6 == 6 && !v11 && (a1 & 0x40000) == 0 )
        {
          LODWORD(v16) = UpdateKeyStateForMessage(v7, v10);
          *((_DWORD *)v10 + 25) |= 0x40000u;
          return v16;
        }
        KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService((struct tagQMSG *)v10, v8);
        if ( (*(_DWORD *)(v7 + 1272) & 0x1000000) == 0 && (*((_DWORD *)v10 + 25) & 0x2000) != 0 )
          *(_DWORD *)(v10[13] + 1272) &= ~0x20000000u;
        v12 = *((_DWORD *)v10 + 25);
        if ( (v12 & 0x2000) != 0 || (v12 & 0x4000) != 0 || (v12 & 0x10000) != 0 )
        {
          *((_DWORD *)v10 + 25) = v12 & 0xFFFE9FFF;
          ++*(_DWORD *)(v4 + 40);
        }
        *((_DWORD *)v10 + 25) |= 0x8000u;
        InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v10);
        LOBYTE(v13) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_AND_TRACE_SF_qiqdd(
            WPP_GLOBAL_Control->AttachedDevice,
            v13,
            v14,
            WPP_MAIN_CB.Queue.ListEntry.Flink);
        if ( v6 != 2 && !v11 )
        {
          v21 = *((unsigned int *)v10 + 6);
          v22 = 0;
          if ( v6 == 5 )
            v22 = 0x4000000;
          *((_DWORD *)v10 + 25) = *((_DWORD *)v10 + 25) & 0xFBFFFFFF | v22 | 0x20000;
          ApiSetEditionWakeSomeone(v4, v7, v21, v10);
          break;
        }
        if ( v10 == *(__int64 **)(v4 + 88) )
        {
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
            || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
          {
            LOBYTE(v13) = 0;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            || (LOBYTE(v14) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
          {
            LOBYTE(v14) = 0;
          }
          if ( (_BYTE)v13 || (_BYTE)v14 )
            WPP_RECORDER_AND_TRACE_SF_qq(
              WPP_GLOBAL_Control->AttachedDevice,
              v13,
              v14,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              5,
              19,
              12,
              (__int64)&WPP_aef0a7bf8a44334c2a28ebbc89ecd77c_Traceguids,
              v4,
              *(_QWORD *)(v4 + 88));
          *(_QWORD *)(v4 + 88) = 0LL;
        }
        if ( (*((_DWORD *)v10 + 25) & 0x40000) == 0 )
          UpdateKeyStateForMessage(v7, v10);
        ApiSetEditionDelQEntry(v4 + 24, v10, v14);
        if ( v11 )
          goto LABEL_2;
        break;
      }
    }
    v10 = (__int64 *)*v10;
  }
  v15 = *v9;
  LOBYTE(a1) = 1;
  if ( *v9 )
  {
    while ( 1 )
    {
      a2 = *((unsigned int *)v15 + 25);
      LODWORD(v16) = -__CFSHR__(*((_DWORD *)v15 + 25), 15);
      if ( __CFSHR__(*((_DWORD *)v15 + 25), 15) && v6 != 4 && v15[13] == v7 )
        break;
      if ( (a2 & 0x10000) != 0 || __CFSHR__(*((_DWORD *)v15 + 25), 15) )
      {
        v16 = v15[13];
        if ( v16 == v7 || *((_DWORD *)v15 + 24) == 4 )
        {
          *(_DWORD *)(v16 + 1272) &= ~0x20000000u;
          *((_DWORD *)v15 + 25) &= 0xFFFE9FFF;
          ++*(_DWORD *)(v4 + 40);
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
            || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
          {
            LOBYTE(a2) = 0;
          }
          if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qiqdd(
              WPP_GLOBAL_Control->AttachedDevice,
              a2,
              a3,
              WPP_MAIN_CB.Queue.ListEntry.Flink);
          }
          *((_DWORD *)v15 + 25) |= 0x20000u;
          InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v15);
          LODWORD(v16) = ApiSetEditionWakeSomeone(v4, v7, *((unsigned int *)v15 + 6), v15);
          LOBYTE(a1) = 0;
        }
      }
      v15 = (__int64 *)*v15;
      if ( !v15 )
      {
        if ( !(_BYTE)a1 )
          return v16;
        goto LABEL_28;
      }
    }
  }
  else
  {
LABEL_28:
    v16 = SGDGetUserSessionState(a1, a2, a3, a4);
    v17 = v16 + 14168;
    if ( *(_DWORD *)(v16 + 14176) )
    {
      LODWORD(v16) = KeyboardInputTelemetry::GetKeyboardInputLatency(*(_QWORD *)v17);
      v18 = *(_DWORD *)(v17 + 12);
      v19 = v18 + *(_DWORD *)(v17 + 8);
      if ( v19 >= v18 )
      {
        v20 = *(_DWORD *)(v17 + 20);
        LODWORD(v16) = v20 + v16;
        if ( (unsigned int)v16 >= v20 )
        {
          ++*(_DWORD *)(v17 + 16);
          *(_DWORD *)(v17 + 20) = v16;
          *(_DWORD *)(v17 + 12) = v19;
        }
      }
      *(_DWORD *)(v17 + 8) = 0;
    }
  }
  return v16;
}
