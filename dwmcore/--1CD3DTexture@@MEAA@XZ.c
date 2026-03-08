/*
 * XREFs of ??1CD3DTexture@@MEAA@XZ @ 0x1802BBEF8
 * Callers:
 *     ??_GCD3DTexture@@MEAAPEAXI@Z @ 0x1802BC060 (--_GCD3DTexture@@MEAAPEAXI@Z.c)
 *     ??1CD3DVidMemOnlyTexture@@MEAA@XZ @ 0x1802BC4DC (--1CD3DVidMemOnlyTexture@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z @ 0x1802987F0 (--$ReleaseInterfaceNoNULL@VCD3DSurface@@@@YAXPEAVCD3DSurface@@@Z.c)
 */

void __fastcall CD3DTexture::~CD3DTexture(CD3DTexture *this)
{
  __int64 v2; // rdx
  int i; // eax
  int v4; // eax
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &CD3DTexture::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CD3DTexture::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 224;
  if ( *((_QWORD *)this + 21) )
  {
    for ( i = *((_DWORD *)this + 40); ; i = *((_DWORD *)this + 40) )
    {
      v5 = (_QWORD *)*((_QWORD *)this + 21);
      if ( !i )
        break;
      v4 = i - 1;
      *((_DWORD *)this + 40) = v4;
      ReleaseInterfaceNoNULL<CD3DSurface>(v5[v4]);
    }
    *((_DWORD *)this + 40) = -1;
    operator delete(v5);
  }
  v6 = *((_QWORD *)this + 12);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 22);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 24);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 23);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 25);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 26);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CD3DResource::~CD3DResource(this);
}
