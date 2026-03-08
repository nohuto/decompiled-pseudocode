/*
 * XREFs of ??0CDxHandleBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_N4PEAVCDecodeBitmap@@@Z @ 0x18003B77C
 * Callers:
 *     ?Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@_NPEAPEAVISwapChainRealization@@@Z @ 0x18003DC7C (-Create@CDxHandleBitmapRealization@@SAJW4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTE.c)
 *     ??0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1800A9370 (--0CGDIBitmapRealization@@IEAA@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z.c)
 *     ??0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@@Z @ 0x1802AE48C (--0CDxHandleAdvancedDirectFlipBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_B.c)
 *     ??0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@@Z @ 0x1802AF75C (--0CDxHandleStereoBitmapRealization@@IEAA@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION.c)
 * Callees:
 *     ?CalcDisplayRestriction@CBitmapRealization@@KA?AVDisplayId@@_NPEAUHMONITOR__@@@Z @ 0x18003B964 (-CalcDisplayRestriction@CBitmapRealization@@KA-AVDisplayId@@_NPEAUHMONITOR__@@@Z.c)
 *     ??0CDeviceResource@@IEAA@XZ @ 0x18003C414 (--0CDeviceResource@@IEAA@XZ.c)
 *     ??0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_REALIZATION_INFO@@PEAVCDecodeBitmap@@_N@Z @ 0x18003D4AC (--0CBitmapRealization@@IEAA@W4CompositionBufferType@@U_LUID@@AEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::CDxHandleBitmapRealization(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8,
        int a9)
{
  __int64 v9; // rdi
  _QWORD *v12; // r9
  __int64 v13; // rcx
  char v14; // al
  __int64 v15; // rdx
  int *v16; // rax
  int v17; // ecx
  __int64 v19; // [rsp+28h] [rbp-20h]

  v9 = a1 + 16;
  if ( a9 )
  {
    *(_QWORD *)v9 = &CDxHandleBitmapRealization::`vbtable';
    *(_QWORD *)(a1 + 328) = &CDxHandleBitmapRealization::`vbtable'{for `CDeviceResource'};
    *(_QWORD *)(a1 + 368) = &CDxHandleBitmapRealization::`vbtable'{for `ISwapChainRealization'};
    *(_QWORD *)(a1 + 448) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
    *(_QWORD *)(a1 + 472) = &CGDISectionBitmapRealization::`vbtable'{for `IBitmapRealization'};
    *(_QWORD *)(a1 + 496) = &CDxHandleBitmapRealization::`vbtable'{for `IDeviceResource'};
  }
  v19 = a8;
  CBitmapRealization::CBitmapRealization();
  CDeviceResource::CDeviceResource((CDeviceResource *)(a1 + 320));
  *v12 = &CDxHandleBitmapRealization::`vftable'{for `CDeviceResource'};
  *(_QWORD *)a1 = &CDxHandleBitmapRealization::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(a1 + 360) = &CDxHandleBitmapRealization::`vftable'{for `ISwapChainRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 4LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 8LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 12LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 16LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `CBitmapRealization'};
  *(_QWORD *)(*(int *)(*(_QWORD *)v9 + 20LL) + a1 + 16) = &CDxHandleBitmapRealization::`vftable'{for `IDeviceResource'};
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 4LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 4LL) - 392;
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 8LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 8LL) - 408;
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 12LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 12LL) - 424;
  *(_DWORD *)(*(int *)(*(_QWORD *)v9 + 16LL) + a1 + 12) = *(_DWORD *)(*(_QWORD *)v9 + 16LL) - 448;
  v13 = *(int *)(*(_QWORD *)v9 + 20LL);
  v14 = a7;
  v15 = (unsigned int)(v13 - 472);
  *(_DWORD *)(v13 + a1 + 12) = v15;
  *(_QWORD *)(a1 + 376) = 0LL;
  *(_QWORD *)(a1 + 384) = 0LL;
  *(_BYTE *)(a1 + 392) = v14;
  *(_BYTE *)(a1 + 393) = 1;
  LOBYTE(v15) = *(_BYTE *)(a4 + 136) & 1;
  v16 = (int *)CBitmapRealization::CalcDisplayRestriction(&a7, v15, *(_QWORD *)(a4 + 8), v12, a5, v19);
  v17 = *v16;
  *(_DWORD *)(a1 + 280) = *v16;
  if ( v17 != DisplayId::None && v17 != DisplayId::All )
    ++*((_DWORD *)g_pComposition + 108);
  return a1;
}
