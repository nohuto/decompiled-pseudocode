/*
 * XREFs of ?ndisReferenceOpenByHandle@@YAEPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001D3AC
 * Callers:
 *     ?ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C001C3F0 (-ndisMOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C00854B4 (-ndisAllocateReceiveQueue@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0087A84 (-ndisSetReceiveFilter@@YAEPEAU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z @ 0x1C009B210 (-ndisLegacyRequest@@YAHPEAXPEAU_NDIS_REQUEST@@@Z.c)
 *     ?ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z @ 0x1C00AF990 (-ndisMDirectOidRequest@@YAHPEAXPEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C0104E60 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C000DF00 (NdisReferenceWithTag.c)
 *     WPP_RECORDER_SF_qd @ 0x1C001D228 (WPP_RECORDER_SF_qd.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C003BB18 (WPP_RECORDER_SF_qdL.c)
 */

char __fastcall ndisReferenceOpenByHandle(__int64 a1, unsigned __int8 a2)
{
  char v4; // bl
  KIRQL v5; // al
  struct _NDIS_OPEN_BLOCK *NextGlobalOpen; // rcx
  KIRQL v7; // r15
  KIRQL v8; // bl
  int v9; // edx

  v4 = 0;
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x14u,
      0x6Bu,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1,
      a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  NextGlobalOpen = ndisGlobalOpenList;
  v7 = v5;
  if ( ndisGlobalOpenList )
  {
    while ( NextGlobalOpen != (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      NextGlobalOpen = NextGlobalOpen->NextGlobalOpen;
      if ( !NextGlobalOpen )
        goto LABEL_11;
    }
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
    {
      v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 600));
      NdisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 592), a2);
      ++*(_DWORD *)(a1 + 228);
      KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 600), v8);
      v4 = 1;
    }
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
  }
LABEL_11:
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v7);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      20,
      108,
      (struct _GUID *)&WPP_45eb45ac1a9433561e49016f94f6e82a_Traceguids,
      a1,
      a2,
      v4);
  return v4;
}
