/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C0004E20 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ??1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C00050D8 (--1DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0005218 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x1C001AA94 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x1C0027FC4 (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?FlushQueue@DXGWORKQUEUE@@QEAAXXZ @ 0x1C00470B8 (-FlushQueue@DXGWORKQUEUE@@QEAAXXZ.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C00DD278 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??1?$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ @ 0x1C0210D78 (--1-$PagedPoolZeroedArray@PEAVDXGCONTEXT@@$03@@QEAA@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0280184 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C02A3554 (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C02A45D0 (-PopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A4B6C (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  int *p_PresentPlaneCount; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  UINT PresentPlaneCount; // eax
  __int64 v32; // rax
  __int64 v33; // rax
  UINT ContextCount; // eax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 VidPnSourceId; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 *v42; // rbx
  _QWORD *v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r9
  __int64 v48; // rax
  unsigned __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r14
  struct DXGCONTEXT **PoolWithTag; // rcx
  __int64 v53; // rax
  UINT i; // r14d
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // r9
  int v58; // ecx
  __int64 v59; // rcx
  __int64 v60; // rax
  struct DXGCONTEXT *v61; // rcx
  struct DXGCONTEXT *v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  _QWORD *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rdx
  __int64 v74; // rcx
  __int64 v75; // r8
  bool v76; // zf
  __int64 v77; // rax
  __int64 v78; // rdx
  __int64 v79; // r9
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // rbx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // r8
  __int64 v87; // r9
  const struct DXGDEVICE *v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // rax
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rbx
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  struct DXGPROCESS *v103; // rax
  __int64 v104; // rax
  int v105; // [rsp+50h] [rbp-268h] BYREF
  int v106; // [rsp+58h] [rbp-260h] BYREF
  __int64 v107; // [rsp+60h] [rbp-258h]
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *v108; // [rsp+68h] [rbp-250h]
  int *v109; // [rsp+70h] [rbp-248h]
  enum _D3DDDI_HDR_METADATA_TYPE v110; // [rsp+78h] [rbp-240h] BYREF
  unsigned int v111; // [rsp+7Ch] [rbp-23Ch] BYREF
  _BYTE v112[16]; // [rsp+80h] [rbp-238h] BYREF
  _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 v113; // [rsp+90h] [rbp-228h] BYREF
  _BYTE v114[16]; // [rsp+E0h] [rbp-1D8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v115[2]; // [rsp+F0h] [rbp-1C8h] BYREF
  struct tagRECT **v116[2]; // [rsp+100h] [rbp-1B8h] BYREF
  unsigned int *v117[2]; // [rsp+110h] [rbp-1A8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v118[2]; // [rsp+120h] [rbp-198h] BYREF
  int v119; // [rsp+130h] [rbp-188h]
  struct DXGCONTEXT **v120; // [rsp+140h] [rbp-178h] BYREF
  _BYTE v121[32]; // [rsp+148h] [rbp-170h] BYREF
  unsigned int v122; // [rsp+168h] [rbp-150h]
  unsigned __int8 *v123; // [rsp+170h] [rbp-148h] BYREF
  struct DXGCONTEXT *v124; // [rsp+178h] [rbp-140h] BYREF
  _BYTE v125[8]; // [rsp+180h] [rbp-138h] BYREF
  __int64 v126; // [rsp+188h] [rbp-130h]
  char v127; // [rsp+190h] [rbp-128h]
  int v128; // [rsp+198h] [rbp-120h]
  _QWORD v129[6]; // [rsp+1A0h] [rbp-118h] BYREF
  char v130; // [rsp+1D0h] [rbp-E8h]
  _BYTE v131[24]; // [rsp+1D8h] [rbp-E0h] BYREF
  _BYTE v132[160]; // [rsp+1F0h] [rbp-C8h] BYREF

  v105 = -1073741811;
  memset(&v113, 0, sizeof(v113));
  v107 = 0LL;
  v106 = 2164;
  v108 = &v113;
  v109 = &v105;
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v2, &EventProfilerEnter, v3, 2164);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v106, 2164LL);
  Current = DXGPROCESS::GetCurrent(v5, v4, v6, v7);
  if ( !a1 )
  {
    v105 = -1073741811;
    v11 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v11 + 24) = v105;
    *(_QWORD *)(v11 + 32) = PsGetCurrentProcess(v13, v12, v14, v15);
    WdLogEvent5_WdError(v11);
    v17 = v105;
LABEL_6:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v16);
    if ( (qword_1C00B19B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v18,
          v20,
          0,
          v108->VidPnSourceId,
          v108->PresentCount,
          1,
          v108->Flags.Value,
          v108->PresentPlaneCount,
          *v109);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v19, &EventProfilerExit, v20, v106);
    }
    return v17;
  }
  p_PresentPlaneCount = (int *)&a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (int *)MmUserProbeAddress;
  v128 = *p_PresentPlaneCount;
  *(_OWORD *)v115 = 0LL;
  *(_OWORD *)v116 = 0LL;
  *(_OWORD *)v117 = 0LL;
  *(_OWORD *)v118 = 0LL;
  v119 = v128;
  v105 = CapturePresentMultiPlaneOverlayArgs3(
           a1,
           &v113,
           v115,
           (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v115[1],
           (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v116,
           &v116[1],
           v117,
           &v117[1],
           (unsigned __int8 **)v118,
           &v118[1]);
  if ( v105 < 0 )
  {
    v25 = WdLogNewEntry5_WdError(v24, v23);
    *(_QWORD *)(v25 + 24) = v105;
    *(_QWORD *)(v25 + 32) = PsGetCurrentProcess(v27, v26, v28, v29);
    v30 = v25;
LABEL_16:
    WdLogEvent5_WdError(v30);
    v17 = v105;
LABEL_17:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
    goto LABEL_6;
  }
  PresentPlaneCount = v113.PresentPlaneCount;
  if ( !v113.PresentPlaneCount )
  {
    v32 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v32 + 24) = 2693LL;
    WdLogEvent5_WdAssertion(v32);
    PresentPlaneCount = v113.PresentPlaneCount;
  }
  if ( PresentPlaneCount > 0xA )
  {
    v33 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v33 + 24) = 2694LL;
    WdLogEvent5_WdAssertion(v33);
  }
  ContextCount = v113.ContextCount;
  if ( !v113.ContextCount )
  {
    v35 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v35 + 24) = 2695LL;
    WdLogEvent5_WdAssertion(v35);
    ContextCount = v113.ContextCount;
  }
  if ( ContextCount > 0x40 )
  {
    v36 = WdLogNewEntry5_WdAssertion(v24, v23);
    *(_QWORD *)(v36 + 24) = 2696LL;
    WdLogEvent5_WdAssertion(v36);
  }
  if ( v113.VidPnSourceId >= 0x10 )
  {
    v105 = -1073741811;
    v30 = WdLogNewEntry5_WdError(v24, v23);
    VidPnSourceId = v113.VidPnSourceId;
LABEL_28:
    *(_QWORD *)(v30 + 24) = VidPnSourceId;
    *(_QWORD *)(v30 + 32) = v105;
    goto LABEL_16;
  }
  if ( v113.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_NONE && !v113.pHDRMetaData )
  {
    v111 = 0;
    v110 = D3DDDI_HDR_METADATA_TYPE_NONE;
    v123 = 0LL;
    if ( !(unsigned int)PopulateHDRMetadataFromDisplay(&v113, &v123, &v110, &v111) )
    {
      v113.pHDRMetaData = v123;
      v113.HDRMetaDataType = v110;
      v113.HDRMetaDataSize = v111;
      v113.Flags.Value |= 0x80u;
    }
  }
  if ( v113.HDRMetaDataType )
  {
    v38 = (unsigned int)(v113.HDRMetaDataType - 1);
    if ( v113.HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
    {
      if ( v113.HDRMetaDataSize && v113.HDRMetaDataSize != 28 )
        goto LABEL_46;
    }
    else
    {
      if ( v113.HDRMetaDataType != D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        v105 = -1073741811;
        v30 = WdLogNewEntry5_WdError(v38, v23);
        VidPnSourceId = v113.HDRMetaDataType;
        goto LABEL_28;
      }
      if ( v113.HDRMetaDataSize && v113.HDRMetaDataSize != 72 )
        goto LABEL_46;
    }
    if ( v113.pHDRMetaData )
    {
      if ( v113.HDRMetaDataSize )
        goto LABEL_49;
    }
    else if ( !v113.HDRMetaDataSize )
    {
      goto LABEL_49;
    }
LABEL_46:
    v105 = -1073741811;
    v30 = WdLogNewEntry5_WdError(v38, v23);
    VidPnSourceId = v113.HDRMetaDataSize;
    goto LABEL_28;
  }
  if ( v113.HDRMetaDataSize || v113.pHDRMetaData )
  {
    v105 = -1073741811;
    v104 = WdLogNewEntry5_WdError((unsigned int)v113.HDRMetaDataType, v23);
    *(_QWORD *)(v104 + 24) = v105;
    v30 = v104;
    goto LABEL_16;
  }
LABEL_49:
  v124 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112, *v113.pContextList, Current, &v124, 0);
  v42 = (__int64 *)v124;
  if ( !v124 )
  {
    v105 = -1073741811;
    v43 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, v39, v41);
    v43[3] = v105;
    v43[4] = PsGetCurrentProcess(v45, v44, v46, v47);
    v43[5] = *v113.pContextList;
    WdLogEvent5_WdWarning(v43);
LABEL_51:
    v17 = v105;
LABEL_52:
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
    goto LABEL_17;
  }
  if ( (*((_DWORD *)v124 + 105) & 8) != 0 )
  {
    v48 = WdLogNewEntry5_WdWarning(v40, v39, v41);
    *(_QWORD *)(v48 + 24) = 2804LL;
    WdLogEvent5_WdWarning(v48);
    goto LABEL_87;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v114,
    *((struct DXGDEVICE **)v124 + 2));
  v51 = v113.ContextCount;
  PoolWithTag = 0LL;
  v120 = 0LL;
  v122 = 0;
  if ( v113.ContextCount <= 4 )
  {
    PoolWithTag = (struct DXGCONTEXT **)v121;
    v120 = (struct DXGCONTEXT **)v121;
  }
  else
  {
    v49 = 0xFFFFFFFFFFFFFFFFuLL % v113.ContextCount;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v113.ContextCount < 8 )
      goto LABEL_61;
    PoolWithTag = (struct DXGCONTEXT **)ExAllocatePoolWithTag(PagedPool, 8LL * v113.ContextCount, 0x4B677844u);
    v120 = PoolWithTag;
  }
  v122 = v51;
  if ( !PoolWithTag )
  {
LABEL_62:
    v53 = WdLogNewEntry5_WdWarning(PoolWithTag, v49, v50);
    *(_QWORD *)(v53 + 24) = 2814LL;
    WdLogEvent5_WdWarning(v53);
LABEL_78:
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v120);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v114);
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v67);
    if ( (qword_1C00B19B0 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0qqqqqqq_EtwWriteTransfer(
          (REGHANDLE *)&DxgkControlGuid_Context,
          v68,
          v70,
          0,
          v108->VidPnSourceId,
          v108->PresentCount,
          1,
          v108->Flags.Value,
          v108->PresentPlaneCount,
          *v109);
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v69, &EventProfilerExit, v70, v106);
    }
    return 3221225495LL;
  }
  memset(PoolWithTag, 0, 8 * v51);
  PoolWithTag = v120;
LABEL_61:
  if ( !PoolWithTag )
    goto LABEL_62;
  *PoolWithTag = (struct DXGCONTEXT *)v42;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v131, (struct _KTHREAD **)Current);
  for ( i = 1; i < v113.ContextCount; ++i )
  {
    v55 = v113.pContextList[i];
    v56 = (v113.pContextList[i] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v56 < *((_DWORD *)Current + 64) )
    {
      v57 = *((_QWORD *)Current + 30);
      v58 = *(_DWORD *)(v57 + 16 * v56 + 8);
      v55 = ((unsigned int)v55 >> 25) & 0x60;
      if ( (_BYTE)v55 == (*(_BYTE *)(v57 + 16 * v56 + 8) & 0x60) && (v58 & 0x2000) == 0 && (v58 & 0x1F) != 0 )
      {
        v59 = v58 & 0x1F;
        if ( (_BYTE)v59 == 7 )
        {
          v61 = *(struct DXGCONTEXT **)(v57 + 16LL * (unsigned int)v56);
          goto LABEL_71;
        }
        v60 = WdLogNewEntry5_WdError(v59, v55);
        *(_QWORD *)(v60 + 24) = 316LL;
        WdLogEvent5_WdError(v60);
      }
    }
    v61 = 0LL;
LABEL_71:
    v120[i] = v61;
    v62 = v120[i];
    if ( !v62 || (*((_DWORD *)v62 + 105) & 8) != 0 || *((_QWORD *)v62 + 2) != v42[2] )
    {
      v71 = (_QWORD *)WdLogNewEntry5_WdError(v62, v55);
      v71[3] = v42;
      v71[4] = v113.pContextList[i];
      v71[5] = i;
      v71[6] = -1073741811LL;
      WdLogEvent5_WdError(v71);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v131);
      PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v120);
      DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v114);
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
      DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v72);
      v76 = (qword_1C00B19B0 & 2) == 0;
      goto LABEL_88;
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v131);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
    (__int64)v129,
    v120,
    v122);
  if ( !v130 )
  {
    v126 = *(_QWORD *)(*(_QWORD *)(v42[2] + 16) + 16LL);
    v127 = 0;
    DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
    COREDEVICEACCESS::COREDEVICEACCESS((__int64)v132, v42[2], 1, v79, 0);
    v105 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v132, 0LL);
    if ( v105 >= 0 )
    {
      v88 = (const struct DXGDEVICE *)v42[2];
      v89 = *((_QWORD *)v88 + 231);
      if ( v89 )
      {
        if ( *((_BYTE *)Current + 346)
          || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v89 + 2696), v88, v113.VidPnSourceId) )
        {
          v105 = DXGCONTEXT::PresentMultiPlaneOverlay3((DXGCONTEXT *)v42, &v113, (struct COREDEVICEACCESS *)v132, v120);
          if ( v105 == -1071775482 )
            DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v42[2], (struct COREDEVICEACCESS *)v132);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
          PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v120);
          DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v114);
          v103 = DXGPROCESS::GetCurrent(v100, v99, v101, v102);
          DXGWORKQUEUE::FlushQueue((PLIST_ENTRY)(*((_QWORD *)v103 + 8) + 88LL));
          goto LABEL_51;
        }
        v105 = -1073741790;
        v94 = WdLogNewEntry5_WdError(v93, v92);
        v95 = v105;
        *(_QWORD *)(v94 + 24) = v105;
        *(_QWORD *)(v94 + 32) = PsGetCurrentProcess(v95, v96, v97, v98);
        v91 = v94;
      }
      else
      {
        v105 = -1073741811;
        v90 = WdLogNewEntry5_WdError(0LL, v88);
        *(_QWORD *)(v90 + 24) = v105;
        v91 = v90;
      }
      WdLogEvent5_WdError(v91);
    }
    else
    {
      v83 = WdLogNewEntry5_WdWarning(v81, v80, v82);
      v84 = v105;
      *(_QWORD *)(v83 + 24) = v105;
      *(_QWORD *)(v83 + 32) = PsGetCurrentProcess(v84, v85, v86, v87);
      WdLogEvent5_WdWarning(v83);
    }
    v17 = v105;
    COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v132);
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v125);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
    PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v120);
    DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v114);
    goto LABEL_52;
  }
  if ( !v129[0] )
  {
    v66 = WdLogNewEntry5_WdWarning(v64, v63, v65);
    *(_QWORD *)(v66 + 24) = 2865LL;
    WdLogEvent5_WdWarning(v66);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
    goto LABEL_78;
  }
  v77 = WdLogNewEntry5_WdWarning(v64, v63, v65);
  *(_QWORD *)(v77 + 24) = 2870LL;
  WdLogEvent5_WdWarning(v77);
  DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v129);
  PagedPoolZeroedArray<DXGCONTEXT *,4>::~PagedPoolZeroedArray<DXGCONTEXT *,4>((__int64)&v120);
  DXGDEVICEACCESSLOCKEXCLUSIVE::~DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v114);
LABEL_87:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v112);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO((__int64)v115);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v106, v78);
  v76 = (qword_1C00B19B0 & 2) == 0;
LABEL_88:
  if ( !v76 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v73,
        v75,
        0,
        v108->VidPnSourceId,
        v108->PresentCount,
        1,
        v108->Flags.Value,
        v108->PresentPlaneCount,
        *v109);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v74, &EventProfilerExit, v75, v106);
  }
  return 3221225485LL;
}
