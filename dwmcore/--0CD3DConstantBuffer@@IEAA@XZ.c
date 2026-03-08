/*
 * XREFs of ??0CD3DConstantBuffer@@IEAA@XZ @ 0x1800D0384
 * Callers:
 *     ?Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z @ 0x1800D0218 (-Create@CD3DConstantBuffer@@SAJPEAVCD3DDevice@@IW4D3D11_USAGE@@PEBXPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800D0454 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DConstantBuffer *__fastcall CD3DConstantBuffer::CD3DConstantBuffer(CD3DConstantBuffer *this)
{
  __int64 v1; // r11
  __int64 v2; // rax

  *((_QWORD *)this + 1) = &CD3DPixelShader::`vbtable';
  CD3DResource::CD3DResource(this, 0);
  v2 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)v1 = &CD3DConstantBuffer::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(v2 + 4) + v1 + 8) = &CD3DConstantBuffer::`vftable'{for `IUnknown'};
  *(_DWORD *)(*(int *)(*(_QWORD *)(v1 + 8) + 4LL) + v1 + 4) = 0;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_DWORD *)(v1 + 104) = 0;
  return (CD3DConstantBuffer *)v1;
}
