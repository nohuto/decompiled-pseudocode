/*
 * XREFs of ndisRssPmObjectHeaderFixup @ 0x1C0023BEC
 * Callers:
 *     ?ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z @ 0x1C0023B58 (-ndisMSetRssCapabilities@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RECEIVE_SCALE_CAPABILITIES@@@Z.c)
 *     ndisMSetPowerManagementCapabilities @ 0x1C003D6C8 (ndisMSetPowerManagementCapabilities.c)
 * Callees:
 *     WPP_RECORDER_SF_qsDDs @ 0x1C0073714 (WPP_RECORDER_SF_qsDDs.c)
 */

char __fastcall ndisRssPmObjectHeaderFixup(__int64 a1, __int64 a2, char a3, char a4, unsigned __int16 a5)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a2 != a3 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 115);
    *(_BYTE *)a2 = a3;
    result = 1;
  }
  if ( *(_BYTE *)(a2 + 1) != a4 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 116);
    *(_BYTE *)(a2 + 1) = a4;
    result = 1;
  }
  if ( *(_WORD *)(a2 + 2) < a5 )
  {
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qsDDs(*((_QWORD *)WPP_GLOBAL_Control + 8), a2, a3, 117);
    *(_WORD *)(a2 + 2) = a5;
    return 1;
  }
  return result;
}
