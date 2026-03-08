/*
 * XREFs of DxgkPresentMultiPlaneOverlay3 @ 0x1C0198420
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?AcquireShared@COREACCESS@@QEAAXPEAD@Z @ 0x1C00073CC (-AcquireShared@COREACCESS@@QEAAXPEAD@Z.c)
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0007444 (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z @ 0x1C00163C0 (-SearchDxgThreadList@DXGGLOBAL@@QEAAPEAVDXGPROCESS@@PEAU_ETHREAD@@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0024424 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREDEVICEACCESS@@QEAA@XZ @ 0x1C00250B4 (--1COREDEVICEACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGCONTEXT@@QEAAXXZ @ 0x1C00250DC (-ReleaseReference@DXGCONTEXT@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x1C0053108 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ @ 0x1C017FBC8 (-TryWakeUpFromD3State@DXGADAPTER@@QEAAEXZ.c)
 *     ?EnableD3Requests@DXGADAPTER@@QEAAXXZ @ 0x1C0180304 (-EnableD3Requests@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetCurrent@DXGTHREAD@@SAPEAV1@XZ @ 0x1C01941D0 (-GetCurrent@DXGTHREAD@@SAPEAV1@XZ.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z @ 0x1C01957D0 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEAD@Z.c)
 *     ?CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY3@@PEAPEAU2@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@PEAPEAPEAUtagRECT@@PEAPEAI6PEAPEAEPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION@@@Z @ 0x1C0197A80 (-CapturePresentMultiPlaneOverlayArgs3@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAU1@PEAPEAP.c)
 *     ?AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEPEAW4_D3DDDI_HDR_METADATA_TYPE@@PEAI@Z @ 0x1C019A0A0 (-AllocateAndPopulateHDRMetadataFromDisplay@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAPEAEP.c)
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C019A6A0 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C030D83C (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     _DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO @ 0x1C031EC6C (_DxgkPresentMultiPlaneOverlay3_--_2_--_AUTO--__AUTO.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0338E58 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay3(
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  struct DXGPROCESS *v7; // rdi
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // r15
  unsigned int *p_PresentPlaneCount; // rcx
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // eax
  int v14; // ecx
  unsigned __int8 *v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  struct DXGCONTEXT *v18; // rsi
  __int64 v19; // rdi
  struct _KEVENT *v20; // rdx
  struct _KEVENT *v21; // rbx
  unsigned int v22; // ebx
  _QWORD *Pool2; // rcx
  unsigned int v24; // ebx
  __int64 v25; // r9
  volatile signed __int64 *v26; // rax
  volatile signed __int64 *v27; // rbx
  __int64 v28; // r9
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rcx
  int v32; // eax
  DXGDEVICE **v33; // rbx
  const struct DXGDEVICE *v34; // rdx
  __int64 v35; // rcx
  char *v36; // rcx
  PVOID v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rax
  struct DXGPROCESS *v40; // rdi
  struct DXGPROCESS *v41; // rax
  __int64 v42; // rbx
  PLIST_ENTRY i; // rdi
  unsigned int v44; // r14d
  struct tagRECT **v45; // rdi
  void **v46; // rbx
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r8
  struct DXGTHREAD *Current; // rax
  struct _ETHREAD *CurrentThread; // rbx
  KSPIN_LOCK *Global; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rax
  unsigned int v57; // ebx
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  const wchar_t *v64; // r9
  unsigned int v65; // ebx
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  unsigned int v75; // eax
  __int64 v76; // r8
  int v77; // ecx
  __int64 v78; // rcx
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  __int64 v82; // rax
  PVOID v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rax
  struct DXGTHREAD *v88; // rax
  struct _ETHREAD *v89; // rbx
  KSPIN_LOCK *v90; // rax
  int v91; // [rsp+60h] [rbp-278h] BYREF
  int v92; // [rsp+68h] [rbp-270h] BYREF
  __int64 v93; // [rsp+70h] [rbp-268h]
  _DWORD *v94; // [rsp+78h] [rbp-260h]
  int *v95; // [rsp+80h] [rbp-258h]
  PVOID P; // [rsp+88h] [rbp-250h]
  _BYTE v97[32]; // [rsp+90h] [rbp-248h] BYREF
  unsigned int v98; // [rsp+B0h] [rbp-228h]
  DXGCONTEXT *v99; // [rsp+B8h] [rbp-220h] BYREF
  char v100; // [rsp+C0h] [rbp-218h]
  __int64 v101; // [rsp+C8h] [rbp-210h] BYREF
  __int64 v102; // [rsp+D0h] [rbp-208h] BYREF
  int v103; // [rsp+D8h] [rbp-200h]
  struct _D3DKMT_MULTIPLANE_OVERLAY3 **v104[2]; // [rsp+E0h] [rbp-1F8h] BYREF
  struct tagRECT **v105[2]; // [rsp+F0h] [rbp-1E8h] BYREF
  unsigned int *v106[2]; // [rsp+100h] [rbp-1D8h] BYREF
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *v107[2]; // [rsp+110h] [rbp-1C8h] BYREF
  unsigned int v108; // [rsp+120h] [rbp-1B8h]
  _BYTE v109[80]; // [rsp+130h] [rbp-1A8h] BYREF
  struct DXGCONTEXT *v110; // [rsp+180h] [rbp-158h] BYREF
  unsigned __int8 *v111; // [rsp+188h] [rbp-150h] BYREF
  __int64 v112; // [rsp+190h] [rbp-148h] BYREF
  struct DXGADAPTER *v113; // [rsp+198h] [rbp-140h]
  char v114; // [rsp+1A0h] [rbp-138h]
  unsigned int v115; // [rsp+1A8h] [rbp-130h]
  _QWORD v116[6]; // [rsp+1B0h] [rbp-128h] BYREF
  char v117; // [rsp+1E0h] [rbp-F8h]
  _BYTE v118[24]; // [rsp+1E8h] [rbp-F0h] BYREF
  _BYTE v119[8]; // [rsp+200h] [rbp-D8h] BYREF
  _BYTE v120[16]; // [rsp+208h] [rbp-D0h] BYREF
  DXGADAPTER *v121; // [rsp+218h] [rbp-C0h]
  char v122; // [rsp+220h] [rbp-B8h]
  __int64 v123; // [rsp+228h] [rbp-B0h]
  _BYTE v124[16]; // [rsp+248h] [rbp-90h] BYREF
  __int64 v125; // [rsp+258h] [rbp-80h]
  __int64 v126; // [rsp+288h] [rbp-50h]
  char v127; // [rsp+290h] [rbp-48h]

  v91 = -1073741811;
  memset(v109, 0, sizeof(v109));
  v93 = 0LL;
  v92 = 2164;
  v94 = v109;
  v95 = &v91;
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2164);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v92, 2164);
  CurrentProcess = PsGetCurrentProcess(v4);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v8 = *(_DWORD *)(ProcessDxgProcess + 424) >> 7;
    if ( (*(_DWORD *)(ProcessDxgProcess + 424) & 0x80) == 0 )
      goto LABEL_4;
  }
  Current = DXGTHREAD::GetCurrent();
  if ( Current )
  {
    v9 = (struct DXGPROCESS *)*((_QWORD *)Current + 3);
    if ( !v9 )
      goto LABEL_4;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
    v9 = DXGGLOBAL::SearchDxgThreadList(Global, CurrentThread);
    if ( !v9 )
    {
      WdLogSingleEntry1(2LL, 2923LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Failed to find DXGPROCESS", 2923LL, 0LL, 0LL, 0LL, 0LL);
LABEL_4:
      v9 = v7;
    }
  }
  if ( !a1 )
  {
    v91 = -1073741811;
    v54 = PsGetCurrentProcess(v8);
    WdLogSingleEntry2(2LL, v91, v54);
    v56 = PsGetCurrentProcess(v55);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      v91,
      v56,
      0LL,
      0LL,
      0LL);
    v57 = v91;
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
    if ( (qword_1C013A870 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
        goto LABEL_82;
      goto LABEL_81;
    }
    return v57;
  }
  p_PresentPlaneCount = &a1->PresentPlaneCount;
  if ( (unsigned __int64)&a1->PresentPlaneCount >= MmUserProbeAddress )
    p_PresentPlaneCount = (unsigned int *)MmUserProbeAddress;
  v115 = *p_PresentPlaneCount;
  *(_OWORD *)v104 = 0LL;
  *(_OWORD *)v105 = 0LL;
  *(_OWORD *)v106 = 0LL;
  *(_OWORD *)v107 = 0LL;
  v108 = v115;
  v91 = CapturePresentMultiPlaneOverlayArgs3(
          a1,
          (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v109,
          v104,
          (struct _D3DKMT_MULTIPLANE_OVERLAY3 **)&v104[1],
          (struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 **)v105,
          &v105[1],
          v106,
          &v106[1],
          (unsigned __int8 **)v107,
          &v107[1]);
  if ( v91 < 0 )
  {
    v60 = PsGetCurrentProcess(v11);
    WdLogSingleEntry2(2LL, v91, v60);
    v62 = PsGetCurrentProcess(v61);
    v63 = v91;
    v64 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_87:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v64, v63, v62, 0LL, 0LL, 0LL);
LABEL_89:
    v57 = v91;
    goto LABEL_92;
  }
  v12 = *(_DWORD *)&v109[28];
  if ( !*(_DWORD *)&v109[28] )
  {
    WdLogSingleEntry1(1LL, 2857LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Present.PresentPlaneCount > 0", 2857LL, 0LL, 0LL, 0LL, 0LL);
    v12 = *(_DWORD *)&v109[28];
  }
  if ( v12 > 0xA )
  {
    WdLogSingleEntry1(1LL, 2858LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Present.PresentPlaneCount <= DXGK_MAX_MPO_PLANES_PER_SOURCE",
      2858LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = *(_DWORD *)&v109[4];
  if ( !*(_DWORD *)&v109[4] )
  {
    WdLogSingleEntry1(1LL, 2859LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Present.ContextCount > 0", 2859LL, 0LL, 0LL, 0LL, 0LL);
    v13 = *(_DWORD *)&v109[4];
  }
  if ( v13 > 0x40 )
  {
    WdLogSingleEntry1(1LL, 2860LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Present.ContextCount <= D3DDDI_MAX_BROADCAST_CONTEXT",
      2860LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)&v109[16] >= 0x10u )
  {
    v91 = -1073741811;
    WdLogSingleEntry2(2LL, *(unsigned int *)&v109[16], -1073741811LL);
    v62 = v91;
    v63 = *(unsigned int *)&v109[16];
    v64 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay2, returning 0x%I64x";
    goto LABEL_87;
  }
  v14 = *(_DWORD *)&v109[52];
  v15 = *(unsigned __int8 **)&v109[64];
  if ( !*(_DWORD *)&v109[52] && !*(_QWORD *)&v109[64] )
  {
    v101 = 0LL;
    v111 = 0LL;
    if ( !(unsigned int)AllocateAndPopulateHDRMetadataFromDisplay(
                          (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v109,
                          &v111,
                          (enum _D3DDDI_HDR_METADATA_TYPE *)&v101,
                          (unsigned int *)&v101 + 1) )
    {
      v15 = v111;
      *(_QWORD *)&v109[64] = v111;
      v14 = v101;
      *(_QWORD *)&v109[52] = v101;
      v16 = HIDWORD(v101);
      *(_DWORD *)&v109[24] |= 0x80u;
      goto LABEL_22;
    }
    v15 = *(unsigned __int8 **)&v109[64];
    v14 = *(_DWORD *)&v109[52];
  }
  v16 = *(_DWORD *)&v109[56];
LABEL_22:
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      if ( !v16 || v16 == 28 )
      {
        if ( v15 )
        {
          if ( v16 )
            goto LABEL_25;
        }
        else if ( !v16 )
        {
          goto LABEL_25;
        }
      }
      v91 = -1073741811;
      WdLogSingleEntry2(2LL, v16, -1073741811LL);
      v62 = v91;
      v63 = *(unsigned int *)&v109[56];
      v64 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10, returning 0x%I64x";
    }
    else if ( v14 == 2 )
    {
      if ( !v16 || v16 == 72 )
      {
        if ( v15 )
        {
          if ( v16 )
            goto LABEL_25;
        }
        else if ( !v16 )
        {
          goto LABEL_25;
        }
      }
      v91 = -1073741811;
      WdLogSingleEntry2(2LL, v16, -1073741811LL);
      v62 = v91;
      v63 = *(unsigned int *)&v109[56];
      v64 = L"Invalid HDR metadata size 0x%I64x specified with D3DDDI_HDR_METADATA_TYPE_HDR10PLUS, returning 0x%I64x";
    }
    else
    {
      v91 = -1073741811;
      WdLogSingleEntry2(2LL, v14, -1073741811LL);
      v62 = v91;
      v63 = *(int *)&v109[52];
      v64 = L"Invalid HDR metadata type 0x%I64x specified, returning 0x%I64x";
    }
    goto LABEL_87;
  }
  if ( v16 || v15 )
  {
    v91 = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Non-NULL HDR metadata specified with D3DDDI_HDR_METADATA_TYPE_NONE, returning 0x%I64x",
      v91,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_89;
  }
LABEL_25:
  v110 = 0LL;
  DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99, **(_DWORD **)&v109[8], v9, &v110, 0, 1);
  v18 = v110;
  if ( !v110 )
  {
    v91 = -1073741811;
    v65 = **(_DWORD **)&v109[8];
    v66 = PsGetCurrentProcess(v17);
    WdLogSingleEntry3(3LL, v91, v66, v65);
    v57 = v91;
    DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
LABEL_92:
    DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v104);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
    if ( (qword_1C013A870 & 2) != 0 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) == 0 )
      {
LABEL_82:
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v59, v92);
        return v57;
      }
LABEL_81:
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v58,
        v59,
        0,
        v94[4],
        v94[5],
        1,
        v94[6],
        v94[7],
        v94[12],
        *v95);
      goto LABEL_82;
    }
    return v57;
  }
  v19 = *((_QWORD *)v110 + 2);
  v20 = *(struct _KEVENT **)(v19 + 16);
  if ( ((__int64)v20->Header.WaitListHead.Blink[174].Blink & 8) == 0 )
  {
    if ( (*((_DWORD *)v110 + 101) & 8) != 0 )
    {
      WdLogSingleEntry1(3LL, 2974LL);
      goto LABEL_123;
    }
    v102 = *((_QWORD *)v110 + 2);
    v103 = 0;
    if ( !v19 )
    {
LABEL_33:
      v22 = *(_DWORD *)&v109[4];
      Pool2 = 0LL;
      P = 0LL;
      v98 = 0;
      if ( *(_DWORD *)&v109[4] > 4u )
      {
        if ( 0xFFFFFFFFFFFFFFFFuLL / *(unsigned int *)&v109[4] < 8 )
          goto LABEL_37;
        Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8LL * *(unsigned int *)&v109[4], 1265072196LL);
        P = Pool2;
      }
      else
      {
        Pool2 = v97;
        P = v97;
        if ( *(_DWORD *)&v109[4] )
        {
          memset(v97, 0, 8LL * *(unsigned int *)&v109[4]);
          Pool2 = P;
        }
      }
      v98 = v22;
LABEL_37:
      if ( !Pool2 )
      {
        WdLogSingleEntry1(3LL, 2984LL);
        if ( P != v97 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v98 = 0;
        if ( v19 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v102);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
        DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v104);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
        if ( (qword_1C013A870 & 2) == 0 )
          return 3221225495LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqqqdqqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v72,
            v74,
            0,
            v94[4],
            v94[5],
            1,
            v94[6],
            v94[7],
            v94[12],
            *v95);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225495LL;
        goto LABEL_172;
      }
      *Pool2 = v18;
      DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v118, v9);
      v24 = 1;
      if ( *(_DWORD *)&v109[4] <= 1u )
      {
LABEL_39:
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
          (__int64)v116,
          P,
          v98,
          v25,
          1);
        if ( !v117 )
        {
          v26 = *(volatile signed __int64 **)(*(_QWORD *)(*((_QWORD *)v18 + 2) + 16LL) + 16LL);
          v113 = (struct DXGADAPTER *)v26;
          _InterlockedIncrement64(v26 + 3);
          v112 = -1LL;
          v27 = v26 + 17;
          KeEnterCriticalRegion();
          ExAcquirePushLockSharedEx(v27, 0LL);
          _InterlockedIncrement((volatile signed __int32 *)v27 + 4);
          v114 = 1;
          COREDEVICEACCESS::COREDEVICEACCESS((__int64)v119, *((_QWORD *)v18 + 2), 1, v28, 0);
          if ( !v127 || (COREACCESS::AcquireShared((COREACCESS *)v124, 0LL), *(_DWORD *)(v125 + 200) == 1) )
          {
            if ( v122 )
              WdLogSingleEntry5(0LL, 275LL, 4LL, v120, 0LL, 0LL);
            if ( KeGetCurrentThread() != *((struct _KTHREAD **)v121 + 23) )
            {
              if ( !KeReadStateEvent((PRKEVENT)v121 + 2) )
              {
                if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v29, (const EVENT_DESCRIPTOR *)"g", v30, 72);
                KeWaitForSingleObject((char *)v121 + 48, Executive, 0, 0, 0LL);
              }
              DXGADAPTER::AcquireCoreResourceShared(v121, 0LL);
            }
            v123 = 0LL;
            v122 = 1;
            v31 = *(unsigned int *)(v126 + 608);
            if ( (_DWORD)v31 == 1 )
            {
              v32 = 0;
            }
            else
            {
              COREACCESS::Release((COREACCESS *)v120);
              if ( v127 )
                COREACCESS::Release((COREACCESS *)v124);
              v32 = -1073741130;
            }
          }
          else
          {
            COREACCESS::Release((COREACCESS *)v124);
            v32 = -1073741130;
          }
          v91 = v32;
          if ( v32 < 0 )
          {
            v82 = PsGetCurrentProcess(v31);
            WdLogSingleEntry2(3LL, v91, v82);
            v57 = v91;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v112);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
            if ( P != v97 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v98 = 0;
            if ( !v19 )
              goto LABEL_91;
LABEL_90:
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v102);
LABEL_91:
            DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
            goto LABEL_92;
          }
          v33 = (DXGDEVICE **)v110;
          v34 = (const struct DXGDEVICE *)*((_QWORD *)v110 + 2);
          v35 = *((_QWORD *)v34 + 235);
          if ( !v35 )
          {
            v91 = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
              v91,
              0LL,
              0LL,
              0LL,
              0LL);
            v57 = v91;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v112);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
            v83 = P;
            if ( P != v97 && P )
              goto LABEL_201;
            goto LABEL_202;
          }
          if ( (*((_DWORD *)v9 + 106) & 4) == 0
            && !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v35 + 2920), v34, *(unsigned int *)&v109[16]) )
          {
            v91 = -1073741790;
            v85 = PsGetCurrentProcess(v84);
            WdLogSingleEntry2(2LL, v91, v85);
            v87 = PsGetCurrentProcess(v86);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
              v91,
              v87,
              0LL,
              0LL,
              0LL);
            v57 = v91;
            COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
            DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)&v112);
            DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
            v83 = P;
            if ( P != v97 && P )
LABEL_201:
              ExFreePoolWithTag(v83, 0);
LABEL_202:
            P = 0LL;
            v98 = 0;
            if ( !v19 )
              goto LABEL_91;
            goto LABEL_90;
          }
          v91 = DXGCONTEXT::PresentMultiPlaneOverlay3(
                  (DXGCONTEXT *)v33,
                  (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *)v109,
                  (struct COREDEVICEACCESS *)v119,
                  (struct DXGCONTEXT **)P);
          if ( v91 == -1071775482 )
            DXGDEVICE::CloseInternalCddPrimaryHandle(v33[2], (struct COREDEVICEACCESS *)v119);
          COREDEVICEACCESS::~COREDEVICEACCESS((COREDEVICEACCESS *)v119);
          v36 = (char *)v113 + 136;
          _InterlockedDecrement((volatile signed __int32 *)v113 + 38);
          ExReleasePushLockSharedEx(v36, 0LL);
          KeLeaveCriticalRegion();
          if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v113 + 3, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
            DXGGLOBAL::DestroyAdapter(*((DXGGLOBAL **)v113 + 2), v113);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
          v37 = P;
          if ( P != v97 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v98 = 0;
          if ( v19 && v103 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(v19 + 136));
            KeLeaveCriticalRegion();
          }
          v38 = PsGetCurrentProcess(v37);
          v39 = PsGetProcessDxgProcess(v38);
          v40 = (struct DXGPROCESS *)v39;
          if ( !v39 || (*(_DWORD *)(v39 + 424) & 0x80) != 0 )
          {
            v88 = DXGTHREAD::GetCurrent();
            if ( v88 )
            {
              v41 = (struct DXGPROCESS *)*((_QWORD *)v88 + 3);
              if ( v41 )
                goto LABEL_62;
            }
            else
            {
              v89 = KeGetCurrentThread();
              v90 = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
              v41 = DXGGLOBAL::SearchDxgThreadList(v90, v89);
              if ( v41 )
                goto LABEL_62;
              WdLogSingleEntry1(2LL, 2923LL);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to find DXGPROCESS",
                2923LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          v41 = v40;
LABEL_62:
          v42 = *((_QWORD *)v41 + 8);
          for ( i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v42 + 104), (PKSPIN_LOCK)(v42 + 120));
                i;
                i = ExInterlockedRemoveHeadList((PLIST_ENTRY)(v42 + 104), (PKSPIN_LOCK)(v42 + 120)) )
          {
            ((void (__fastcall *)(struct _LIST_ENTRY *))i[1].Flink)(i[1].Blink);
            operator delete(i);
          }
          v44 = v91;
          if ( v99 && !v100 )
            DXGCONTEXT::ReleaseReference(v99);
          operator delete(v104[0]);
          operator delete(v104[1]);
          operator delete(v105[0]);
          v45 = v105[1];
          if ( v105[1] && v108 )
          {
            v46 = (void **)v105[1];
            v47 = v108;
            do
            {
              operator delete(*v46++);
              --v47;
            }
            while ( v47 );
          }
          operator delete(v45);
          operator delete(v106[0]);
          operator delete(v106[1]);
          operator delete(v107[0]);
          operator delete(v107[1]);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
          if ( (qword_1C013A870 & 2) != 0 )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0qqqqdqqq_EtwWriteTransfer(
                (REGHANDLE *)&DxgkControlGuid_Context,
                v48,
                v49,
                0,
                v94[4],
                v94[5],
                1,
                v94[6],
                v94[7],
                v94[12],
                *v95);
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
              McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v49, v92);
          }
          return v44;
        }
        if ( v116[0] )
        {
          WdLogSingleEntry1(3LL, 3040LL);
          DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
          if ( P != v97 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v98 = 0;
          if ( v19 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v102);
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
          DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v104);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
          if ( (qword_1C013A870 & 2) == 0 )
            return 3221225485LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0qqqqdqqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v81,
              v69,
              0,
              v94[4],
              v94[5],
              1,
              v94[6],
              v94[7],
              v94[12],
              *v95);
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 3221225485LL;
          goto LABEL_183;
        }
        WdLogSingleEntry1(3LL, 3035LL);
        DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v116);
        if ( P != v97 && P )
          ExFreePoolWithTag(P, 0);
        P = 0LL;
        v98 = 0;
        if ( v19 )
          DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v102);
        DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
        DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v104);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
        if ( (qword_1C013A870 & 2) == 0 )
          return 3221225495LL;
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqqqdqqq_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            v80,
            v74,
            0,
            v94[4],
            v94[5],
            1,
            v94[6],
            v94[7],
            v94[12],
            *v95);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
          return 3221225495LL;
LABEL_172:
        McTemplateK0q_EtwWriteTransfer(v73, &EventProfilerExit, v74, v92);
        return 3221225495LL;
      }
      while ( 1 )
      {
        v75 = (*(_DWORD *)(*(_QWORD *)&v109[8] + 4LL * v24) >> 6) & 0xFFFFFF;
        if ( v75 < *((_DWORD *)v9 + 74) )
        {
          v76 = *((_QWORD *)v9 + 35) + 16LL * v75;
          if ( ((*(_DWORD *)(*(_QWORD *)&v109[8] + 4LL * v24) >> 25) & 0x60) == (*(_BYTE *)(v76 + 8) & 0x60)
            && (*(_DWORD *)(v76 + 8) & 0x2000) == 0 )
          {
            v77 = *(_DWORD *)(v76 + 8) & 0x1F;
            if ( v77 )
            {
              if ( v77 == 7 )
              {
                v78 = *(_QWORD *)v76;
                goto LABEL_151;
              }
              WdLogSingleEntry1(2LL, 267LL);
              DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            }
          }
        }
        v78 = 0LL;
LABEL_151:
        *((_QWORD *)P + v24) = v78;
        v79 = *((_QWORD *)P + v24);
        if ( !v79 || (*(_DWORD *)(v79 + 404) & 8) != 0 || *(_QWORD *)(v79 + 16) != *((_QWORD *)v18 + 2) )
        {
          WdLogSingleEntry4(2LL, v18, *(unsigned int *)(*(_QWORD *)&v109[8] + 4LL * v24), v24, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
            (__int64)v18,
            *(unsigned int *)(*(_QWORD *)&v109[8] + 4LL * v24),
            v24,
            -1073741811LL,
            0LL);
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v118);
          if ( P != v97 && P )
            ExFreePoolWithTag(P, 0);
          P = 0LL;
          v98 = 0;
          if ( v19 )
            DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)&v102);
LABEL_123:
          DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
          DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v104);
          DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
          if ( (qword_1C013A870 & 2) == 0 )
            return 3221225485LL;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
LABEL_119:
            McTemplateK0qqqqdqqq_EtwWriteTransfer(
              (REGHANDLE *)&DxgkControlGuid_Context,
              v67,
              v69,
              0,
              v94[4],
              v94[5],
              1,
              v94[6],
              v94[7],
              v94[12],
              *v95);
LABEL_120:
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) == 0 )
            return 3221225485LL;
LABEL_183:
          McTemplateK0q_EtwWriteTransfer(v68, &EventProfilerExit, v69, v92);
          return 3221225485LL;
        }
        if ( ++v24 >= *(_DWORD *)&v109[4] )
          goto LABEL_39;
      }
    }
    if ( *(_DWORD *)(v19 + 464) == 2 )
    {
      v21 = v20 + 5;
      if ( KeReadStateEvent(v20 + 5) )
        goto LABEL_31;
    }
    else
    {
      v21 = v20 + 4;
      if ( KeReadStateEvent(v20 + 4) )
      {
LABEL_31:
        KeEnterCriticalRegion();
        if ( !ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 0) )
        {
          DXGADAPTER::TryWakeUpFromD3State(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v70, (const EVENT_DESCRIPTOR *)"g", v71, 40);
          ExAcquireResourceExclusiveLite(*(PERESOURCE *)(v19 + 136), 1u);
          DXGADAPTER::EnableD3Requests(*(DXGADAPTER **)(*(_QWORD *)(v19 + 16) + 16LL));
        }
        v103 = 1;
        goto LABEL_33;
      }
    }
    KeWaitForSingleObject(v21, Executive, 0, 0, 0LL);
    goto LABEL_31;
  }
  WdLogSingleEntry1(2LL, (unsigned int)**(_DWORD **)&v109[8]);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
    (unsigned int)**(_DWORD **)&v109[8],
    0LL,
    0LL,
    0LL,
    0LL);
  DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)&v99);
  DxgkPresentMultiPlaneOverlay3_::_2_::_AUTO::__AUTO(v104);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v92);
  if ( (qword_1C013A870 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      goto LABEL_119;
    goto LABEL_120;
  }
  return 3221225485LL;
}
