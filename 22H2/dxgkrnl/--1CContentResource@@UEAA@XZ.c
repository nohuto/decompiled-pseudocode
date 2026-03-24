/*
 * XREFs of ??1CContentResource@@UEAA@XZ @ 0x1C006DF3C
 * Callers:
 *     ??_ECContentResource@@UEAAPEAXI@Z @ 0x1C006DFB0 (--_ECContentResource@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnlockAndRelease@CCompositionSurface@@QEBA_NXZ @ 0x1C0010868 (-UnlockAndRelease@CCompositionSurface@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0010C88 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C0012858 (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ??1CFlipResource@@MEAA@XZ @ 0x1C006DA80 (--1CFlipResource@@MEAA@XZ.c)
 */

void __fastcall CContentResource::~CContentResource(CContentResource *this)
{
  char *v2; // rcx
  CCompositionSurface *v3; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CContentResource::`vftable';
  v2 = (char *)*((_QWORD *)this + 6);
  if ( v2 )
  {
    v3 = 0LL;
    if ( (int)CompositionSurfaceObject::LockForWrite(v2, &v3) >= 0 )
    {
      CCompositionSurface::UnBind(v3, 0);
      CCompositionSurface::UnlockAndRelease(v3);
    }
    ObfDereferenceObject(*((PVOID *)this + 6));
  }
  CFlipResource::~CFlipResource(this);
}
