/*
 * XREFs of ??$FindProperty@UFlipContentBufferFormatInfo@@@CFlipPropertySetBase@@QEAAXPEAPEAUFlipContentBufferFormatInfo@@@Z @ 0x1C0084F48
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C0085918 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00860E8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 * Callees:
 *     <none>
 */

void __fastcall CFlipPropertySetBase::FindProperty<FlipContentBufferFormatInfo>(__int64 a1, _QWORD *a2)
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
      v7 = *(_QWORD *)(v6 + v5) - *(_QWORD *)&GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(v6 + v5 + 8) - *(_QWORD *)GUID_2d65776f_bd54_4cd7_9bd2_2232e4fcd974.Data4;
      if ( !v7 && *(_DWORD *)(v6 + v5 + 16) == 8 )
        break;
      ++v2;
      v4 += *(unsigned int *)(v6 + v5 + 16);
      if ( v2 >= v3 )
        return;
    }
    *a2 = v4;
  }
}
