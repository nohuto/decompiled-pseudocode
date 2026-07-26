/*
 * XREFs of ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009B210
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0019874 (-ndisMDereferenceOpenUnlocked@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@2@Z @ 0x1C001C124 (-ndisQueueOidRequest@@YAHPEAU_NDIS_OID_REQUEST@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK.c)
 *     ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D3AC (-ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     memset @ 0x1C0040B00 (memset.c)
 *     ?ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z @ 0x1C009AAF0 (-ndisCompleteOidRequestToRequest@@YAXPEAXPEAU_NDIS_OID_REQUEST@@H@Z.c)
 */

__int64 __fastcall ndisLegacyRequest(__int64 a1, struct _NDIS_REQUEST *a2)
{
  char v5; // bp
  unsigned int v6; // edi
  struct _NDIS_OID_REQUEST *PoolWithTag; // rax
  struct _NDIS_OID_REQUEST *v8; // rbx

  if ( *(_BYTE *)(*(_QWORD *)(a1 + 24) + 56LL) >= 6u )
    return 3221291012LL;
  v5 = ndisReferenceOpenByHandle(a1, 6u);
  if ( v5 )
  {
    PoolWithTag = (struct _NDIS_OID_REQUEST *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xF8uLL, 0x6572444Eu);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 0xF8uLL);
      v8->RequestType = a2->RequestType;
      v8->Header = (NDIS_OBJECT_HEADER)16253334;
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 3688LL) & 0x400) == 0 )
        v8->SupportedRevision = 1;
      if ( a2->RequestType == NdisRequestMethod )
      {
        v6 = -1073741811;
      }
      else
      {
        v8->DATA.QUERY_INFORMATION.Oid = a2->DATA.QUERY_INFORMATION.Oid;
        v8->DATA.QUERY_INFORMATION.InformationBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        v8->DATA.QUERY_INFORMATION.InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        v8->DATA.QUERY_INFORMATION.BytesWritten = a2->DATA.QUERY_INFORMATION.BytesWritten;
        v8->DATA.QUERY_INFORMATION.BytesNeeded = a2->DATA.QUERY_INFORMATION.BytesNeeded;
        *(_DWORD *)&v8->NdisReserved[16] |= 0x20u;
        *(_QWORD *)&v8->NdisReserved[24] = a2;
        *(_QWORD *)&v8->NdisReserved[32] = a1;
        v6 = ndisQueueOidRequest(v8, *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16), 0LL, 0LL);
        if ( v6 == 259 )
          return v6;
      }
      ndisCompleteOidRequestToRequest((void (__fastcall **)(_QWORD, _QWORD, _QWORD))a1, v8, v6);
      v6 = 259;
    }
    else
    {
      v6 = -1073741670;
    }
    if ( v5 == 1 )
      ndisMDereferenceOpenUnlocked(a1, 6);
    return v6;
  }
  return (unsigned int)-1073676286;
}
