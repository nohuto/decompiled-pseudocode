/*
 * XREFs of DxgkCreateSwapChain @ 0x1C02ADFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C00088C4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ??_GDXGSWAPCHAIN@@QEAAPEAXI@Z @ 0x1C004BC48 (--_GDXGSWAPCHAIN@@QEAAPEAXI@Z.c)
 *     McTemplateK0pqdqqpp_EtwWriteTransfer @ 0x1C004C340 (McTemplateK0pqdqqpp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGSWAPCHAIN@@QEAA@XZ @ 0x1C02A9FEC (--0DXGSWAPCHAIN@@QEAA@XZ.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C02AA0A8 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C02AA118 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C02AA14C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 *     ?AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z @ 0x1C02AA7D0 (-AddSurface@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@HPEAXPEAI@Z.c)
 *     ?InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C02AB590 (-InitializeSwapchainGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHA.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02AC1E8 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkCreateSwapChain(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG64 v3; // r13
  DXGSWAPCHAIN *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **Current; // r14
  __int64 v12; // rax
  _D3DKMT_CREATESWAPCHAIN *v13; // rax
  char v14; // r12
  __int64 SurfaceCount; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  PVOID v20; // r15
  __int64 v21; // rdi
  SIZE_T v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  HANDLE *pNtSurfaceHandles; // rdx
  HANDLE *v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  struct ADAPTER_RENDER **v35; // r14
  __int64 v36; // rax
  __int64 v37; // rdi
  ULONG64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  DXGSWAPCHAIN *v42; // rax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  int v48; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  int v52; // r14d
  struct DXGDEVICE *v53; // r13
  __int64 v54; // r9
  __int64 v55; // rcx
  int v56; // eax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  NTSTATUS inserted; // eax
  __int64 v61; // rcx
  __int64 v62; // r8
  PVOID *NewObject; // [rsp+20h] [rbp-248h]
  PHANDLE Handle; // [rsp+28h] [rbp-240h]
  __int64 v65; // [rsp+30h] [rbp-238h]
  __int64 v66; // [rsp+38h] [rbp-230h]
  char v67; // [rsp+50h] [rbp-218h]
  struct DXGDEVICE *v68; // [rsp+58h] [rbp-210h] BYREF
  int v69; // [rsp+60h] [rbp-208h] BYREF
  __int64 v70; // [rsp+68h] [rbp-200h]
  char v71; // [rsp+70h] [rbp-1F8h]
  __int64 v72; // [rsp+78h] [rbp-1F0h]
  _QWORD v73[3]; // [rsp+80h] [rbp-1E8h] BYREF
  HANDLE v74; // [rsp+98h] [rbp-1D0h] BYREF
  _D3DKMT_CREATESWAPCHAIN v75; // [rsp+A0h] [rbp-1C8h] BYREF
  PVOID Object; // [rsp+D8h] [rbp-190h] BYREF
  void *v77; // [rsp+E0h] [rbp-188h]
  struct DXGDEVICE *v78; // [rsp+E8h] [rbp-180h] BYREF
  struct DXGDEVICE *v79; // [rsp+F0h] [rbp-178h] BYREF
  unsigned int v80; // [rsp+F8h] [rbp-170h] BYREF
  ULONG64 v81; // [rsp+100h] [rbp-168h]
  _BYTE v82[160]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v83[128]; // [rsp+1B0h] [rbp-B8h] BYREF

  v3 = a1;
  v81 = a1;
  v72 = a1;
  v69 = -1;
  v70 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v71 = 1;
    v69 = 2108;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2108);
  }
  else
  {
    v71 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v69, 2108LL);
  v4 = 0LL;
  v67 = 0;
  Object = 0LL;
  v74 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 426LL;
LABEL_18:
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v16);
    if ( v71 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v69);
    }
    return -1073741811LL;
  }
  v13 = (_D3DKMT_CREATESWAPCHAIN *)v3;
  if ( v3 >= MmUserProbeAddress )
    v13 = (_D3DKMT_CREATESWAPCHAIN *)MmUserProbeAddress;
  v75 = *v13;
  v14 = (char)v75.Flags.0;
  if ( (*(_BYTE *)&v75.Flags.0 & 2) != 0 )
  {
    if ( v75.SurfaceCount )
    {
      v12 = WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
      *(_QWORD *)(v12 + 24) = 449LL;
      goto LABEL_18;
    }
    if ( !v75.bProducer )
    {
      v12 = WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
      *(_QWORD *)(v12 + 24) = 456LL;
      goto LABEL_18;
    }
  }
  else
  {
    SurfaceCount = v75.SurfaceCount;
    if ( v75.SurfaceCount > 0x32 )
    {
      v12 = WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
      *(_QWORD *)(v12 + 24) = SurfaceCount;
      goto LABEL_18;
    }
    if ( !v75.SurfaceCount )
    {
      v12 = WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
      *(_QWORD *)(v12 + 24) = 470LL;
      goto LABEL_18;
    }
  }
  v20 = 0LL;
  v77 = 0LL;
  v21 = v75.SurfaceCount;
  if ( v75.SurfaceCount )
  {
    v22 = 8LL * v75.SurfaceCount;
    if ( !is_mul_ok(v75.SurfaceCount, 8uLL) )
      v22 = -1LL;
    v20 = operator new[](v22, 0x4B677844u, PagedPool);
    v77 = v20;
    if ( !v20 )
    {
      v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = 482LL;
      WdLogEvent5_WdLowResource(v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v28);
      if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v69);
      return 3221225495LL;
    }
    pNtSurfaceHandles = v75.pNtSurfaceHandles;
    v32 = &v75.pNtSurfaceHandles[v21];
    if ( v32 < v75.pNtSurfaceHandles || (unsigned __int64)v32 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, pNtSurfaceHandles, 8 * v21);
    v75.pNtSurfaceHandles = (HANDLE *)v20;
  }
  v79 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, v75.hDevice, Current, &v79);
  v35 = (struct ADAPTER_RENDER **)v79;
  if ( !v79 )
  {
    v36 = WdLogNewEntry5_WdError(v34, v33);
    *(_QWORD *)(v36 + 24) = v75.hDevice;
    LODWORD(v37) = -1073741811;
    *(_QWORD *)(v36 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v36);
LABEL_36:
    if ( v68 )
    {
      v38 = -1LL;
      v39 = _InterlockedDecrement64((volatile signed __int64 *)v68 + 8);
      if ( !v39 )
        ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
    }
    goto LABEL_68;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73, v79);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v82, (__int64)v35, 2, v41, 0);
  LODWORD(v37) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v82, 0LL);
  if ( (int)v37 < 0 )
    goto LABEL_40;
  v42 = (DXGSWAPCHAIN *)operator new[](0xE8uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v42 )
    v4 = DXGSWAPCHAIN::DXGSWAPCHAIN(v42);
  else
    v4 = 0LL;
  v73[2] = v4;
  if ( !v4 )
  {
    v47 = WdLogNewEntry5_WdLowResource(v44, v43, v45, v46);
    *(_QWORD *)(v47 + 24) = 522LL;
    WdLogEvent5_WdLowResource(v47);
    LODWORD(v37) = -1073741801;
    goto LABEL_40;
  }
  LODWORD(v37) = DXGSWAPCHAIN::InitializeSwapchainGlobalState(v4, v35[2], &v75);
  if ( (int)v37 < 0
    || (LODWORD(v37) = DXGSWAPCHAIN::OpenSwapchainLocal(
                         v4,
                         v75.hDevice,
                         (struct DXGDEVICE *)v35,
                         v75.BufferAvailableEvent,
                         v14 & 1,
                         v75.bProducer),
        (int)v37 < 0) )
  {
LABEL_40:
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
    if ( v73[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
    goto LABEL_36;
  }
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v82);
  if ( v73[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v73);
  if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
  v78 = 0LL;
  DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v83, v4, v75.bProducer, 1);
  v48 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v83, &v78, 1);
  v37 = v48;
  if ( v48 >= 0 )
  {
    v52 = 0;
    if ( !v75.SurfaceCount )
    {
LABEL_62:
      DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v83);
      LOBYTE(v54) = 1;
      LOBYTE(v55) = 1;
      v56 = ObCreateObject(v55, g_pDxgkSharedSwapChainObjectType, v75.pObjectAttributes, v54, 0LL, 8, 240, 0, &Object);
      v37 = v56;
      if ( v56 < 0
        || (*(_QWORD *)Object = v4,
            v67 = 1,
            inserted = ObInsertObject(Object, 0LL, v75.DesiredAccess, 0, 0LL, &v74),
            v37 = inserted,
            inserted < 0) )
      {
        v59 = WdLogNewEntry5_WdError(v58, v57);
        *(_QWORD *)(v59 + 24) = v37;
        WdLogEvent5_WdError(v59);
      }
      else
      {
        v38 = v3 + 48;
        v39 = MmUserProbeAddress;
        if ( v3 + 48 >= MmUserProbeAddress )
          v38 = MmUserProbeAddress;
        *(_QWORD *)v38 = v74;
      }
      goto LABEL_68;
    }
    v53 = v78;
    while ( 1 )
    {
      LODWORD(v37) = DXGSWAPCHAIN::AddSurface(
                       (const void **)v4,
                       *((DXGADAPTER ***)v53 + 2),
                       v75.bProducer,
                       v75.pNtSurfaceHandles[v52],
                       &v80);
      if ( (int)v37 < 0 )
        break;
      if ( ++v52 >= v75.SurfaceCount )
      {
        v3 = v81;
        goto LABEL_62;
      }
    }
  }
  else
  {
    v51 = WdLogNewEntry5_WdError(v50, v49);
    *(_QWORD *)(v51 + 24) = v37;
    WdLogEvent5_WdError(v51);
  }
  DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v83);
LABEL_68:
  if ( (int)v37 < 0 )
  {
    v39 = (__int64)v74;
    if ( v74 )
      ObCloseHandle(v74, 1);
    if ( v4 && !v67 )
    {
      DXGSWAPCHAIN::`scalar deleting destructor'(v4);
      v4 = 0LL;
    }
  }
  if ( v20 )
    operator delete[](v20);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
  {
    LODWORD(v66) = v75.SurfaceCount;
    LODWORD(v65) = v75.hDevice;
    LODWORD(Handle) = v75.bProducer;
    LODWORD(NewObject) = v37;
    McTemplateK0pqdqqpp_EtwWriteTransfer(v39, v38, v40, v4, NewObject, Handle, v65, v66, v75.BufferAvailableEvent, v74);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v69, v38);
  if ( v71 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v61, &EventProfilerExit, v62, v69);
  return (unsigned int)v37;
}
