/*
 * XREFs of ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x180243534
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x18018D218 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180025150 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002D180 (--1-$com_ptr_t@VCD2DBitmap@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18005F710 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?reset@?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005FFF0 (-reset@-$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180060020 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?Release@CRenderTargetBitmap@@UEAAKXZ @ 0x180060070 (-Release@CRenderTargetBitmap@@UEAAKXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180062AA8 (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800C07A0 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C8C9C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800E5D20 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayVBlankFenceResources@@@Z @ 0x1800F10DC (-CreateVBlankFence@CDDisplayManager@@QEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisp.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@0AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180238DFC (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x180238FD8 (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x18023A07C (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@QEAAPEAUDDisplayPrimaryBufferResources@@QEAU2@$$QEAU2@@Z @ 0x1802415D0 (--$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@-$vector@UDDisplayPrimaryBufferResource.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayVBlankFenceResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x180241D7C (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Win.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x180242620 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x180242690 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x180243A8C (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180243BF0 (-CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBU.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180243F44 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x180244164 (-EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180244AB4 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
 */

__int64 __fastcall CDDisplayManager::CreateDDisplaySwapchainForSource(
        CDDisplayManager *this,
        struct _LUID *a2,
        unsigned int a3,
        const struct PixelFormatInfo *a4,
        const struct D2D_SIZE_U *a5,
        unsigned int a6,
        void *a7,
        struct CDDisplaySwapChain **a8)
{
  struct CD3DDevice *v8; // rdi
  __int64 v9; // r15
  CRenderTargetBitmap *v13; // rbx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // esi
  CDeviceManager *v17; // rcx
  int Device; // eax
  CDDisplayManager *v19; // rcx
  int DisplayDeviceAndTarget; // eax
  CDDisplayManager *v21; // rcx
  int TaskPool; // eax
  CDDisplayManager *v23; // rcx
  int VBlankFence; // eax
  __int64 v25; // rcx
  CDDisplayManager *v26; // rcx
  int v27; // eax
  CDDisplayManager *v28; // rcx
  const struct D2D_SIZE_U *v29; // r8
  bool v30; // r9
  __int64 v31; // r14
  int v32; // r12d
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v33; // rbx
  int PrimaryBuffer; // eax
  LPVOID v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rax
  int v38; // eax
  __int64 v39; // rcx
  DDisplayPrimaryBufferResources *v40; // rbx
  unsigned int v42; // [rsp+38h] [rbp-C9h]
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v43; // [rsp+58h] [rbp-A9h] BYREF
  DDisplayPrimaryBufferResources *v44[2]; // [rsp+60h] [rbp-A1h] BYREF
  _QWORD v45[3]; // [rsp+70h] [rbp-91h] BYREF
  __int64 v46; // [rsp+88h] [rbp-79h]
  char v47; // [rsp+90h] [rbp-71h]
  __int128 v48; // [rsp+98h] [rbp-69h] BYREF
  _OWORD v49[3]; // [rsp+A8h] [rbp-59h] BYREF
  _OWORD v50[5]; // [rsp+E0h] [rbp-21h] BYREF
  CD3DDevice *v51; // [rsp+148h] [rbp+47h] BYREF
  const struct PixelFormatInfo *v52; // [rsp+160h] [rbp+5Fh]

  v52 = a4;
  v43 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v51 = 0LL;
  memset(v50, 0, 32);
  v45[0] = 0LL;
  memset(v49, 0, sizeof(v49));
  v13 = 0LL;
  v48 = 0LL;
  *(_OWORD *)v44 = 0LL;
  v14 = CDDisplayManager::EnsureDDisplayManager(this);
  v16 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0xCEu, 0LL);
    v31 = (__int64)v44[1];
    goto LABEL_32;
  }
  wil::com_ptr_t<CD3DDevice,wil::err_returncode_policy>::reset(&v51);
  Device = CDeviceManager::GetDevice(v17, *a2, &v51);
  v16 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, 0LL, 0, Device, 0xD3u, 0LL);
    goto LABEL_29;
  }
  DisplayDeviceAndTarget = CDDisplayManager::GetDisplayDeviceAndTarget(
                             v19,
                             *a2,
                             a7,
                             a3,
                             (struct DDisplayTargetResources *)v49);
  v16 = DisplayDeviceAndTarget;
  if ( DisplayDeviceAndTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v21, 0LL, 0, DisplayDeviceAndTarget, 0xDAu, 0LL);
LABEL_29:
    v8 = v51;
    goto LABEL_36;
  }
  v8 = v51;
  TaskPool = CDDisplayManager::CreateTaskPool(
               v21,
               v51,
               (const struct DDisplayTargetResources *)v49,
               (struct DDisplayTaskPoolResources *)v50);
  v16 = TaskPool;
  if ( TaskPool < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v23, 0LL, 0, TaskPool, 0xE0u, 0LL);
    goto LABEL_36;
  }
  VBlankFence = CDDisplayManager::CreateVBlankFence(
                  v23,
                  v8,
                  (const struct DDisplayTargetResources *)v49,
                  (struct DDisplayVBlankFenceResources *)&v48);
  v16 = VBlankFence;
  if ( VBlankFence < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, VBlankFence, 0xE6u, 0LL);
    goto LABEL_36;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v43);
  v27 = CDDisplayManager::CreatePrimaryDescription(v26, (const struct RenderTargetInfo *)a2, a4, a5, &v43);
  v16 = v27;
  if ( v27 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v28, 0LL, 0, v27, 0xEDu, 0LL);
    goto LABEL_36;
  }
  v31 = (__int64)v44[1];
  v32 = 0;
  if ( a6 )
  {
    v33 = v43;
    while ( 1 )
    {
      v46 = 0LL;
      *(_OWORD *)&v45[1] = 0LL;
      v47 = 0;
      PrimaryBuffer = CDDisplayManager::CreatePrimaryBuffer(
                        v28,
                        v8,
                        v29,
                        v30,
                        (const struct DDisplayTargetResources *)v49,
                        v33,
                        v42,
                        (struct DDisplayPrimaryBufferResources *)&v45[1]);
      v16 = PrimaryBuffer;
      if ( PrimaryBuffer < 0 )
        break;
      if ( v9 == v31 )
      {
        std::vector<DDisplayPrimaryBufferResources>::_Emplace_reallocate<DDisplayPrimaryBufferResources>(
          (__int64 *)v44,
          v31,
          &v45[1]);
        v9 = v45[0];
        v31 = (__int64)v44[1];
      }
      else
      {
        *(_OWORD *)v31 = *(_OWORD *)&v45[1];
        *(_QWORD *)(v31 + 16) = v46;
        *(_BYTE *)(v31 + 24) = v47;
        v31 += 32LL;
        v44[1] = (DDisplayPrimaryBufferResources *)v31;
        *(_OWORD *)&v45[1] = 0uLL;
        v46 = 0LL;
      }
      DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v45[1]);
      if ( ++v32 >= a6 )
        goto LABEL_14;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, PrimaryBuffer, 0xFAu, 0LL);
    DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v45[1]);
    goto LABEL_34;
  }
LABEL_14:
  v35 = operator new(0x1F8uLL);
  if ( v35 )
  {
    v37 = CDDisplaySwapChain::CDDisplaySwapChain(
            (__int64)v35,
            (__int64)&v43,
            (__int64 *)&v51,
            (__int64)v50,
            (__int64)&v48,
            (__int64)v49,
            (__int64 *)v44,
            (__int64)v52,
            (__int64)a2);
    v8 = v51;
    v13 = (CRenderTargetBitmap *)v37;
    v9 = v45[0];
    v31 = (__int64)v44[1];
  }
  else
  {
    v13 = 0LL;
  }
  if ( !v13 )
  {
    v16 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, -2147024882, 0x109u, 0LL);
LABEL_32:
    if ( v13 )
      CRenderTargetBitmap::Release(v13);
    goto LABEL_34;
  }
  CMILCOMBase::InternalAddRef(v13);
  v38 = CDDisplaySwapChain::Initialize(v13);
  v16 = v38;
  if ( v38 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, v38, 0x10Au, 0LL);
    goto LABEL_32;
  }
  *a8 = v13;
LABEL_34:
  v40 = v44[0];
  if ( v44[0] )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(v44[0], (DDisplayPrimaryBufferResources *)v31);
    std::_Deallocate<16,0>(v40, (v9 - (_QWORD)v40) & 0xFFFFFFFFFFFFFFE0uLL);
  }
LABEL_36:
  wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v48 + 1);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v48);
  DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v49);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)v50);
  if ( v8 )
    CD3DDevice::Release(v8);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v43);
  return v16;
}
