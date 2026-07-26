/*
 * XREFs of ndisIPsecPktInfoToNBLInfo @ 0x1C0075C0C
 * Callers:
 *     ?ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z @ 0x1C0075AA8 (-ndisCopyPacketInfoToNBL@@YAXPEAU_NDIS_PACKET@@PEAU_NET_BUFFER_LIST@@W4_NDIS_XLATE_TYPE@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisIPsecPktInfoToNBLInfo(__int64 *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  __int16 v5; // cx

  if ( a1 )
  {
    if ( !a2 )
    {
      result = *a1;
      *(_QWORD *)a3 = *a1;
    }
    if ( a2 == 2 )
    {
      *(_WORD *)a3 ^= (*(_WORD *)a3 ^ *(_WORD *)a1) & 1;
      v5 = *(_WORD *)a3 ^ (*(_WORD *)a3 ^ (2 * (*(_DWORD *)a1 >> 1))) & 2;
      *(_WORD *)a3 = v5;
      *(_WORD *)a3 = v5 ^ ((unsigned __int8)v5 ^ *(_DWORD *)a1 & 0xFC) & 4;
      result = *((unsigned __int16 *)a1 + 2);
      *(_WORD *)(a3 + 2) = result;
    }
  }
  return result;
}
