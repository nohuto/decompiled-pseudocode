/*
 * XREFs of ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C0163594 (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_SUBMITPRESENTTOHWQUEUE@@IPEAVCOREDEVICEACCESS@@PEAV.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C01C8C80 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@Z @ 0x1C0336940 (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@PEAUtagRECT@@IPEBU2@PEAVCOREDEVICEACCESS@@PEAPEAVDXGHWQUEUE@@@.c)
 *     ?BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z @ 0x1C03373A8 (-BltFromVm@DXGCONTEXT@@QEAAJIIIPEAPEAV1@UtagRECT@@1IPEBU2@PEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsRemoteConnection@DXGPROCESS@@QEBAEXZ @ 0x1C0009F04 (-IsRemoteConnection@DXGPROCESS@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?GetAllocationSafe@DXGPROCESS@@QEAA?AVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C001B524 (-GetAllocationSafe@DXGPROCESS@@QEAA-AVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0027340 (memmove.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0046DC4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164230 (-SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCAT.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0164970 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0194420 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01B2F2C (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z @ 0x1C01CA21C (-ReadPresentPrivateDriverData@@YAJPEAVDXGADAPTER@@IPEAXPEAPEAVCRefCountedBuffer@@@Z.c)
 *     ?SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BASE@@1@Z @ 0x1C022405E (-SynchronizeImplicitQueueWithRenderQueues@DXGCONTEXT@@QEAAJPEAPEAV1@K_NPEAUVIDSCH_SUBMIT_DATA_BA.c)
 *     ?SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C02E049C (-SubmitCommandToImplicitQueue@DXGCONTEXT@@QEAAJPEAUVIDSCH_SUBMIT_DATA_BASE@@@Z.c)
 *     ?GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ @ 0x1C02E63B8 (-GetBroadcastPresentSyncObject@DXGDEVICE@@QEAAPEAU_VIDSCH_SYNC_OBJECT@@XZ.c)
 *     ?SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C033B910 (-SubmitPresentLda@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@IPEAPEAV1@PEAVDXGALLOCATION@@PEAU_DXGKAR.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE **a3,
        unsigned int a4,
        struct DXGCONTEXT **a5,
        struct DXGALLOCATION *a6,
        unsigned int a7,
        unsigned int a8,
        struct _DXGKARG_PRESENT *a9,
        struct _D3DKMT_PRESENT_RGNS *a10,
        struct _VIDMM_DMA_BUFFER *a11,
        struct VIDSCH_SUBMIT_DATA_BASE *a12,
        enum _D3DDDIFORMAT a13,
        struct COREDEVICEACCESS *a14)
{
  char *v15; // rsi
  __int64 v16; // rax
  struct DXGALLOCATION *v17; // rdi
  struct DXGALLOCATION *v18; // rbx
  DXGALLOCATIONREFERENCE *AllocationSafe; // rax
  DXGALLOCATIONREFERENCE *v20; // rax
  int PresentPrivateDriverData; // eax
  __int64 v22; // rsi
  char *v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // rcx
  unsigned int v26; // r9d
  struct DXGCONTEXT **v27; // rcx
  int v28; // edx
  unsigned int v29; // r8d
  struct _D3DKMT_PRESENT_RGNS *v30; // r10
  struct DXGHWQUEUE *v31; // r8
  int v32; // r15d
  DXGDEVICE **v33; // rbx
  struct _VIDMM_DMA_BUFFER *v34; // r8
  struct _DXGKARG_PRESENT *v36; // rcx
  int v37; // eax
  DXGCONTEXT *v38; // rbx
  const wchar_t *v39; // r9
  __int64 v40; // rdx
  UINT v41; // eax
  struct _DXGKARG_PRESENT *v42; // rcx
  RECT *v43; // r9
  unsigned int v44; // edx
  unsigned int MoveRectCount; // r8d
  unsigned int v46; // r13d
  struct DXGALLOCATION *v47; // rdi
  struct DXGALLOCATION *v48; // rbx
  unsigned int v49; // r8d
  unsigned int v50; // r15d
  unsigned int *v51; // rdx
  DXGALLOCATIONREFERENCE *v52; // rax
  __int64 v53; // rbx
  struct DXGCONTEXT *v54; // r8
  struct DXGALLOCATION *v55; // rbx
  unsigned int *v56; // rdx
  DXGALLOCATIONREFERENCE *v57; // rax
  __int64 v58; // rbx
  struct DXGCONTEXT *v59; // r8
  struct DXGALLOCATION *v60; // rbx
  struct DXGHWQUEUE *v61; // r8
  struct DXGCONTEXT **v62; // r12
  _BYTE *Pool2; // r9
  unsigned int v64; // edi
  unsigned int i; // edx
  __int64 v66; // rbx
  struct DXGCONTEXT *v67; // r8
  struct DXGALLOCATION *v68; // rbx
  struct _DXGKARG_PRESENT *v69; // rax
  int v70; // ecx
  unsigned int v71; // edx
  __int64 v72; // rcx
  DXGDEVICE *v73; // r9
  __int64 v74; // r10
  _DWORD *v75; // rbx
  char *v76; // r8
  unsigned __int8 IsDxgmms2; // al
  __int64 v78; // r10
  DXGDEVICE **v79; // r11
  struct DXGALLOCATION *v80; // r15
  unsigned int v81; // ecx
  struct _D3DKMT_PRESENT *v82; // r9
  char *v83; // rcx
  __int64 v84; // rcx
  bool v85; // al
  __int64 v86; // rcx
  char v87; // cl
  char *v88; // rbx
  _DWORD *v89; // r8
  char *v90; // rcx
  DXGCONTEXT *v91; // r15
  char *v92; // rcx
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v94; // rax
  int v95; // eax
  __int64 v96; // rbx
  __int64 v97; // r8
  struct _DXGKARG_PRESENT *v98; // r8
  void *v99; // rdx
  unsigned int v100; // ebx
  struct DXGCONTEXT **v101; // rsi
  struct _KTHREAD **v102; // rcx
  char *v103; // r8
  struct _VIDMM_DMA_BUFFER *v104; // [rsp+50h] [rbp-338h]
  char v105; // [rsp+58h] [rbp-330h]
  DXGDEVICE **v106; // [rsp+60h] [rbp-328h]
  int v107; // [rsp+68h] [rbp-320h]
  unsigned int v108; // [rsp+6Ch] [rbp-31Ch] BYREF
  struct _D3DKMT_PRESENT *v109; // [rsp+70h] [rbp-318h]
  DXGPROCESS *v110; // [rsp+78h] [rbp-310h] BYREF
  struct DXGCONTEXT **v111; // [rsp+80h] [rbp-308h]
  PVOID Entry; // [rsp+88h] [rbp-300h] BYREF
  DXGCONTEXT *v113; // [rsp+90h] [rbp-2F8h]
  struct DXGALLOCATION *v114; // [rsp+98h] [rbp-2F0h] BYREF
  struct DXGALLOCATION *v115; // [rsp+A0h] [rbp-2E8h] BYREF
  unsigned int v116; // [rsp+A8h] [rbp-2E0h]
  struct _DXGKARG_PRESENT *v117; // [rsp+B0h] [rbp-2D8h]
  struct DXGALLOCATION *v118; // [rsp+B8h] [rbp-2D0h]
  unsigned int v119; // [rsp+C0h] [rbp-2C8h]
  struct _D3DKMT_PRESENT_RGNS *v120; // [rsp+C8h] [rbp-2C0h]
  DXGADAPTER *BroadcastPresentSyncObject; // [rsp+D0h] [rbp-2B8h]
  unsigned int v122; // [rsp+D8h] [rbp-2B0h]
  unsigned int v123; // [rsp+DCh] [rbp-2ACh]
  __int64 v124; // [rsp+E0h] [rbp-2A8h]
  char *v125; // [rsp+E8h] [rbp-2A0h] BYREF
  struct COREDEVICEACCESS *v126; // [rsp+F0h] [rbp-298h]
  struct _VIDMM_DMA_BUFFER *v127; // [rsp+F8h] [rbp-290h]
  struct DXGHWQUEUE **v128; // [rsp+100h] [rbp-288h]
  char v129[8]; // [rsp+108h] [rbp-280h] BYREF
  char v130[8]; // [rsp+110h] [rbp-278h] BYREF
  char v131[8]; // [rsp+118h] [rbp-270h] BYREF
  PVOID v132; // [rsp+120h] [rbp-268h]
  char *v133; // [rsp+128h] [rbp-260h]
  PVOID P; // [rsp+130h] [rbp-258h]
  _BYTE v135[64]; // [rsp+138h] [rbp-250h] BYREF
  unsigned int v136; // [rsp+178h] [rbp-210h]
  __int64 v137; // [rsp+180h] [rbp-208h]
  struct DXGALLOCATION *v138; // [rsp+188h] [rbp-200h]
  __int64 v139; // [rsp+190h] [rbp-1F8h]
  struct DXGALLOCATION *v140; // [rsp+198h] [rbp-1F0h]
  _QWORD v141[12]; // [rsp+1A0h] [rbp-1E8h] BYREF
  _BYTE v142[320]; // [rsp+200h] [rbp-188h] BYREF

  v123 = a4;
  v128 = a3;
  v109 = a2;
  v113 = this;
  v117 = a9;
  v111 = a5;
  v118 = a6;
  v108 = a7;
  v119 = a8;
  v120 = a10;
  v104 = a11;
  v127 = a11;
  v126 = a14;
  v107 = 0;
  v15 = (char *)this + 16;
  v106 = (DXGDEVICE **)((char *)this + 16);
  v133 = (char *)this + 16;
  v16 = *((_QWORD *)this + 2);
  v110 = *(DXGPROCESS **)(v16 + 40);
  BroadcastPresentSyncObject = *(DXGADAPTER **)(*(_QWORD *)(v16 + 16) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(BroadcastPresentSyncObject) )
  {
    WdLogSingleEntry1(1LL, 7937LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      7937LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v17 = 0LL;
  v115 = 0LL;
  v18 = 0LL;
  v114 = 0LL;
  if ( v108 )
  {
    AllocationSafe = DXGPROCESS::GetAllocationSafe((__int64)v110, (DXGALLOCATIONREFERENCE *)v130, v108);
    DXGALLOCATIONREFERENCE::MoveAssign(&v115, AllocationSafe);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v130);
    v17 = v115;
  }
  if ( v119 )
  {
    v20 = DXGPROCESS::GetAllocationSafe((__int64)v110, (DXGALLOCATIONREFERENCE *)v131, v119);
    DXGALLOCATIONREFERENCE::MoveAssign(&v114, v20);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v131);
    v18 = v114;
  }
  if ( *(_QWORD *)(*(_QWORD *)v15 + 1880LL) != *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL)
    || DXGPROCESS::IsRemoteConnection(v110) )
  {
    *((_DWORD *)a12 + 29) = 0;
  }
  Entry = 0LL;
  if ( v109 )
  {
    PresentPrivateDriverData = ReadPresentPrivateDriverData(
                                 *(struct DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)v15 + 16LL) + 16LL),
                                 v109->PrivateDriverDataSize,
                                 v109->pPrivateDriverData,
                                 (struct CRefCountedBuffer **)&Entry);
    v22 = PresentPrivateDriverData;
    v107 = PresentPrivateDriverData;
    if ( PresentPrivateDriverData < 0 )
    {
      WdLogSingleEntry1(2LL, PresentPrivateDriverData);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to read private driver data. Returning 0x%I64x",
        v22,
        0LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_109;
    }
  }
  v23 = (char *)Entry;
  v125 = (char *)Entry;
  v132 = Entry;
  v105 = 0;
  if ( DXGADAPTER::IsDxgmms2(BroadcastPresentSyncObject) )
  {
    if ( *(_DWORD *)(v25 + 2096) >= 0x5007u && v24 )
    {
      v105 = 1;
      if ( v23 )
      {
        v36 = v117;
        v117->PrivateDriverDataSize = *(_DWORD *)(v24 + 1472);
        v36->pPrivateDriverData = v23 + 16;
      }
      *((_QWORD *)a12 + 100) = Entry;
    }
    else if ( a4 )
    {
      v32 = -1073741811;
      goto LABEL_34;
    }
  }
  v26 = a4 + 1;
  v116 = a4 + 1;
  v27 = v111;
  v28 = *((_DWORD *)*v111 + 99);
  v29 = 0;
  while ( v29 < a4 )
  {
    v37 = *((_DWORD *)v27[++v29] + 99);
    if ( (v37 & v28) != 0 )
    {
      v32 = -1073741811;
      v38 = v113;
      WdLogSingleEntry2(2LL, v113, -1073741811LL);
      v39 = L"0x%I64x failed, can't broadcast flip to multiple context on the same physical adapter returning 0x%I64x";
LABEL_40:
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v39, (__int64)v38, -1073741811LL, 0LL, 0LL, 0LL);
      goto LABEL_34;
    }
    v28 |= v37;
    v27 = v111;
  }
  *((_DWORD *)a12 + 34) = v28;
  v30 = v120;
  if ( v120 )
  {
    v40 = *(_QWORD *)(*((_QWORD *)*v106 + 2) + 16LL);
    if ( (*(_DWORD *)(v40 + 436) & 0x10) != 0 && v40 == *((_QWORD *)*v106 + 235) )
    {
      v41 = v120->DirtyRectCount + v120->MoveRectCount;
      if ( v41 <= 0x14 )
      {
        v42 = v117;
        v117->SubRectCnt = v41;
        v42->pDstSubRects = (const RECT *)v142;
        v43 = (RECT *)v142;
        v44 = 0;
        MoveRectCount = v30->MoveRectCount;
        while ( v44 < MoveRectCount )
          *v43++ = v30->pMoveRects[v44++].DestRect;
        memmove(v43, v30->pDirtyRects, 16LL * v30->DirtyRectCount);
        v26 = a4 + 1;
      }
    }
  }
  if ( ((*((_DWORD *)a12 + 30) - 3) & 0xFFFFFFFD) == 0 )
  {
    v68 = v118;
    if ( !v118 )
    {
      WdLogSingleEntry1(1LL, 8084LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pFlipToDxgAllocation", 8084LL, 0LL, 0LL, 0LL, 0LL);
    }
    v69 = v117;
    if ( v117->pDmaBuffer )
    {
      WdLogSingleEntry1(1LL, 8085LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPresentDdiArg->pDmaBuffer == NULL",
        8085LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v69 = v117;
    }
    if ( !a4 || !v105 )
    {
      v70 = 2048;
      v71 = v116;
      if ( v116 > 1 )
        v70 = 3072;
      *(_DWORD *)a12 = *(_DWORD *)a12 & 0xFFFFFBFF | v70;
      *((_DWORD *)a12 + 35) = v71;
      v72 = *((_BYTE *)a12 + 356) != 0 ? 0x68 : 0;
      *(_DWORD *)((char *)a12 + v72 + 496) = *(_DWORD *)((_BYTE *)a12 + v72 + 496) & 0xFFFFFC00 | 1;
      v73 = *v106;
      v74 = *(_QWORD *)(*((_QWORD *)*v106 + 2) + 760LL);
      v75 = (_DWORD *)((char *)a12 + 608);
      Entry = (char *)a12 + 608;
      v109 = (struct _D3DKMT_PRESENT *)((char *)&CONTAINING_RECORD(a12, struct _D3DKMT_PRESENT, BroadcastContext)->PresentHistoryToken.Token.SurfaceComplete
                                      + 324);
      if ( *((_BYTE *)a12 + 356) )
      {
        v76 = (char *)a12 + *((_DWORD *)a12 + 151) * ((8 * *v75 + 231) & 0xFFFFFFF8) + 648;
      }
      else
      {
        v76 = (char *)a12 + 504;
        Entry = (char *)a12 + 608;
        v109 = (struct _D3DKMT_PRESENT *)((char *)&CONTAINING_RECORD(a12, struct _D3DKMT_PRESENT, BroadcastContext)->PresentHistoryToken.Token.SurfaceComplete
                                        + 324);
      }
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(v74 + 8) + 408LL))(
              *((_QWORD *)v73 + 99),
              *((_QWORD *)v118 + 3),
              v76);
      if ( v32 >= 0 )
      {
        v108 = 0;
        v110 = 0LL;
        IsDxgmms2 = DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*((_QWORD *)*v106 + 2) + 16LL));
        v80 = v118;
        if ( IsDxgmms2 )
        {
          v81 = 0xFFFF;
          v108 = 0xFFFF;
          v110 = (DXGPROCESS *)-1LL;
        }
        else
        {
          (*(void (__fastcall **)(_QWORD, _QWORD, unsigned int *, DXGPROCESS **, _QWORD))(*(_QWORD *)(*(_QWORD *)(v78 + 760) + 8LL)
                                                                                        + 208LL))(
            *(_QWORD *)(v78 + 768),
            *(_QWORD *)(*((_QWORD *)v118 + 6) + 8LL),
            &v108,
            &v110,
            0LL);
          v81 = v108;
          v79 = v106;
        }
        v82 = v109;
        if ( *((_BYTE *)a12 + 356) )
          *(_WORD *)((char *)a12 + v109->hDevice * ((8 * *v75 + 231) & 0xFFFFFFF8) + 632) = v81;
        else
          *((_DWORD *)a12 + 139) ^= (*((_DWORD *)a12 + 139) ^ (v81 << 17)) & 0x3E0000;
        if ( *((_BYTE *)a12 + 356) )
          v83 = (char *)a12 + v82->hDevice * ((8 * *v75 + 231) & 0xFFFFFFF8) + 640;
        else
          v83 = (char *)a12 + 520;
        *(_QWORD *)v83 = v110;
        v84 = *((_QWORD *)v80 + 5);
        if ( v84 )
          v85 = (*(_DWORD *)(v84 + 4) & 8) != 0;
        else
          v85 = 0;
        if ( v85 )
          v86 = *(_QWORD *)(*(_QWORD *)(v84 + 56) + 184LL);
        else
          v86 = 0LL;
        if ( *((_BYTE *)a12 + 356) )
          *(_QWORD *)((char *)a12 + v82->hDevice * ((8 * *v75 + 231) & 0xFFFFFFF8) + 656) = v86;
        else
          *((_QWORD *)a12 + 72) = v86;
        v87 = *((_BYTE *)a12 + 356);
        v88 = (char *)a12 + 760;
        if ( !v87 )
          v88 = (char *)a12 + 528;
        v89 = Entry;
        if ( v87 )
          v90 = (char *)a12 + v82->hDevice * ((8 * *(_DWORD *)Entry + 231) & 0xFFFFFFF8) + 624;
        else
          v90 = (char *)a12 + 512;
        *(_QWORD *)v90 = *(_QWORD *)(*((_QWORD *)v80 + 6) + 16LL);
        v91 = v113;
        if ( !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)*v79 + 2) + 16LL) + 2874LL) )
        {
          if ( *((_BYTE *)a12 + 356) )
            v92 = (char *)a12 + v82->hDevice * ((8 * *v89 + 231) & 0xFFFFFFF8) + 616;
          else
            v92 = (char *)a12 + 568;
          *(_QWORD *)v92 = *((_QWORD *)v113 + 23);
        }
        if ( *((_BYTE *)a12 + 356) )
          *((_DWORD *)a12 + 160) = -1;
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(ADAPTER_DISPLAY **)(*((_QWORD *)*v79 + 235) + 2920LL),
                            *((_DWORD *)a12 + 29));
        *(_WORD *)v88 = 0;
        *(_DWORD *)(v88 + 2) = *(unsigned __int16 *)DisplayModeInfo;
        *((_WORD *)v88 + 3) = *((_WORD *)DisplayModeInfo + 2);
        v94 = *(_QWORD *)v88;
        *((_QWORD *)v88 + 1) = *(_QWORD *)v88;
        *((_QWORD *)v88 + 2) = v94;
        if ( a13 == D3DDDIFMT_A16B16G16R16F || (v95 = 0, a13 == D3DDDIFMT_A32B32G32R32F) )
          v95 = 1;
        *((_DWORD *)v88 + 6) = v95;
        *((_DWORD *)v88 + 7) &= 0xFFFFFFE7;
        *((_DWORD *)v88 + 8) = 0;
        memset(&v141[9], 0, 24);
        v96 = *((_QWORD *)v118 + 4);
        if ( *((_BYTE *)v91 + 438) )
        {
          memset(v141, 0, sizeof(v141));
          v141[4] = v96;
          LOBYTE(v97) = *((_BYTE *)v91 + 439);
          v33 = v106;
          v141[5] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v106 + 2) + 760LL)
                                                                                           + 8LL)
                                                                               + 240LL))(
                      *(_QWORD *)(*((_QWORD *)*v106 + 2) + 768LL),
                      *((_QWORD *)v17 + 3),
                      v97,
                      *((unsigned int *)v91 + 100));
          v141[6] = v110;
          LOWORD(v141[7]) = v108;
        }
        else
        {
          memset(v141, 0, 0x48uLL);
          v141[3] = v96;
          LODWORD(v141[4]) = v141[4] & 0xFFFFFFC0 | (2 * (v108 & 0x1F));
          v141[5] = v110;
          v33 = v106;
        }
        v98 = v117;
        v117->pAllocationList = (DXGK_ALLOCATIONLIST *)v141;
        v99 = 0LL;
        if ( (v98->Flags.Value & 1) != 0 || !*(_BYTE *)(*(_QWORD *)(*((_QWORD *)*v33 + 2) + 16LL) + 2874LL) )
          v99 = (void *)*((_QWORD *)v91 + 23);
        v32 = ADAPTER_RENDER::DdiPresent(*((ADAPTER_RENDER **)*v33 + 2), v99, v98);
        if ( v32 >= 0 )
        {
          v100 = 0;
          v101 = v111;
          while ( v100 < v116 )
          {
            v102 = (struct _KTHREAD **)v101[v100];
            if ( v102[57] != KeGetCurrentThread() )
            {
              WdLogSingleEntry1(1LL, 8268LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"pBroadcastContext[i]->GetContextLock()->IsExclusiveOwner()",
                8268LL,
                0LL,
                0LL,
                0LL,
                0LL);
              v102 = (struct _KTHREAD **)v101[v100];
            }
            if ( (*((_DWORD *)v113 + 101) & 0x10) != 0 )
              DXGCONTEXT::SynchronizeImplicitQueueWithRenderQueues((DXGCONTEXT *)v102, 0LL, 0, 0, a12, 0);
            v32 = DXGCONTEXT::SubmitCommandToImplicitQueue(v101[v100], a12);
            if ( v32 < 0 )
              break;
            *(_DWORD *)a12 &= ~0x800u;
            ++v100;
          }
          v23 = v125;
          v33 = v106;
        }
        if ( v32 < 0 )
        {
          if ( *((_BYTE *)a12 + 356) )
            v103 = (char *)a12 + v109->hDevice * ((8 * *(_DWORD *)Entry + 231) & 0xFFFFFFF8) + 648;
          else
            v103 = (char *)a12 + 504;
          (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v33 + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 424LL))(
            *(_QWORD *)(*((_QWORD *)*v33 + 2) + 768LL),
            *((unsigned int *)a12 + 34),
            *(_QWORD *)v103,
            0LL);
        }
        goto LABEL_35;
      }
      goto LABEL_34;
    }
    LODWORD(v22) = DXGCONTEXT::SubmitPresentLda(v113, v109, a4, v111, v68, v69, a12);
    if ( a11 )
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v106 + 2) + 760LL)
                                                                             + 8LL)
                                                                 + 496LL))(
        a11,
        0LL);
    if ( Entry )
      CRefCountedBuffer::RefCountedBufferRelease(Entry);
LABEL_109:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v114);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v115);
    return (unsigned int)v22;
  }
  if ( v26 <= 1 )
  {
    if ( v128 )
      v31 = *v128;
    else
      v31 = 0LL;
    v32 = DXGCONTEXT::SubmitPresentWithDmaBuffer(v113, v109, v31, v17, v18, v117, a11, a12, v126);
    v33 = v106;
    v34 = 0LL;
    goto LABEL_25;
  }
  if ( !v105 )
  {
    v32 = -1073741811;
    v38 = v113;
    WdLogSingleEntry2(2LL, v113, -1073741811LL);
    v39 = L"0x%I64x Broadcast present only supported on the Software Flip Queue, returning 0x%I64x";
    goto LABEL_40;
  }
  v33 = v106;
  BroadcastPresentSyncObject = DXGDEVICE::GetBroadcastPresentSyncObject(*v106);
  if ( !BroadcastPresentSyncObject )
  {
    v32 = -1073741801;
    WdLogSingleEntry2(2LL, -1073741801LL, 8320LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create present sync object. Returning 0x%I64x",
      -1073741801LL,
      8320LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_35;
  }
  v120 = (struct _D3DKMT_PRESENT_RGNS *)_InterlockedIncrement64((volatile signed __int64 *)*v106 + 241);
  *(_DWORD *)a12 |= 0xC00u;
  v46 = 0;
  v32 = v107;
  v47 = v115;
  v48 = v114;
  while ( 1 )
  {
    v49 = v116;
    if ( v46 >= v116 )
      break;
    if ( v46 )
    {
      v50 = 0;
      v122 = 0;
      LODWORD(v118) = 0;
      if ( v108 )
      {
        v51 = &v109->BroadcastSrcAllocation[v46 - 1];
        if ( v51 + 1 < v51 || (unsigned __int64)(v51 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v50 = *v51;
        v122 = v50;
        v52 = DXGPROCESS::GetAllocationSafe((__int64)v110, (DXGALLOCATIONREFERENCE *)v129, v50);
        DXGALLOCATIONREFERENCE::MoveAssign(&v115, v52);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v129);
        v47 = v115;
        if ( !v115 )
        {
          v53 = v50;
          v32 = -1073741811;
          WdLogSingleEntry3(2LL, (unsigned int)v53, -1073741811LL, 8346LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
            v53,
            -1073741811LL,
            8346LL,
            0LL,
            0LL);
          v33 = v106;
          v34 = v104;
          goto LABEL_25;
        }
        v124 = v46;
        v54 = v111[v46];
        v137 = *((_QWORD *)v54 + 2);
        v138 = v115;
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v115 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v137 + 16) + 16LL) )
        {
          _mm_lfence();
          v32 = -1073741811;
          v55 = v115;
          WdLogSingleEntry3(2LL, *((_QWORD *)v54 + 2), v115, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *((_QWORD *)v111[v124] + 2),
            (__int64)v55,
            -1073741811LL,
            0LL,
            0LL);
          v33 = v106;
          v34 = v104;
          goto LABEL_25;
        }
      }
      if ( v119 )
      {
        v56 = &v109->BroadcastDstAllocation[v46 - 1];
        if ( v56 + 1 < v56 || (unsigned __int64)(v56 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        v57 = DXGPROCESS::GetAllocationSafe((__int64)v110, (DXGALLOCATIONREFERENCE *)&v125, *v56);
        DXGALLOCATIONREFERENCE::MoveAssign(&v114, v57);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v125);
        v48 = v114;
        if ( !v114 )
        {
          v58 = v50;
          v32 = -1073741811;
          WdLogSingleEntry3(2LL, (unsigned int)v58, -1073741811LL, 8369LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Invalid allocation handle in present: 0x%I64x. Returning 0x%I64x",
            v58,
            -1073741811LL,
            8369LL,
            0LL,
            0LL);
          v33 = v106;
          v34 = v104;
          goto LABEL_25;
        }
        v124 = v46;
        v59 = v111[v46];
        v139 = *((_QWORD *)v59 + 2);
        v140 = v114;
        if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v114 + 1) + 16LL) + 16LL) != *(_QWORD *)(*(_QWORD *)(v139 + 16) + 16LL) )
        {
          _mm_lfence();
          v32 = -1073741811;
          v60 = v114;
          WdLogSingleEntry3(2LL, *((_QWORD *)v59 + 2), v114, -1073741811LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
            *((_QWORD *)v111[v124] + 2),
            (__int64)v60,
            -1073741811LL,
            0LL,
            0LL);
          v33 = v106;
          v34 = v104;
          goto LABEL_25;
        }
      }
    }
    if ( v128 )
      v61 = v128[v46];
    else
      v61 = 0LL;
    v32 = DXGCONTEXT::SubmitPresentWithDmaBuffer(v111[v46], v109, v61, v47, v48, v117, v104, a12, v126);
    if ( v32 < 0 )
    {
      v32 = -1073741811;
      WdLogSingleEntry2(2LL, -1073741811LL, 8407LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to submit DMA present buffer. Returning 0x%I64x",
        -1073741811LL,
        8407LL,
        0LL,
        0LL,
        0LL);
      goto LABEL_34;
    }
    v104 = 0LL;
    v127 = 0LL;
    *(_DWORD *)a12 &= ~0x800u;
    ++v46;
  }
  v62 = v111;
  if ( (*((_DWORD *)*v111 + 101) & 0x10) == 0 )
  {
    Pool2 = 0LL;
    P = 0LL;
    v136 = 0;
    v64 = v123;
    if ( v123 <= 8 )
    {
      Pool2 = v135;
      P = v135;
      if ( !v123 )
      {
LABEL_83:
        v136 = v64;
        goto LABEL_84;
      }
      memset(v135, 0, 8LL * v123);
      Pool2 = P;
    }
    else
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v123 < 8 )
      {
LABEL_84:
        if ( Pool2 )
        {
          for ( i = 1; i < v49; ++i )
          {
            v66 = i;
            v67 = v62[i];
            if ( (*((_DWORD *)v67 + 101) & 0x10) != 0 )
            {
              WdLogSingleEntry1(2LL, v62[i]);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"DXGCONTEXT 0x%p broadcast present mixes hardware scheduled and non-hardware scheduled contexts.",
                (__int64)v62[v66],
                0LL,
                0LL,
                0LL,
                0LL);
              v32 = -1073741811;
              if ( P != v135 && P )
                ExFreePoolWithTag(P, 0);
              goto LABEL_34;
            }
            *(_QWORD *)&Pool2[8 * i - 8] = *((_QWORD *)v67 + 32);
            v49 = v64 + 1;
          }
          v33 = v106;
          v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v106 + 2)
                                                                                          + 736LL)
                                                                              + 8LL)
                                                                  + 640LL))(
                  0LL,
                  0LL,
                  v64);
          if ( v32 >= 0 )
            v32 = (*(__int64 (__fastcall **)(_QWORD, DXGADAPTER *, struct _D3DKMT_PRESENT_RGNS *))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v106 + 2) + 736LL) + 8LL)
                                                                                                 + 624LL))(
                    *((_QWORD *)v113 + 32),
                    BroadcastPresentSyncObject,
                    v120);
          if ( P != v135 && P )
            ExFreePoolWithTag(P, 0);
          goto LABEL_35;
        }
        v32 = -1073741801;
        goto LABEL_34;
      }
      Pool2 = (_BYTE *)ExAllocatePool2(256LL, 8LL * v123, 1265072196LL);
      P = Pool2;
    }
    v49 = v64 + 1;
    goto LABEL_83;
  }
LABEL_34:
  v33 = v106;
LABEL_35:
  v34 = v104;
LABEL_25:
  if ( v34 )
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)*v33 + 2) + 760LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v34,
      0LL);
  if ( v23 )
    CRefCountedBuffer::RefCountedBufferRelease(v23);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v114);
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v115);
  return (unsigned int)v32;
}
