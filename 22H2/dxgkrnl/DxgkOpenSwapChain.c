/*
 * XREFs of DxgkOpenSwapChain @ 0x1C02AEA40
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
 *     McTemplateK0pqdqpp_EtwWriteTransfer @ 0x1C004C280 (McTemplateK0pqdqpp_EtwWriteTransfer.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C02ABA8C (-OpenSurfaceResourcesLocalForSequentialOpener@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C02AC1E8 (-OpenSwapchainLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 */

__int64 __fastcall DxgkOpenSwapChain(ULONG64 a1, __int64 a2, __int64 a3)
{
  UINT *v4; // r14
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KTHREAD **Current; // rdi
  __int64 v12; // rax
  struct _D3DKMT_OPENSWAPCHAIN *v13; // rax
  HANDLE *v14; // r15
  HANDLE *pNtSurfaceHandles; // r13
  _BOOL8 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  SIZE_T v21; // rax
  HANDLE *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // r8
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  NTSTATUS v45; // eax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r12
  __int64 v50; // rax
  BOOL v51; // r12d
  ULONG64 v52; // r8
  _QWORD *v53; // rdx
  _DWORD *v54; // rdx
  _DWORD *v55; // rdx
  size_t SurfaceCount; // r8
  __int64 v57; // rcx
  __int64 v58; // r8
  PVOID *Object; // [rsp+20h] [rbp-1C8h]
  POBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+28h] [rbp-1C0h]
  __int64 v61; // [rsp+30h] [rbp-1B8h]
  struct DXGDEVICE *v62[2]; // [rsp+50h] [rbp-198h] BYREF
  int v63; // [rsp+60h] [rbp-188h] BYREF
  __int64 v64; // [rsp+68h] [rbp-180h]
  char v65; // [rsp+70h] [rbp-178h]
  _QWORD v66[3]; // [rsp+78h] [rbp-170h] BYREF
  struct _D3DKMT_OPENSWAPCHAIN Handle; // [rsp+90h] [rbp-158h] BYREF
  struct DXGDEVICE *v68; // [rsp+E0h] [rbp-108h] BYREF
  PVOID v69; // [rsp+E8h] [rbp-100h] BYREF
  HANDLE *v70; // [rsp+F0h] [rbp-F8h]
  BOOL v71; // [rsp+F8h] [rbp-F0h]
  ULONG64 v72; // [rsp+100h] [rbp-E8h]
  ULONG64 v73; // [rsp+108h] [rbp-E0h]
  _BYTE v74[160]; // [rsp+110h] [rbp-D8h] BYREF

  v72 = a1;
  v73 = a1;
  v63 = -1;
  v64 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v65 = 1;
    v63 = 2109;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2109);
  }
  else
  {
    v65 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v63, 2109LL);
  v4 = 0LL;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !Current )
  {
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = 660LL;
LABEL_11:
    WdLogEvent5_WdError(v12);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v17);
    if ( v65 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v63);
    }
    return -1073741811LL;
  }
  v13 = (struct _D3DKMT_OPENSWAPCHAIN *)a1;
  if ( a1 >= MmUserProbeAddress )
    v13 = (struct _D3DKMT_OPENSWAPCHAIN *)MmUserProbeAddress;
  Handle = *v13;
  v14 = 0LL;
  v70 = 0LL;
  pNtSurfaceHandles = Handle.pNtSurfaceHandles;
  v16 = Handle.SurfaceCount == 0;
  if ( v16 != (Handle.pNtSurfaceHandles == 0LL) )
  {
    v12 = WdLogNewEntry5_WdError(v16, Handle.SurfaceCount);
    *(_QWORD *)(v12 + 24) = Handle.SurfaceCount;
    *(_QWORD *)(v12 + 32) = Handle.pNtSurfaceHandles;
    goto LABEL_11;
  }
  if ( Handle.SurfaceCount )
  {
    v21 = 8LL * Handle.SurfaceCount;
    if ( !is_mul_ok(Handle.SurfaceCount, 8uLL) )
      v21 = -1LL;
    v22 = (HANDLE *)operator new[](v21, 0x4B677844u, PagedPool);
    v14 = v22;
    v70 = v22;
    if ( !v22 )
    {
      v27 = WdLogNewEntry5_WdLowResource(v24, v23, v25, v26);
      *(_QWORD *)(v27 + 24) = 690LL;
      WdLogEvent5_WdLowResource(v27);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v28);
      if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v63);
      return 3221225495LL;
    }
    Handle.pNtSurfaceHandles = v22;
  }
  v68 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)v62, Handle.hDevice, Current, &v68);
  v33 = (__int64)v68;
  if ( v68 )
  {
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66, v68);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v74, v33, 2, v38, 0);
    LODWORD(v33) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v74, 0LL);
    if ( (int)v33 < 0 )
      goto LABEL_60;
    if ( !Handle.hNtSwapChain )
    {
      if ( Handle.pObjectAttributes )
      {
        LOBYTE(v39) = 1;
        v40 = ObOpenObjectByName(
                Handle.pObjectAttributes,
                g_pDxgkSharedSwapChainObjectType,
                v39,
                0LL,
                Handle.DesiredAccess,
                0LL,
                &Handle);
        v33 = v40;
        if ( v40 < 0 )
        {
          v44 = WdLogNewEntry5_WdWarning(v42, v41, v43);
          *(_QWORD *)(v44 + 24) = v33;
LABEL_31:
          WdLogEvent5_WdWarning(v44);
LABEL_60:
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v74);
          if ( v66[0] )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v66);
          goto LABEL_62;
        }
      }
    }
    v69 = 0LL;
    v45 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &v69, 0LL);
    v49 = v45;
    LODWORD(v33) = v45;
    if ( v45 < 0 )
    {
      v44 = WdLogNewEntry5_WdWarning(v47, v46, v48);
      *(_QWORD *)(v44 + 24) = Handle.hNtSwapChain;
      *(_QWORD *)(v44 + 32) = v49;
      goto LABEL_31;
    }
    v4 = *(UINT **)v69;
    v62[1] = (struct DXGDEVICE *)v4;
    if ( v4[56] )
    {
      if ( Handle.SurfaceCount || Handle.pNtSurfaceHandles )
      {
        v50 = WdLogNewEntry5_WdError(v47, v46);
        *(_QWORD *)(v50 + 24) = 753LL;
LABEL_42:
        WdLogEvent5_WdError(v50);
        LODWORD(v33) = -1073741811;
      }
    }
    else
    {
      if ( !Handle.pNtSurfaceHandles )
      {
        Handle.SurfaceCount = v4[13];
        LODWORD(v33) = -1073741789;
LABEL_46:
        v51 = v4[56] != 0;
        v71 = v51;
        ObfDereferenceObject(v69);
        if ( (int)(v33 + 0x80000000) < 0 || (_DWORD)v33 == -1073741789 )
        {
          v52 = v72;
          v53 = (_QWORD *)v72;
          if ( v72 >= MmUserProbeAddress )
            v53 = (_QWORD *)MmUserProbeAddress;
          *v53 = Handle.hNtSwapChain;
          v54 = (_DWORD *)(v52 + 48);
          if ( v52 + 48 >= MmUserProbeAddress )
            v54 = (_DWORD *)MmUserProbeAddress;
          *v54 = Handle.SurfaceCount;
          v55 = (_DWORD *)(v52 + 64);
          if ( v52 + 64 >= MmUserProbeAddress )
            v55 = (_DWORD *)MmUserProbeAddress;
          *v55 = v51;
          if ( pNtSurfaceHandles && Handle.SurfaceCount )
          {
            SurfaceCount = Handle.SurfaceCount;
            if ( (unsigned __int64)&pNtSurfaceHandles[SurfaceCount] > MmUserProbeAddress
              || &pNtSurfaceHandles[SurfaceCount] <= pNtSurfaceHandles )
            {
              *(_BYTE *)MmUserProbeAddress = 0;
            }
            memmove(pNtSurfaceHandles, v14, SurfaceCount * 8);
          }
        }
        goto LABEL_60;
      }
      if ( Handle.SurfaceCount != v4[13] )
      {
        v50 = WdLogNewEntry5_WdError(v47, v46);
        *(_QWORD *)(v50 + 24) = Handle.SurfaceCount;
        *(_QWORD *)(v50 + 32) = v4[13];
        goto LABEL_42;
      }
    }
    if ( (int)v33 >= 0 )
    {
      LODWORD(v33) = DXGSWAPCHAIN::OpenSwapchainLocal(
                       (DXGSWAPCHAIN *)v4,
                       Handle.hDevice,
                       v68,
                       Handle.BufferAvailableEvent,
                       Handle.bFailAcquireIfSurfaceBusy,
                       Handle.bProducer);
      if ( (int)v33 >= 0 )
      {
        v4[16] = Handle.DesiredAccessTextures;
        LODWORD(v33) = DXGSWAPCHAIN::OpenSurfaceResourcesLocalForSequentialOpener((DXGSWAPCHAIN *)v4, &Handle);
      }
    }
    goto LABEL_46;
  }
  v34 = WdLogNewEntry5_WdError(v32, v31);
  *(_QWORD *)(v34 + 24) = Handle.hDevice;
  LODWORD(v33) = -1073741811;
  *(_QWORD *)(v34 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v34);
LABEL_62:
  if ( v62[0] )
  {
    v36 = _InterlockedDecrement64((volatile signed __int64 *)v62[0] + 8);
    if ( !v36 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v62[0] + 2), v62[0]);
  }
  if ( v14 )
    operator delete[](v14);
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
  {
    LODWORD(v61) = Handle.hDevice;
    LODWORD(HandleInformation) = Handle.bProducer;
    LODWORD(Object) = v33;
    McTemplateK0pqdqpp_EtwWriteTransfer(
      v36,
      v35,
      v37,
      v4,
      Object,
      HandleInformation,
      v61,
      Handle.BufferAvailableEvent,
      Handle.hNtSwapChain);
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v63, v35);
  if ( v65 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v63);
  return (unsigned int)v33;
}
