/*
 * XREFs of ??0CDecodeBitmap@@QEAA@XZ @ 0x18001BCE4
 * Callers:
 *     ?CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRIBUTES@@I@Z @ 0x18003DFE0 (-CreateAndAddSwapChainBuffers@CBindInfo@CGlobalCompositionSurfaceInfo@@IEAAJAEBUCSM_BUFFER_ATTRI.c)
 * Callees:
 *     ??0CRenderTargetBitmap@@IEAA@_N@Z @ 0x18003C200 (--0CRenderTargetBitmap@@IEAA@_N@Z.c)
 */

CDecodeBitmap *__fastcall CDecodeBitmap::CDecodeBitmap(CDecodeBitmap *this)
{
  __int64 v1; // r11
  CDecodeBitmap *result; // rax

  *((_QWORD *)this + 2) = &CDecodeBitmap::`vbtable';
  *((_QWORD *)this + 11) = &CDecodeBitmap::`vbtable'{for `CDeviceResource'};
  *((_QWORD *)this + 16) = &CDecodeBitmap::`vbtable'{for `IRenderTargetBitmap'};
  *((_QWORD *)this + 26) = &CGDIBitmapRealization::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 29) = &CD2DBitmap::`vbtable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CRenderTargetBitmap::`vbtable'{for `IBitmapRealization'};
  CRenderTargetBitmap::CRenderTargetBitmap(this, 0);
  *(_QWORD *)v1 = &CDecodeBitmap::`vftable'{for `CMILCOMBaseT<IUnknown>'};
  *(_QWORD *)(v1 + 80) = &CDecodeBitmap::`vftable';
  *(_QWORD *)(v1 + 120) = &CDecodeBitmap::`vftable'{for `IRenderTargetBitmap'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 4LL) + v1 + 16) = &CDecodeBitmap::`vftable'{for `IDeviceResourceNotify'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 8LL) + v1 + 16) = &CDecodeBitmap::`vftable'{for `IUnknown'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 12LL) + v1 + 16) = &CDecodeBitmap::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 16LL) + v1 + 16) = &CDecodeBitmap::`vftable'{for `IPixelFormat'};
  *(_QWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 20LL) + v1 + 16) = &CDecodeBitmap::`vftable'{for `IBitmapRealization'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 4LL) + v1 + 12) = 0;
  *(_DWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 8LL) + v1 + 12) = 0;
  *(_DWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 12LL) + v1 + 12) = 0;
  *(_DWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 16LL) + v1 + 12) = 0;
  result = (CDecodeBitmap *)v1;
  *(_DWORD *)(*(int *)(*(_QWORD *)(v1 + 16) + 20LL) + v1 + 12) = 0;
  *(_BYTE *)(v1 + 152) = 0;
  return result;
}
