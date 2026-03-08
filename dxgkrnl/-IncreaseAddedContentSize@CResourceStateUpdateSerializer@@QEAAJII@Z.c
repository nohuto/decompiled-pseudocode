/*
 * XREFs of ?IncreaseAddedContentSize@CResourceStateUpdateSerializer@@QEAAJII@Z @ 0x1C0085784
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C0085918 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00860E8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0086730 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CResourceStateUpdateSerializer::IncreaseAddedContentSize(
        CResourceStateUpdateSerializer *this,
        unsigned int a2,
        int a3)
{
  int v3; // eax
  unsigned int v4; // edx
  int v5; // r8d
  unsigned int v6; // eax
  __int64 result; // rax

  v3 = a2 + a3;
  if ( a2 + a3 < a2 )
    return 3221225621LL;
  v4 = *((_DWORD *)this + 16);
  v5 = -1;
  v6 = v4 + v3;
  if ( v6 >= v4 )
    v5 = v6;
  result = v6 < v4 ? 0xC0000095 : 0;
  *((_DWORD *)this + 16) = v5;
  return result;
}
