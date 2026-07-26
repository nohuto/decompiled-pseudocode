/*
 * XREFs of ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C0016DAC (-ndisOidPMAddRemove@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_OID_REQUEST@.c)
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     NdisMIndicateStatusEx @ 0x1C0019C90 (NdisMIndicateStatusEx.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D3AC (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C003D910 (__security_check_cookie.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     NdisMResetMiniport @ 0x1C0074300 (NdisMResetMiniport.c)
 */

__int64 __fastcall ndisMOidRequest(_QWORD *a1, struct _NDIS_OID_REQUEST *a2)
{
  struct _NDIS_OID_REQUEST *v2; // rdi
  unsigned int v3; // ebx
  char v4; // r15
  struct _NDIS_MINIPORT_BLOCK *v6; // rsi
  NDIS_REQUEST_TYPE RequestType; // eax
  unsigned int v8; // eax
  NDIS_OID Oid; // eax
  unsigned int v11; // eax
  int v12; // ecx
  int v13; // ebx
  int v14; // [rsp+20h] [rbp-B8h] BYREF
  struct _NDIS_STATUS_INDICATION StatusIndication; // [rsp+30h] [rbp-A8h] BYREF

  v2 = a2;
  v3 = 0;
  LOBYTE(a2) = 6;
  v4 = 0;
  if ( !(unsigned __int8)ndisReferenceOpenByHandle(a1, a2) )
  {
    v3 = -1073676286;
    goto LABEL_10;
  }
  v6 = (struct _NDIS_MINIPORT_BLOCK *)a1[2];
  v4 = 1;
  if ( (v6->DriverVerifyFlags & 0x400) == 0 )
    v2->SupportedRevision = 1;
  RequestType = v2->RequestType;
  if ( RequestType == NdisRequestSetInformation )
  {
    Oid = v2->DATA.QUERY_INFORMATION.Oid;
    if ( Oid == 66058 )
    {
      if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 4 )
      {
        v14 = *(_DWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer;
        memset(&StatusIndication, 0, sizeof(StatusIndication));
        StatusIndication.Header = (_NDIS_OBJECT_HEADER)7340440;
        StatusIndication.StatusBuffer = &v14;
        StatusIndication.SourceHandle = v6;
        StatusIndication.StatusCode = 1073807384;
        StatusIndication.StatusBufferSize = 4;
        NdisMIndicateStatusEx(v6, &StatusIndication);
      }
      else
      {
        v3 = -1073676266;
      }
      goto LABEL_19;
    }
    if ( Oid == 66066 )
    {
      v13 = *(_DWORD *)(a1[3] + 64LL) & 0x20000000;
      if ( v13 )
        NdisMResetMiniport(v6);
      v8 = v13 == 0 ? 0xC00000BB : 0;
      goto LABEL_9;
    }
  }
  else if ( RequestType == NdisRequestQueryInformation && v2->DATA.QUERY_INFORMATION.Oid == 66059 )
  {
    if ( v2->DATA.QUERY_INFORMATION.InformationBufferLength >= 8 )
    {
      *(_QWORD *)v2->DATA.QUERY_INFORMATION.InformationBuffer = v6->MediaSpecificAttributes;
      v2->DATA.QUERY_INFORMATION.BytesWritten = v6->MediaSpecificAttributes != 0LL ? 8 : 0;
    }
    else
    {
      v3 = -1073676268;
    }
    goto LABEL_19;
  }
  memset(v2->NdisReserved, 0, 0x60uLL);
  *(_DWORD *)&v2->NdisReserved[16] |= 0x20u;
  *(_QWORD *)&v2->NdisReserved[32] = a1;
  *(_QWORD *)&v2->NdisReserved[24] = 0LL;
  if ( v2->RequestType == NdisRequestSetInformation
    && (v11 = v2->DATA.QUERY_INFORMATION.Oid + 50265846, v11 <= 5)
    && (v12 = 43, _bittest(&v12, v11)) )
  {
    v8 = ndisOidPMAddRemove(v6, 0LL, v2);
  }
  else
  {
    v8 = ndisQueueOidRequest(v2, v6, 0LL, 0LL);
  }
LABEL_9:
  v3 = v8;
LABEL_10:
  if ( v3 != 259 && v4 == 1 )
LABEL_19:
    ndisMDereferenceOpenUnlocked((__int64)a1, 6);
  return v3;
}
