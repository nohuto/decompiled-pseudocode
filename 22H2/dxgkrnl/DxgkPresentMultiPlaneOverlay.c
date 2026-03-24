/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C02A7AB0
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z @ 0x1C0002BAC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C0002F54 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C0002FB8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C0004E50 (--1COREACCESS@@QEAA@XZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0004F90 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0005100 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005230 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007B84 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0007BE0 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0008F14 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0008F8C (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IE@Z @ 0x1C001A448 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C001A6D4 (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqqqq_EtwWriteTransfer @ 0x1C0027FC4 (McTemplateK0qqqqqqq_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01193F0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0280184 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C02A3914 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A62DC (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // r15
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 *v29; // rsi
  _QWORD *v30; // rbx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // rax
  ULONG v40; // r14d
  _BYTE *PoolWithTag; // rax
  __int64 v42; // rcx
  unsigned int v43; // ebx
  __int64 v44; // rax
  __int64 v45; // r9
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // r9
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // r8
  __int64 v65; // r9
  const struct DXGDEVICE *v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int64 v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rax
  __int64 v84; // rdx
  __int64 v85; // rcx
  __int64 v86; // r8
  int v88; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGCONTEXT *v89[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v90[8]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v91; // [rsp+70h] [rbp-90h]
  char v92; // [rsp+78h] [rbp-88h]
  PVOID P; // [rsp+80h] [rbp-80h]
  _BYTE v94[32]; // [rsp+88h] [rbp-78h] BYREF
  ULONG v95; // [rsp+A8h] [rbp-58h]
  struct D3DKMT_MULTIPLANE_OVERLAY *v96[2]; // [rsp+B0h] [rbp-50h] BYREF
  int v97; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v98; // [rsp+C8h] [rbp-38h]
  int *v99; // [rsp+D0h] [rbp-30h]
  int *v100; // [rsp+D8h] [rbp-28h]
  _BYTE v101[16]; // [rsp+E0h] [rbp-20h] BYREF
  _QWORD v102[6]; // [rsp+F0h] [rbp-10h] BYREF
  char v103; // [rsp+120h] [rbp+20h]
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v104; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v105[8]; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v106[64]; // [rsp+268h] [rbp+168h] BYREF
  _BYTE v107[88]; // [rsp+2A8h] [rbp+1A8h] BYREF

  v2 = -1073741811;
  v88 = -1073741811;
  memset(&v104, 0, sizeof(v104));
  v99 = (int *)&v104;
  v100 = &v88;
  v98 = 0LL;
  v97 = 2092;
  if ( (qword_1C00B19B0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2092);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v97, 2092LL);
  Current = DXGPROCESS::GetCurrent(v6, v5, v7, v8);
  if ( !a1 )
  {
    v88 = -1073741811;
    v12 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v12 + 24) = v88;
    *(_QWORD *)(v12 + 32) = PsGetCurrentProcess(v14, v13, v15, v16);
    WdLogEvent5_WdError(v12);
    v2 = v88;
    goto LABEL_74;
  }
  *(_OWORD *)v96 = 0LL;
  v88 = CapturePresentMultiPlaneOverlayArgs(a1, &v104, v96, (struct tagRECT **)&v96[1]);
  if ( v88 < 0 )
  {
    v20 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v20 + 24) = v88;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21, v23, v24);
    v25 = v20;
LABEL_10:
    WdLogEvent5_WdError(v25);
    v2 = v88;
    goto LABEL_73;
  }
  if ( v104.VidPnSourceId >= 0x10 )
  {
    v88 = -1073741811;
    v25 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v25 + 24) = v104.VidPnSourceId;
    *(_QWORD *)(v25 + 32) = v88;
    goto LABEL_10;
  }
  v89[0] = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101, v104.hDevice, Current, v89, 0);
  v29 = (__int64 *)v89[0];
  if ( !v89[0] )
  {
    v88 = -1073741811;
    v30 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v28);
    v30[3] = v88;
    v30[4] = PsGetCurrentProcess(v32, v31, v33, v34);
    v30[5] = v104.hDevice;
    WdLogEvent5_WdWarning(v30);
LABEL_64:
    v2 = v88;
    goto LABEL_72;
  }
  if ( (*((_DWORD *)v89[0] + 105) & 8) != 0 )
  {
    v35 = WdLogNewEntry5_WdWarning(v27, v26, v28);
    *(_QWORD *)(v35 + 24) = 326LL;
    WdLogEvent5_WdWarning(v35);
    goto LABEL_72;
  }
  DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE(
    (DXGDEVICEACCESSLOCKEXCLUSIVE *)v89,
    *((struct DXGDEVICE **)v89[0] + 2));
  if ( v104.BroadcastContextCount > 0x40 )
  {
    v39 = WdLogNewEntry5_WdWarning(v37, v36, v38);
    *(_QWORD *)(v39 + 24) = v29;
    *(_QWORD *)(v39 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v39);
    goto LABEL_70;
  }
  v40 = v104.BroadcastContextCount + 1;
  P = 0LL;
  v95 = 0;
  if ( v104.BroadcastContextCount + 1 <= 4 )
  {
    PoolWithTag = v94;
  }
  else
  {
    v36 = 0xFFFFFFFFFFFFFFFFuLL % v40;
    if ( 0xFFFFFFFFFFFFFFFFuLL / v40 < 8 )
    {
LABEL_65:
      v83 = WdLogNewEntry5_WdWarning(v37, v36, v38);
      *(_QWORD *)(v83 + 24) = 348LL;
      WdLogEvent5_WdWarning(v83);
      v2 = -1073741801;
      goto LABEL_66;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v40, 0x4B677844u);
  }
  P = PoolWithTag;
  v95 = v40;
  if ( !PoolWithTag )
    goto LABEL_65;
  memset(PoolWithTag, 0, 8LL * v40);
  if ( !P )
    goto LABEL_65;
  *(_QWORD *)P = v29;
  DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v90, (struct _KTHREAD **)Current);
  v43 = 0;
  if ( !v104.BroadcastContextCount )
  {
LABEL_35:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v90);
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
      (__int64)v102,
      P,
      v95);
    if ( v103 )
    {
      if ( v102[0] )
      {
        v55 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v55 + 24) = 404LL;
        WdLogEvent5_WdWarning(v55);
      }
      else
      {
        v53 = WdLogNewEntry5_WdWarning(v51, v50, v52);
        *(_QWORD *)(v53 + 24) = 399LL;
        WdLogEvent5_WdWarning(v53);
        v2 = -1073741801;
      }
    }
    else
    {
      v56 = v29[2];
      v92 = 0;
      v91 = *(_QWORD *)(*(_QWORD *)(v56 + 16) + 16LL);
      DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
      COREDEVICEACCESS::COREDEVICEACCESS((__int64)v105, v29[2], 1, v57, 0);
      v88 = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v105, 0LL);
      if ( v88 >= 0 )
      {
        v66 = (const struct DXGDEVICE *)v29[2];
        v67 = *((_QWORD *)v66 + 231);
        if ( v67 )
        {
          if ( *((_BYTE *)Current + 346)
            || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v67 + 2696), v66, v104.VidPnSourceId) )
          {
            v76 = v29[2];
            v77 = *(_QWORD *)(*(_QWORD *)(v76 + 16) + 16LL);
            if ( *(_QWORD *)(v76 + 1848) == v77 )
            {
              v2 = DXGCONTEXT::PresentMultiPlaneOverlay(
                     (DXGCONTEXT *)v29,
                     &v104,
                     (struct COREDEVICEACCESS *)v105,
                     (struct DXGCONTEXT **)P);
            }
            else
            {
              v78 = WdLogNewEntry5_WdWarning(v77, v76, v60);
              *(_QWORD *)(v78 + 24) = -1073741811LL;
              *(_QWORD *)(v78 + 32) = PsGetCurrentProcess(v80, v79, v81, v82);
              WdLogEvent5_WdWarning(v78);
            }
            v88 = v2;
            if ( v2 == -1071775482 )
              DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v29[2], (struct COREDEVICEACCESS *)v105);
            COREACCESS::~COREACCESS((COREACCESS *)v107);
            COREACCESS::~COREACCESS((COREACCESS *)v106);
            if ( v92 )
              DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v102);
            if ( P != v94 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v95 = 0;
            if ( v89[0] )
              DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v89);
            goto LABEL_64;
          }
          v88 = -1073741790;
          v71 = WdLogNewEntry5_WdError(v70, v69);
          *(_QWORD *)(v71 + 24) = v88;
          *(_QWORD *)(v71 + 32) = PsGetCurrentProcess(v73, v72, v74, v75);
          v68 = v71;
        }
        else
        {
          v88 = -1073741811;
          v68 = WdLogNewEntry5_WdError(0LL, v66);
          *(_QWORD *)(v68 + 24) = v88;
        }
        WdLogEvent5_WdError(v68);
      }
      else
      {
        v61 = WdLogNewEntry5_WdWarning(v59, v58, v60);
        *(_QWORD *)(v61 + 24) = v88;
        *(_QWORD *)(v61 + 32) = PsGetCurrentProcess(v63, v62, v64, v65);
        WdLogEvent5_WdWarning(v61);
      }
      v2 = v88;
      COREACCESS::~COREACCESS((COREACCESS *)v107);
      COREACCESS::~COREACCESS((COREACCESS *)v106);
      if ( v92 )
        DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v90);
    }
    DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v102);
    goto LABEL_66;
  }
  while ( 1 )
  {
    v44 = (v104.BroadcastContext[v43] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v44 < *((_DWORD *)Current + 64) )
    {
      v45 = *((_QWORD *)Current + 30);
      v42 = *(unsigned int *)(v45 + 16 * v44 + 8);
      if ( ((v104.BroadcastContext[v43] >> 25) & 0x60) == (*(_BYTE *)(v45 + 16 * v44 + 8) & 0x60)
        && (v42 & 0x2000) == 0
        && (v42 & 0x1F) != 0 )
      {
        v42 &= 0x1Fu;
        if ( (_BYTE)v42 == 7 )
        {
          v47 = *(_QWORD *)(v45 + 16LL * (unsigned int)v44);
          goto LABEL_31;
        }
        v46 = WdLogNewEntry5_WdError(v42, (v104.BroadcastContext[v43] >> 25) & 0x60);
        *(_QWORD *)(v46 + 24) = 316LL;
        WdLogEvent5_WdError(v46);
      }
    }
    v47 = 0LL;
LABEL_31:
    v48 = v43 + 1;
    *((_QWORD *)P + v48) = v47;
    v49 = *((_QWORD *)P + v48);
    if ( !v49 || (*(_DWORD *)(v49 + 420) & 8) != 0 || *(_QWORD *)(v49 + 16) != v29[2] )
      break;
    ++v43;
    if ( (unsigned int)v48 >= v104.BroadcastContextCount )
      goto LABEL_35;
  }
  v54 = (_QWORD *)WdLogNewEntry5_WdError(v42, v49);
  v54[3] = v29;
  v54[4] = v104.BroadcastContext[v43];
  v54[5] = v43;
  v54[6] = -1073741811LL;
  WdLogEvent5_WdError(v54);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v90);
LABEL_66:
  if ( P != v94 && P )
    ExFreePoolWithTag(P, 0);
  P = 0LL;
  v95 = 0;
LABEL_70:
  if ( v89[0] )
    DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v89);
LABEL_72:
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v101);
LABEL_73:
  operator delete[](v96[0]);
  operator delete[](v96[1]);
LABEL_74:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v97, v17);
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      McTemplateK0qqqqqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v84,
        v86,
        *v99,
        v99[66],
        v99[67],
        v99[68],
        v99[69],
        v99[70],
        *v100);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v85, &EventProfilerExit, v86, v97);
  }
  return v2;
}
