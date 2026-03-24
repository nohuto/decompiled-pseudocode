/*
 * XREFs of ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A4B6C
 * Callers:
 *     ?PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A48B4 (-PresentMultiPlaneOverlay2@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAVCOREDEV.c)
 *     ?PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C02A62DC (-PresentMultiPlaneOverlay@DXGCONTEXT@@QEAAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAVCOREDEVICE.c)
 *     DxgkPresentMultiPlaneOverlay3 @ 0x1C02A8AB0 (DxgkPresentMultiPlaneOverlay3.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1CVidSchSubmitData@@QEAA@XZ @ 0x1C00052C4 (--1CVidSchSubmitData@@QEAA@XZ.c)
 *     ?AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z @ 0x1C0005500 (-AcquireSharedUncheck@COREDEVICEACCESS@@QEAAXPEAD@Z.c)
 *     ?AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z @ 0x1C00087C0 (-AcquireShared@COREDEVICEACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@COREDEVICEACCESS@@QEAAXXZ @ 0x1C000A008 (-Release@COREDEVICEACCESS@@QEAAXXZ.c)
 *     ?InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ @ 0x1C0017974 (-InitializeSubmitData@CVidSchSubmitData@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0048228 (-IsHdrEnabled@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z @ 0x1C004B3EC (-GetDisplayedAllMultiPlaneOverlays@DXGDEVICE@@QEAAXIPEAVDXGALLOCATIONREFERENCE@@I@Z.c)
 *     McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer @ 0x1C004B514 (McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer.c)
 *     ?CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z @ 0x1C00E1BD0 (-CheckDevicePresentSettings@DXGCONTEXT@@QEAAJHHI@Z.c)
 *     ?FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z @ 0x1C00EF2E8 (-FlushScheduler@DXGDEVICE@@QEAAXW4DXGDEVICE_FLUSHSCHEDULER_REASON@@@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C0107C00 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C0109380 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z @ 0x1C01550DC (-MoveAssign@DXGALLOCATIONREFERENCE@@QEAAAEAV1@$$QEAV1@@Z.c)
 *     ?UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z @ 0x1C01593F0 (-UpdatePostComposition@@YAXIEIIPEAVADAPTER_DISPLAY@@@Z.c)
 *     ?WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z @ 0x1C0159A00 (-WaitForQueuedPresentLimit@DXGCONTEXT@@QEAAJIEPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015E75C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??0?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z @ 0x1C0171488 (--0-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@I@Z.c)
 *     ??1?$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ @ 0x1C0171A28 (--1-$PagedPoolArray@VDXGALLOCATIONREFERENCE@@$03@@QEAA@XZ.c)
 *     ?IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z @ 0x1C0172444 (-IsDirectFlipAllocationPinned@DXGDEVICE@@QEAAEPEBVDXGALLOCATION@@@Z.c)
 *     ?GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z @ 0x1C02137B0 (-GetDDIEnabledPlanes@ADAPTER_DISPLAY@@QEAAXIPEAE@Z.c)
 *     ?ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEBU_D3DKMT_MULTIPLANE_OVERLAY3@@@Z @ 0x1C02A3ED0 (-ConvertMPOThunkToLegacyPresentThunk@@YAXPEAU_D3DKMT_PRESENT@@PEBU_D3DKMT_PRESENT_MULTIPLANE_OVE.c)
 *     ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C02A41B8 (-DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESE.c)
 *     InverseXformMPORect3 @ 0x1C02A441C (InverseXformMPORect3.c)
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C02A683C (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 *     ?UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVDXGALLOCATIONREFERENCE@@PEAW4_D3DDDIFORMAT@@HI@Z @ 0x1C02A78C0 (-UpdateDisplayStateForFullWDDMDevice@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@P.c)
 */

__int64 __fastcall DXGCONTEXT::PresentMultiPlaneOverlay3(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3 *a2,
        struct COREDEVICEACCESS *a3,
        struct DXGCONTEXT **a4)
{
  __int64 v4; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 VidPnSourceId; // r12
  __int64 v15; // rcx
  __int64 v16; // rbx
  _QWORD *v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 IsMultiPlaneOverlaySupported; // al
  __int64 v27; // rdx
  bool v28; // r15
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 pPostComposition; // rdx
  __int64 v34; // r8
  int v35; // r10d
  _QWORD *v36; // rax
  __int64 Rotation; // rdx
  int v38; // r9d
  int v39; // eax
  __int64 v40; // rcx
  int v41; // r11d
  int v42; // r9d
  char v43; // r13
  __int64 pDirtyRects; // r8
  unsigned __int8 v45; // r11
  char v46; // r10
  __int64 PresentPlaneCount; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 **ppPresentPlanes; // rax
  UINT v49; // r15d
  __int64 v50; // rcx
  D3DKMT_MULTIPLANE_OVERLAY3 *v51; // r13
  __int64 LayerIndex; // rdx
  __int64 v53; // r14
  struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E Value; // eax
  __int64 v55; // r8
  int v56; // r12d
  __int64 v57; // r8
  __int64 v58; // r15
  D3DKMT_HANDLE v59; // ebx
  __int64 v60; // rcx
  __int64 v61; // r8
  int v62; // r9d
  __int64 v63; // rax
  __int64 v64; // r8
  int v65; // ecx
  __int64 v66; // rcx
  __int64 v67; // rax
  struct _EX_RUNDOWN_REF *v68; // rdx
  __int64 v69; // rdx
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // rax
  __int64 v74; // rdx
  __int64 v75; // rcx
  struct DXGALLOCATIONREFERENCE *v76; // rbx
  bool v77; // zf
  const struct DXGALLOCATION *v78; // rdx
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rdx
  __int64 v82; // rcx
  const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rbx
  __int64 left; // rcx
  int v85; // eax
  __int64 right; // rcx
  int top; // r11d
  int bottom; // r15d
  int v89; // r9d
  int v90; // r10d
  D3DDDI_ROTATION v91; // eax
  UINT DirtyRectCount; // r12d
  UINT v93; // r15d
  LONG v94; // r9d
  LONG v95; // r10d
  BOOL v96; // eax
  char v97; // r11
  BOOL v98; // eax
  int v99; // r9d
  int v100; // edx
  char v101; // r8
  __int64 v102; // rcx
  __int64 v103; // r15
  __int64 v104; // rdx
  struct _EX_RUNDOWN_REF **v105; // rcx
  __int64 v106; // rdx
  int v107; // r14d
  D3DKMT_HANDLE v108; // r8d
  __int64 v109; // rdx
  D3DDDI_FLIPINTERVAL_TYPE v110; // r15d
  __int64 v111; // rax
  __int64 v112; // rax
  int v113; // ecx
  struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321 v114; // eax
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rax
  int v120; // ecx
  int v121; // ecx
  int v122; // ecx
  int v123; // eax
  int v124; // ecx
  int v125; // ecx
  UINT v126; // ecx
  UINT v127; // ecx
  UINT v128; // ecx
  UINT v129; // edx
  UINT Duration; // eax
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 HDRMetaDataType; // rdx
  __int64 v134; // rdx
  __int64 v135; // rax
  _OWORD *v136; // rax
  _QWORD *pHDRMetaData; // rax
  __int64 v138; // rax
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rax
  __int64 v143; // rax
  COREDEVICEACCESS *v144; // r13
  __int64 v145; // rdx
  int v146; // eax
  __int64 v147; // rdx
  __int64 v148; // rcx
  __int64 v149; // r14
  __int64 v150; // rax
  char *v151; // rdx
  int v152; // eax
  __int64 v153; // rdx
  __int64 v154; // rcx
  __int64 v155; // rax
  int v156; // eax
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rax
  int v160; // eax
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rax
  int v164; // r9d
  int v165; // r8d
  __int64 v166; // rdx
  D3DKMT_MULTIPLANE_OVERLAY3 **v167; // rax
  const struct _D3DKMT_MULTIPLANE_OVERLAY3 *v168; // rbx
  __int64 v169; // rax
  int v170; // eax
  __int64 v171; // rdx
  __int64 v172; // rcx
  __int64 v173; // rax
  __int64 v174; // rax
  __int64 v175; // rax
  int v177; // [rsp+B0h] [rbp-A0h]
  char v178; // [rsp+D0h] [rbp-80h]
  unsigned __int8 v179; // [rsp+D1h] [rbp-7Fh]
  unsigned __int8 v180; // [rsp+D2h] [rbp-7Eh]
  bool v181; // [rsp+D3h] [rbp-7Dh]
  char v182; // [rsp+D4h] [rbp-7Ch]
  UINT v183; // [rsp+D8h] [rbp-78h]
  char v184; // [rsp+DCh] [rbp-74h]
  int v185; // [rsp+E0h] [rbp-70h]
  int v186; // [rsp+E4h] [rbp-6Ch]
  int v187; // [rsp+E8h] [rbp-68h]
  int v188; // [rsp+ECh] [rbp-64h]
  int v189; // [rsp+F0h] [rbp-60h]
  int v190; // [rsp+F8h] [rbp-58h]
  int v191; // [rsp+FCh] [rbp-54h]
  int v192; // [rsp+100h] [rbp-50h]
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v193; // [rsp+104h] [rbp-4Ch]
  D3DKMT_MULTIPLANE_OVERLAY3 *v194; // [rsp+110h] [rbp-40h]
  signed int Height; // [rsp+110h] [rbp-40h]
  __int128 v196; // [rsp+118h] [rbp-38h] BYREF
  struct _EX_RUNDOWN_REF *v197; // [rsp+128h] [rbp-28h] BYREF
  unsigned int v198; // [rsp+130h] [rbp-20h]
  __int64 v199; // [rsp+138h] [rbp-18h]
  COREDEVICEACCESS *v200; // [rsp+140h] [rbp-10h]
  struct VIDSCH_SUBMIT_DATA_BASE *v201[2]; // [rsp+148h] [rbp-8h] BYREF
  __int64 v202; // [rsp+158h] [rbp+8h]
  __int64 v203; // [rsp+160h] [rbp+10h]
  struct DXGCONTEXT **v204; // [rsp+168h] [rbp+18h]
  RECT v205; // [rsp+170h] [rbp+20h] BYREF
  struct _DXGKARG_DESCRIBEALLOCATION v206; // [rsp+180h] [rbp+30h] BYREF
  struct DXGALLOCATIONREFERENCE *v207[6]; // [rsp+1B0h] [rbp+60h] BYREF
  struct _DXGKARG_PRESENT v208; // [rsp+1E0h] [rbp+90h] BYREF
  _D3DKMT_PRESENT v209; // [rsp+290h] [rbp+140h] BYREF
  enum _D3DDDIFORMAT v210[4]; // [rsp+870h] [rbp+720h] BYREF
  __int128 v211; // [rsp+880h] [rbp+730h]
  __int64 v212; // [rsp+890h] [rbp+740h]
  unsigned __int8 v213[16]; // [rsp+898h] [rbp+748h] BYREF

  v4 = *((_QWORD *)this + 2);
  v204 = a4;
  v200 = a3;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(v4 + 16) + 16LL)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v10 + 24) = 2993LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = *((_QWORD *)this + 2);
  v12 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  if ( *(_QWORD *)(v11 + 1848) != v12 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v13 + 24) = 2994LL;
    WdLogEvent5_WdAssertion(v13);
    v11 = *((_QWORD *)this + 2);
  }
  *((_BYTE *)this + 458) = 1;
  VidPnSourceId = a2->VidPnSourceId;
  v193 = a2->VidPnSourceId;
  v15 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 16LL);
  v16 = *(unsigned int *)(v15 + 2536);
  v190 = v16;
  if ( a2->PresentPlaneCount > (unsigned int)v16 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v9);
    v17[3] = a2->PresentPlaneCount;
    v17[4] = v16;
LABEL_277:
    LODWORD(v23) = -1073741811;
    v17[5] = -1073741811LL;
LABEL_278:
    WdLogEvent5_WdWarning(v17);
    return (unsigned int)v23;
  }
  v18 = *(_DWORD *)(v11 + 4 * VidPnSourceId + 1208) >> 9;
  v203 = a2->VidPnSourceId;
  if ( (v18 & 1) == 0 )
  {
    v19 = DXGCONTEXT::CheckDevicePresentSettings(this, 1LL, 0LL, VidPnSourceId);
    v23 = v19;
    if ( v19 >= 0 )
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
      v23 = -1071775739LL;
    }
    else
    {
      v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v21, v20, v22);
    }
    v17[3] = v23;
    v17[4] = this;
    v17[5] = VidPnSourceId;
    goto LABEL_278;
  }
  if ( (a2->Flags.Value & 3) != 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v11, v9);
    v17[3] = this;
    v17[4] = a2->Flags.Value;
    goto LABEL_277;
  }
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::PagedPoolArray<DXGALLOCATIONREFERENCE,4>(
    (__int64)v207,
    v16 * a2->ContextCount);
  DXGDEVICE::GetDisplayedAllMultiPlaneOverlays(*((DXGDEVICE **)this + 2), VidPnSourceId, v207[0], v16);
  v24 = *((_QWORD *)this + 2);
  v202 = *(_QWORD *)v207[0];
  ADAPTER_DISPLAY::GetDDIEnabledPlanes(*(ADAPTER_DISPLAY **)(*(_QWORD *)(v24 + 1848) + 2696LL), VidPnSourceId, v213);
  v212 = 0LL;
  v25 = *((_QWORD *)this + 2);
  *(_OWORD *)v210 = 0LL;
  v211 = 0LL;
  IsMultiPlaneOverlaySupported = ADAPTER_RENDER::IsMultiPlaneOverlaySupported(*(ADAPTER_RENDER **)(v25 + 16));
  v27 = *((_QWORD *)this + 2);
  v28 = !IsMultiPlaneOverlaySupported || *(_QWORD *)(v27 + 1848) != *(_QWORD *)(*(_QWORD *)(v27 + 16) + 16LL);
  v181 = v28;
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                      *(ADAPTER_DISPLAY **)(*(_QWORD *)(v27 + 1848) + 2696LL),
                      VidPnSourceId);
  if ( DisplayModeInfo )
  {
    pPostComposition = (__int64)a2->pPostComposition;
    v34 = *(unsigned int *)DisplayModeInfo;
    v35 = *((_DWORD *)DisplayModeInfo + 1);
    v187 = v35;
    v188 = 0;
    v186 = 0;
    v189 = *(_DWORD *)DisplayModeInfo;
    v182 = 0;
    v192 = 0;
    LODWORD(v199) = 0;
    if ( pPostComposition )
    {
      if ( *(_DWORD *)pPostComposition )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, pPostComposition, v34);
        v36[3] = this;
        Rotation = (__int64)a2->pPostComposition->Flags.0;
LABEL_22:
        v36[4] = Rotation;
        goto LABEL_199;
      }
      if ( *(_DWORD *)(pPostComposition + 36) != 1 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, pPostComposition, v34);
        v36[3] = this;
        Rotation = a2->pPostComposition->Rotation;
        goto LABEL_22;
      }
      if ( *(_DWORD *)(pPostComposition + 4) >= *(_DWORD *)(pPostComposition + 12)
        || *(_DWORD *)(pPostComposition + 8) >= *(_DWORD *)(pPostComposition + 16)
        || (v31 = *(unsigned int *)(pPostComposition + 20), v38 = *(_DWORD *)(pPostComposition + 28), (int)v31 >= v38)
        || (v39 = *(_DWORD *)(pPostComposition + 32), *(_DWORD *)(pPostComposition + 24) >= v39)
        || (v31 & 0x80000000) != 0LL
        || (int)v34 < v38
        || *(int *)(pPostComposition + 24) < 0
        || v35 < v39 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v31, pPostComposition, v34);
        LODWORD(v23) = -1073741811;
        v36[3] = this;
        v36[4] = -1073741811LL;
        goto LABEL_200;
      }
      v40 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_BYTE *)(*(_QWORD *)(v40 + 16) + 2642LL) || v28 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v40, pPostComposition, v34);
        LODWORD(v23) = -1073741811;
        v36[3] = -1073741811LL;
        v36[4] = this;
        goto LABEL_200;
      }
      v41 = _mm_cvtsi128_si32(*(__m128i *)(pPostComposition + 4));
      v196 = *(_OWORD *)(pPostComposition + 4);
      v31 = v196;
      v189 = DWORD2(v196);
      v188 = v41;
      if ( !v41 && *(_QWORD *)((char *)&v196 + 4) == __PAIR64__(v34, 0) && HIDWORD(v196) == v35 )
      {
        v187 = HIDWORD(v196);
        v186 = DWORD1(v196);
      }
      else
      {
        v31 = DWORD1(v196);
        v187 = HIDWORD(v196);
        v192 = DWORD2(v196) - v41;
        v199 = (unsigned int)(HIDWORD(v196) - DWORD1(v196));
        v182 = 1;
        v186 = DWORD1(v196);
      }
    }
    v42 = -1;
    v179 = 0;
    v43 = 0;
    v184 = 0;
    pDirtyRects = 0LL;
    v180 = 0;
    v45 = 0;
    v178 = 0;
    v46 = 0;
    v185 = -1;
    if ( v28 )
    {
      pPostComposition = 1LL;
      if ( a2->PresentPlaneCount != 1
        || (ppPresentPlanes = a2->ppPresentPlanes,
            v31 = (unsigned __int64)*ppPresentPlanes,
            (*ppPresentPlanes)->LayerIndex)
        || (*(_DWORD *)(v31 + 4) & 1) == 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, 1LL);
        LODWORD(v23) = -1073741811;
        v32[3] = -1073741811LL;
        v32[4] = this;
        PresentPlaneCount = a2->PresentPlaneCount;
        goto LABEL_42;
      }
    }
    v49 = 0;
    v191 = 0;
    v183 = 0;
    if ( a2->PresentPlaneCount )
    {
      while ( 1 )
      {
        v50 = v49;
        v51 = a2->ppPresentPlanes[v49];
        v194 = v51;
        LayerIndex = v51->LayerIndex;
        v53 = (unsigned int)LayerIndex;
        if ( (unsigned int)LayerIndex >= (unsigned int)v16
          || (_mm_lfence(), v50 = (unsigned int)LayerIndex, ((1 << LayerIndex) & (unsigned int)pDirtyRects) != 0) )
        {
          v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v50, LayerIndex, pDirtyRects);
          v36[4] = v53;
          v36[3] = this;
LABEL_199:
          LODWORD(v23) = -1073741811;
          v36[5] = -1073741811LL;
LABEL_200:
          WdLogEvent5_WdWarning(v36);
          goto LABEL_275;
        }
        Value = (struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS::$390DB612F88C1DE2E40C850E65A6A89F::$1196FF6CE8067B2B35B898660F75E27E)v51->InputFlags.Value;
        v198 = (1 << LayerIndex) | pDirtyRects;
        v55 = 1LL;
        if ( (*(_BYTE *)&Value & 1) == 0 )
        {
          v105 = (struct _EX_RUNDOWN_REF **)((char *)v207[0] + 8 * LayerIndex);
          if ( *v105 || v213[LayerIndex] )
            v178 = v46 + 1;
          v197 = 0LL;
          DXGALLOCATIONREFERENCE::MoveAssign(v105, &v197);
          DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v197, v106);
          goto LABEL_171;
        }
        if ( *((_QWORD *)v207[0] + LayerIndex) || v213[LayerIndex] )
          v179 = v45 + 1;
        else
          ++v180;
        v56 = 0;
        if ( v51->AllocationCount )
        {
          v57 = *((_QWORD *)this + 2);
          while ( 1 )
          {
            v58 = *(_QWORD *)(v57 + 40);
            v59 = v194->pAllocationList[v56];
            KeEnterCriticalRegion();
            if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v58 + 208, 0LL) )
            {
              if ( bTracingEnabled )
              {
                v62 = *(_DWORD *)(v58 + 232);
                if ( v62 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
                  McTemplateK0q_EtwWriteTransfer(v60, &EventBlockThread, v61, v62);
              }
              ExAcquirePushLockSharedEx(v58 + 208, 0LL);
            }
            v63 = (v59 >> 6) & 0xFFFFFF;
            if ( (unsigned int)v63 >= *(_DWORD *)(v58 + 256) )
              goto LABEL_70;
            v64 = *(_QWORD *)(v58 + 240);
            v65 = *(_DWORD *)(v64 + 16 * v63 + 8);
            if ( ((v59 >> 25) & 0x60) != (*(_BYTE *)(v64 + 16 * v63 + 8) & 0x60)
              || (v65 & 0x2000) != 0
              || (v65 & 0x1F) == 0 )
            {
              goto LABEL_70;
            }
            v66 = v65 & 0x1F;
            if ( (_BYTE)v66 != 5 )
              break;
            v68 = *(struct _EX_RUNDOWN_REF **)(v64 + 16LL * (unsigned int)v63);
LABEL_71:
            DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v196, v68);
            ExReleasePushLockSharedEx(v58 + 208, 0LL);
            KeLeaveCriticalRegion();
            v23 = (unsigned int)(v53 + v190 * v56);
            DXGALLOCATIONREFERENCE::MoveAssign(
              (struct _EX_RUNDOWN_REF **)v207[0] + v23,
              (struct _EX_RUNDOWN_REF **)&v196);
            DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v196, v69);
            v73 = *((_QWORD *)v207[0] + v23);
            if ( !v73 )
            {
              v36 = (_QWORD *)WdLogNewEntry5_WdWarning(v71, v70, v72);
              LODWORD(v23) = -1073741811;
              v36[3] = -1073741811LL;
              v36[4] = this;
              v36[5] = v194->pAllocationList[v56];
              goto LABEL_200;
            }
            v57 = *((_QWORD *)this + 2);
            v74 = *(_QWORD *)(*(_QWORD *)(v73 + 8) + 16LL);
            v75 = *(_QWORD *)(*(_QWORD *)(v57 + 16) + 16LL);
            if ( *(_QWORD *)(v74 + 16) != v75 )
            {
              v32 = (_QWORD *)WdLogNewEntry5_WdError(v75, v74);
              v32[3] = *((_QWORD *)this + 2);
              v109 = *((_QWORD *)v207[0] + v23);
              LODWORD(v23) = -1073741811;
              v32[5] = -1073741811LL;
              v32[4] = v109;
              goto LABEL_193;
            }
            v51 = v194;
            if ( ++v56 >= v194->AllocationCount )
            {
              v49 = v183;
              LayerIndex = (unsigned int)v53;
              v42 = v185;
              v55 = 1LL;
              goto LABEL_75;
            }
          }
          v67 = WdLogNewEntry5_WdError(v66, 2LL * (unsigned int)v63);
          *(_QWORD *)(v67 + 24) = 316LL;
          WdLogEvent5_WdError(v67);
LABEL_70:
          v68 = 0LL;
          goto LABEL_71;
        }
LABEL_75:
        _mm_lfence();
        v76 = v207[0];
        v77 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 4LL) & 0x2000) == 0;
        _mm_lfence();
        if ( v77 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 4LL) & 8) == 0 )
          {
            _mm_lfence();
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 4LL) & 1) == 0 )
            {
              _mm_lfence();
              v79 = *(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL);
              if ( (*(_DWORD *)(v79 + 4) & 2) == 0 )
              {
LABEL_78:
                _mm_lfence();
                v32 = (_QWORD *)WdLogNewEntry5_WdError(v79, LayerIndex);
                LODWORD(v23) = -1073741811;
                v32[3] = -1073741811LL;
                v32[4] = this;
                v32[5] = *((_QWORD *)v207[0] + v53);
                v32[6] = *(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL);
                v32[7] = *v51->pAllocationList;
                goto LABEL_193;
              }
            }
          }
          _mm_lfence();
          if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 4LL) & 1) != 0 )
            v42 = LayerIndex;
          v185 = v42;
        }
        else
        {
          v78 = (const struct DXGALLOCATION *)*((_QWORD *)v207[0] + v53);
          if ( (*(_DWORD *)(*((_QWORD *)v78 + 6) + 4LL) & 0x20) == 0
            && !DXGDEVICE::IsDirectFlipAllocationPinned(*((DXGDEVICE **)this + 2), v78) )
          {
            goto LABEL_78;
          }
        }
        _mm_lfence();
        memset(&v206, 0, sizeof(v206));
        v206.hAllocation = *(HANDLE *)(*(_QWORD *)(*((_QWORD *)v76 + v53) + 48LL) + 16LL);
        v80 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), &v206, v55);
        v23 = v80;
        if ( v80 < 0 )
        {
          _mm_lfence();
          v32 = (_QWORD *)WdLogNewEntry5_WdError(v82, v81);
          v32[3] = v23;
          v32[4] = this;
          v32[5] = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 16LL);
          v104 = *((_QWORD *)v207[0] + v53);
          goto LABEL_192;
        }
        pPlaneAttributes = v51->pPlaneAttributes;
        v210[v53] = v206.Format;
        left = (unsigned int)pPlaneAttributes->SrcRect.left;
        pPostComposition = (unsigned int)pPlaneAttributes->SrcRect.right;
        if ( (int)left >= (int)pPostComposition
          || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
          || (LODWORD(v197) = v206.Width, Height = v206.Height, (int)left < 0)
          || (int)v206.Width < (int)pPostComposition
          || pPlaneAttributes->SrcRect.top < 0
          || (int)v206.Height < pPlaneAttributes->SrcRect.bottom )
        {
          v32 = (_QWORD *)WdLogNewEntry5_WdError(left, pPostComposition);
          LODWORD(v23) = -1073741811;
          PresentPlaneCount = v49;
          v32[3] = -1073741811LL;
          v32[4] = this;
LABEL_42:
          v32[5] = PresentPlaneCount;
          goto LABEL_193;
        }
        v85 = pPlaneAttributes->ClipRect.left;
        right = (unsigned int)pPlaneAttributes->ClipRect.right;
        if ( v85 >= (int)right )
          goto LABEL_189;
        top = pPlaneAttributes->ClipRect.top;
        bottom = pPlaneAttributes->ClipRect.bottom;
        if ( top >= bottom )
          goto LABEL_189;
        pPostComposition = (unsigned int)pPlaneAttributes->DstRect.left;
        v89 = pPlaneAttributes->DstRect.right;
        if ( (int)pPostComposition >= v89 )
          goto LABEL_189;
        pDirtyRects = (unsigned int)pPlaneAttributes->DstRect.top;
        v90 = pPlaneAttributes->DstRect.bottom;
        if ( (int)pDirtyRects >= v90
          || v188 > v85
          || v189 < (int)right
          || v186 > top
          || v187 < bottom
          || (int)pPostComposition > v85
          || v89 < (int)right
          || (int)pDirtyRects > top
          || v90 < bottom )
        {
          goto LABEL_189;
        }
        v91 = pPlaneAttributes->Rotation;
        if ( v91 )
        {
          if ( (unsigned int)(v91 - 1) > 3 )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(right, pPostComposition);
            LODWORD(v23) = -1073741811;
            v32[3] = -1073741811LL;
            v32[4] = this;
            v32[5] = v183;
            v104 = v51->pPlaneAttributes->Rotation;
            goto LABEL_192;
          }
        }
        else
        {
          pPlaneAttributes->Rotation = D3DDDI_ROTATION_IDENTITY;
        }
        DirtyRectCount = pPlaneAttributes->DirtyRectCount;
        v93 = 0;
        LOBYTE(pPostComposition) = 1;
        if ( DirtyRectCount )
        {
          while ( (_BYTE)pPostComposition )
          {
            pDirtyRects = (__int64)pPlaneAttributes->pDirtyRects;
            v94 = *(_DWORD *)(pDirtyRects + 16LL * v93);
            v95 = *(_DWORD *)(pDirtyRects + 16LL * v93 + 8);
            v96 = v94 < v95 && *(_DWORD *)(pDirtyRects + 16LL * v93 + 4) < *(_DWORD *)(pDirtyRects + 16LL * v93 + 12);
            v97 = v96 ? pPostComposition : 0;
            v98 = pPlaneAttributes->SrcRect.left <= v94
               && pPlaneAttributes->SrcRect.right >= v95
               && pPlaneAttributes->SrcRect.top <= *(_DWORD *)(pDirtyRects + 16LL * v93 + 4)
               && pPlaneAttributes->SrcRect.bottom >= *(_DWORD *)(pDirtyRects + 16LL * v93 + 12);
            ++v93;
            LOBYTE(pPostComposition) = v98 ? v97 : 0;
            if ( v93 >= DirtyRectCount )
            {
              if ( (_BYTE)pPostComposition )
                goto LABEL_124;
              break;
            }
          }
          pPlaneAttributes->DirtyRectCount = 0;
        }
LABEL_124:
        right = *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL);
        if ( *(_BYTE *)(right + 2610) )
        {
          pPostComposition = (__int64)v51->pPlaneAttributes;
          pDirtyRects = pPostComposition + 36;
          if ( *(_DWORD *)(pPostComposition + 20) != *(_DWORD *)(pPostComposition + 36)
            || *(_DWORD *)(pPostComposition + 28) != *(_DWORD *)(pPostComposition + 44)
            || *(_DWORD *)(pPostComposition + 24) != *(_DWORD *)(pPostComposition + 40)
            || *(_DWORD *)(pPostComposition + 32) != *(_DWORD *)(pPostComposition + 48) )
          {
            v205 = 0LL;
            InverseXformMPORect3(&v205, (_DWORD *)pPostComposition, (int *)pDirtyRects);
            pPlaneAttributes->SrcRect = v205;
            pPlaneAttributes->DstRect = v51->pPlaneAttributes->ClipRect;
            pDirtyRects = (unsigned int)pPlaneAttributes->SrcRect.left;
            v99 = pPlaneAttributes->SrcRect.right;
            if ( (int)pDirtyRects >= v99
              || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
              || (right = (unsigned int)pPlaneAttributes->DstRect.left,
                  pPostComposition = (unsigned int)pPlaneAttributes->DstRect.right,
                  (int)right >= (int)pPostComposition)
              || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
              || (int)pDirtyRects < 0
              || (int)v197 < v99
              || pPlaneAttributes->SrcRect.top < 0
              || Height < pPlaneAttributes->SrcRect.bottom
              || v188 > (int)right
              || v189 < (int)pPostComposition
              || v186 > pPlaneAttributes->DstRect.top
              || v187 < pPlaneAttributes->DstRect.bottom )
            {
LABEL_189:
              v32 = (_QWORD *)WdLogNewEntry5_WdError(right, pPostComposition);
              PresentPlaneCount = v183;
              LODWORD(v23) = -1073741811;
              v32[3] = -1073741811LL;
              v32[4] = this;
              goto LABEL_42;
            }
          }
        }
        if ( !(_DWORD)v53 )
          break;
LABEL_154:
        if ( v181 )
        {
          v102 = (unsigned int)pPlaneAttributes->DstRect.left;
          if ( (_DWORD)v102 != pPlaneAttributes->SrcRect.left
            || pPlaneAttributes->DstRect.right != pPlaneAttributes->SrcRect.right
            || pPlaneAttributes->DstRect.top != pPlaneAttributes->SrcRect.top
            || *(_QWORD *)&pPlaneAttributes->SrcRect.bottom != *(_QWORD *)&pPlaneAttributes->DstRect.bottom
            || pPlaneAttributes->DstRect.right != pPlaneAttributes->ClipRect.right
            || pPlaneAttributes->DstRect.top != pPlaneAttributes->ClipRect.top
            || pPlaneAttributes->DstRect.bottom != pPlaneAttributes->ClipRect.bottom )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v102, pPostComposition);
            LODWORD(v23) = -1073741811;
            v32[3] = -1073741811LL;
            v32[4] = this;
            goto LABEL_193;
          }
          if ( v51->pPlaneAttributes->Rotation != D3DDDI_ROTATION_IDENTITY )
          {
            v32 = (_QWORD *)WdLogNewEntry5_WdError(v102, pPostComposition);
            LODWORD(v23) = -1073741811;
            v32[3] = -1073741811LL;
            v32[4] = this;
            v32[5] = (unsigned int)v51->pPlaneAttributes->Rotation;
            goto LABEL_193;
          }
          _mm_lfence();
          LODWORD(VidPnSourceId) = v193;
          right = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 4LL) >> 6) & 0xF;
          if ( v193 != (_DWORD)right )
          {
            _mm_lfence();
            v32 = (_QWORD *)WdLogNewEntry5_WdError(right, pPostComposition);
            v103 = v203;
            LODWORD(v23) = -1073741811;
            v32[3] = -1073741811LL;
            v32[4] = this;
            v32[5] = v103;
            v104 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v207[0] + v53) + 48LL) + 4LL) >> 6) & 0xF;
LABEL_192:
            v32[6] = v104;
            goto LABEL_193;
          }
        }
        else
        {
          LODWORD(VidPnSourceId) = v193;
        }
        LODWORD(v16) = v190;
        v49 = v183;
LABEL_171:
        if ( (v51->InputFlags.Value & 1) != 0 && (right = (unsigned int)v51->FlipInterval, (_DWORD)right) )
        {
          if ( (_DWORD)right != 1 )
          {
            v36 = (_QWORD *)WdLogNewEntry5_WdWarning(right, pPostComposition, pDirtyRects);
            v36[3] = this;
            v36[4] = v51->FlipInterval;
            goto LABEL_199;
          }
          v107 = 1;
          v191 = 1;
        }
        else
        {
          v107 = v191;
        }
        if ( bTracingEnabled )
        {
          v108 = *v51->pAllocationList;
          pDirtyRects = v108
                      ? (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 640LL)
                                                                              + 8LL)
                                                                  + 344LL))(
                          *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL),
                          v108)
                      : 0LL;
          pPostComposition = (__int64)v51->pPlaneAttributes;
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
            McTemplateK0qqqpqddddddddddddqqqqqq_EtwWriteTransfer(
              v51->InputFlags.Value & 1,
              pPostComposition,
              pDirtyRects,
              VidPnSourceId,
              v51->LayerIndex,
              *(_BYTE *)&v51->InputFlags.0 & 1,
              pDirtyRects,
              *(_DWORD *)pPostComposition,
              *(_DWORD *)(pPostComposition + 4),
              *(_DWORD *)(pPostComposition + 12),
              *(_DWORD *)(pPostComposition + 8),
              *(_DWORD *)(pPostComposition + 16),
              *(_DWORD *)(pPostComposition + 20),
              *(_DWORD *)(pPostComposition + 28),
              *(_DWORD *)(pPostComposition + 24),
              *(_DWORD *)(pPostComposition + 32),
              *(_DWORD *)(pPostComposition + 36),
              *(_DWORD *)(pPostComposition + 44),
              *(_DWORD *)(pPostComposition + 40),
              *(_DWORD *)(pPostComposition + 48),
              *(_DWORD *)(pPostComposition + 52),
              *(_DWORD *)(pPostComposition + 56),
              v177,
              *(_DWORD *)(pPostComposition + 72),
              a2->HDRMetaDataType,
              *(_DWORD *)(pPostComposition + 80));
        }
        v183 = ++v49;
        if ( v49 >= a2->PresentPlaneCount )
        {
          v43 = v184;
          if ( !v107 )
            goto LABEL_196;
LABEL_202:
          v110 = D3DDDI_FLIPINTERVAL_ONE;
          goto LABEL_203;
        }
        pDirtyRects = v198;
        v42 = v185;
        v46 = v178;
        v45 = v179;
      }
      if ( v202 )
      {
        v100 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v207[0] + 48LL) + 4LL) & 0x2000;
        if ( v100 && (*(_DWORD *)(*(_QWORD *)(v202 + 48) + 4LL) & 0x2000) == 0 )
        {
          pDirtyRects = 1LL;
          v184 = 1;
LABEL_151:
          pPostComposition = (unsigned int)(pPlaneAttributes->SrcRect.right - pPlaneAttributes->SrcRect.left);
          right = (unsigned int)(pPlaneAttributes->DstRect.right - pPlaneAttributes->DstRect.left);
          if ( (_DWORD)right != (_DWORD)pPostComposition )
          {
            right = *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL);
            if ( *(_BYTE *)(right + 2562) )
            {
              right = (unsigned int)(pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top);
              LODWORD(v199) = pPlaneAttributes->SrcRect.bottom - pPlaneAttributes->SrcRect.top;
              v182 = 1;
              v192 = pPostComposition;
            }
          }
          goto LABEL_154;
        }
        if ( !v100 )
        {
          v101 = v184;
          if ( (*(_DWORD *)(*(_QWORD *)(v202 + 48) + 4LL) & 0x2000) != 0 )
            v101 = 1;
          v184 = v101;
          pDirtyRects = 1LL;
          goto LABEL_151;
        }
      }
      pDirtyRects = 1LL;
      goto LABEL_151;
    }
LABEL_196:
    right = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_BYTE *)(*(_QWORD *)(right + 16) + 2642LL) )
    {
      v111 = WdLogNewEntry5_WdWarning(right, pPostComposition, pDirtyRects);
      *(_QWORD *)(v111 + 24) = 3570LL;
      WdLogEvent5_WdWarning(v111);
      goto LABEL_202;
    }
    v110 = D3DDDI_FLIPINTERVAL_IMMEDIATE;
LABEL_203:
    if ( !v180 && !v179 && !v178 )
    {
      v112 = WdLogNewEntry5_WdEvent(right, pPostComposition);
      *(_QWORD *)(v112 + 24) = 0LL;
      *(_QWORD *)(v112 + 32) = this;
      WdLogEvent5_WdEvent(v112);
      LODWORD(v23) = 0;
      goto LABEL_275;
    }
    memset(&v208, 0, sizeof(v208));
    v113 = 4;
    v208.FlipInterval = v110;
    if ( !v181 )
      v113 = 4100;
    v114 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS::$0C0DBF3D833AEF0C1CBA798B5E28D5B2::$8C6F21D9FE8836A187EDBDD85607E321)a2->Flags.Value;
    v201[0] = 0LL;
    v208.Flags.Value = v113 ^ ((unsigned __int16)v113 ^ (unsigned __int16)(*(_WORD *)&v114 << 8)) & 0x700 | 8;
    v201[1] = *(struct VIDSCH_SUBMIT_DATA_BASE **)(*((_QWORD *)this + 2) + 16LL);
    CVidSchSubmitData::InitializeSubmitData((CVidSchSubmitData *)v201);
    v23 = (__int64)v201[0];
    if ( !v201[0] )
    {
      v119 = WdLogNewEntry5_WdLowResource(v116, v115, v117, v118);
      *(_QWORD *)(v119 + 24) = 3606LL;
      WdLogEvent5_WdLowResource(v119);
      LODWORD(v23) = -1073741801;
LABEL_274:
      CVidSchSubmitData::~CVidSchSubmitData((struct _SLIST_ENTRY **)v201);
      goto LABEL_275;
    }
    v120 = *(_DWORD *)v201[0] | 0x30020;
    *(_DWORD *)v201[0] = v120;
    v121 = v120 | 1;
    *(_DWORD *)(v23 + 112) = a2->PresentCount;
    *(_DWORD *)v23 = v121;
    if ( v43 )
    {
      v121 |= 0x400000u;
      *(_DWORD *)v23 = v121;
    }
    v122 = v121 | 4;
    *(_DWORD *)v23 = v122;
    v123 = v122;
    if ( !v181 && a2->ContextCount <= 1 )
    {
      v123 = v122 | 0x800000;
      *(_DWORD *)v23 = v122 | 0x800000;
    }
    v124 = v123 ^ ((unsigned __int8)v123 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 8;
    *(_DWORD *)v23 = v124;
    v125 = ((unsigned __int8)v124 ^ (unsigned __int8)(a2->Flags.Value >> 1)) & 0x10 ^ v124;
    *(_DWORD *)v23 = v125;
    v126 = (v125 ^ (a2->Flags.Value << 19)) & 0x80000 ^ v125;
    *(_DWORD *)v23 = v126;
    v127 = (v126 ^ (a2->Flags.Value << 19)) & 0x100000 ^ v126;
    *(_DWORD *)v23 = v127;
    v128 = (v127 ^ (a2->Flags.Value << 19)) & 0x200000 ^ v127;
    *(_DWORD *)v23 = v128;
    v129 = v128 ^ (v128 ^ (a2->Flags.Value << 21)) & 0x20000000;
    *(_DWORD *)v23 = v129;
    if ( (a2->Flags.Value & 0x40) != 0 )
      Duration = a2->Duration;
    else
      Duration = 0;
    *(_DWORD *)(v23 + 144) = Duration;
    LODWORD(v131) = v129;
    *(_DWORD *)(v23 + 116) = VidPnSourceId;
    *(_DWORD *)(v23 + 124) = v110;
    *(_DWORD *)(v23 + 120) = 5;
    if ( (a2->Flags.Value & 0x200) != 0 && v110 == D3DDDI_FLIPINTERVAL_IMMEDIATE )
    {
      LODWORD(v131) = v129 | 0x10000000;
      *(_DWORD *)v23 = v129 | 0x10000000;
    }
    v132 = *(_QWORD *)(*((_QWORD *)this + 2) + 1848LL);
    if ( (*(_DWORD *)(v132 + 2576) & 0x10) != 0 )
    {
      if ( !ADAPTER_DISPLAY::IsHdrEnabled(*(ADAPTER_DISPLAY **)(v132 + 2696), (unsigned int)VidPnSourceId) )
      {
        *(_DWORD *)v23 |= 0x40000000u;
        *(_DWORD *)(v23 + 352) = 0;
LABEL_241:
        LODWORD(v131) = *(_DWORD *)v23;
        goto LABEL_242;
      }
      v131 = *(_DWORD *)v23 ^ (*(_DWORD *)v23 ^ (a2->Flags.Value << 23)) & 0x40000000;
      *(_DWORD *)v23 = v131;
      *(_DWORD *)(v23 + 352) = a2->HDRMetaDataType;
      HDRMetaDataType = (unsigned int)a2->HDRMetaDataType;
      if ( (v131 & 0x40000000) != 0 )
      {
        if ( !(_DWORD)HDRMetaDataType )
          goto LABEL_242;
        v134 = (unsigned int)(HDRMetaDataType - 1);
        if ( !(_DWORD)v134 )
        {
          pHDRMetaData = a2->pHDRMetaData;
          *(_OWORD *)(v23 + 356) = *(_OWORD *)pHDRMetaData;
          *(_QWORD *)(v23 + 372) = pHDRMetaData[2];
          *(_DWORD *)(v23 + 380) = *((_DWORD *)pHDRMetaData + 6);
          goto LABEL_242;
        }
        if ( (_DWORD)v134 == 1 )
        {
          v136 = a2->pHDRMetaData;
          *(_OWORD *)(v23 + 356) = *v136;
          *(_OWORD *)(v23 + 372) = v136[1];
          *(_OWORD *)(v23 + 388) = v136[2];
          *(_OWORD *)(v23 + 404) = v136[3];
          *(_QWORD *)(v23 + 420) = *((_QWORD *)v136 + 8);
          goto LABEL_242;
        }
        v135 = WdLogNewEntry5_WdAssertion(v131, v134);
        *(_QWORD *)(v135 + 24) = 3681LL;
        WdLogEvent5_WdAssertion(v135);
        *(_DWORD *)v23 &= ~0x40000000u;
        goto LABEL_241;
      }
      if ( (unsigned int)HDRMetaDataType > 2 )
      {
        v138 = WdLogNewEntry5_WdAssertion(v131, HDRMetaDataType);
        *(_QWORD *)(v138 + 24) = 3691LL;
        WdLogEvent5_WdAssertion(v138);
      }
      if ( a2->pHDRMetaData || a2->HDRMetaDataSize )
      {
        v139 = WdLogNewEntry5_WdAssertion(v131, HDRMetaDataType);
        *(_QWORD *)(v139 + 24) = 3694LL;
        WdLogEvent5_WdAssertion(v139);
      }
      LODWORD(v131) = *(_DWORD *)v23 | 0x40000000;
      *(_DWORD *)v23 = v131;
      if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10 )
      {
        *(_DWORD *)(v23 + 352) = 134217729;
      }
      else if ( a2->HDRMetaDataType == D3DDDI_HDR_METADATA_TYPE_HDR10PLUS )
      {
        *(_DWORD *)(v23 + 352) = -2147483646;
      }
    }
LABEL_242:
    if ( a2->pPostComposition )
    {
      *(_DWORD *)v23 = v131 | 0x80000000;
      *(RECT *)(v23 + 428) = a2->pPostComposition->SrcRect;
      *(RECT *)(v23 + 444) = a2->pPostComposition->DstRect;
    }
    v140 = *((_QWORD *)this + 2);
    v141 = *(_QWORD *)(v140 + 1848);
    if ( v141 == *(_QWORD *)(*(_QWORD *)(v140 + 16) + 16LL) )
    {
      if ( *(_DWORD *)(v23 + 120) == *(_DWORD *)(v140 + 4LL * (unsigned int)VidPnSourceId + 1784) )
      {
        v144 = v200;
      }
      else
      {
        if ( (a2->Flags.Value & 8) != 0 )
        {
          v142 = WdLogNewEntry5_WdEvent(v140, v141);
          LODWORD(v23) = -1071775739;
          *(_QWORD *)(v142 + 24) = -1071775739LL;
          WdLogEvent5_WdEvent(v142);
          goto LABEL_274;
        }
        v143 = WdLogNewEntry5_WdEvent(v140, v141);
        *(_QWORD *)(v143 + 24) = *((_QWORD *)this + 2);
        WdLogEvent5_WdEvent(v143);
        v144 = v200;
        COREDEVICEACCESS::Release(v200, v145);
        DXGDEVICE::FlushScheduler(*((_QWORD **)this + 2), 3u);
        v146 = COREDEVICEACCESS::AcquireShared(v144, 0LL);
        v149 = v146;
        if ( v146 < 0 )
        {
          v150 = WdLogNewEntry5_WdEvent(v148, v147);
          *(_QWORD *)(v150 + 24) = v149;
          WdLogEvent5_WdEvent(v150);
          COREDEVICEACCESS::AcquireSharedUncheck(v144, v151);
LABEL_250:
          LODWORD(v23) = v149;
          goto LABEL_274;
        }
      }
      v152 = DXGCONTEXT::WaitForQueuedPresentLimit(this, VidPnSourceId, (a2->Flags.Value & 8) == 0, v144);
      v149 = v152;
      if ( v152 < 0 )
      {
        v155 = WdLogNewEntry5_WdEvent(v154, v153);
        *(_QWORD *)(v155 + 24) = v149;
        *(_QWORD *)(v155 + 32) = this;
        WdLogEvent5_WdEvent(v155);
        goto LABEL_250;
      }
      v156 = DXGCONTEXT::CheckDevicePresentSettings(this, 1LL, 0LL, VidPnSourceId);
      v149 = v156;
      if ( v156 < 0 )
      {
        v159 = WdLogNewEntry5_WdEvent(v158, v157);
        *(_QWORD *)(v159 + 24) = v149;
        *(_QWORD *)(v159 + 32) = this;
        WdLogEvent5_WdEvent(v159);
        if ( (_DWORD)v149 == -1071774920 )
        {
          DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v207[0], v210, v185, *(_DWORD *)(v23 + 136));
          v160 = *(_DWORD *)(v23 + 120);
          LODWORD(v23) = 0;
          *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1784) = v160;
          goto LABEL_274;
        }
        goto LABEL_250;
      }
      if ( *((_QWORD *)this + 47) )
      {
        v161 = WdLogNewEntry5_WdAssertion(v158, v157);
        *(_QWORD *)(v161 + 24) = 3798LL;
        WdLogEvent5_WdAssertion(v161);
      }
      LODWORD(v149) = DXGCONTEXT::SubmitPresentMultiPlaneOverlays3(
                        this,
                        a2,
                        v180,
                        v179,
                        v178,
                        v207[0],
                        v213,
                        &v208,
                        (struct VIDSCH_SUBMIT_DATA_BASE *)v23,
                        v204);
      if ( (int)v149 < 0 )
      {
LABEL_268:
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL))
          && (_DWORD)v149 != -1073741130 )
        {
          v173 = WdLogNewEntry5_WdAssertion(v172, v171);
          *(_QWORD *)(v173 + 24) = 3861LL;
          WdLogEvent5_WdAssertion(v173);
        }
        if ( *((_QWORD *)this + 47) )
        {
          v174 = WdLogNewEntry5_WdAssertion(v172, v171);
          *(_QWORD *)(v174 + 24) = 3862LL;
          WdLogEvent5_WdAssertion(v174);
        }
        goto LABEL_250;
      }
      v162 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL) + 112LL);
      if ( *(_DWORD *)(v162 + 3968LL * (unsigned int)VidPnSourceId + 1068) == -1 )
      {
        v163 = WdLogNewEntry5_WdAssertion(v162, 3968LL * (unsigned int)VidPnSourceId);
        *(_QWORD *)(v163 + 24) = 3815LL;
        WdLogEvent5_WdAssertion(v163);
      }
      DXGCONTEXT::UpdateDisplayStateForFullWDDMDevice(this, a2, v207[0], v210, v185, *(_DWORD *)(v23 + 136));
      v164 = v199;
      v165 = v192;
      LOBYTE(v166) = v182;
      *(_DWORD *)(*((_QWORD *)this + 2) + 4LL * (unsigned int)VidPnSourceId + 1784) = *(_DWORD *)(v23 + 120);
    }
    else
    {
      if ( !v141 )
      {
        v175 = WdLogNewEntry5_WdAssertion(v140, 0LL);
        *(_QWORD *)(v175 + 24) = *((_QWORD *)this + 2);
        *(_QWORD *)(v175 + 32) = -1073741822LL;
        WdLogEvent5_WdAssertion(v175);
        LODWORD(v23) = -1073741811;
        goto LABEL_274;
      }
      v167 = a2->ppPresentPlanes;
      v168 = *v167;
      if ( (*v167)->LayerIndex )
      {
        v169 = WdLogNewEntry5_WdAssertion(v140, v141);
        *(_QWORD *)(v169 + 24) = 3839LL;
        WdLogEvent5_WdAssertion(v169);
      }
      memset(&v209, 0, sizeof(v209));
      ConvertMPOThunkToLegacyPresentThunk(&v209, a2, v168);
      v170 = DXGCONTEXT::DisplayOnlyPresent(this, &v209, *(struct DXGALLOCATION **)v207[0], VidPnSourceId, &v208, v200);
      v164 = 0;
      v165 = 0;
      v166 = 0LL;
      LODWORD(v149) = v170;
    }
    UpdatePostComposition(
      (unsigned int)VidPnSourceId,
      v166,
      v165,
      v164,
      *(struct ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1848LL) + 2696LL));
    goto LABEL_268;
  }
  v32 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
  LODWORD(v23) = -1073741811;
  v32[3] = -1073741811LL;
  v32[4] = this;
  v32[5] = VidPnSourceId;
LABEL_193:
  WdLogEvent5_WdError(v32);
LABEL_275:
  PagedPoolArray<DXGALLOCATIONREFERENCE,4>::~PagedPoolArray<DXGALLOCATIONREFERENCE,4>(v207);
  return (unsigned int)v23;
}
