/*
 * XREFs of ??1CLocalAppRenderTarget@@MEAA@XZ @ 0x18018A43C
 * Callers:
 *     ??_ECLocalAppRenderTarget@@MEAAPEAXI@Z @ 0x18018A540 (--_ECLocalAppRenderTarget@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180024CA8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CLocalAppRenderTarget::~CLocalAppRenderTarget(CLocalAppRenderTarget *this)
{
  char *v2; // r10
  char *v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  CD3DDevice *v8; // rcx

  v2 = (char *)this + 136;
  *(_QWORD *)this = &CLocalAppRenderTarget::`vftable'{for `CRenderTarget'};
  *((_QWORD *)this + 8) = &CIndirectSwapchainRenderTarget::`vftable'{for `IVisualTreeClient'};
  *((_QWORD *)this + 17) = &CLocalAppRenderTarget::`vftable'{for `IDeviceResourceNotify'};
  v3 = (char *)this + 152;
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 4LL) + 72) = &CLocalAppRenderTarget::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 8LL) + 72) = &CLocalAppRenderTarget::`vftable'{for `IPixelFormat'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 9) + 12LL) + 72) = &CLocalAppRenderTarget::`vftable'{for `IRenderTarget'};
  v4 = *(int *)(*((_QWORD *)this + 9) + 4LL);
  *(_DWORD *)((char *)this + v4 + 68) = v4 - 104;
  v5 = *(int *)(*((_QWORD *)this + 9) + 8LL);
  *(_DWORD *)((char *)this + v5 + 68) = v5 - 120;
  v6 = *(int *)(*((_QWORD *)this + 9) + 12LL);
  *(_DWORD *)((char *)this + v6 + 68) = v6 - 144;
  if ( *(_QWORD *)v3 )
  {
    v7 = *(int *)(*(_QWORD *)(*(_QWORD *)v3 + 8LL) + 12LL) + *(_QWORD *)v3 + 8LL;
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v7 + 48LL))(v7, v2);
  }
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)v3);
  v8 = (CD3DDevice *)*((_QWORD *)this + 18);
  if ( v8 )
    CD3DDevice::Release(v8);
  CRenderTarget::~CRenderTarget(this);
}
