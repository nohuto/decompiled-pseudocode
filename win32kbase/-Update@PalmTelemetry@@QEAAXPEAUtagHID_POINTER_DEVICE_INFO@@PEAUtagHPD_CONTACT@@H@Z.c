void __fastcall PalmTelemetry::Update(
        PalmTelemetry *this,
        struct tagHID_POINTER_DEVICE_INFO *a2,
        struct tagHPD_CONTACT *a3,
        int a4)
{
  int v4; // eax
  unsigned __int64 v9; // rdi
  int v10; // ecx

  v4 = *((_DWORD *)a2 + 90);
  if ( (v4 & 8) == 0 && (v4 & 0x2000) == 0 )
  {
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( *(_DWORD *)this == 2 && (unsigned int)(v9 - *((_DWORD *)this + 5)) > 0xFA )
    {
      if ( !*((_DWORD *)this + 1) )
        PalmTelemetry::_Report(this, v9);
      PalmTelemetry::_ResetTelemetryData(this);
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    v10 = *((_DWORD *)a2 + 6);
    if ( (unsigned int)(v10 - 5) > 1 )
    {
      if ( (unsigned int)(v10 - 1) <= 3 )
        PalmTelemetry::_ProcessTouchPacket(this, a2, a3, v9, a4);
    }
    else
    {
      PalmTelemetry::_ProcessPenPacket(this, a2, a3, v9);
    }
  }
}
