/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport @ 0x1C0257F10
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
 *     ?DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C00EEC04 (-DestroyDeviceNoLocks@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0254684 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // r13
  __int64 v13; // rax
  _QWORD *v14; // rcx
  ULONG64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned int v17; // r15d
  SIZE_T v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DXGDEVICE *v22; // r14
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  const void *v32; // rdx
  char *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  ADAPTER_RENDER **v36; // r15
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r9
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  _DWORD *v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  _QWORD *v57; // rbx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rcx
  __int64 v63; // r8
  bool v64; // [rsp+30h] [rbp-148h]
  int v65; // [rsp+38h] [rbp-140h] BYREF
  __int64 v66; // [rsp+40h] [rbp-138h]
  char v67; // [rsp+48h] [rbp-130h]
  struct DXGDEVICE *v68; // [rsp+50h] [rbp-128h] BYREF
  int v69; // [rsp+58h] [rbp-120h] BYREF
  ULONG64 v70; // [rsp+60h] [rbp-118h]
  unsigned int v71; // [rsp+68h] [rbp-110h]
  struct DXGDEVICE *v72[2]; // [rsp+70h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-F8h]
  __int64 v74; // [rsp+90h] [rbp-E8h]
  _QWORD v75[2]; // [rsp+98h] [rbp-E0h] BYREF
  int v76; // [rsp+A8h] [rbp-D0h]
  _BYTE v77[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v70 = a1;
  v65 = -1;
  v66 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v67 = 1;
    v65 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v67 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v65, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v12 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    v14 = (_QWORD *)v13;
LABEL_53:
    WdLogEvent5_WdError(v14);
LABEL_54:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v38);
    if ( v67 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v62, &EventProfilerExit, v63, v65);
    }
    return 3221225485LL;
  }
  v64 = *((_BYTE *)Current + 346) == 0;
  v15 = a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = MmUserProbeAddress;
  *(_OWORD *)Src = *(_OWORD *)v15;
  v74 = *(_QWORD *)(v15 + 16);
  v16 = (unsigned __int64)Src[0] >> 32;
  if ( (unsigned int)(HIDWORD(Src[0]) - 1) > 6 )
  {
    v57 = (_QWORD *)WdLogNewEntry5_WdError(v16, v9);
    v58 = HIDWORD(Src[0]);
    v57[3] = HIDWORD(Src[0]);
    v57[4] = -1073741811LL;
    v57[5] = PsGetCurrentProcess(v58, v59, v60, v61);
    v14 = v57;
    goto LABEL_53;
  }
  v17 = 120 * HIDWORD(Src[0]);
  if ( 120 * v16 > 0xFFFFFFFF )
  {
    v53 = WdLogNewEntry5_WdWarning(v16, v9, v11);
    *(_QWORD *)(v53 + 24) = 7426LL;
    WdLogEvent5_WdWarning(v53);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v54);
    if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v55, &EventProfilerExit, v56, v65);
    return 3221225621LL;
  }
  else
  {
    v76 = 120 * HIDWORD(Src[0]);
    v71 = HIDWORD(Src[0]);
    v18 = 120LL * HIDWORD(Src[0]);
    if ( !is_mul_ok(HIDWORD(Src[0]), 0x78uLL) )
      v18 = -1LL;
    v22 = (struct DXGDEVICE *)operator new[](v18, 0x4B677844u, PagedPool);
    v72[1] = v22;
    if ( v22 )
    {
      v32 = Src[1];
      v33 = (char *)Src[1] + v17;
      if ( v33 < Src[1] || (unsigned __int64)v33 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v32, v17);
      v72[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v68, LODWORD(Src[0]), v12, v72);
      v36 = (ADAPTER_RENDER **)v72[0];
      if ( !v72[0] )
      {
        v37 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v37 + 24) = LODWORD(Src[0]);
        *(_QWORD *)(v37 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v37);
        operator delete[](v22);
        if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
        goto LABEL_54;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v72[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v77, (__int64)v36, 2, v39, 0);
      v40 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v77, 0LL);
      v44 = v40;
      if ( v40 >= 0 )
      {
        v69 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport(
                    v36,
                    v71,
                    (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE *)v22,
                    v64,
                    &v69) >= 0 )
        {
          v49 = (_DWORD *)(v70 + 16);
          if ( v70 + 16 >= MmUserProbeAddress )
            v49 = (_DWORD *)MmUserProbeAddress;
          *v49 = v69;
        }
        operator delete[](v22);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v50);
        if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v51, &EventProfilerExit, v52, v65);
        return 0LL;
      }
      else
      {
        v45 = WdLogNewEntry5_WdWarning(v42, v41, v43);
        *(_QWORD *)(v45 + 24) = v36;
        *(_QWORD *)(v45 + 32) = v44;
        WdLogEvent5_WdWarning(v45);
        operator delete[](v22);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v77);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v68 && _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v68 + 2), v68);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v46);
        if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v65);
        return (unsigned int)v44;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      *(_QWORD *)(v23 + 32) = PsGetCurrentProcess(v25, v24, v26, v27);
      WdLogEvent5_WdWarning(v23);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v65, v28);
      if ( v67 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v65);
      return 3221225495LL;
    }
  }
}
