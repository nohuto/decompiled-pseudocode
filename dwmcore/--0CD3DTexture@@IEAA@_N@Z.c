/*
 * XREFs of ??0CD3DTexture@@IEAA@_N@Z @ 0x1802BBE6C
 * Callers:
 *     ??0CD3DVidMemOnlyTexture@@IEAA@_N@Z @ 0x1802BC478 (--0CD3DVidMemOnlyTexture@@IEAA@_N@Z.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800D0454 (--0CD3DResource@@IEAA@_N@Z.c)
 */

CD3DTexture *__fastcall CD3DTexture::CD3DTexture(CD3DTexture *this)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rdx

  CD3DResource::CD3DResource(this, 1);
  v2 = *(_QWORD *)(v1 + 8);
  *(_QWORD *)v1 = &CD3DTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)(*(int *)(v2 + 4) + v1 + 8) = &CD3DTexture::`vftable'{for `IUnknown'};
  v3 = *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
  *(_DWORD *)(v3 + v1 + 4) = v3 - 224;
  *(_QWORD *)(v1 + 96) = 0LL;
  *(_QWORD *)(v1 + 148) = 0LL;
  *(_DWORD *)(v1 + 156) = 0;
  *(_QWORD *)(v1 + 168) = 0LL;
  *(_QWORD *)(v1 + 176) = 0LL;
  *(_QWORD *)(v1 + 184) = 0LL;
  *(_QWORD *)(v1 + 192) = 0LL;
  *(_QWORD *)(v1 + 200) = 0LL;
  *(_QWORD *)(v1 + 208) = 0LL;
  return (CD3DTexture *)v1;
}
