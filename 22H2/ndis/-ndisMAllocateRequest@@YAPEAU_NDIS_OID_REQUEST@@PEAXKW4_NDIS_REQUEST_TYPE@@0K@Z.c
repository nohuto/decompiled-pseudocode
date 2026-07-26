/*
 * XREFs of ?ndisMAllocateRequest@@YAPEAU_NDIS_OID_REQUEST@@PEAXKW4_NDIS_REQUEST_TYPE@@0K@Z @ 0x1C009B364
 * Callers:
 *     ?ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z @ 0x1C001C6C8 (-ndisIndicateStatusInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@E@Z.c)
 *     ?ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z @ 0x1C009B918 (-ndisMRestoreFilterSettings@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@E@Z.c)
 * Callees:
 *     memmove @ 0x1C0040840 (memmove.c)
 *     memset @ 0x1C0040B00 (memset.c)
 */

struct _NDIS_OID_REQUEST *__fastcall ndisMAllocateRequest(
        void *a1,
        NDIS_OID a2,
        NDIS_REQUEST_TYPE a3,
        void *a4,
        unsigned int Size)
{
  struct _NDIS_OID_REQUEST *result; // rax
  struct _NDIS_OID_REQUEST *v10; // rbx

  result = (struct _NDIS_OID_REQUEST *)ExAllocatePoolWithTag(NonPagedPoolNx, Size + 248LL, 0x7172444Eu);
  v10 = result;
  if ( result )
  {
    memset(result, 0, Size + 248LL);
    v10->RequestType = a3;
    v10->DATA.QUERY_INFORMATION.InformationBuffer = &v10[1].PortNumber;
    v10->Header = (NDIS_OBJECT_HEADER)16253334;
    v10->DATA.QUERY_INFORMATION.Oid = a2;
    v10->DATA.QUERY_INFORMATION.InformationBufferLength = Size;
    if ( a4 )
      memmove(&v10[1].PortNumber, a4, Size);
    if ( !a1 )
      a1 = &ndisIntReqGeneric;
    result = v10;
    *(_QWORD *)&v10->NdisReserved[32] = a1;
  }
  return result;
}
