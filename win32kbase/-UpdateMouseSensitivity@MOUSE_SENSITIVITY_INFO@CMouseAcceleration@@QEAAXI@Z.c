void __fastcall CMouseAcceleration::MOUSE_SENSITIVITY_INFO::UpdateMouseSensitivity(
        CMouseAcceleration::MOUSE_SENSITIVITY_INFO *this,
        unsigned int a2)
{
  unsigned int v4; // eax
  unsigned int v5; // ebx

  if ( a2 - 1 > 0x13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 519LL);
  *(_DWORD *)this = a2;
  if ( a2 <= 2 )
  {
    v5 = (8 * a2) & 0x7FFFFFF;
  }
  else
  {
    v4 = a2 << 8;
    if ( a2 > 0xA )
      v5 = (v4 - 1536) >> 2;
    else
      v5 = (v4 - 512) >> 3;
  }
  *((_DWORD *)this + 1) = v5;
}
