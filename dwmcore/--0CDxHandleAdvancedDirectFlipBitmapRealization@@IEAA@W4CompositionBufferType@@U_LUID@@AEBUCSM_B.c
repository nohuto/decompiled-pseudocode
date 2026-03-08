/*
 * XREFs of ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AE48C
 * Callers:
 *     ?Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@PEAPEAVISwapChainRealization@@@Z @ 0x18003DF50 (-Create@CDxHandleAdvancedDirectFlipBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCS.c)
 * Callees:
 *     ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x18003B77C (--0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::CDxHandleAdvancedDirectFlipBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v13; // [rsp+28h] [rbp-30h]

  *(_QWORD *)(a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `CDxHandleBitmapRealization'};
  *(_QWORD *)(a1 + 328) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 368) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `ISwapChainRealization'};
  *(_QWORD *)(a1 + 408) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vbtable'{for `IAdvancedDirectFlipBitmapRealization'};
  *(_QWORD *)(a1 + 496) = &CInk::`vbtable'{for `IContent'};
  *(_QWORD *)(a1 + 520) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IBitmapRealization'};
  *(_QWORD *)(a1 + 544) = &CDxHandleYUVBitmapRealization::`vbtable'{for `IDeviceResource'};
  LOBYTE(v13) = 1;
  CDxHandleBitmapRealization::CDxHandleBitmapRealization(a1, a2, a3, a4, a5, v13, 1, a6, 0);
  *(_QWORD *)(a1 + 400) = &IYUVSwapChainRealization::`vftable';
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 408) + 4LL) + a1 + 408) = &ICompositionSwapChain::`vftable'{for `IUnknown'};
  *(_QWORD *)a1 = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 320) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)(a1 + 360) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)(a1 + 400) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IAdvancedDirectFlipBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 4LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 8LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 12LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 16LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 + 16) + 20LL) + a1 + 16) = &CDxHandleAdvancedDirectFlipBitmapRealization::`vftable'{for `IDeviceResource'};
  v7 = *(int *)(*(_QWORD *)(a1 + 16) + 4LL);
  *(_DWORD *)(v7 + a1 + 12) = v7 - 440;
  v8 = *(int *)(*(_QWORD *)(a1 + 16) + 8LL);
  *(_DWORD *)(v8 + a1 + 12) = v8 - 456;
  v9 = *(int *)(*(_QWORD *)(a1 + 16) + 12LL);
  *(_DWORD *)(v9 + a1 + 12) = v9 - 472;
  v10 = *(int *)(*(_QWORD *)(a1 + 16) + 16LL);
  *(_DWORD *)(v10 + a1 + 12) = v10 - 496;
  v11 = *(int *)(*(_QWORD *)(a1 + 16) + 20LL);
  *(_DWORD *)(v11 + a1 + 12) = v11 - 520;
  *(_QWORD *)(a1 + 416) = 0LL;
  *(_QWORD *)(a1 + 424) = 0LL;
  *(_QWORD *)(a1 + 432) = 0LL;
  *(_BYTE *)(a1 + 440) = 0;
  return a1;
}
