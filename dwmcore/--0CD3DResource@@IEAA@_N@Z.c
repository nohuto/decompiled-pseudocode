/*
 * XREFs of ??0CD3DResource@@IEAA@_N@Z @ 0x1800D0454
 * Callers:
 *     ??0CD3DPixelShader@@IEAA@XZ @ 0x1800D0114 (--0CD3DPixelShader@@IEAA@XZ.c)
 *     ??0CD3DConstantBuffer@@IEAA@XZ @ 0x1800D0384 (--0CD3DConstantBuffer@@IEAA@XZ.c)
 *     ??0CExternalD3DRenderer@@AEAA@XZ @ 0x1802846FC (--0CExternalD3DRenderer@@AEAA@XZ.c)
 *     ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18029882C (--0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z.c)
 *     ??0CD3DTexture@@IEAA@_N@Z @ 0x1802BBE6C (--0CD3DTexture@@IEAA@_N@Z.c)
 * Callees:
 *     <none>
 */

CD3DResource *__fastcall CD3DResource::CD3DResource(CD3DResource *this, char a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  CD3DResource *result; // rax

  *(_QWORD *)this = &CD3DResource::`vftable'{for `IDeviceResource'};
  v2 = *((_QWORD *)this + 1);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)((char *)this + *(int *)(v2 + 4) + 8) = &CD3DResource::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 96;
  *((_BYTE *)this + 68) = a2;
  *(_WORD *)((char *)this + 69) = 0;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  return result;
}
