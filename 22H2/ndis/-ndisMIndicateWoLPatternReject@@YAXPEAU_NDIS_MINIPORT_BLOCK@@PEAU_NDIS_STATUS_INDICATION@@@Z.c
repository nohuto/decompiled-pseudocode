/*
 * XREFs of ?ndisMIndicateWoLPatternReject@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0090CC8
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001AE74 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     ?ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z @ 0x1C003B9F8 (-ndisGetCombinedPMConfig@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PM_PARAMETERS@@@Z.c)
 *     ?ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0095C58 (-ndisUpdateWmiPMParamsForPatterns@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisMIndicateWoLPatternReject(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_STATUS_INDICATION *a2)
{
  char v2; // bp
  int v5; // edx
  __int64 v6; // rax
  UCHAR *v7; // rcx
  __int64 *v8; // rax
  __int64 *v9; // rbx
  _QWORD *v10; // rbx
  _QWORD *v11; // rcx
  void **v12; // rcx

  v2 = 0;
  if ( a2->StatusBufferSize >= 4 )
  {
    v5 = *(_DWORD *)a2->StatusBuffer;
    if ( a1->MajorNdisVersion > 6u || a1->MajorNdisVersion == 6 && a1->MinorNdisVersion >= 0x14u )
      v6 = 968LL;
    else
      v6 = 960LL;
    v7 = &a1->Header.Type + v6;
    v8 = *(__int64 **)v7;
    if ( *(_QWORD *)v7 )
    {
      do
      {
        v9 = v8;
        if ( *((_DWORD *)v8 + 10) == v5 )
          break;
        v7 = (UCHAR *)v8;
        v9 = 0LL;
        v8 = (__int64 *)*v8;
      }
      while ( v8 );
      if ( v9 )
      {
        *(_QWORD *)v7 = *v8;
        LODWORD(a2->NdisReserved[2]) = 0;
        v10 = v9 + 1;
        if ( v10 )
        {
          do
          {
            v11 = v10;
            v10 = (_QWORD *)*v10;
            v12 = (void **)(v11 - 1);
            if ( v12[3] == &ndisIntReqWmi )
              v2 = 1;
            ExFreePoolWithTag(v12, 0);
            ++LODWORD(a2->NdisReserved[2]);
          }
          while ( v10 );
          if ( v2 )
          {
            ndisUpdateWmiPMParamsForPatterns(a1);
            ndisGetCombinedPMConfig(a1, &a1->PMCurrentParameters);
          }
        }
      }
    }
  }
}
