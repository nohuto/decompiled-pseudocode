/*
 * XREFs of DxgkAcquireSwapChain @ 0x1C0356160
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z @ 0x1C02247B4 (-AcquireBuffer@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_ACQUIRESWAPCHAIN@@PEAI@Z.c)
 *     ??0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z @ 0x1C0352378 (--0DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@PEAVDXGSWAPCHAIN@@_ND@Z.c)
 *     ??1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ @ 0x1C03523E8 (--1DXGSWAPCHAINLOCKWITHDEVICE@@QEAA@XZ.c)
 *     ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C035241C (-Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z.c)
 */

__int64 __fastcall DxgkAcquireSwapChain(struct DXGDEVICE *a1, __int64 a2, __int64 a3)
{
  char *v4; // r15
  void *v5; // rsi
  ULONG64 v6; // rax
  __int64 OpenerAcquiredSurfaceHandle_low; // rbx
  const wchar_t *v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  NTSTATUS v16; // eax
  int v17; // ebx
  struct _KTHREAD ***v18; // r14
  struct DXGSWAPCHAIN *v19; // r12
  int v20; // eax
  _DWORD *v21; // rdx
  _QWORD *v22; // rdx
  _DWORD *v23; // rdx
  _DWORD *v24; // rdx
  __int64 v25; // r8
  _QWORD *v26; // rdx
  _QWORD *v27; // rdx
  size_t v28; // r8
  __int64 v29; // rcx
  __int64 v30; // r8
  int v31; // [rsp+50h] [rbp-168h] BYREF
  __int64 v32; // [rsp+58h] [rbp-160h]
  char v33; // [rsp+60h] [rbp-158h]
  PVOID Object; // [rsp+68h] [rbp-150h] BYREF
  __int64 v35; // [rsp+70h] [rbp-148h]
  struct DXGDEVICE *v36[3]; // [rsp+78h] [rbp-140h] BYREF
  struct _D3DKMT_ACQUIRESWAPCHAIN Handle; // [rsp+90h] [rbp-128h] BYREF
  __int128 v38; // [rsp+E0h] [rbp-D8h]
  __int64 v39; // [rsp+F0h] [rbp-C8h]
  _BYTE v40[128]; // [rsp+100h] [rbp-B8h] BYREF

  v36[1] = a1;
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v33 = 1;
    v31 = 2111;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2111);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 2111);
  v4 = 0LL;
  v5 = 0LL;
  v35 = 0LL;
  v6 = (ULONG64)a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  Handle = *(struct _D3DKMT_ACQUIRESWAPCHAIN *)v6;
  v38 = *(_OWORD *)(v6 + 80);
  v39 = *(_QWORD *)(v6 + 96);
  if ( Handle.bReleaseBeforeAcquire && Handle.bProducer != Handle.ReleaseInfo.bProducer )
  {
    OpenerAcquiredSurfaceHandle_low = 1097LL;
    WdLogSingleEntry1(2LL, 1097LL);
    v8 = L"Inconsistent bProducer value between acquire and release";
LABEL_15:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, OpenerAcquiredSurfaceHandle_low, 0LL, 0LL, 0LL, 0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
    if ( v33 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, &EventProfilerExit, v10, v31);
    }
    return 3221225485LL;
  }
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) > 0x32 )
  {
    OpenerAcquiredSurfaceHandle_low = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
    WdLogSingleEntry1(2LL, LODWORD(Handle.OpenerAcquiredSurfaceHandle));
    v8 = L"Caller specified 0x%I64x deferred list size, this is over the maximum";
    goto LABEL_15;
  }
  if ( LODWORD(Handle.OpenerAcquiredSurfaceHandle) )
  {
    v4 = *(char **)&Handle.AcquireMetadataSize;
    if ( !*(_QWORD *)&Handle.AcquireMetadataSize )
    {
      OpenerAcquiredSurfaceHandle_low = 1112LL;
      WdLogSingleEntry1(2LL, 1112LL);
      v8 = L"Caller specified non-zero free list size but failed to provide buffer";
      goto LABEL_15;
    }
    v12 = 4LL * LODWORD(Handle.OpenerAcquiredSurfaceHandle);
    if ( !is_mul_ok(LODWORD(Handle.OpenerAcquiredSurfaceHandle), 4uLL) )
      v12 = -1LL;
    v13 = operator new[](v12, 0x4B677844u, 256LL);
    v5 = (void *)v13;
    v35 = v13;
    if ( !v13 )
    {
      WdLogSingleEntry1(6LL, 1119LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate deferred list",
        1119LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
      if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v14, &EventProfilerExit, v15, v31);
      return 3221225495LL;
    }
    *(_QWORD *)&Handle.AcquireMetadataSize = v13;
  }
  Object = 0LL;
  v16 = ObReferenceObjectByHandle(Handle.hNtSwapChain, 0x20000u, g_pDxgkSharedSwapChainObjectType, 1, &Object, 0LL);
  v17 = v16;
  if ( v16 >= 0 )
  {
    v18 = (struct _KTHREAD ***)Object;
    v19 = *(struct DXGSWAPCHAIN **)Object;
    v36[0] = 0LL;
    DXGSWAPCHAINLOCKWITHDEVICE::DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v40, v19, Handle.bProducer, 1);
    v17 = DXGSWAPCHAINLOCKWITHDEVICE::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)v40, v36, 1);
    if ( v17 >= 0 )
    {
      if ( *((_DWORD *)v19 + 58) && Handle.bProducer )
      {
        WdLogSingleEntry1(2LL, 1202LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"DxgkAcquireSwapChain is not allowed for non-sequential swapchain producer",
          1202LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v17 = -1073741637;
      }
      else
      {
        v20 = DXGSWAPCHAIN::AcquireBuffer(*v18, &Handle, 0LL);
        v17 = v20;
        if ( v20 >= 0 && v20 != 259 )
        {
          v21 = (_DWORD *)((char *)a1 + 80);
          if ( (unsigned __int64)a1 + 80 >= MmUserProbeAddress )
            v21 = (_DWORD *)MmUserProbeAddress;
          *v21 = v38;
          v22 = (_QWORD *)((char *)a1 + 88);
          if ( (unsigned __int64)a1 + 88 >= MmUserProbeAddress )
            v22 = (_QWORD *)MmUserProbeAddress;
          *v22 = *((_QWORD *)&v38 + 1);
          v23 = (_DWORD *)((char *)a1 + 96);
          if ( (unsigned __int64)a1 + 96 >= MmUserProbeAddress )
            v23 = (_DWORD *)MmUserProbeAddress;
          *v23 = v39;
          v24 = (_DWORD *)((char *)a1 + 64);
          if ( (unsigned __int64)a1 + 64 >= MmUserProbeAddress )
            v24 = (_DWORD *)MmUserProbeAddress;
          v25 = LODWORD(Handle.OpenerAcquiredSurfaceHandle);
          *v24 = Handle.OpenerAcquiredSurfaceHandle;
          if ( Handle.ReleaseInfo.pMetaData )
          {
            v26 = (_QWORD *)((char *)a1 + 32);
            if ( (unsigned __int64)a1 + 32 >= MmUserProbeAddress )
              v26 = (_QWORD *)MmUserProbeAddress;
            *v26 = Handle.ReleaseInfo.pMetaData;
            v27 = (_QWORD *)((char *)a1 + 40);
            if ( (unsigned __int64)a1 + 40 >= MmUserProbeAddress )
              v27 = (_QWORD *)MmUserProbeAddress;
            *v27 = *(_QWORD *)&Handle.ReleaseInfo.DeferredFreeListSize;
          }
          if ( (_DWORD)v25 )
          {
            v28 = 4 * v25;
            if ( (unsigned __int64)&v4[v28] > MmUserProbeAddress || &v4[v28] <= v4 )
              *(_BYTE *)MmUserProbeAddress = 0;
            memmove(v4, *(const void **)&Handle.AcquireMetadataSize, v28);
          }
        }
      }
    }
    DXGSWAPCHAINLOCKWITHDEVICE::~DXGSWAPCHAINLOCKWITHDEVICE((DXGSWAPCHAINLOCKWITHDEVICE *)v40);
  }
  else
  {
    WdLogSingleEntry2(3LL, Handle.hNtSwapChain, v16);
    v18 = (struct _KTHREAD ***)Object;
  }
  if ( v18 )
    ObfDereferenceObject(v18);
  if ( v5 )
    operator delete(v5);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v31);
  return (unsigned int)v17;
}
