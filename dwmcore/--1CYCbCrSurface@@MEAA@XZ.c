/*
 * XREFs of ??1CYCbCrSurface@@MEAA@XZ @ 0x18021C09C
 * Callers:
 *     ??_ECYCbCrSurface@@MEAAPEAXI@Z @ 0x1801C0BC0 (--_ECYCbCrSurface@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x1800234BC (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CYCbCrSurface::~CYCbCrSurface(CYCbCrSurface *this)
{
  __int64 v2; // rcx

  *(_QWORD *)this = &CYCbCrSurface::`vftable';
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 4LL) + 64) = &CYCbCrSurface::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 64) = &CYCbCrSurface::`vftable'{for `IContent'};
  v2 = *(int *)(*((_QWORD *)this + 8) + 4LL);
  *(_DWORD *)((char *)this + v2 + 60) = v2 - 48;
  *(_DWORD *)((char *)this + *(int *)(*((_QWORD *)this + 8) + 8LL) + 60) = *(_DWORD *)(*((_QWORD *)this + 8) + 8LL) - 64;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 10));
  *((_QWORD *)this + 10) = 0LL;
  CResource::~CResource(this);
}
