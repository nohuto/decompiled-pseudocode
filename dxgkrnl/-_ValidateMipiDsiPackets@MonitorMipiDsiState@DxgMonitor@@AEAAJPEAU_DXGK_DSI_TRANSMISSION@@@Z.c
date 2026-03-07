__int64 __fastcall DxgMonitor::MonitorMipiDsiState::_ValidateMipiDsiPackets(
        DxgMonitor::MonitorMipiDsiState *this,
        struct _DXGK_DSI_TRANSMISSION *a2)
{
  unsigned int v2; // edi
  unsigned __int8 v4; // al
  unsigned __int8 v5; // si

  v2 = 0;
  if ( !a2 )
    WdLogSingleEntry0(1LL);
  if ( !*((_BYTE *)a2 + 4) )
    WdLogSingleEntry0(1LL);
  if ( *((_BYTE *)a2 + 4) > 0x80u )
    WdLogSingleEntry0(1LL);
  v4 = *((_BYTE *)a2 + 4);
  v5 = 0;
  if ( v4 )
  {
    while ( DxgMonitor::MonitorMipiDsiState::_IsValidPacket(
              (DxgMonitor::MonitorMipiDsiState *)(14LL * v5),
              (struct _DXGK_DSI_TRANSMISSION *)((char *)a2 + 14 * v5 + 16),
              v5 == v4 - 1,
              *((unsigned __int16 *)a2 + 5)) )
    {
      v4 = *((_BYTE *)a2 + 4);
      if ( ++v5 >= v4 )
        return v2;
    }
    *((_BYTE *)a2 + 5) = v5;
    *((_WORD *)a2 + 7) = 512;
    return (unsigned int)-1073741811;
  }
  return v2;
}
