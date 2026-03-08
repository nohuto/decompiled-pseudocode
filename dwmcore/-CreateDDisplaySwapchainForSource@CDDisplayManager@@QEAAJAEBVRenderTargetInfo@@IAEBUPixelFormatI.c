/*
 * XREFs of ?CreateDDisplaySwapchainForSource@CDDisplayManager@@QEAAJAEBVRenderTargetInfo@@IAEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@IPEAXPEAPEAVCDDisplaySwapChain@@@Z @ 0x1802904A8
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801E63B4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180004700 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ?Release@CD3DDevice@@UEAAKXZ @ 0x180034A40 (-Release@CD3DDevice@@UEAAKXZ.c)
 *     ?GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z @ 0x18003D644 (-GetDevice@CDeviceManager@@QEAAJU_LUID@@PEAPEAVCD3DDevice@@@Z.c)
 *     ?AddReference@CMILRefCountImpl@@IEAAKXZ @ 0x18007B984 (-AddReference@CMILRefCountImpl@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800E18AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800FF6C0 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ @ 0x180102C1C (-InternalRelease@CMILCOMBaseWeakRef@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrimaryBufferResources@@QEAU1@AEAV?$allocator@UDDisplayPrimaryBufferResources@@@0@@Z @ 0x180284A6C (--$_Destroy_range@V-$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@YAXPEAUDDisplayPrima.c)
 *     ??1DDisplayPrimaryBufferResources@@QEAA@XZ @ 0x1802853A4 (--1DDisplayPrimaryBufferResources@@QEAA@XZ.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x1802853FC (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x180285484 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ?Initialize@CDDisplaySwapChain@@IEAAJXZ @ 0x180287488 (-Initialize@CDDisplaySwapChain@@IEAAJXZ.c)
 *     ??$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@QEAAPEAUDDisplayPrimaryBufferResources@@QEAU2@$$QEAU2@@Z @ 0x18028DF20 (--$_Emplace_reallocate@UDDisplayPrimaryBufferResources@@@-$vector@UDDisplayPrimaryBufferResource.c)
 *     ??0CDDisplaySwapChain@@IEAA@AEAV?$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Windows@@Uerr_returncode_policy@wil@@@wil@@AEAV?$com_ptr_t@VCD3DDevice@@Uerr_returncode_policy@wil@@@2@AEAUDDisplayTaskPoolResources@@AEAUDDisplayTargetResources@@AEAV?$vector@UDDisplayPrimaryBufferResources@@V?$allocator@UDDisplayPrimaryBufferResources@@@std@@@std@@AEBUPixelFormatInfo@@AEBVRenderTargetInfo@@@Z @ 0x18028E800 (--0CDDisplaySwapChain@@IEAA@AEAV-$com_ptr_t@UIDisplayPrimaryDescription@Core@Display@Devices@Win.c)
 *     ?CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTargetResources@@PEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@IPEAUDDisplayPrimaryBufferResources@@@Z @ 0x1802909A4 (-CreatePrimaryBuffer@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUD2D_SIZE_U@@_NAEBUDDisplayTarget.c)
 *     ?CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBUD2D_SIZE_U@@PEAPEAUIDisplayPrimaryDescription@Core@Display@Devices@Windows@@@Z @ 0x180290B44 (-CreatePrimaryDescription@CDDisplayManager@@AEAAJAEBVRenderTargetInfo@@AEBUPixelFormatInfo@@AEBU.c)
 *     ?CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplayTaskPoolResources@@@Z @ 0x180290E18 (-CreateTaskPool@CDDisplayManager@@AEAAJPEAVCD3DDevice@@AEBUDDisplayTargetResources@@PEAUDDisplay.c)
 *     ?EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ @ 0x180291070 (-EnsureDDisplayManager@CDDisplayManager@@QEAAJXZ.c)
 *     ?GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z @ 0x180291B70 (-GetDisplayDeviceAndTarget@CDDisplayManager@@AEAAJU_LUID@@PEAXIPEAUDDisplayTargetResources@@@Z.c)
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
  int v8; // r14d
  struct CD3DDevice *v9; // rbx
  int TaskPool; // eax
  CDDisplayManager *v14; // rcx
  unsigned int v15; // esi
  int Device; // eax
  CDDisplayManager *v17; // rcx
  int DisplayDeviceAndTarget; // eax
  CDDisplayManager *v19; // rcx
  CDDisplayManager *v20; // rcx
  const struct D2D_SIZE_U *v21; // r8
  bool v22; // r9
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v23; // rdi
  int PrimaryBuffer; // eax
  __int64 v25; // rcx
  DDisplayPrimaryBufferResources *v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  LPVOID v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdi
  int v34; // eax
  __int64 v35; // rcx
  DDisplayPrimaryBufferResources *v36; // rdi
  unsigned int v38; // [rsp+28h] [rbp-E0h]
  unsigned int v39; // [rsp+38h] [rbp-D0h]
  struct Windows::Devices::Display::Core::IDisplayPrimaryDescription *v40; // [rsp+58h] [rbp-B0h] BYREF
  DDisplayPrimaryBufferResources *v41[2]; // [rsp+60h] [rbp-A8h] BYREF
  DDisplayPrimaryBufferResources *v42; // [rsp+70h] [rbp-98h]
  __int128 v43; // [rsp+78h] [rbp-90h] BYREF
  __int64 v44; // [rsp+88h] [rbp-80h]
  char v45; // [rsp+90h] [rbp-78h]
  int v46[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v47; // [rsp+A8h] [rbp-60h]
  __int64 v48[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v49; // [rsp+C8h] [rbp-40h]
  __int128 v50; // [rsp+D8h] [rbp-30h]
  __int128 v51; // [rsp+E8h] [rbp-20h]
  __int128 v52; // [rsp+F8h] [rbp-10h]
  int v53; // [rsp+108h] [rbp+0h]
  int v54; // [rsp+10Ch] [rbp+4h]
  CD3DDevice *v55; // [rsp+148h] [rbp+40h] BYREF

  v8 = 0;
  *(_OWORD *)v48 = 0LL;
  v40 = 0LL;
  v9 = 0LL;
  v49 = 0LL;
  v55 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  *(_OWORD *)v46 = 0LL;
  v53 = -1;
  v47 = 0LL;
  v54 = -1;
  v52 = 0LL;
  *(_OWORD *)v41 = 0LL;
  v42 = 0LL;
  TaskPool = CDDisplayManager::EnsureDDisplayManager(this);
  v15 = TaskPool;
  if ( TaskPool < 0 )
  {
    v38 = 357;
    goto LABEL_26;
  }
  Device = CDeviceManager::GetDevice((CDeviceManager *)&g_DeviceManager, *a2, &v55);
  v15 = Device;
  if ( Device < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v17, 0LL, 0, Device, 0x16Au, 0LL);
    goto LABEL_23;
  }
  DisplayDeviceAndTarget = CDDisplayManager::GetDisplayDeviceAndTarget(
                             v17,
                             *a2,
                             a7,
                             a3,
                             (struct DDisplayTargetResources *)v48);
  v15 = DisplayDeviceAndTarget;
  if ( DisplayDeviceAndTarget < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v19, 0LL, 0, DisplayDeviceAndTarget, 0x171u, 0LL);
LABEL_23:
    v9 = v55;
    goto LABEL_27;
  }
  v9 = v55;
  TaskPool = CDDisplayManager::CreateTaskPool(
               v19,
               v55,
               (const struct DDisplayTargetResources *)v48,
               (struct DDisplayTaskPoolResources *)v46);
  v15 = TaskPool;
  if ( TaskPool < 0 )
  {
    v38 = 375;
    goto LABEL_26;
  }
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&v40);
  TaskPool = CDDisplayManager::CreatePrimaryDescription(v20, (const struct RenderTargetInfo *)a2, a4, a5, &v40);
  v15 = TaskPool;
  if ( TaskPool < 0 )
  {
    v38 = 382;
LABEL_26:
    MilInstrumentationCheckHR_MaybeFailFast((__int64)v14, 0LL, 0, TaskPool, v38, 0LL);
    goto LABEL_27;
  }
  if ( a6 )
  {
    v23 = v40;
    while ( 1 )
    {
      v44 = 0LL;
      v43 = 0LL;
      v45 = 0;
      PrimaryBuffer = CDDisplayManager::CreatePrimaryBuffer(
                        v14,
                        v9,
                        v21,
                        v22,
                        (const struct DDisplayTargetResources *)v48,
                        v23,
                        v39,
                        (struct DDisplayPrimaryBufferResources *)&v43);
      v15 = PrimaryBuffer;
      if ( PrimaryBuffer < 0 )
        break;
      v26 = v41[1];
      if ( v41[1] == v42 )
      {
        std::vector<DDisplayPrimaryBufferResources>::_Emplace_reallocate<DDisplayPrimaryBufferResources>(
          (__int64 *)v41,
          (__int64)v41[1],
          (__int64 *)&v43);
      }
      else
      {
        v27 = v43;
        *(_QWORD *)&v43 = 0LL;
        *(_QWORD *)v41[1] = v27;
        v28 = *((_QWORD *)&v43 + 1);
        *((_QWORD *)&v43 + 1) = 0LL;
        *((_QWORD *)v26 + 1) = v28;
        v29 = v44;
        v44 = 0LL;
        v41[1] = (DDisplayPrimaryBufferResources *)((char *)v41[1] + 32);
        *((_QWORD *)v26 + 2) = v29;
        *((_BYTE *)v26 + 24) = v45;
      }
      DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v43);
      if ( ++v8 >= a6 )
        goto LABEL_13;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, PrimaryBuffer, 0x18Bu, 0LL);
    DDisplayPrimaryBufferResources::~DDisplayPrimaryBufferResources((DDisplayPrimaryBufferResources *)&v43);
  }
  else
  {
LABEL_13:
    v30 = operator new(0x258uLL);
    if ( v30
      && (v32 = CDDisplaySwapChain::CDDisplaySwapChain(
                  (__int64)v30,
                  (__int64 *)&v40,
                  &v55,
                  (__int64)v46,
                  (__int64)v48,
                  (__int64 *)v41,
                  (__int64)a4,
                  (struct RenderTargetInfo *)a2),
          (v33 = v32) != 0) )
    {
      CMILRefCountImpl::AddReference((CMILRefCountImpl *)(v32 + 24));
      v34 = CDDisplaySwapChain::Initialize((CDDisplaySwapChain *)v33);
      v15 = v34;
      if ( v34 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, v34, 0x19Au, 0LL);
        CMILCOMBaseWeakRef::InternalRelease((CMILCOMBaseWeakRef *)(v33 + 16));
      }
      else
      {
        *a8 = (struct CDDisplaySwapChain *)v33;
      }
    }
    else
    {
      v15 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v31, 0LL, 0, -2147024882, 0x199u, 0LL);
    }
  }
LABEL_27:
  v36 = v41[0];
  if ( v41[0] )
  {
    std::_Destroy_range<std::allocator<DDisplayPrimaryBufferResources>>(v41[0], v41[1]);
    std::_Deallocate<16,0>(v36, (v42 - v36) & 0xFFFFFFFFFFFFFFE0uLL);
  }
  DDisplayTargetResources::~DDisplayTargetResources((DDisplayTargetResources *)v48);
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((DDisplayTaskPoolResources *)v46);
  if ( v9 )
    CD3DDevice::Release(v9);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v40);
  return v15;
}
