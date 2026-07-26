/*
 * XREFs of ?ndisParseReceivedNBL@@YAEW4_NDIS_MEDIUM@@PEBU_NET_BUFFER_LIST@@PEAGPEAE@Z @ 0x1C0013E9C
 * Callers:
 *     ?ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@@@Z @ 0x1C0075354 (-ndisNblVerifyRxIndication@@YAXPEBU_NET_BUFFER_LIST@@KKKPEBU_NDIS_OBJECT_HEADER@@W4_NDIS_MEDIUM@.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall ndisParseReceivedNBL(
        enum _NDIS_MEDIUM a1,
        const struct _NET_BUFFER_LIST *a2,
        unsigned __int16 *a3,
        unsigned __int8 *a4)
{
  unsigned __int8 v4; // bl
  unsigned __int8 v7; // di
  unsigned __int16 v8; // ax
  _NET_BUFFER *FirstNetBuffer; // rax
  _MDL *CurrentMdl; // rcx
  unsigned int ByteCount; // ebp
  __int64 CurrentMdlOffset; // r14
  unsigned int v13; // esi
  char *MappedSystemVa; // rdx
  char *v15; // rdx
  unsigned __int8 result; // al
  unsigned __int16 v17; // [rsp+20h] [rbp-38h]
  unsigned __int16 v18; // [rsp+60h] [rbp+8h]

  v4 = 0;
  v7 = 1;
  if ( a1 )
  {
    v8 = (unsigned __int16)a2->NetBufferListInfo[7];
LABEL_23:
    *a3 = v8;
    v4 = 1;
    goto LABEL_24;
  }
  FirstNetBuffer = a2->FirstNetBuffer;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  ByteCount = CurrentMdl->ByteCount;
  if ( ByteCount < 0xE )
    goto LABEL_4;
  CurrentMdlOffset = FirstNetBuffer->CurrentMdlOffset;
  if ( ByteCount <= (unsigned int)CurrentMdlOffset )
    goto LABEL_4;
  v13 = ByteCount - CurrentMdlOffset;
  if ( ByteCount - (unsigned int)CurrentMdlOffset < 0xE )
    goto LABEL_4;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  else
    MappedSystemVa = (char *)MmMapLockedPages(CurrentMdl, 0);
  v15 = &MappedSystemVa[CurrentMdlOffset];
  LOBYTE(v17) = v15[13];
  HIBYTE(v18) = v17;
  HIBYTE(v17) = v15[12];
  LOBYTE(v18) = HIBYTE(v17);
  if ( v17 > 0x600u )
  {
    if ( v17 != 0x8100 )
    {
LABEL_15:
      v8 = v18;
      goto LABEL_23;
    }
    if ( ByteCount >= 0x12 && v13 >= 0x12 )
    {
      v18 = *((_WORD *)v15 + 8);
      goto LABEL_15;
    }
LABEL_4:
    v7 = 0;
LABEL_24:
    result = v7;
    goto LABEL_25;
  }
  if ( !ndisSnapHeaderCheckPresent || v13 >= 0x16 )
  {
    if ( v15[14] != -86 || v15[15] != -86 || v15[16] != 3 )
      goto LABEL_24;
    v8 = *((_WORD *)v15 + 10);
    goto LABEL_23;
  }
  result = 0;
LABEL_25:
  *a4 = v4;
  return result;
}
