/*
 * XREFs of ?ndisOidSendToMiniportDirect@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C070
 * Callers:
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 * Callees:
 *     ?ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQUEST@@EPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C000AF54 (-ndisQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_CO_VC_PTR_BLOCK@@PEAU_NDIS_OID_REQ.c)
 *     WPP_RECORDER_SF_Dq @ 0x1C003D574 (WPP_RECORDER_SF_Dq.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

char __fastcall ndisOidSendToMiniportDirect(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_OID_REQUEST *a2)
{
  char v4; // bl
  int v5; // edx
  int v6; // r8d
  NDIS_OID Oid; // ecx
  _DWORD v9[4]; // [rsp+40h] [rbp-C0h] BYREF
  struct _NDIS_OID_REQUEST v10; // [rsp+50h] [rbp-B0h] BYREF

  v4 = 0;
  memset(&v10.Header.Revision, 0, 0xF7uLL);
  Oid = a2->DATA.QUERY_INFORMATION.Oid;
  v9[0] = 0;
  if ( Oid < 0x10106 )
    goto LABEL_5;
  if ( Oid <= 0x10107 || Oid == 65812 )
  {
LABEL_9:
    v4 = 1;
    if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dq(*((_QWORD *)WPP_GLOBAL_Control + 8), v5, v6, 203);
    return v4;
  }
  if ( Oid != 66055 )
  {
LABEL_5:
    if ( (*(_DWORD *)&a2->NdisReserved[16] & 0x100000) == 0 )
      return v4;
    goto LABEL_9;
  }
  if ( a1->MajorNdisVersion < 6u )
  {
    memset(&v10, 0, 0xF8uLL);
    *(_DWORD *)&v10.NdisReserved[16] |= 8u;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = v9;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqNsi;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.Oid = 65799;
    *(_QWORD *)&v10.RequestType = 2LL;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    ndisQuerySetMiniport(a1, 0LL, &v10, 0, 0LL);
    memset(&v10, 0, 0xF8uLL);
    *(_DWORD *)&v10.NdisReserved[16] |= 8u;
    v10.DATA.QUERY_INFORMATION.InformationBuffer = v9;
    *(_QWORD *)&v10.NdisReserved[32] = &ndisIntReqNsi;
    v10.Header = (NDIS_OBJECT_HEADER)15466902;
    v10.DATA.QUERY_INFORMATION.Oid = 65812;
    *(_QWORD *)&v10.RequestType = 2LL;
    v10.DATA.QUERY_INFORMATION.InformationBufferLength = 4;
    ndisQuerySetMiniport(a1, 0LL, &v10, 0, 0LL);
  }
  return v4;
}
