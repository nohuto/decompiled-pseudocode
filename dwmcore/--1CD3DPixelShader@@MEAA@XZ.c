/*
 * XREFs of ??1CD3DPixelShader@@MEAA@XZ @ 0x1800CFEEC
 * Callers:
 *     ??_ECD3DPixelShader@@MEAAPEAXI@Z @ 0x1800CFEB0 (--_ECD3DPixelShader@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CD3DPixelShader::~CD3DPixelShader(CD3DPixelShader *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  *(_QWORD *)this = &CD3DPixelShader::`vftable'{for `IDeviceResource'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 1) + 4LL) + 8) = &CD3DConstantBuffer::`vftable'{for `IUnknown'};
  v2 = *(int *)(*((_QWORD *)this + 1) + 4LL);
  *(_DWORD *)((char *)this + v2 + 4) = v2 - 112;
  v3 = *((_QWORD *)this + 12);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 12) = 0LL;
  }
  CD3DResource::~CD3DResource(this);
}
