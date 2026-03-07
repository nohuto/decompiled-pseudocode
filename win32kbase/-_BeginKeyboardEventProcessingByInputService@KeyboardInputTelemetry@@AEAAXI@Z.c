void __fastcall KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        KeyboardInputTelemetry *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  int v5; // edi
  __int64 v7; // rax
  int v8; // ecx

  v4 = *((_DWORD *)this + 47);
  v5 = a2;
  if ( v4 != (_DWORD)a2 )
  {
    if ( v4 )
    {
      KeyboardInputTelemetry::_UploadTelemetryData(this, a2, a3, a4);
      *((_DWORD *)this + 2) = 0;
    }
    *((_DWORD *)this + 47) = v5;
    if ( gptiForeground )
    {
      v7 = *((_QWORD *)gptiForeground + 53);
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 56);
        if ( *((_DWORD *)this + 46) != v8 )
        {
          *((_DWORD *)this + 46) = v8;
          RtlStringCchCopyW(
            (unsigned __int16 *)this + 12,
            0x10uLL,
            (const unsigned __int16 *)(*((_QWORD *)gptiForeground + 53) + 976LL));
        }
      }
    }
  }
}
