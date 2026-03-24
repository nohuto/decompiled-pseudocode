/*
 * XREFs of ?_IsValidPacket@DXGMONITOR@@AEAAEPEAU_DXGK_DSI_PACKET@@EI@Z @ 0x1C02FC354
 * Callers:
 *     ?_ValidateMipiDsiPackets@DXGMONITOR@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C02FC588 (-_ValidateMipiDsiPackets@DXGMONITOR@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::_IsValidPacket(DXGMONITOR *this, struct _DXGK_DSI_PACKET *a2, char a3, int a4)
{
  __int64 v7; // rax
  unsigned int v8; // ecx
  unsigned int v9; // ecx
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  char v14; // al
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v7);
  }
  v8 = *(_BYTE *)a2 & 0x3F;
  if ( v8 > 0x14 )
  {
    v15 = v8 - 21;
    if ( !v15 )
      return 1;
    v16 = v15 - 14;
    if ( !v16 )
      return 1;
    v17 = v16 - 1;
    if ( !v17 )
      return a3;
    v18 = v17 - 5;
    if ( !v18 || v18 == 16 && *((unsigned __int16 *)a2 + 1) <= (unsigned int)(a4 + 8) )
      return a3;
  }
  else
  {
    if ( v8 == 20 )
      return a3;
    v9 = v8 - 3;
    if ( !v9 )
      return 1;
    v10 = v9 - 1;
    if ( !v10 )
      return a3;
    v11 = v10 - 1;
    if ( !v11 )
      return 1;
    v12 = v11 - 1;
    if ( v12 )
      return v12 == 13;
    v14 = *((_BYTE *)a2 + 2);
    if ( v14 != 46 && v14 != 62 )
      return a3;
  }
  return 0;
}
