/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C01B1C68
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C01DD1F0 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C01DF030 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0375F20 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0006AF0 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C000B190 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C017B878 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C01B530C (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C01DAD68 (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  __int64 v5; // rcx
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v7; // rax
  __int128 v8; // xmm1
  __int64 v9; // xmm0_8
  struct DXGDEVICE *v10; // r13
  __int64 v11; // r11
  unsigned int v12; // r9d
  __int64 v13; // r8
  unsigned int v14; // eax
  unsigned int v15; // edx
  unsigned int v16; // ebx
  unsigned int v17; // r9d
  ADAPTER_RENDER *v18; // r10
  __int64 v19; // r11
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v20; // ecx
  void *v21; // r15
  void *v22; // rbx
  unsigned int v23; // r12d
  __int64 v24; // r9
  int v25; // r13d
  ULONG64 v26; // rcx
  unsigned int v27; // r9d
  unsigned int v28; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v29; // ecx
  unsigned int v30; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v36; // rcx
  __int64 v37; // r8
  bool v38; // sf
  __int64 v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  struct DXGDEVICE *v43; // [rsp+50h] [rbp-178h] BYREF
  int v44; // [rsp+58h] [rbp-170h] BYREF
  __int64 v45; // [rsp+60h] [rbp-168h]
  char v46; // [rsp+68h] [rbp-160h]
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v47; // [rsp+70h] [rbp-158h]
  struct _D3DDDI_CREATECONTEXTFLAGS v48; // [rsp+78h] [rbp-150h]
  unsigned int v49; // [rsp+7Ch] [rbp-14Ch]
  struct DXGCONTEXT *v50; // [rsp+80h] [rbp-148h] BYREF
  unsigned int v51; // [rsp+88h] [rbp-140h]
  unsigned int v52; // [rsp+8Ch] [rbp-13Ch]
  DXGDEVICE *v53; // [rsp+90h] [rbp-138h]
  struct DXGDEVICE *v54; // [rsp+98h] [rbp-130h] BYREF
  void *v55; // [rsp+A0h] [rbp-128h]
  unsigned int v56[4]; // [rsp+A8h] [rbp-120h]
  void *Src[2]; // [rsp+B8h] [rbp-110h]
  __int64 v58; // [rsp+C8h] [rbp-100h]
  _QWORD v59[2]; // [rsp+D0h] [rbp-F8h] BYREF
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v60; // [rsp+E0h] [rbp-E8h]
  __int64 v61; // [rsp+E8h] [rbp-E0h]
  _BYTE v62[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v60 = a1;
  v47 = a1;
  v44 = -1;
  v45 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v46 = 1;
    v44 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v46 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v44, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
  if ( !Current )
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_60:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( !v46 )
      return 3221225485LL;
    v38 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_79:
    if ( v38 )
      McTemplateK0q_EtwWriteTransfer(v36, &EventProfilerExit, v37, v44);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v7 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v7 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)v56 = *(_OWORD *)&v7->hDevice;
    v8 = *(_OWORD *)&v7->pPrivateDriverData;
    v9 = *(_QWORD *)&v7->hContext;
  }
  else
  {
    *(_OWORD *)v56 = *(_OWORD *)&a1->hDevice;
    v8 = *(_OWORD *)&a1->pPrivateDriverData;
    v9 = *(_QWORD *)&a1->hContext;
  }
  v58 = v9;
  *(_OWORD *)Src = v8;
  if ( (v56[3] & 0x20) != 0 && !g_OSTestSigningEnabled )
  {
    WdLogSingleEntry1(2LL, 251LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"NoKmdAccess can be used only with testsigning",
      251LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_60;
  }
  v54 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v43, v56[0], Current, &v54);
  v10 = v54;
  v53 = v54;
  if ( !v54 )
  {
    v39 = v56[0];
    WdLogSingleEntry2(2LL, v56[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v39,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_66:
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    goto LABEL_60;
  }
  v11 = *(_QWORD *)(*((_QWORD *)v54 + 2) + 16LL);
  v12 = 0;
  v13 = v56[2];
  v49 = v56[2];
  v14 = v56[2];
  while ( 1 )
  {
    v14 >>= 1;
    if ( !v14 )
      break;
    ++v12;
  }
  if ( v12 >= *(_DWORD *)(v11 + 288) )
    goto LABEL_70;
  v15 = *(unsigned __int16 *)(344LL * v12 + *(_QWORD *)(v11 + 2808));
  v16 = v56[1];
  LODWORD(v50) = v56[1];
  if ( v56[1] >= v15 )
  {
    v40 = v56[1];
    goto LABEL_72;
  }
  if ( GetBitCount(v56[2]) > 1 )
  {
LABEL_70:
    v40 = v13;
LABEL_72:
    WdLogSingleEntry2(3LL, v40, -1073741811LL);
    goto LABEL_66;
  }
  v20 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v56[3];
  v48.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v56[3];
  if ( (v56[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v19 + 2284) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v18, v17, v16) )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, 303LL);
      goto LABEL_66;
    }
    v20 = v48.0;
  }
  v51 = *(_DWORD *)(v19 + 2096);
  v52 = v51;
  if ( v51 >= 0x7008 && (*(_DWORD *)&v20 & 0xFFFFFFC0) != 0 )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 313LL);
    goto LABEL_66;
  }
  v21 = 0LL;
  v55 = 0LL;
  v22 = Src[0];
  v23 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_24;
LABEL_74:
    WdLogSingleEntry3(3LL, Src[0], LODWORD(Src[1]), -1073741811LL);
    if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( !v46 )
      return 3221225485LL;
    LOBYTE(v36) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v38 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_79;
  }
  if ( LODWORD(Src[1]) )
    goto LABEL_74;
LABEL_24:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59, v10);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v62, (__int64)v10, 0, v24, 0);
  v25 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v62, 0LL);
  if ( v25 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    if ( v59[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    if ( !v43 )
      goto LABEL_52;
LABEL_50:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
LABEL_52:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
    if ( v46 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v33, &EventProfilerExit, v34, v44);
    }
    return (unsigned int)v25;
  }
  if ( !v22 )
    goto LABEL_56;
  if ( !a2 )
  {
    v21 = v22;
    v55 = v22;
LABEL_56:
    v29 = v48.0;
    v28 = (unsigned int)v50;
    v27 = v49;
    goto LABEL_32;
  }
  v61 = v23;
  v21 = (void *)operator new[](v23, 0x4B677844u, 256LL);
  v55 = v21;
  if ( v21 )
  {
    v26 = (ULONG64)v22 + v23;
    if ( v26 < (unsigned __int64)v22 || v26 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v21, v22, v23);
    v27 = v49;
    v28 = (unsigned int)v50;
    v29 = v48.0;
LABEL_32:
    v50 = 0LL;
    v25 = DXGDEVICE::CreateContext(
            v53,
            &v50,
            v28,
            v27,
            (struct _D3DDDI_CREATECONTEXTFLAGS)v29,
            v21,
            v23,
            SHIDWORD(Src[1]),
            1);
    if ( v25 >= 0 )
    {
      v30 = *((_DWORD *)v50 + 6);
      v52 = v30;
      p_hContext = &v60->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        *p_hContext = v30;
        if ( v23 && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v53 + 2) + 16LL)) && v51 >= 0x7008 )
        {
          v32 = (ULONG64)v22 + v23;
          if ( v32 > MmUserProbeAddress || v32 <= (unsigned __int64)v22 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v22, v21, v23);
        }
      }
      else
      {
        *p_hContext = v30;
      }
    }
    if ( v21 != v22 )
      operator delete(v21);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
    if ( v59[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
    if ( !v43 )
      goto LABEL_52;
    goto LABEL_50;
  }
  WdLogSingleEntry3(3LL, v53, v61, -1073741801LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v62);
  if ( v59[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v59);
  if ( v43 && _InterlockedExchangeAdd64((volatile signed __int64 *)v43 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v43 + 2), v43);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v44);
  if ( v46 )
  {
    LOBYTE(v41) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v41, &EventProfilerExit, v42, v44);
  }
  return 3221225495LL;
}
