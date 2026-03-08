/*
 * XREFs of ?FindPoolBufferIndex@CEndpointResourceStateManager@@QEAAI_K@Z @ 0x1C008562C
 * Callers:
 *     ?SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z @ 0x1C0084648 (-SetContent@CFlipManager@@QEAAJ_K0PEAVCFlipPropertySet@@@Z.c)
 *     ?PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpdate@@PEAPEAUFlipManagerTokenIFlipInfo@@@Z @ 0x1C0085E84 (-PrepareIFlipInfo@CEndpointResourceStateManager@@QEAAJPEAVCFlipPropertySet@@IPEAVCFlipPresentUpd.c)
 *     ?CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipPropertySet@@_NAEAU_LIST_ENTRY@@@Z @ 0x1C0087A84 (-CreateUpdateTokens@CContentResourceState@@QEAAJPEAVCEndpointResourceStateManager@@PEAVCFlipProp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointResourceStateManager::FindPoolBufferIndex(CEndpointResourceStateManager **this, __int64 a2)
{
  CEndpointResourceStateManager *v2; // r8
  unsigned int v3; // r9d
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *this;
  v3 = 0;
  while ( 1 )
  {
    if ( v2 == (CEndpointResourceStateManager *)this )
      return 0LL;
    v4 = (__int64)v2 + 24;
    if ( !v2 )
      v4 = 32LL;
    if ( (*(_BYTE *)v4 & 2) == 0 )
      break;
LABEL_9:
    v2 = *(CEndpointResourceStateManager **)v2;
  }
  v5 = (__int64)v2 + 16;
  if ( !v2 )
    v5 = 24LL;
  if ( *(_QWORD *)(*(_QWORD *)v5 + 40LL) != a2 )
  {
    ++v3;
    goto LABEL_9;
  }
  return v3;
}
