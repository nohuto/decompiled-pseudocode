CD3DVidMemOnlyTexture *__fastcall CD3DVidMemOnlyTexture::CD3DVidMemOnlyTexture(CD3DVidMemOnlyTexture *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  CD3DVidMemOnlyTexture *result; // rax

  *((_QWORD *)this + 1) = &CD3DSurface::`vbtable'{for `CD3DResource'};
  CD3DTexture::CD3DTexture(this);
  v2 = *((_QWORD *)this + 1);
  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(v2 + 4) + 8) = &CD3DTexture::`vftable'{for `IUnknown'};
  v3 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  result = this;
  *(_DWORD *)((char *)this + v3 + 4) = v3 - 224;
  *((_QWORD *)this + 27) = 0LL;
  return result;
}
