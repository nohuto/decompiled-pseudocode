/*
 * XREFs of ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180108AF8
 * Callers:
 *     ?CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ @ 0x180108A8C (-CheckOcclusionState@CRemoteRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800733C4 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z @ 0x1800CC63C (-InternalGetDXGIOutput@CDisplayManager@@AEAAJIPEAUHMONITOR__@@PEAPEAUIDXGIOutputDWM@@@Z.c)
 *     ?reset@?$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800F5598 (-reset@-$com_ptr_t@VCVisualTree@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180108CA0 (-CreateLegacyRemotingSwapChain@CD3DDevice@@QEAAJPEAUIDXGIOutputDWM@@AEBUD2D_SIZE_U@@AEBUPixelFor.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z @ 0x180295C98 (-Create@CDummyRemotingSwapChain@@KAJPEAUIDXGIOutputDWM@@PEAPEAVILegacyRemotingSwapChain@@@Z.c)
 */

__int64 __fastcall CRemoteRenderTarget::EnsureSwapChain(CRemoteRenderTarget *this)
{
  struct ILegacyRemotingSwapChain **v1; // rbx
  unsigned int v3; // edi
  __int64 v4; // rcx
  int (__fastcall ***v5)(_QWORD); // rcx
  struct ILegacyRemotingSwapChain *v7; // rdx
  struct IDXGIOutputDWM **v8; // r14
  CDisplayManager *v9; // rcx
  int DXGIOutput; // eax
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _LUID v13; // rdx
  int Device; // eax
  __int64 v15; // rcx
  struct ILegacyRemotingSwapChain *v16; // rdx
  CD3DDevice *v17; // rbx
  int LegacyRemotingSwapChain; // eax
  __int64 v19; // rcx
  CD3DDevice *v20; // rcx
  __int64 v21; // rcx
  struct ILegacyRemotingSwapChain *v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rcx
  unsigned int v27; // [rsp+20h] [rbp-48h]
  struct ILegacyRemotingSwapChain **v28; // [rsp+28h] [rbp-40h]
  int v29; // [rsp+30h] [rbp-38h] BYREF
  __int64 v30; // [rsp+34h] [rbp-34h]
  CD3DDevice *v31; // [rsp+70h] [rbp+8h] BYREF

  v1 = (struct ILegacyRemotingSwapChain **)((char *)this + 176);
  v3 = 0;
  v4 = *((_QWORD *)this + 22);
  if ( v4 )
  {
    v5 = (int (__fastcall ***)(_QWORD))(*(int *)(*(_QWORD *)(v4 + 8) + 12LL) + v4 + 8);
    if ( (**v5)(v5) >= 0 && (!*((_BYTE *)this + 394) || *(_DWORD *)(*((_QWORD *)this + 2) + 1104LL) == 6) )
      return v3;
  }
  v7 = *v1;
  *v1 = 0LL;
  if ( v7 )
  {
    v21 = (__int64)v7 + *(int *)(*((_QWORD *)v7 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  }
  v8 = (struct IDXGIOutputDWM **)((char *)this + 168);
  wil::com_ptr_t<CVisualTree,wil::err_returncode_policy>::reset((__int64 *)this + 21);
  DXGIOutput = CDisplayManager::InternalGetDXGIOutput(
                 v9,
                 0,
                 *((HMONITOR *)this + 25),
                 (struct IDXGIOutputDWM **)this + 21);
  LODWORD(v31) = DXGIOutput;
  v3 = DXGIOutput;
  if ( DXGIOutput < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v11, &dword_180355808, 2u, DXGIOutput, 0x8Cu, 0LL);
    TranslateDXGIorD3DErrorInContext(v3, 4, &v31);
    v3 = (unsigned int)v31;
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    v27 = 349;
    goto LABEL_33;
  }
  *((_DWORD *)this + 75) = *((_DWORD *)this + 50);
  v12 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 38) = 0LL;
  *((_BYTE *)this + 312) = 0;
  if ( *(_DWORD *)(v12 + 1104) == 6 )
  {
    v22 = *v1;
    *v1 = 0LL;
    if ( v22 )
    {
      v23 = (__int64)v22 + *(int *)(*((_QWORD *)v22 + 1) + 4LL) + 8;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    }
    v24 = CDummyRemotingSwapChain::Create(*v8, v1);
    v3 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x16Bu, 0LL);
    else
      *((_BYTE *)this + 394) = 1;
    return v3;
  }
  if ( !*((_DWORD *)this + 26) || !*((_DWORD *)this + 27) )
  {
    v3 = -2147024809;
    v27 = 385;
LABEL_33:
    MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v3, v27, 0LL);
    return v3;
  }
  v29 = 87;
  v13 = *(struct _LUID *)((char *)this + 292);
  v30 = 3LL;
  v31 = 0LL;
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, v13, &v31);
  v3 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, Device, 0x175u, 0LL);
    v20 = v31;
    if ( !v31 )
      return v3;
    goto LABEL_20;
  }
  v16 = *v1;
  *v1 = 0LL;
  if ( v16 )
  {
    v26 = (__int64)v16 + *(int *)(*((_QWORD *)v16 + 1) + 4LL) + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  }
  v28 = v1;
  v17 = v31;
  LegacyRemotingSwapChain = CD3DDevice::CreateLegacyRemotingSwapChain(
                              v31,
                              *v8,
                              (const struct D2D_SIZE_U *)this + 13,
                              (const struct PixelFormatInfo *)&v29,
                              (CRemoteRenderTarget *)((char *)this + 292),
                              v28);
  v3 = LegacyRemotingSwapChain;
  if ( LegacyRemotingSwapChain < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, LegacyRemotingSwapChain, 0x17Bu, 0LL);
  }
  else
  {
    *((_BYTE *)this + 141) = 1;
    *((_BYTE *)this + 394) = 0;
  }
  if ( v17 )
  {
    v20 = v17;
LABEL_20:
    CD3DDevice::Release(v20);
  }
  return v3;
}
