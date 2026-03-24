/*
 * XREFs of ?_ValidateMipiDsiPackets@DXGMONITOR@@AEAAJPEAU_DXGK_DSI_TRANSMISSION@@@Z @ 0x1C02FC588
 * Callers:
 *     ?_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z @ 0x1C02FBFF4 (-_DsiTransmission@DXGMONITOR@@AEAAJKPEAXK0PEA_K@Z.c)
 * Callees:
 *     ?_IsValidPacket@DXGMONITOR@@AEAAEPEAU_DXGK_DSI_PACKET@@EI@Z @ 0x1C02FC354 (-_IsValidPacket@DXGMONITOR@@AEAAEPEAU_DXGK_DSI_PACKET@@EI@Z.c)
 */

__int64 __fastcall DXGMONITOR::_ValidateMipiDsiPackets(DXGMONITOR *this, struct _DXGK_DSI_TRANSMISSION *a2)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  unsigned __int8 v5; // al
  __int64 v6; // rax
  __int64 v7; // rax
  unsigned __int8 v8; // si

  v2 = 0;
  if ( !a2 )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, 0LL);
    WdLogEvent5_WdAssertion(v4);
  }
  v5 = *((_BYTE *)a2 + 4);
  if ( !v5 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v6);
    v5 = *((_BYTE *)a2 + 4);
  }
  if ( v5 > 0x80u )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v7);
    v5 = *((_BYTE *)a2 + 4);
  }
  v8 = 0;
  if ( v5 )
  {
    while ( DXGMONITOR::_IsValidPacket(
              (DXGMONITOR *)(14LL * v8),
              (struct _DXGK_DSI_TRANSMISSION *)((char *)a2 + 14 * v8 + 16),
              v8 == v5 - 1,
              *((unsigned __int16 *)a2 + 5)) )
    {
      v5 = *((_BYTE *)a2 + 4);
      if ( ++v8 >= v5 )
        return v2;
    }
    *((_BYTE *)a2 + 5) = v8;
    *((_WORD *)a2 + 7) = 512;
    return (unsigned int)-1073741811;
  }
  return v2;
}
