/*
 * XREFs of ?ndisTopTcpConnectionOffloadStatus@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C008FA4C
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 */

unsigned __int8 __fastcall ndisTopTcpConnectionOffloadStatus(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_STATUS_INDICATION *a2)
{
  _NDIS_MINIPORT_OFFLOAD *Offload; // r9
  _BYTE *StatusBuffer; // rdx
  unsigned __int8 result; // al
  unsigned int StatusBufferSize; // r10d
  int StatusCode; // r8d
  size_t v8; // r8

  Offload = a1->Offload;
  StatusBuffer = a2->StatusBuffer;
  result = 0;
  StatusBufferSize = a2->StatusBufferSize;
  if ( Offload )
  {
    StatusCode = a2->StatusCode;
    if ( StatusCode == 1073872897 )
    {
      Offload->TopConnectionOffloadPaused = 1;
      return 1;
    }
    if ( StatusCode == 1073872899 )
    {
      v8 = 20LL;
      if ( StatusBufferSize >= 0x14 && *StatusBuffer == 0x80 && *((_WORD *)StatusBuffer + 1) >= 0x14u && StatusBuffer[1] )
      {
        Offload->TopConnectionOffloadPaused = 0;
        if ( *((_WORD *)StatusBuffer + 1) < 0x14u )
          v8 = *((unsigned __int16 *)StatusBuffer + 1);
        memmove(&a1->Offload->TopTcpConnectionOffloadCapabilities, StatusBuffer, v8);
        return 1;
      }
    }
  }
  return result;
}
