char __fastcall DxgMonitor::MonitorMipiDsiState::_IsValidPacket(
        DxgMonitor::MonitorMipiDsiState *this,
        const struct _DXGK_DSI_PACKET *a2,
        char a3,
        int a4)
{
  unsigned int v7; // ecx
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  char v13; // al
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx

  if ( !a2 )
    WdLogSingleEntry0(1LL);
  v7 = *(_BYTE *)a2 & 0x3F;
  if ( v7 > 0x14 )
  {
    v14 = v7 - 21;
    if ( !v14 )
      return 1;
    v15 = v14 - 14;
    if ( !v15 )
      return 1;
    v16 = v15 - 1;
    if ( !v16 )
      return a3;
    v17 = v16 - 5;
    if ( !v17 || v17 == 16 && *((unsigned __int16 *)a2 + 1) <= (unsigned int)(a4 + 8) )
      return a3;
  }
  else
  {
    if ( v7 == 20 )
      return a3;
    v8 = v7 - 3;
    if ( !v8 )
      return 1;
    v9 = v8 - 1;
    if ( !v9 )
      return a3;
    v10 = v9 - 1;
    if ( !v10 )
      return 1;
    v11 = v10 - 1;
    if ( v11 )
      return v11 == 13;
    v13 = *((_BYTE *)a2 + 2);
    if ( v13 != 46 && v13 != 62 )
      return a3;
  }
  return 0;
}
