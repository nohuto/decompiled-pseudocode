/*
 * XREFs of DxgkCheckMultiPlaneOverlaySupport2 @ 0x1C0258570
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
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253798 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 */

__int64 __fastcall DxgkCheckMultiPlaneOverlaySupport2(ULONG64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KTHREAD **v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // rcx
  _OWORD *v15; // rax
  __int64 v16; // r13
  unsigned __int64 v17; // r15
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
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v49; // r8
  _DWORD *v50; // rdx
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  _QWORD *v59; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // rcx
  __int64 v65; // r8
  bool v66; // [rsp+30h] [rbp-148h]
  int v67; // [rsp+38h] [rbp-140h] BYREF
  __int64 v68; // [rsp+40h] [rbp-138h]
  char v69; // [rsp+48h] [rbp-130h]
  struct DXGDEVICE *v70; // [rsp+50h] [rbp-128h] BYREF
  int v71; // [rsp+58h] [rbp-120h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO v72; // [rsp+5Ch] [rbp-11Ch] BYREF
  ULONG64 v73; // [rsp+60h] [rbp-118h]
  struct DXGDEVICE *v74[2]; // [rsp+68h] [rbp-110h] BYREF
  _QWORD v75[2]; // [rsp+78h] [rbp-100h] BYREF
  unsigned int v76; // [rsp+88h] [rbp-F0h]
  unsigned int v77[4]; // [rsp+90h] [rbp-E8h]
  void *Src[2]; // [rsp+A0h] [rbp-D8h]
  _BYTE v79[160]; // [rsp+B0h] [rbp-C8h] BYREF

  v73 = a1;
  v67 = -1;
  v68 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v69 = 1;
    v67 = 2093;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2093);
  }
  else
  {
    v69 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v67, 2093LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  v12 = (struct _KTHREAD **)Current;
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v13 + 24) = -1073741811LL;
    v14 = (_QWORD *)v13;
LABEL_55:
    WdLogEvent5_WdError(v14);
LABEL_56:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v38);
    if ( v69 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v64, &EventProfilerExit, v65, v67);
    }
    return 3221225485LL;
  }
  v66 = *((_BYTE *)Current + 346) == 0;
  v15 = (_OWORD *)a1;
  if ( a1 >= MmUserProbeAddress )
    v15 = (_OWORD *)MmUserProbeAddress;
  *(_OWORD *)v77 = *v15;
  *(_OWORD *)Src = v15[1];
  v16 = v77[2];
  if ( v77[2] - 1 > 6 )
  {
    v59 = (_QWORD *)WdLogNewEntry5_WdError(MmUserProbeAddress, v9);
    v59[3] = v16;
    v59[4] = -1073741811LL;
    v59[5] = PsGetCurrentProcess(v61, v60, v62, v63);
    v14 = v59;
    goto LABEL_55;
  }
  v17 = (unsigned __int64)v77[2] << 7;
  if ( v17 > 0xFFFFFFFF )
  {
    v55 = WdLogNewEntry5_WdWarning(v77[2], v9, v11);
    *(_QWORD *)(v55 + 24) = 9272LL;
    WdLogEvent5_WdWarning(v55);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v56);
    if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v57, &EventProfilerExit, v58, v67);
    return 3221225621LL;
  }
  else
  {
    v76 = v77[2] << 7;
    v18 = (unsigned __int64)v77[2] << 7;
    if ( !is_mul_ok(v77[2], 0x80uLL) )
      v18 = -1LL;
    v22 = (struct DXGDEVICE *)operator new[](v18, 0x4B677844u, PagedPool);
    v74[1] = v22;
    if ( v22 )
    {
      v32 = Src[0];
      v33 = (char *)Src[0] + (unsigned int)v17;
      if ( v33 < Src[0] || (unsigned __int64)v33 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v22, v32, (unsigned int)v17);
      v74[0] = 0LL;
      DXGDEVICEBYHANDLE::DXGDEVICEBYHANDLE((DXGDEVICEBYHANDLE *)&v70, v77[1], v12, v74);
      v36 = (ADAPTER_RENDER **)v74[0];
      if ( !v74[0] )
      {
        v37 = WdLogNewEntry5_WdError(v35, v34);
        *(_QWORD *)(v37 + 24) = v77[1];
        *(_QWORD *)(v37 + 32) = -1073741811LL;
        WdLogEvent5_WdError(v37);
        operator delete[](v22);
        if ( v70 && _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
        goto LABEL_56;
      }
      DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75, v74[0]);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v79, (__int64)v36, 2, v39, 0);
      v40 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v79, 0LL);
      v44 = v40;
      if ( v40 >= 0 )
      {
        v71 = 0;
        v72.0 = 0;
        if ( (int)DXGDEVICE::CheckMultiPlaneOverlaySupport2(
                    v36,
                    v16,
                    (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2 *)v22,
                    v66,
                    &v71,
                    &v72) >= 0 )
        {
          v49 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)v73;
          v50 = (_DWORD *)(v73 + 24);
          if ( v73 + 24 >= MmUserProbeAddress )
            v50 = (_DWORD *)MmUserProbeAddress;
          *v50 = v71;
          v51 = v49 + 7;
          if ( (unsigned __int64)&v49[7] >= MmUserProbeAddress )
            v51 = (struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *)MmUserProbeAddress;
          v51->0 = v72.0;
        }
        operator delete[](v22);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v70 && _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v52);
        if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v53, &EventProfilerExit, v54, v67);
        return 0LL;
      }
      else
      {
        v45 = WdLogNewEntry5_WdWarning(v42, v41, v43);
        *(_QWORD *)(v45 + 24) = v36;
        *(_QWORD *)(v45 + 32) = v44;
        WdLogEvent5_WdWarning(v45);
        operator delete[](v22);
        COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v79);
        if ( v75[0] )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v75);
        if ( v70 && _InterlockedExchangeAdd64((volatile signed __int64 *)v70 + 8, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
          ADAPTER_RENDER::DestroyDeviceNoLocks(*((ADAPTER_RENDER **)v70 + 2), v70);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v46);
        if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v47, &EventProfilerExit, v48, v67);
        return (unsigned int)v44;
      }
    }
    else
    {
      v23 = WdLogNewEntry5_WdWarning(v20, v19, v21);
      *(_QWORD *)(v23 + 24) = -1073741801LL;
      *(_QWORD *)(v23 + 32) = PsGetCurrentProcess(v25, v24, v26, v27);
      WdLogEvent5_WdWarning(v23);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v67, v28);
      if ( v69 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v29, &EventProfilerExit, v30, v67);
      return 3221225495LL;
    }
  }
}
