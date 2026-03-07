void __fastcall KeyboardInputTelemetry::EndKeyboardEventProcessingByInputService(
        struct tagQMSG *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  char v4; // bl
  __int64 v6; // rax
  struct tagTHREADINFO *v7; // rcx
  KeyboardInputTelemetry *v8; // rsi
  unsigned int ThreadId; // eax
  unsigned __int64 v10; // rcx
  bool v11; // bl
  unsigned int KeyboardInputLatency; // eax

  v4 = a2;
  v6 = SGDGetUserSessionState(a1, a2, a3, a4);
  v7 = (struct tagTHREADINFO *)*((_QWORD *)a1 + 13);
  v8 = (KeyboardInputTelemetry *)(v6 + 14168);
  if ( v4 )
  {
    KeyboardInputTelemetry::LogHanging(v7, *((_QWORD *)a1 + 16));
  }
  else
  {
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v7);
    v10 = *((_QWORD *)a1 + 17);
    if ( v10 )
    {
      if ( *((_DWORD *)v8 + 47) == ThreadId )
      {
        v11 = ((*((_DWORD *)a1 + 6) - 257) & 0xFFFFFFFB) == 0;
        KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(v10);
        KeyboardInputTelemetry::_UpdateTelemetryBuffer(v8, v11, KeyboardInputLatency);
      }
    }
  }
}
