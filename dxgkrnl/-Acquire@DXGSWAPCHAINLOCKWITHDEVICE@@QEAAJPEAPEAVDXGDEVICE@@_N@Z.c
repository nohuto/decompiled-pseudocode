/*
 * XREFs of ?Acquire@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAJPEAPEAVDXGDEVICE@@_N@Z @ 0x1C035241C
 * Callers:
 *     ?SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z @ 0x1C0355B14 (-SwapChainReleaseInternal@@YAJPEAVDXGSWAPCHAIN@@PEAU_D3DKMT_RELEASESWAPCHAIN@@PEAXDHH@Z.c)
 *     DxgkAcquireSwapChain @ 0x1C0356160 (DxgkAcquireSwapChain.c)
 *     DxgkAddSurfaceToSwapChain @ 0x1C0356760 (DxgkAddSurfaceToSwapChain.c)
 *     DxgkCreateSwapChain @ 0x1C0356B70 (DxgkCreateSwapChain.c)
 *     DxgkGetSwapChainSurfacePhysicalAddress @ 0x1C0357700 (DxgkGetSwapChainSurfacePhysicalAddress.c)
 *     DxgkRemoveSurfaceFromSwapChain @ 0x1C0358510 (DxgkRemoveSurfaceFromSwapChain.c)
 *     DxgkUnOrderedPresentSwapChain @ 0x1C0358800 (DxgkUnOrderedPresentSwapChain.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z @ 0x1C0009580 (--0COREACCESS@@QEAA@QEAVDXGADAPTER@@_N@Z.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z @ 0x1C0058164 (--4COREACCESS@@QEAAAEAV0@$$QEAV0@@Z.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ @ 0x1C0224C40 (-Release@DXGSWAPCHAINLOCKWITHDEVICE@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSWAPCHAINLOCKWITHDEVICE::Acquire(
        DXGSWAPCHAINLOCKWITHDEVICE *this,
        struct DXGDEVICE **a2,
        char a3)
{
  __int64 v5; // rcx
  __int64 v6; // rbx
  _BYTE *v8; // r14
  __int64 v9; // rcx
  __int64 v10; // rbx
  HANDLE CurrentProcessId; // rax
  struct DXGPROCESS *Current; // rax
  struct DXGPROCESS *v13; // r15
  volatile signed __int32 *v14; // r12
  int v15; // ebp
  __int64 v16; // rdx
  __int64 v17; // r13
  unsigned int v18; // eax
  __int64 v19; // r8
  int v20; // edx
  __int64 v21; // rbx
  signed __int64 v22; // rax
  signed __int64 v23; // rtt
  struct _KEVENT *v24; // r15
  __int64 v25; // rcx
  __int64 v26; // r8
  COREACCESS *v27; // rax
  __int64 v28; // rdx
  _BYTE v31[64]; // [rsp+60h] [rbp-88h] BYREF

  DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
  v6 = *((_QWORD *)this + 1);
  *((_BYTE *)this + 40) = 1;
  if ( *(_DWORD *)(v6 + 48) )
  {
    WdLogSingleEntry1(3LL, v6);
    return 3221225558LL;
  }
  v8 = (char *)this + 16;
  if ( *(_BYTE *)this == 1 )
  {
    v9 = *v8 != 0 ? 0x30 : 0;
    v10 = *(_QWORD *)(v9 + v6 + 112);
    if ( PsGetCurrentProcess(v9) != v10 )
    {
      CurrentProcessId = PsGetCurrentProcessId();
      WdLogSingleEntry2(3LL, *((_QWORD *)this + 1), CurrentProcessId);
      return 3221225506LL;
    }
  }
  Current = DXGPROCESS::GetCurrent(v5);
  v13 = Current;
  if ( a2 )
  {
    *a2 = 0LL;
    v14 = (volatile signed __int32 *)((char *)Current + 248);
    v15 = 0;
    DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 248));
    v16 = *v8 != 0 ? 0x30 : 0;
    v17 = *(unsigned int *)(v16 + *((_QWORD *)this + 1) + 96);
    v18 = (*(_DWORD *)(v16 + *((_QWORD *)this + 1) + 96) >> 6) & 0xFFFFFF;
    if ( v18 < *((_DWORD *)v13 + 74) )
    {
      v19 = *((_QWORD *)v13 + 35);
      if ( (((unsigned int)v17 >> 25) & 0x60) == (*(_BYTE *)(v19 + 16LL * v18 + 8) & 0x60)
        && (*(_DWORD *)(v19 + 16LL * v18 + 8) & 0x2000) == 0 )
      {
        v20 = *(_DWORD *)(v19 + 16LL * v18 + 8) & 0x1F;
        if ( v20 )
        {
          if ( v20 != 3 )
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v21 = 0LL;
LABEL_18:
            WdLogSingleEntry2(3LL, v17, v13);
            v15 = -1073741811;
LABEL_19:
            _InterlockedDecrement(v14 + 4);
            ExReleasePushLockSharedEx(v14, 0LL);
            KeLeaveCriticalRegion();
            if ( v21 && a3 )
            {
              DXGAUTOMUTEX::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
              v24 = *(struct _KEVENT **)(v21 + 16);
              if ( !KeReadStateEvent(v24 + 4) )
                KeWaitForSingleObject(&v24[4], Executive, 0, 0, 0LL);
              KeEnterCriticalRegion();
              if ( !ExAcquireResourceSharedLite(*(PERESOURCE *)(v21 + 136), 0) )
              {
                DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v25, (const EVENT_DESCRIPTOR *)"g", v26, 40);
                ExAcquireResourceSharedLite(*(PERESOURCE *)(v21 + 136), 1u);
                DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v21 + 16) + 16LL));
              }
              *((_BYTE *)this + 41) = 1;
              v27 = COREACCESS::COREACCESS(
                      (COREACCESS *)v31,
                      *(struct DXGADAPTER *const *)(*(_QWORD *)(v21 + 16) + 16LL));
              COREACCESS::operator=((__int64)this + 56, (__int64)v27);
              COREACCESS::~COREACCESS((COREACCESS *)v31);
              COREACCESS::AcquireShared((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56), 0LL);
              if ( *(_DWORD *)(v21 + 608) == 1 )
              {
                *((_BYTE *)this + 43) = 1;
              }
              else
              {
                COREACCESS::Release((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 56));
                v15 = -1073741130;
                WdLogSingleEntry2(3LL, v21, -1073741130LL);
              }
              DXGAUTOMUTEX::Acquire((DXGSWAPCHAINLOCKWITHDEVICE *)((char *)this + 24));
            }
            if ( v15 >= 0 )
            {
              v28 = *((_QWORD *)this + 1);
              if ( !*(_DWORD *)(v28 + 48) )
              {
                *(_QWORD *)((*v8 != 0 ? 0x30 : 0) + v28 + 104) = v21;
                *a2 = (struct DXGDEVICE *)v21;
                return (unsigned int)v15;
              }
              WdLogSingleEntry1(3LL, v28);
              v15 = -1073741738;
            }
            DXGSWAPCHAINLOCKWITHDEVICE::Release(this);
            return (unsigned int)v15;
          }
          v21 = *(_QWORD *)(v19 + 16LL * v18);
          if ( !v21 )
            goto LABEL_18;
          _m_prefetchw((const void *)(v21 + 64));
          v22 = *(_QWORD *)(v21 + 64);
          while ( v22 )
          {
            v23 = v22;
            v22 = _InterlockedCompareExchange64((volatile signed __int64 *)(v21 + 64), v22 + 1, v22);
            if ( v23 == v22 )
            {
              *((_BYTE *)this + 42) = 1;
              *((_QWORD *)this + 6) = v21;
              goto LABEL_19;
            }
          }
        }
      }
    }
    v21 = 0LL;
    goto LABEL_18;
  }
  return 0LL;
}
