/*
 * XREFs of ?ndisCopyNBLInfoToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAU_NDIS_PACKET@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C00759EC
 * Callers:
 *     ?ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z @ 0x1C0075DD8 (-ndisXlateRecvNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@@Z.c)
 *     ?ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@Z @ 0x1C007636C (-ndisXlateSendCompleteNetBufferListToPacket@@YAXPEAU_NET_BUFFER_LIST@@PEAPEAU_NDIS_PACKET@@PEAH@.c)
 *     ?ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z @ 0x1C0076508 (-ndisXlateSendNetBufferListsToPacketArray@@YAEPEAU_NDIS_NBLS_TO_PKT_ARRAY@@E@Z.c)
 * Callees:
 *     ndisIPsecNblInfoToPktInfo @ 0x1C0075BB0 (ndisIPsecNblInfoToPktInfo.c)
 */

__int64 __fastcall ndisCopyNBLInfoToPacket(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 result; // rax

  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 40) = *(_QWORD *)(a1 + 144);
  if ( !a3 )
    *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 56) = *(_DWORD *)(a1 + 160) & 0xFFFFF;
  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 64) = *(_QWORD *)(a1 + 168);
  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 88) = *(_QWORD *)(a1 + 176);
  *(_WORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 90) = 0;
  *(_QWORD *)(*(unsigned __int16 *)(a2 + 42) + a2 + 104) = *(_QWORD *)(a1 + 184);
  if ( (a3 & 0xFFFFFFFD) == 0 )
  {
    v4 = a1 + 152;
    if ( *(_QWORD *)(a1 + 152) )
      return ndisIPsecNblInfoToPktInfo(v4, a3, a2 + 128, *(unsigned __int16 *)(a2 + 42) + a2 + 48);
  }
  result = *(unsigned __int16 *)(a2 + 42);
  *(_QWORD *)(result + a2 + 48) = 0LL;
  return result;
}
