/*
 * XREFs of ?ndisMHandleNDKPnPEvents@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012163C
 * Callers:
 *     ?ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z @ 0x1C012C8C4 (-ndisPnPNotifyAllTransports@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_PNP_EVENT_NOTIFICATION@@@Z.c)
 * Callees:
 *     ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000896C (-ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisMHandleNDKPnPEvents(struct _NDIS_MINIPORT_BLOCK *a1, struct _NET_PNP_EVENT_NOTIFICATION *a2)
{
  struct _NDIS_NDK_BLOCK *NDKBlock; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned int v5; // r8d
  __int64 v6; // r10
  struct _NDIS_NDK_BLOCK *v7; // r9
  unsigned int v8; // ebx
  char v9; // r11
  __int64 v10; // rax

  NDKBlock = ndisGetNDKBlock(a1);
  v5 = 0;
  v6 = *(_QWORD *)(v3 + 16);
  v7 = NDKBlock;
  v8 = *(_DWORD *)(v3 + 24);
  v9 = 0;
  if ( !NDKBlock )
    return (unsigned int)-1073741808;
  if ( *(_BYTE *)(v4 + 32) > 6u || *(_BYTE *)(v4 + 32) == 6 && *(_BYTE *)(v4 + 33) >= 0x32u )
  {
    v9 = 1;
    if ( (*(_BYTE *)(v3 + 1) >= 2u || (*(_DWORD *)(v3 + 160) & 4) != 0)
      && (*(_DWORD *)(v3 + 160) & 2) != 0
      && *(_DWORD *)(v3 + 168) )
    {
      return v5;
    }
  }
  else if ( v6 || v8 )
  {
    return (unsigned int)-1073741808;
  }
  if ( *(_DWORD *)(v3 + 8) != 13 )
  {
    if ( !v9 || !v6 && !v8 )
    {
      if ( *((_BYTE *)NDKBlock + 24) )
      {
        *((_BYTE *)NDKBlock + 24) = 0;
        return v5;
      }
      return (unsigned int)-1073741436;
    }
    return (unsigned int)-1073741808;
  }
  if ( v9 && (!v6 || v8 < 0x38) )
    return (unsigned int)-1073741808;
  if ( *((_BYTE *)NDKBlock + 24) )
    return (unsigned int)-1073741436;
  *((_BYTE *)NDKBlock + 24) = 1;
  if ( v9 )
  {
    *((_OWORD *)NDKBlock + 2) = *(_OWORD *)v6;
    *((_OWORD *)NDKBlock + 3) = *(_OWORD *)(v6 + 16);
    *((_OWORD *)NDKBlock + 4) = *(_OWORD *)(v6 + 32);
    *((_QWORD *)NDKBlock + 10) = (char *)NDKBlock + 88;
    v10 = *(_QWORD *)(v6 + 48);
    *(_OWORD *)((char *)v7 + 88) = *(_OWORD *)v10;
    *(_OWORD *)((char *)v7 + 104) = *(_OWORD *)(v10 + 16);
    *(_OWORD *)((char *)v7 + 120) = *(_OWORD *)(v10 + 32);
    *(_OWORD *)((char *)v7 + 136) = *(_OWORD *)(v10 + 48);
    *(_OWORD *)((char *)v7 + 152) = *(_OWORD *)(v10 + 64);
    *(_OWORD *)((char *)v7 + 168) = *(_OWORD *)(v10 + 80);
    *((_QWORD *)v7 + 23) = *(_QWORD *)(v10 + 96);
  }
  return v5;
}
