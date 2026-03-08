/*
 * XREFs of ?GetSerializedUpdate@CResourceStateUpdateSerializer@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00856C0
 * Callers:
 *     ?PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C0085918 (-PrepareCompTexOptimizedUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPrese.c)
 *     ?PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@PEAUFlipManagerObject@@@Z @ 0x1C00860E8 (-PrepareIncrementalUpdateForStateManager@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpd.c)
 *     ?PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z @ 0x1C0086730 (-PrepareIncrementalUpdateForUser@CEndpointResourceStateManager@@QEAAJPEAVCFlipPresentUpdate@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CResourceStateUpdateSerializer::GetSerializedUpdate(
        CResourceStateUpdateSerializer *this,
        struct CFlipPresentUpdate *a2)
{
  __int64 v2; // rsi
  int v4; // ebp
  void *v5; // rcx

  v2 = *(_QWORD *)this;
  v4 = *((_DWORD *)this + 2);
  v5 = (void *)*((_QWORD *)a2 + 6);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  *((_QWORD *)a2 + 6) = v2;
  *((_DWORD *)a2 + 10) = v4;
  *(_QWORD *)this = 0LL;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
}
