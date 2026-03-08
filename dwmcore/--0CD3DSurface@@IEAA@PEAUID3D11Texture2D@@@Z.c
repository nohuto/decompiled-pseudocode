/*
 * XREFs of ??0CD3DSurface@@IEAA@PEAUID3D11Texture2D@@@Z @ 0x18029882C
 * Callers:
 *     ?CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1@@Z @ 0x180298B38 (-CreateViewOfTexture@CD3DSurface@@SAJPEAVCD3DResourceManager@@PEAUID3D11Texture2D@@PEAIIPEAPEAV1.c)
 * Callees:
 *     ??0CD3DResource@@IEAA@_N@Z @ 0x1800D0454 (--0CD3DResource@@IEAA@_N@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

CD3DSurface *__fastcall CD3DSurface::CD3DSurface(CD3DSurface *this, struct ID3D11Texture2D *a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r11

  *((_QWORD *)this + 1) = &CD3DSurface::`vbtable'{for `CD3DResource'};
  *((_QWORD *)this + 13) = &CD3DSurface::`vbtable'{for `IPixelFormat'};
  CD3DResource::CD3DResource(this, 0);
  *((_QWORD *)this + 12) = &CD3DSurface::`vftable'{for `IPixelFormat'};
  v3 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CD3DSurface::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(v3 + 4) + 8) = &CD3DSurface::`vftable'{for `IUnknown'};
  v4 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v4 + 4) = v4 - 224;
  *((_QWORD *)this + 14) = v5;
  *((_DWORD *)this + 30) = 0;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return this;
}
