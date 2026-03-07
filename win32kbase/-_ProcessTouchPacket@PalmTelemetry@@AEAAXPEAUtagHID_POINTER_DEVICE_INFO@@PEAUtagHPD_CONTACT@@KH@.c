void __fastcall PalmTelemetry::_ProcessTouchPacket(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        unsigned int a4,
        int a5)
{
  int v8; // eax

  if ( *(_DWORD *)this == 2 && *((_DWORD *)this + 5) + 250 < a4 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 289);
  if ( !*((_DWORD *)this + 1) )
  {
    v8 = *((_DWORD *)a3 + 611) & 4;
    if ( a5 )
    {
      if ( !v8 )
        return;
    }
    else if ( v8 )
    {
      return;
    }
    PalmTelemetry::_TryBuffer(this, a3, *((unsigned int *)a2 + 6));
  }
}
