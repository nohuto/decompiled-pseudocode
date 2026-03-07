void __fastcall PalmTelemetry::_DiscardOldTouchPackets(PalmTelemetry *this, int a2)
{
  int v2; // ebx
  unsigned int v5; // r8d
  __int64 v6; // r9

  v2 = 0;
  if ( *(_DWORD *)this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 161);
  v5 = *((_DWORD *)this + 3);
  if ( v5 )
  {
    while ( 1 )
    {
      v6 = (*((_DWORD *)this + 6) - v2 + v5 - 1) % 0x1AA;
      if ( (unsigned int)(a2 - *((_DWORD *)this + 6 * v6 + 525)) > 0x1F4 )
        break;
      if ( ++v2 >= v5 )
        return;
    }
    *((_DWORD *)this + 3) = v2;
    *((_DWORD *)this + 6) = ((int)v6 + 1) % 0x1AAu;
  }
}
