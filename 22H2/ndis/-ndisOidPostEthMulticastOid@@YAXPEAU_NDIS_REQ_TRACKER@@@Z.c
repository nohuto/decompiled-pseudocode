/*
 * XREFs of ?ndisOidPostEthMulticastOid@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C003D610
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C003037C (-ndisPostOpenSetMulticastList@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@H@Z.c)
 *     ?ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00304A4 (-ndisIfGetRcvAddressFromMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0040840 (memmove.c)
 */

void __fastcall ndisOidPostEthMulticastOid(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rsi
  __int64 v3; // rdi
  struct _NDIS_OPEN_BLOCK *v4; // rbp
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rbx

  v1 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)a1;
  v4 = (struct _NDIS_OPEN_BLOCK *)*((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v1 + 4) == 1
    && (!v3 || !*(_DWORD *)(v3 + 464))
    && (!v4 || v4->MiniportHandle->MediaType == NdisMedium802_3) )
  {
    if ( v3 )
    {
      if ( *(_DWORD *)(v3 + 464) && *((_DWORD *)a1 + 10) )
      {
        v7 = *(_QWORD *)(v3 + 400);
        memmove(*(void **)(v7 + 376), *(const void **)(v7 + 392), (unsigned int)(6 * *(_DWORD *)(v7 + 400)));
        *(_DWORD *)(v7 + 384) = *(_DWORD *)(v7 + 400);
      }
      ndisIfGetRcvAddressFromMiniport((struct _NDIS_MINIPORT_BLOCK *)v3);
    }
    if ( v4 )
    {
      if ( v4->MiniportHandle->MediaType == NdisMedium802_3 )
      {
        v5 = *((_DWORD *)a1 + 10);
        if ( v5 != -1073741637 )
        {
          ndisPostOpenSetMulticastList(v4, (struct _NDIS_OID_REQUEST *)v1, v5);
          if ( *(_DWORD *)(v1 + 32) == 16843011 )
          {
            v6 = *(_DWORD *)(v1 + 144);
            *(_DWORD *)(v1 + 144) = 0;
            *(_DWORD *)(v1 + 32) = v6;
          }
        }
      }
    }
  }
}
