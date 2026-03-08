/*
 * XREFs of ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801E6860
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800342C8 (--1-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@W4Enum@CacheMode@@PEAPEAVIRenderTargetBitmap@@@Z @ 0x180034C80 (-CreateRenderTargetBitmap@CD3DDevice@@QEAAJAEBVCResourceTag@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ @ 0x1800525D0 (-GetPrimaryMonitorTarget@CRenderTargetManager@@QEBAPEAVIMonitorTarget@@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800C3DD8 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?reset@?$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E91E4 (-reset@-$com_ptr_t@VIRenderTargetBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801E7348 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall COffScreenRenderTarget::EnsureRenderTargets(struct D2D_SIZE_U *this)
{
  unsigned int v1; // edi
  enum DXGI_FORMAT v3; // ebx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 (__fastcall ***v5)(_QWORD, CD3DDevice **); // rcx
  int updated; // eax
  __int64 v7; // rcx
  char *v8; // rcx
  int Device; // eax
  __int64 v10; // rcx
  CD3DDevice *v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  CD3DDevice *v14; // r8
  struct D2D_SIZE_U *v15; // r10
  __int64 width; // rax
  UINT32 v17; // edx
  int v18; // esi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rcx
  CD3DDevice *v22; // rcx
  struct IRenderTargetBitmap *v24; // [rsp+40h] [rbp-40h] BYREF
  struct _LUID v25; // [rsp+48h] [rbp-38h] BYREF
  CD3DDevice *v26[2]; // [rsp+60h] [rbp-20h] BYREF

  v1 = 0;
  if ( this[223].width )
    return v1;
  v3 = DXGI_FORMAT_B8G8R8A8_UNORM;
  PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*(_QWORD *)&this[2]
                                                                                                + 216LL));
  if ( PrimaryMonitorTarget )
  {
    v5 = (__int64 (__fastcall ***)(_QWORD, CD3DDevice **))((char *)PrimaryMonitorTarget
                                                         + *(int *)(*((_QWORD *)PrimaryMonitorTarget + 1) + 8LL)
                                                         + 8);
    v3 = *(_DWORD *)(**v5)(v5, v26);
  }
  updated = COffScreenRenderTarget::UpdatePixelFormatInfo((COffScreenRenderTarget *)this, v3);
  v1 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, updated, 0x44u, 0LL);
    return v1;
  }
  v8 = (char *)&this[10] + *(int *)(*(_QWORD *)&this[10] + 12LL);
  (**(void (__fastcall ***)(char *, struct _LUID *))v8)(v8, &v25);
  v26[0] = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v25, v26);
  v1 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, Device, 0x4Au, 0LL);
    v22 = v26[0];
    if ( v26[0] )
      goto LABEL_19;
    return v1;
  }
  v24 = 0LL;
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::reset((__int64 *)&v24);
  v11 = v26[0];
  v12 = CD3DDevice::CreateRenderTargetBitmap(
          v26[0],
          (const struct CResourceTag *)&this[231],
          this + 13,
          (const struct PixelFormatInfo *)&this[14],
          (struct RenderTargetInfo *)&v25,
          0,
          &v24);
  v1 = v12;
  if ( v12 >= 0 )
  {
    v14 = v24;
    v15 = this + 220;
    width = this[223].width;
    v24 = 0LL;
    v26[0] = v14;
    v17 = width + 1;
    if ( (int)width + 1 < (unsigned int)width )
    {
      v1 = -2147024362;
      v18 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, -2147024362, 0xB5u, 0LL);
LABEL_14:
      MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, v18, 0x54u, 0LL);
      goto LABEL_16;
    }
    v18 = 0;
    if ( v17 > v15[2].height )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v15, 8, 1, v26);
      v18 = v20;
      v1 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0xC0u, 0LL);
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)v15 + 8 * width) = v14;
      v15[3].width = v17;
    }
    v1 = v18;
    goto LABEL_16;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x52u, 0LL);
LABEL_16:
  wil::com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>::~com_ptr_t<IRenderTargetBitmap,wil::err_returncode_policy>((__int64)&v24);
  if ( v11 )
  {
    v22 = v11;
LABEL_19:
    CD3DDevice::Release(v22);
  }
  return v1;
}
