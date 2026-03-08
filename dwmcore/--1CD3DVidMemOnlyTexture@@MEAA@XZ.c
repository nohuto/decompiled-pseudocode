/*
 * XREFs of ??1CD3DVidMemOnlyTexture@@MEAA@XZ @ 0x1802BC4DC
 * Callers:
 *     ??_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z @ 0x1802BC520 (--_ECD3DVidMemOnlyTexture@@MEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CD3DVidMemOnlyTexture::~CD3DVidMemOnlyTexture(CD3DVidMemOnlyTexture *this)
{
  __int64 v1; // rdx

  *(_QWORD *)this = &CD3DVidMemOnlyTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CD3DTexture::`vftable'{for `IUnknown'};
  v1 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v1 + 4) = v1 - 224;
  CD3DTexture::~CD3DTexture(this);
}
