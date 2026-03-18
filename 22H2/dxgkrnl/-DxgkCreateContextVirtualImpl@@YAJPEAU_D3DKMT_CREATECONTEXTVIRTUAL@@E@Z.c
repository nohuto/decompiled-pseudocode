/*
 * XREFs of ?DxgkCreateContextVirtualImpl@@YAJPEAU_D3DKMT_CREATECONTEXTVIRTUAL@@E@Z @ 0x1C019F8D4
 * Callers:
 *     DxgkCreateContextVirtual @ 0x1C01EA290 (DxgkCreateContextVirtual.c)
 *     DxgkCreateContextVirtualInternal @ 0x1C01ED160 (DxgkCreateContextVirtualInternal.c)
 *     ?VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C037A690 (-VmBusCreateContextVirtual@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C00042E8 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C000438C (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z @ 0x1C0007CA4 (--0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C0007F7C (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0008088 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000A400 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000A450 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C000A61C (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C000AF80 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C000B0F0 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z @ 0x1C0015190 (-NodeSupportsGpuVa@ADAPTER_RENDER@@QEBAEII@Z.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C00240A0 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0024B68 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     memmove @ 0x1C0028340 (memmove.c)
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C018A268 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_CLIENTHINT@@E@Z @ 0x1C018F760 (-CreateContext@DXGDEVICE@@QEAAJPEAPEAVDXGCONTEXT@@IIU_D3DDDI_CREATECONTEXTFLAGS@@PEAXIW4_D3DKMT_.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01B3460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBitCount@@YAII@Z @ 0x1C01E78EC (-GetBitCount@@YAII@Z.c)
 */

__int64 __fastcall DxgkCreateContextVirtualImpl(struct _D3DKMT_CREATECONTEXTVIRTUAL *a1, char a2, __int64 a3)
{
  struct _KTHREAD **Current; // r8
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v6; // rax
  __int128 v7; // xmm1
  __int64 v8; // xmm0_8
  struct DXGDEVICE *v9; // r13
  __int64 v10; // r11
  unsigned int v11; // r9d
  __int64 v12; // r8
  unsigned int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // ebx
  unsigned int v16; // r9d
  ADAPTER_RENDER *v17; // r10
  __int64 v18; // r11
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v19; // ecx
  _QWORD *v20; // r15
  _QWORD *v21; // rbx
  unsigned int v22; // r12d
  __int64 v23; // r9
  int v24; // r13d
  ULONG64 v25; // rcx
  unsigned int v26; // r9d
  unsigned int v27; // r8d
  struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F v28; // ecx
  unsigned int v29; // r8d
  _DWORD *p_hContext; // rdx
  ULONG64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v35; // rcx
  __int64 v36; // r8
  bool v37; // sf
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  struct DXGDEVICE *v42; // [rsp+50h] [rbp-178h] BYREF
  int v43; // [rsp+58h] [rbp-170h] BYREF
  __int64 v44; // [rsp+60h] [rbp-168h]
  char v45; // [rsp+68h] [rbp-160h]
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v46; // [rsp+70h] [rbp-158h]
  struct _D3DDDI_CREATECONTEXTFLAGS v47; // [rsp+78h] [rbp-150h]
  unsigned int v48; // [rsp+7Ch] [rbp-14Ch]
  struct DXGCONTEXT *v49; // [rsp+80h] [rbp-148h] BYREF
  unsigned int v50; // [rsp+88h] [rbp-140h]
  unsigned int v51; // [rsp+8Ch] [rbp-13Ch]
  DXGDEVICE *v52; // [rsp+90h] [rbp-138h]
  struct DXGDEVICE *v53; // [rsp+98h] [rbp-130h] BYREF
  _QWORD *v54; // [rsp+A0h] [rbp-128h]
  unsigned int v55[4]; // [rsp+A8h] [rbp-120h]
  void *Src[2]; // [rsp+B8h] [rbp-110h]
  __int64 v57; // [rsp+C8h] [rbp-100h]
  _QWORD v58[2]; // [rsp+D0h] [rbp-F8h] BYREF
  struct _D3DKMT_CREATECONTEXTVIRTUAL *v59; // [rsp+E0h] [rbp-E8h]
  __int64 v60; // [rsp+E8h] [rbp-E0h]
  _BYTE v61[160]; // [rsp+F0h] [rbp-D8h] BYREF

  v59 = a1;
  v46 = a1;
  v43 = -1;
  v44 = 0LL;
  if ( (qword_1C013F870 & 2) != 0 )
  {
    v45 = 1;
    v43 = 2039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2039);
  }
  else
  {
    v45 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v43, 2039);
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
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
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 )
      return 3221225485LL;
    v37 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_79:
    if ( v37 )
      McTemplateK0q_EtwWriteTransfer(v35, &EventProfilerExit, v36, v43);
    return 3221225485LL;
  }
  if ( a2 )
  {
    v6 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v6 = (struct _D3DKMT_CREATECONTEXTVIRTUAL *)MmUserProbeAddress;
    *(_OWORD *)v55 = *(_OWORD *)&v6->hDevice;
    v7 = *(_OWORD *)&v6->pPrivateDriverData;
    v8 = *(_QWORD *)&v6->hContext;
  }
  else
  {
    *(_OWORD *)v55 = *(_OWORD *)&a1->hDevice;
    v7 = *(_OWORD *)&a1->pPrivateDriverData;
    v8 = *(_QWORD *)&a1->hContext;
  }
  v57 = v8;
  *(_OWORD *)Src = v7;
  if ( (v55[3] & 0x20) != 0 && !g_OSTestSigningEnabled )
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
  v53 = 0LL;
  DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v42, v55[0], Current, &v53);
  v9 = v53;
  v52 = v53;
  if ( !v53 )
  {
    v38 = v55[0];
    WdLogSingleEntry2(2LL, v55[0], -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid hDevice (0x%I64x) specified, returning 0x%I64x",
      v38,
      -1073741811LL,
      0LL,
      0LL,
      0LL);
LABEL_66:
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    goto LABEL_60;
  }
  v10 = *(_QWORD *)(*((_QWORD *)v53 + 2) + 16LL);
  v11 = 0;
  v12 = v55[2];
  v48 = v55[2];
  v13 = v55[2];
  while ( 1 )
  {
    v13 >>= 1;
    if ( !v13 )
      break;
    ++v11;
  }
  if ( v11 >= *(_DWORD *)(v10 + 288) )
    goto LABEL_70;
  v14 = *(unsigned __int16 *)(344LL * v11 + *(_QWORD *)(v10 + 2808));
  v15 = v55[1];
  LODWORD(v49) = v55[1];
  if ( v55[1] >= v14 )
  {
    v39 = v55[1];
    goto LABEL_72;
  }
  if ( GetBitCount(v55[2]) > 1 )
  {
LABEL_70:
    v39 = v12;
LABEL_72:
    WdLogSingleEntry2(3LL, v39, -1073741811LL);
    goto LABEL_66;
  }
  v19 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v55[3];
  v47.0 = (struct _D3DDDI_CREATECONTEXTFLAGS::$95B81DE25B1D554D835F0ED864974D68::$C6DD82D22F896EDD365A25DACAAAF57F)v55[3];
  if ( (v55[3] & 8) == 0 )
  {
    if ( (*(_DWORD *)(v18 + 2284) & 0x20) == 0 || !ADAPTER_RENDER::NodeSupportsGpuVa(v17, v16, v15) )
    {
      WdLogSingleEntry2(3LL, -1073741811LL, 303LL);
      goto LABEL_66;
    }
    v19 = v47.0;
  }
  v50 = *(_DWORD *)(v18 + 2096);
  v51 = v50;
  if ( v50 >= 0x7008 && (*(_DWORD *)&v19 & 0xFFFFFFC0) != 0 )
  {
    WdLogSingleEntry2(3LL, -1073741811LL, 313LL);
    goto LABEL_66;
  }
  v20 = 0LL;
  v54 = 0LL;
  v21 = Src[0];
  v22 = (unsigned int)Src[1];
  if ( Src[0] )
  {
    if ( LODWORD(Src[1]) )
      goto LABEL_24;
LABEL_74:
    WdLogSingleEntry3(3LL, Src[0], LODWORD(Src[1]), -1073741811LL);
    if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( !v45 )
      return 3221225485LL;
    LOBYTE(v35) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    v37 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
    goto LABEL_79;
  }
  if ( LODWORD(Src[1]) )
    goto LABEL_74;
LABEL_24:
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58, v9);
  COREDEVICEACCESS::COREDEVICEACCESS((__int64)v61, (__int64)v9, 0, v23, 0);
  v24 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v61, 0LL);
  if ( v24 < 0 )
  {
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    if ( v58[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
    if ( !v42 )
      goto LABEL_52;
LABEL_50:
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
LABEL_52:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
    if ( v45 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v32, &EventProfilerExit, v33, v43);
    }
    return (unsigned int)v24;
  }
  if ( !v21 )
    goto LABEL_56;
  if ( !a2 )
  {
    v20 = v21;
    v54 = v21;
LABEL_56:
    v28 = v47.0;
    v27 = (unsigned int)v49;
    v26 = v48;
    goto LABEL_32;
  }
  v60 = v22;
  v20 = (_QWORD *)operator new[](v22, 0x4B677844u, 256LL);
  v54 = v20;
  if ( v20 )
  {
    v25 = (ULONG64)v21 + v22;
    if ( v25 < (unsigned __int64)v21 || v25 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    memmove(v20, v21, v22);
    v26 = v48;
    v27 = (unsigned int)v49;
    v28 = v47.0;
LABEL_32:
    v49 = 0LL;
    v24 = DXGDEVICE::CreateContext(
            v52,
            &v49,
            v27,
            v26,
            (struct _D3DDDI_CREATECONTEXTFLAGS)v28,
            v20,
            v22,
            SHIDWORD(Src[1]),
            1);
    if ( v24 >= 0 )
    {
      v29 = *((_DWORD *)v49 + 6);
      v51 = v29;
      p_hContext = &v59->hContext;
      if ( a2 )
      {
        if ( (unsigned __int64)p_hContext >= MmUserProbeAddress )
          p_hContext = (_DWORD *)MmUserProbeAddress;
        *p_hContext = v29;
        if ( v22 && DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)v52 + 2) + 16LL)) && v50 >= 0x7008 )
        {
          v31 = (ULONG64)v21 + v22;
          if ( v31 > MmUserProbeAddress || v31 <= (unsigned __int64)v21 )
            *(_BYTE *)MmUserProbeAddress = 0;
          memmove(v21, v20, v22);
        }
      }
      else
      {
        *p_hContext = v29;
      }
    }
    if ( v20 != v21 )
      operator delete(v20);
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
    if ( v58[0] )
      DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
    if ( !v42 )
      goto LABEL_52;
    goto LABEL_50;
  }
  WdLogSingleEntry3(3LL, v52, v60, -1073741801LL);
  COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v61);
  if ( v58[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v58);
  if ( v42 && _InterlockedExchangeAdd64((volatile signed __int64 *)v42 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
    ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v42 + 2), v42);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v43);
  if ( v45 )
  {
    LOBYTE(v40) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v40, &EventProfilerExit, v41, v43);
  }
  return 3221225495LL;
}
