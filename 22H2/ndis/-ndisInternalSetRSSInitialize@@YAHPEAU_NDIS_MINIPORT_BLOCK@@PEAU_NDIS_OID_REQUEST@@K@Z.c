/*
 * XREFs of ?ndisInternalSetRSSInitialize@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@K@Z @ 0x1C0088898
 * Callers:
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089C38 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 * Callees:
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0118168 (-ndisMInvokeBlockingOidRequest@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 */

__int64 __fastcall ndisInternalSetRSSInitialize(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  _BYTE v5[248]; // [rsp+20h] [rbp-E0h] BYREF

  if ( (a1->Flags & 0x80u) == 0 )
    return 0LL;
  memset(v5, 0, sizeof(v5));
  *(_DWORD *)&v5[88] |= 8u;
  *(_QWORD *)&v5[40] = 0LL;
  *(_DWORD *)&v5[48] = 0;
  *(_QWORD *)&v5[104] = &ndisIntReqGeneric;
  *(_DWORD *)&v5[8] = a2->PortNumber;
  *(_DWORD *)&v5[244] = a2[1].RequestType;
  *(_DWORD *)&v5[236] = *(_DWORD *)(&a2->Reserved2 + 1);
  *(NDIS_OBJECT_HEADER *)&v5[240] = a2[1].Header;
  *(_DWORD *)v5 = 16253590;
  *(_DWORD *)&v5[32] = 66241;
  *(_DWORD *)&v5[4] = 1;
  return ndisMInvokeBlockingOidRequest(a1, (struct _NDIS_OID_REQUEST *)v5);
}
