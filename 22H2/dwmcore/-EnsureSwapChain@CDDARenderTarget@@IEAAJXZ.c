/*
 * XREFs of ?EnsureSwapChain@CDDARenderTarget@@IEAAJXZ @ 0x180198D20
 * Callers:
 *     ?PreRender@CDDARenderTarget@@UEAAJXZ @ 0x180198FEC (-PreRender@CDDARenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F710 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?reset@?$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800C5A04 (-reset@-$com_ptr_t@VIDDASwapChain@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4030 (_guard_dispatch_icall_nop.c)
 *     ?CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVIDDASwapChain@@@Z @ 0x18023E294 (-CreateDDASwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutput@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVR.c)
 */

__int64 __fastcall CDDARenderTarget::EnsureSwapChain(CDDARenderTarget *this)
{
  __int64 *v1; // rsi
  __int64 v3; // rcx
  unsigned int v4; // edi
  int (__fastcall ***v5)(_QWORD); // rcx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, struct IDXGIOutput **); // rcx
  int v7; // eax
  __int64 v8; // rcx
  const struct RenderTargetInfo *v9; // r15
  CDeviceManager *v10; // rcx
  int Device; // eax
  __int64 v12; // rcx
  const struct PixelFormatInfo *v13; // r9
  const struct D2D_SIZE_U *v14; // r8
  CD3DDevice *v15; // rbx
  int DDASwapChain; // eax
  __int64 v17; // rcx
  CD3DDevice *v18; // rcx
  struct IDXGIOutput *v20; // [rsp+60h] [rbp+30h] BYREF
  CD3DDevice *v21; // [rsp+68h] [rbp+38h] BYREF

  v1 = (__int64 *)((char *)this + 152);
  v3 = *((_QWORD *)this + 19);
  v4 = 0;
  if ( !v3 || (v5 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v3 + 8) + 12LL) + v3 + 8), (**v5)(v5) < 0) )
  {
    wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
    if ( *((_DWORD *)this + 20) )
    {
      if ( *((_DWORD *)this + 21) )
      {
        v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, struct IDXGIOutput **))*((_QWORD *)this + 18);
        v20 = 0LL;
        v21 = 0LL;
        v7 = (**v6)(v6, &GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa, &v20);
        v4 = v7;
        if ( v7 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, 0xAFu, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
          return v4;
        }
        wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v21);
        v9 = (CDDARenderTarget *)((char *)this + 268);
        Device = CDeviceManager::GetDevice(v10, *(struct _LUID *)((char *)this + 268), &v21);
        v4 = Device;
        if ( Device < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, Device, 0xB1u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
          v18 = v21;
          if ( v21 )
            goto LABEL_12;
        }
        else
        {
          wil::com_ptr_t<IDDASwapChain,wil::err_returncode_policy>::reset(v1);
          v13 = (CDDARenderTarget *)((char *)this + 88);
          v14 = (const struct D2D_SIZE_U *)((char *)this + 80);
          v15 = v21;
          DDASwapChain = CD3DDevice::CreateDDASwapChain(v21, v20, v14, v13, v9, (struct IDDASwapChain **)v1);
          v4 = DDASwapChain;
          if ( DDASwapChain < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, DDASwapChain, 0xB7u, 0LL);
          wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v20);
          if ( v15 )
          {
            v18 = v15;
LABEL_12:
            CD3DDevice::Release(v18);
          }
        }
      }
    }
  }
  return v4;
}
