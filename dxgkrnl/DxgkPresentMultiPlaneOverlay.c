/*
 * XREFs of DxgkPresentMultiPlaneOverlay @ 0x1C0320670
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@PEAPEAVDXGCONTEXT@@IEE@Z @ 0x1C0001064 (--0-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??1?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1?AcquireContextLock@@YAXPEAV1@@Z$1?ReleaseContextLock@@YAX0@Z$03@@QEAA@XZ @ 0x1C000138C (--1-$DXGPOINTERARRAYORDEREDACQUIRE@VDXGCONTEXT@@$1-AcquireContextLock@@YAXPEAV1@@Z$1-ReleaseCont.c)
 *     ??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z @ 0x1C0003634 (--0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z.c)
 *     ??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z @ 0x1C00036D8 (--0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z.c)
 *     ??0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z @ 0x1C00037CC (--0DXGCONTEXTBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGCONTEXT@@_N2@Z.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0003A50 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ @ 0x1C0003AA0 (-Release@DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAAXXZ.c)
 *     ??1DXGCONTEXTBYHANDLE@@QEAA@XZ @ 0x1C0003AE4 (--1DXGCONTEXTBYHANDLE@@QEAA@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00069FC (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006F40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00071E8 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C00096F0 (-Acquire@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ?Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ @ 0x1C0009754 (-Release@DXGADAPTERSTOPRESETLOCKSHARED@@QEAAXXZ.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x1C00098CC (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     McTemplateK0qqqqdqqq_EtwWriteTransfer @ 0x1C0053108 (McTemplateK0qqqqdqqq_EtwWriteTransfer.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C01A3640 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C031F184 (-CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3D.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0320004 (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0338E58 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall DxgkPresentMultiPlaneOverlay(struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 CurrentProcess; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 VidPnSourceId; // rcx
  const wchar_t *v16; // r9
  __int64 v17; // rcx
  __int64 *v18; // rsi
  __int64 v19; // rax
  struct DXGDEVICE *v20; // rdx
  __int64 v21; // r14
  _QWORD *Pool2; // rax
  unsigned int v23; // r8d
  __int64 v24; // r12
  D3DKMT_HANDLE v25; // eax
  __int64 v26; // r10
  int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rax
  const struct DXGDEVICE *v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v49; // [rsp+68h] [rbp-A0h] BYREF
  struct DXGCONTEXT *v50; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  _BYTE v52[32]; // [rsp+80h] [rbp-88h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp-68h]
  _BYTE v54[8]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v55; // [rsp+B0h] [rbp-58h]
  char v56; // [rsp+B8h] [rbp-50h]
  _QWORD v57[2]; // [rsp+C0h] [rbp-48h] BYREF
  struct D3DKMT_MULTIPLANE_OVERLAY *v58[2]; // [rsp+D0h] [rbp-38h] BYREF
  int v59; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v60; // [rsp+E8h] [rbp-20h]
  int *v61; // [rsp+F0h] [rbp-18h]
  __int64 *v62; // [rsp+F8h] [rbp-10h]
  _BYTE v63[16]; // [rsp+100h] [rbp-8h] BYREF
  _QWORD v64[6]; // [rsp+110h] [rbp+8h] BYREF
  char v65; // [rsp+140h] [rbp+38h]
  D3DKMT_PRESENT_MULTIPLANE_OVERLAY v66; // [rsp+148h] [rbp+40h] BYREF
  _BYTE v67[8]; // [rsp+278h] [rbp+170h] BYREF
  _BYTE v68[64]; // [rsp+280h] [rbp+178h] BYREF
  _BYTE v69[88]; // [rsp+2C0h] [rbp+1B8h] BYREF

  v2 = -1073741811;
  LODWORD(v49) = -1073741811;
  memset(&v66, 0, sizeof(v66));
  v61 = (int *)&v66;
  v60 = 0LL;
  v59 = 2092;
  v62 = &v49;
  if ( (qword_1C013A870 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v3, &EventProfilerEnter, v4, 2092);
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v59, 2092);
  Current = DXGPROCESS::GetCurrent(v5);
  if ( !a1 )
  {
    LODWORD(v49) = -1073741811;
    CurrentProcess = PsGetCurrentProcess(v6);
    WdLogSingleEntry2(2LL, (int)v49, CurrentProcess);
    v10 = PsGetCurrentProcess(v9);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Presenting multi plane overlay from unexpected process 0x%I64x 0x%I64x",
      (int)v49,
      v10,
      0LL,
      0LL,
      0LL);
    v2 = v49;
    goto LABEL_74;
  }
  *(_OWORD *)v58 = 0LL;
  LODWORD(v49) = CapturePresentMultiPlaneOverlayArgs(a1, &v66, v58, (struct tagRECT **)&v58[1]);
  if ( (int)v49 >= 0 )
  {
    if ( v66.VidPnSourceId >= 0x10 )
    {
      LODWORD(v49) = -1073741811;
      WdLogSingleEntry2(2LL, v66.VidPnSourceId, -1073741811LL);
      VidPnSourceId = v66.VidPnSourceId;
      v16 = L"Invalid VidPnSoureId 0x%I64x specified in DxgkPresentMultiPlaneOverlay, returning 0x%I64x";
      v14 = (int)v49;
      goto LABEL_10;
    }
    v50 = 0LL;
    DXGCONTEXTBYHANDLE::DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v63, v66.hDevice, Current, &v50, 0, 1);
    v18 = (__int64 *)v50;
    if ( !v50 )
    {
      LODWORD(v49) = -1073741811;
      v19 = PsGetCurrentProcess(v17);
      WdLogSingleEntry3(3LL, (int)v49, v19, v66.hDevice);
LABEL_71:
      v2 = v49;
      goto LABEL_72;
    }
    v20 = (struct DXGDEVICE *)*((_QWORD *)v50 + 2);
    if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v20 + 2) + 16LL) + 2792LL) & 8) != 0 )
    {
      WdLogSingleEntry1(2LL, v66.hDevice);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Present is not supported on MCDM adapter context 0x%I64x",
        v66.hDevice,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_72:
      DXGCONTEXTBYHANDLE::~DXGCONTEXTBYHANDLE((DXGCONTEXTBYHANDLE *)v63);
      goto LABEL_73;
    }
    if ( (*((_DWORD *)v50 + 101) & 8) != 0 )
    {
      WdLogSingleEntry1(3LL, 332LL);
      goto LABEL_72;
    }
    DXGDEVICEACCESSLOCKEXCLUSIVE::DXGDEVICEACCESSLOCKEXCLUSIVE((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57, v20);
    if ( v66.BroadcastContextCount > 0x40 )
    {
      WdLogSingleEntry2(3LL, v18, -1073741811LL);
LABEL_58:
      if ( v57[0] )
        DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
      goto LABEL_72;
    }
    v21 = v66.BroadcastContextCount + 1;
    P = 0LL;
    v53 = 0;
    if ( (unsigned int)v21 <= 4 )
    {
      P = v52;
      memset(v52, 0, 8LL * (unsigned int)v21);
      Pool2 = P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)v21 < 8 )
        goto LABEL_25;
      Pool2 = (_QWORD *)ExAllocatePool2(256LL, 8 * v21, 1265072196LL);
      P = Pool2;
    }
    v53 = v21;
    if ( !Pool2 )
    {
LABEL_25:
      WdLogSingleEntry1(3LL, 354LL);
      v2 = -1073741801;
LABEL_54:
      if ( P != v52 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v53 = 0;
      goto LABEL_58;
    }
    *Pool2 = v18;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v54, Current);
    LODWORD(v50) = 0;
    v23 = 0;
    if ( !v66.BroadcastContextCount )
    {
LABEL_38:
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>(
        (__int64)v64,
        P,
        v53,
        v31,
        1);
      if ( v65 )
      {
        if ( v64[0] )
        {
          WdLogSingleEntry1(3LL, 410LL);
        }
        else
        {
          WdLogSingleEntry1(3LL, 405LL);
          v2 = -1073741801;
        }
      }
      else
      {
        v32 = v18[2];
        v56 = 0;
        v55 = *(_QWORD *)(*(_QWORD *)(v32 + 16) + 16LL);
        DXGADAPTERSTOPRESETLOCKSHARED::Acquire((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
        COREDEVICEACCESS::COREDEVICEACCESS((__int64)v67, v18[2], 1, v33, 0);
        LODWORD(v49) = COREDEVICEACCESS::AcquireShared((COREDEVICEACCESS *)v67, 0LL);
        if ( (int)v49 >= 0 )
        {
          v36 = (const struct DXGDEVICE *)v18[2];
          v37 = *((_QWORD *)v36 + 235);
          if ( v37 )
          {
            if ( (*((_DWORD *)Current + 106) & 4) != 0
              || ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v37 + 2920), v36, v66.VidPnSourceId) )
            {
              v42 = v18[2];
              v43 = *(_QWORD *)(*(_QWORD *)(v42 + 16) + 16LL);
              if ( *(_QWORD *)(v42 + 1880) == v43 )
              {
                LODWORD(v49) = DXGCONTEXT::PresentMultiPlaneOverlay(
                                 (DXGCONTEXT *)v18,
                                 &v66,
                                 (struct COREDEVICEACCESS *)v67,
                                 (struct DXGCONTEXT **)P);
                if ( (_DWORD)v49 == -1071775482 )
                  DXGDEVICE::CloseInternalCddPrimaryHandle((DXGDEVICE *)v18[2], (struct COREDEVICEACCESS *)v67);
              }
              else
              {
                v44 = PsGetCurrentProcess(v43);
                WdLogSingleEntry2(3LL, -1073741811LL, v44);
                LODWORD(v49) = -1073741811;
              }
              COREACCESS::~COREACCESS((COREACCESS *)v69);
              COREACCESS::~COREACCESS((COREACCESS *)v68);
              if ( v56 )
                DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
              DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v64);
              if ( P != v52 && P )
                ExFreePoolWithTag(P, 0);
              P = 0LL;
              v53 = 0;
              if ( v57[0] )
                DXGDEVICEACCESSLOCKEXCLUSIVE::Release((DXGDEVICEACCESSLOCKEXCLUSIVE *)v57);
              goto LABEL_71;
            }
            LODWORD(v49) = -1073741790;
            v39 = PsGetCurrentProcess(v38);
            WdLogSingleEntry2(2LL, (int)v49, v39);
            v41 = PsGetCurrentProcess(v40);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Presenting multi plane overlay is only supported from the DWM process 0x%I64x 0x%I64x",
              (int)v49,
              v41,
              0LL,
              0LL,
              0LL);
          }
          else
          {
            LODWORD(v49) = -1073741811;
            WdLogSingleEntry1(2LL, -1073741811LL);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"PresentMultiPlaneOverlay called on a render only adapter, returning 0x%I64x",
              (int)v49,
              0LL,
              0LL,
              0LL,
              0LL);
          }
        }
        else
        {
          v35 = PsGetCurrentProcess(v34);
          WdLogSingleEntry2(3LL, (int)v49, v35);
        }
        v2 = v49;
        COREACCESS::~COREACCESS((COREACCESS *)v69);
        COREACCESS::~COREACCESS((COREACCESS *)v68);
        if ( v56 )
          DXGADAPTERSTOPRESETLOCKSHARED::Release((DXGADAPTERSTOPRESETLOCKSHARED *)v54);
      }
      DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>::~DXGPOINTERARRAYORDEREDACQUIRE<DXGCONTEXT,&void AcquireContextLock(DXGCONTEXT *),&void ReleaseContextLock(DXGCONTEXT *),4>((__int64)v64);
      goto LABEL_54;
    }
    while ( 1 )
    {
      v24 = v23;
      v25 = (v66.BroadcastContext[v23] >> 6) & 0xFFFFFF;
      if ( v25 < *((_DWORD *)Current + 74) )
      {
        v26 = *((_QWORD *)Current + 35);
        if ( ((v66.BroadcastContext[v23] >> 25) & 0x60) == (*(_BYTE *)(v26 + 16LL * v25 + 8) & 0x60)
          && (*(_DWORD *)(v26 + 16LL * v25 + 8) & 0x2000) == 0 )
        {
          v27 = *(_DWORD *)(v26 + 16LL * v25 + 8) & 0x1F;
          if ( v27 )
          {
            if ( v27 == 7 )
            {
              v28 = *(_QWORD *)(v26 + 16LL * v25);
              goto LABEL_34;
            }
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v23 = (unsigned int)v50;
          }
        }
      }
      v28 = 0LL;
LABEL_34:
      v29 = v23 + 1;
      v23 = v29;
      LODWORD(v50) = v29;
      *((_QWORD *)P + v29) = v28;
      v30 = *((_QWORD *)P + v29);
      if ( !v30 || (*(_DWORD *)(v30 + 404) & 8) != 0 || *(_QWORD *)(v30 + 16) != v18[2] )
      {
        WdLogSingleEntry4(2LL, v18, v66.BroadcastContext[v24], v24, -1073741811LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"0x%I64x failed with invalid broadcast context 0x%I64x at index %I64d returning 0x%I64x",
          (__int64)v18,
          v66.BroadcastContext[v24],
          v24,
          -1073741811LL,
          0LL);
        DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v54);
        goto LABEL_54;
      }
      if ( (unsigned int)v29 >= v66.BroadcastContextCount )
        goto LABEL_38;
    }
  }
  v12 = PsGetCurrentProcess(v11);
  WdLogSingleEntry2(2LL, (int)v49, v12);
  v14 = PsGetCurrentProcess(v13);
  VidPnSourceId = (int)v49;
  v16 = L"Failed to capture multi plane overlay parameters 0x%I64x 0x%I64x";
LABEL_10:
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v16, VidPnSourceId, v14, 0LL, 0LL, 0LL);
  v2 = v49;
LABEL_73:
  operator delete(v58[0]);
  operator delete(v58[1]);
LABEL_74:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v59);
  if ( (qword_1C013A870 & 2) != 0 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0qqqqdqqq_EtwWriteTransfer(
        (REGHANDLE *)&DxgkControlGuid_Context,
        v45,
        v47,
        *v61,
        v61[66],
        v61[67],
        v61[68],
        v61[69],
        v61[70],
        v61[74],
        *(_DWORD *)v62);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v46, &EventProfilerExit, v47, v59);
  }
  return v2;
}
