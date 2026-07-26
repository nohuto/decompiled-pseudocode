/*
 * XREFs of ?ndisCalculateRssParametersSize@@YAHPEAU_NDIS_RECEIVE_SCALE_PARAMETERS@@PEAK@Z @ 0x1C0037C3C
 * Callers:
 *     ?ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C00377AC (-ndisSetOpenRSSParameters@@YAEPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0037AB0 (-ndisSetMiniportRSSParameters@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ?ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C0089C38 (-ndisSetMiniportRSSv1ParametersForMiniportV2@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST.c)
 *     ?ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F534 (-ndisQueryMiniportRSSParameters@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 *     ?ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z @ 0x1C009F890 (-ndisQueryOpenRSSParameters@@YAHPEAU_NDIS_OPEN_BLOCK@@PEAU_NDIS_OID_REQUEST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisCalculateRssParametersSize(struct _NDIS_RECEIVE_SCALE_PARAMETERS *a1, unsigned int *a2)
{
  unsigned int IndirectionTableOffset; // r8d
  int IndirectionTableSize; // r9d
  unsigned int v5; // r9d
  unsigned int HashSecretKeyOffset; // r8d
  unsigned int v7; // r10d
  unsigned __int64 v8; // rdx
  unsigned int ProcessorMasksOffset; // eax

  IndirectionTableOffset = a1->IndirectionTableOffset;
  IndirectionTableSize = a1->IndirectionTableSize;
  *a2 = 0;
  v5 = IndirectionTableOffset + IndirectionTableSize;
  if ( v5 >= IndirectionTableOffset )
  {
    HashSecretKeyOffset = a1->HashSecretKeyOffset;
    v7 = HashSecretKeyOffset + a1->HashSecretKeySize;
    if ( v7 >= HashSecretKeyOffset )
    {
      if ( v5 <= v7 )
        v5 = HashSecretKeyOffset + a1->HashSecretKeySize;
      if ( a1->Header.Revision < 2u )
        goto LABEL_10;
      v8 = a1->NumberOfProcessorMasks * (unsigned __int64)a1->ProcessorMasksEntrySize;
      if ( v8 <= 0xFFFFFFFF )
      {
        ProcessorMasksOffset = a1->ProcessorMasksOffset;
        if ( ProcessorMasksOffset + (unsigned int)v8 >= ProcessorMasksOffset )
        {
          if ( v5 <= ProcessorMasksOffset + (unsigned int)v8 )
            v5 = ProcessorMasksOffset + v8;
LABEL_10:
          *a2 = v5;
          return 0LL;
        }
      }
    }
  }
  return 3221291029LL;
}
