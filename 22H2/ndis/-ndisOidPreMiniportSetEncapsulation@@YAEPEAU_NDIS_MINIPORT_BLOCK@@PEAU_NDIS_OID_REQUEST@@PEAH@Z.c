/*
 * XREFs of ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002F0E8
 * Callers:
 *     ?ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C002C2F0 (-ndisOidPreOffloadEncapsulation@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C009EFA8 (-ndisPreTaskOffloadSet@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 * Callees:
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1C0006F38 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@PEAU_NDIS_OFFLOAD@@@Z @ 0x1C00A05A4 (-ndisTranslateOffloadSetsToTasks@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OFFLOAD_ENCAPSULATION@@.c)
 */

unsigned __int8 __fastcall ndisOidPreMiniportSetEncapsulation(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_OID_REQUEST *a2,
        int *a3)
{
  int v6; // ebx
  _NDIS_MINIPORT_OFFLOAD *Offload; // rax
  KIRQL v8; // dl
  UINT MiniportTaskSize; // r9d
  unsigned __int8 v10; // dl
  struct _NDIS_OFFLOAD_ENCAPSULATION *InformationBuffer; // r10
  _NDIS_MINIPORT_OFFLOAD *v12; // rcx
  _NDIS_MINIPORT_OFFLOAD *v13; // rcx
  NDIS_OID Oid; // eax
  UINT InformationBufferLength; // eax
  unsigned __int8 result; // al
  PVOID v17; // rax
  KIRQL NewIrql; // [rsp+30h] [rbp+8h] BYREF

  NewIrql = 0;
  v6 = -1073741823;
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  Offload = a1->Offload;
  if ( !Offload || !Offload->SupportsOffload )
  {
    a1->MiniportThread = 0LL;
    KeReleaseSpinLock(&a1->Lock, NewIrql);
    v10 = 1;
    goto LABEL_17;
  }
  v8 = NewIrql;
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, v8);
  MiniportTaskSize = 28;
  v10 = 1;
  if ( a2->DATA.QUERY_INFORMATION.InformationBufferLength < 0x1C )
  {
    a2->DATA.QUERY_INFORMATION.BytesNeeded = 28;
    v6 = -1073676268;
  }
  else
  {
    InformationBuffer = (struct _NDIS_OFFLOAD_ENCAPSULATION *)a2->DATA.QUERY_INFORMATION.InformationBuffer;
    if ( InformationBuffer->Header.Type != 0xA8
      || !InformationBuffer->Header.Revision
      || InformationBuffer->Header.Size < 0x1Cu )
    {
      v6 = -1073676267;
      goto LABEL_17;
    }
    v12 = a1->Offload;
    *(_OWORD *)&v12->MiniportMergedEncapsulation.Header.Type = *(_OWORD *)&InformationBuffer->Header.Type;
    *(_QWORD *)&v12->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&InformationBuffer->IPv6.Enabled;
    v12->MiniportMergedEncapsulation.IPv6.HeaderSize = InformationBuffer->IPv6.HeaderSize;
    v13 = a1->Offload;
    if ( (*(_DWORD *)&a2->NdisReserved[16] & 0x80000) == 0
      && v13->MiniportMergedEncapsulation.IPv4.Enabled == v13->MiniportSetEncapsulation.IPv4.Enabled
      && v13->MiniportMergedEncapsulation.IPv6.Enabled == v13->MiniportSetEncapsulation.IPv6.Enabled )
    {
      v6 = 0;
      a2->DATA.QUERY_INFORMATION.BytesWritten = 28;
    }
    else
    {
      if ( !v13->MiniportMergedEncapsulation.IPv4.Enabled )
      {
        *(_QWORD *)&v13->MiniportMergedEncapsulation.IPv4.Enabled = *(_QWORD *)&v13->MiniportSetEncapsulation.IPv4.Enabled;
        v13->MiniportMergedEncapsulation.IPv4.HeaderSize = v13->MiniportSetEncapsulation.IPv4.HeaderSize;
      }
      if ( !v13->MiniportMergedEncapsulation.IPv6.Enabled )
      {
        *(_QWORD *)&v13->MiniportMergedEncapsulation.IPv6.Enabled = *(_QWORD *)&v13->MiniportSetEncapsulation.IPv6.Enabled;
        v13->MiniportMergedEncapsulation.IPv6.HeaderSize = v13->MiniportSetEncapsulation.IPv6.HeaderSize;
      }
      if ( a1->MajorNdisVersion < 6u )
      {
        if ( v13->MiniportMergedEncapsulation.IPv4.Enabled == 1
          && v13->MiniportMergedEncapsulation.IPv4.EncapsulationType != 2
          || v13->MiniportMergedEncapsulation.IPv6.Enabled == 1
          && v13->MiniportMergedEncapsulation.IPv6.EncapsulationType != 2 )
        {
          v6 = -1073741637;
          goto LABEL_17;
        }
        ndisTranslateOffloadSetsToTasks(a1, InformationBuffer, 0LL);
        a1->Offload->MiniportRequestOid = a2->DATA.QUERY_INFORMATION.Oid;
        v17 = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        a2->DATA.QUERY_INFORMATION.Oid = -67042815;
        a1->Offload->MiniportRequestBuffer = v17;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = a1->Offload->MiniportTask;
        a1->Offload->MiniportRequestBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        MiniportTaskSize = a1->Offload->MiniportTaskSize;
      }
      else
      {
        a1->Offload->MiniportRequestBuffer = a2->DATA.QUERY_INFORMATION.InformationBuffer;
        Oid = a2->DATA.QUERY_INFORMATION.Oid;
        a2->DATA.QUERY_INFORMATION.InformationBuffer = &v13->MiniportMergedEncapsulation;
        a1->Offload->MiniportRequestOid = Oid;
        InformationBufferLength = a2->DATA.QUERY_INFORMATION.InformationBufferLength;
        a2->DATA.QUERY_INFORMATION.Oid = 16843018;
        a1->Offload->MiniportRequestBufferLength = InformationBufferLength;
      }
      v10 = 0;
      a2->DATA.QUERY_INFORMATION.InformationBufferLength = MiniportTaskSize;
      v6 = 0;
    }
  }
LABEL_17:
  result = v10;
  *a3 = v6;
  return result;
}
