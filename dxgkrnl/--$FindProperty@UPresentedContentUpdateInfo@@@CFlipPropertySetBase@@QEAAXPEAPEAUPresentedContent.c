/*
 * XREFs of ??$FindProperty@UPresentedContentUpdateInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUPresentedContentUpdateInfo@@@Z @ 0x1C00850D8
 * Callers:
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0085E84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PEAVCFlipContentToken@@@Z @ 0x1C0087924 (-ApplyPresentAttributeMetadataToUpdateToken@CContentResourceState@@IEAAXPEAVCFlipPropertySet@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<PresentedContentUpdateInfo>(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r11d
  __int64 v4; // r8
  __int64 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // rax

  *a2 = 0LL;
  v2 = 0;
  v3 = *(_DWORD *)(a1 + 12);
  v4 = *(_QWORD *)(a1 + 24);
  if ( v3 )
  {
    v5 = *(_QWORD *)(a1 + 16);
    while ( 1 )
    {
      v6 = 32LL * v2;
      v7 = *(_QWORD *)(v6 + v5) - *(_QWORD *)&GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(v6 + v5 + 8) - *(_QWORD *)GUID_002058ee_e3d4_4092_afe3_bd372f300335.Data4;
      if ( !v7 && *(_DWORD *)(v6 + v5 + 16) == 76 )
        break;
      ++v2;
      v4 += *(unsigned int *)(v6 + v5 + 16);
      if ( v2 >= v3 )
        return;
    }
    *a2 = v4;
  }
}
