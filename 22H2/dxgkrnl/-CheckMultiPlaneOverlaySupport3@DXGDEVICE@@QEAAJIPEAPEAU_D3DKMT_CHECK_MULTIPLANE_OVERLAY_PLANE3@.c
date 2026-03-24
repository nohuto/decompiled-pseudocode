/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253958
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253798 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C0254684 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C0258BD0 (DxgkCheckMultiPlaneOverlaySupport3.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C00026B4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0003548 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00038F0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008610 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0008AF8 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0101520 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C0101D00 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0112F64 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C015E75C (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C015F9D4 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C0211444 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0213E38 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C021561C (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C0215728 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0252468 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C0253194 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02560D0 (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0257754 (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 */

__int64 __fastcall DXGDEVICE::CheckMultiPlaneOverlaySupport3(
        DXGDEVICE *this,
        unsigned int a2,
        struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        bool a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  __int64 v9; // rsi
  __int64 v11; // r14
  __int64 v12; // r13
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // edi
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned int v36; // eax
  unsigned __int8 v37; // r12
  __int64 v38; // rax
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int64 v40; // rcx
  int v41; // ecx
  __int64 v42; // rbx
  int v43; // eax
  __int64 v44; // rcx
  char v45; // al
  unsigned int v46; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v47; // rsi
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v48; // rbx
  unsigned int Rotation; // eax
  __int64 v50; // rax
  __int64 v51; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // eax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // r13
  __int64 v57; // rsi
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v58; // r15
  __int64 v59; // r13
  D3DKMT_HANDLE hResource; // ebx
  __int64 v61; // rax
  __int64 v62; // r8
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rax
  struct _EX_RUNDOWN_REF *v66; // rdx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  const struct DXGALLOCATION *Count; // rbx
  __int64 v71; // r13
  void **v72; // rbx
  __int64 v73; // rcx
  __int64 v74; // rcx
  __int64 v75; // r8
  __int64 v76; // rcx
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  void *v78; // rax
  ADAPTER_RENDER *v79; // rcx
  int v80; // eax
  __int64 v81; // rdx
  __int64 right; // rcx
  __int64 v83; // r8
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v84; // rdx
  __int64 v85; // rcx
  unsigned int v86; // esi
  __int64 v87; // rbx
  _QWORD *v88; // rax
  unsigned int v89; // eax
  __int64 v90; // rax
  int StretchQuality; // eax
  __int64 v92; // rax
  __int64 v93; // rcx
  int ColorSpace; // eax
  UINT SDRWhiteLevel; // eax
  _QWORD *v96; // rax
  __int64 v97; // rcx
  __int64 v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  unsigned int v101; // r15d
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v102; // r14
  __int64 v103; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v104; // rbx
  __int64 v105; // rdx
  __int64 v106; // rcx
  DISPLAY_SOURCE *v107; // rsi
  __int64 v108; // r13
  const struct DXGALLOCATION **v109; // r12
  char *v110; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v111; // rsi
  __int64 v112; // rcx
  __int64 v113; // rdx
  DISPLAY_SOURCE *v114; // rbx
  _QWORD *v115; // rax
  _QWORD *v116; // rax
  __int64 v117; // rdx
  _QWORD *v118; // rax
  __int64 v119; // rax
  __int64 v120; // rcx
  _QWORD *v121; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v122; // r9
  int *v123; // rbx
  unsigned int v124; // r9d
  __int128 *v125; // r10
  __int64 v126; // rdx
  char v127; // [rsp+60h] [rbp-A0h]
  unsigned int v128; // [rsp+64h] [rbp-9Ch]
  struct _EX_RUNDOWN_REF *v129; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v130; // [rsp+70h] [rbp-90h]
  unsigned int v131; // [rsp+74h] [rbp-8Ch]
  int v132; // [rsp+78h] [rbp-88h]
  int *v133; // [rsp+80h] [rbp-80h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v134; // [rsp+88h] [rbp-78h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v135; // [rsp+90h] [rbp-70h]
  const struct DXGALLOCATION **v136; // [rsp+98h] [rbp-68h]
  void **v137; // [rsp+A0h] [rbp-60h]
  _BYTE v138[16]; // [rsp+A8h] [rbp-58h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v139; // [rsp+B8h] [rbp-48h]
  PVOID P; // [rsp+C0h] [rbp-40h] BYREF
  char v141; // [rsp+C8h] [rbp-38h] BYREF
  int v142; // [rsp+E0h] [rbp-20h]
  struct _DXGKARG_DESCRIBEALLOCATION v143; // [rsp+E8h] [rbp-18h] BYREF
  PVOID v144; // [rsp+118h] [rbp+18h] BYREF
  char v145; // [rsp+120h] [rbp+20h] BYREF
  int v146; // [rsp+138h] [rbp+38h]
  _BYTE v147[512]; // [rsp+140h] [rbp+40h]
  __int128 v148; // [rsp+340h] [rbp+240h] BYREF

  v9 = 0LL;
  v134 = a5;
  LODWORD(v11) = 0;
  v12 = a2;
  v139 = a8;
  v130 = a4;
  *a7 = 0;
  a8->Value = 0;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v135 = a3;
  v131 = a2;
  v133 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    v17 = WdLogNewEntry5_WdWarning(v15, v14, v16);
    *(_QWORD *)(v17 + 24) = 0LL;
    WdLogEvent5_WdWarning(v17);
    return 0LL;
  }
  v144 = 0LL;
  v146 = 0;
  v136 = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                          &v144,
                                          v12);
  if ( !v136 )
  {
    v22 = -1073741801;
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = v12;
    v23[4] = -1073741801LL;
    v23[5] = PsGetCurrentProcess(v25, v24, v26, v27);
    WdLogEvent5_WdWarning(v23);
    goto LABEL_174;
  }
  P = 0LL;
  v142 = 0;
  v137 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(&P, v12);
  if ( !v137 )
  {
    v22 = -1073741801;
    v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
    v31[3] = v12;
    v31[4] = -1073741801LL;
    v31[5] = PsGetCurrentProcess(v33, v32, v34, v35);
    WdLogEvent5_WdWarning(v31);
    goto LABEL_170;
  }
  v36 = *((_DWORD *)this + 464);
  v37 = 1;
  v127 = 1;
  if ( v36 > 0x10 )
  {
    v38 = WdLogNewEntry5_WdAssertion(v29, v28);
    *(_QWORD *)(v38 + 24) = 10525LL;
    WdLogEvent5_WdAssertion(v38);
    v36 = *((_DWORD *)this + 464);
  }
  if ( v36 )
  {
    while ( 1 )
    {
      if ( (unsigned int)v9 >= 0x10 )
      {
LABEL_13:
        v9 = 0LL;
        goto LABEL_14;
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2696LL), v9);
      v28 = 0LL;
      if ( !DisplayModeInfo )
        break;
      v41 = *(_DWORD *)DisplayModeInfo;
      v42 = 2LL * (unsigned int)v9;
      v43 = *((_DWORD *)DisplayModeInfo + 1);
      LODWORD(v9) = v9 + 1;
      *(_QWORD *)&v147[8 * v42] = 0LL;
      *(_DWORD *)&v147[8 * v42 + 8] = v41;
      *(_DWORD *)&v147[8 * v42 + 12] = v43;
      *(_OWORD *)&v147[8 * v42 + 256] = *(_OWORD *)&v147[8 * v42];
      if ( (unsigned int)v9 >= *((_DWORD *)this + 464) )
        goto LABEL_13;
    }
    v50 = WdLogNewEntry5_WdError(v40, 0LL);
    *(_QWORD *)(v50 + 24) = this;
    *(_QWORD *)(v50 + 32) = (unsigned int)v9;
    WdLogEvent5_WdError(v50);
    v9 = 0LL;
    v37 = 0;
    v127 = 0;
  }
LABEL_14:
  v132 = -1;
  if ( a4 )
  {
    v44 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v44 + 928) || (v45 = 1, !*(_BYTE *)(v44 + 2642)) )
      v45 = 0;
    v37 &= v45;
    v46 = 0;
    v47 = v134;
    v127 = v37;
    while ( 1 )
    {
      if ( (int)v11 < 0 )
        goto LABEL_42;
      v48 = *v47;
      if ( (*v47)->PostComposition.SrcRect.left >= (*v47)->PostComposition.SrcRect.right
        || v48->PostComposition.SrcRect.top >= v48->PostComposition.SrcRect.bottom
        || v48->PostComposition.DstRect.left >= v48->PostComposition.DstRect.right
        || v48->PostComposition.DstRect.top >= v48->PostComposition.DstRect.bottom )
      {
        break;
      }
      Rotation = v48->PostComposition.Rotation;
      if ( Rotation > 2 )
      {
        if ( Rotation > 4 )
        {
          v51 = WdLogNewEntry5_WdWarning(0LL, v28, v30);
          LODWORD(v11) = -1073741811;
          *(_QWORD *)(v51 + 24) = v48->PostComposition.Rotation;
          *(_QWORD *)(v51 + 32) = -1073741811LL;
          WdLogEvent5_WdWarning(v51);
        }
        else
        {
          v37 = 0;
          v127 = 0;
        }
      }
      if ( v48->PostComposition.Flags.Value )
        goto LABEL_38;
      VidPnSourceId = v48->VidPnSourceId;
      if ( v48->VidPnSourceId >= *((_DWORD *)this + 464) )
      {
        v54 = WdLogNewEntry5_WdWarning(0LL, v28, v30);
        v9 = 0LL;
        *(_QWORD *)(v54 + 24) = v48->VidPnSourceId;
        *(_QWORD *)(v54 + 32) = 0LL;
        WdLogEvent5_WdWarning(v54);
        goto LABEL_39;
      }
      if ( *(_DWORD *)&v147[16 * VidPnSourceId] > v48->PostComposition.DstRect.left
        || *(_DWORD *)&v147[16 * VidPnSourceId + 8] < v48->PostComposition.DstRect.right
        || *(_DWORD *)&v147[16 * VidPnSourceId + 4] > v48->PostComposition.DstRect.top
        || *(_DWORD *)&v147[16 * VidPnSourceId + 12] < v48->PostComposition.DstRect.bottom )
      {
        v53 = WdLogNewEntry5_WdWarning(2LL * VidPnSourceId, v28, v30);
        *(_QWORD *)(v53 + 24) = this;
        *(_QWORD *)(v53 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v53);
LABEL_38:
        v9 = 0LL;
LABEL_39:
        v37 = 0;
        v127 = 0;
        goto LABEL_43;
      }
      ++v46;
      ++v47;
      *(RECT *)&v147[16 * VidPnSourceId + 256] = v48->PostComposition.SrcRect;
      if ( v46 >= v130 )
        goto LABEL_42;
    }
    v55 = WdLogNewEntry5_WdWarning(0LL, v28, v30);
    *(_QWORD *)(v55 + 24) = -1073741811LL;
    WdLogEvent5_WdWarning(v55);
    LODWORD(v11) = -1073741811;
LABEL_42:
    v9 = 0LL;
  }
LABEL_43:
  v128 = 0;
  if ( !(_DWORD)v12 )
    goto LABEL_128;
  v56 = 0LL;
  *(_QWORD *)&v148 = 0LL;
  while ( 2 )
  {
    if ( (int)v11 < 0 )
      goto LABEL_128;
    v57 = *((_QWORD *)this + 5);
    v58 = v135[v56];
    v59 = v57 + 208;
    hResource = v58->hResource;
    DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v57 + 208));
    v61 = (hResource >> 6) & 0xFFFFFF;
    if ( (unsigned int)v61 >= *(_DWORD *)(v57 + 256) )
      goto LABEL_52;
    v62 = *(_QWORD *)(v57 + 240);
    v63 = *(_DWORD *)(v62 + 16 * v61 + 8);
    if ( ((hResource >> 25) & 0x60) != (*(_BYTE *)(v62 + 16 * v61 + 8) & 0x60)
      || (v63 & 0x2000) != 0
      || (v63 & 0x1F) == 0 )
    {
      goto LABEL_52;
    }
    v64 = v63 & 0x1F;
    if ( (_BYTE)v64 != 4 )
    {
      v65 = WdLogNewEntry5_WdError(v64, 2LL * (unsigned int)v61);
      *(_QWORD *)(v65 + 24) = 316LL;
      WdLogEvent5_WdError(v65);
LABEL_52:
      v9 = 0LL;
      v66 = 0LL;
      goto LABEL_53;
    }
    v66 = *(struct _EX_RUNDOWN_REF **)(v62 + 16LL * (unsigned int)v61);
    v9 = 0LL;
LABEL_53:
    DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v129, v66);
    ExReleasePushLockSharedEx(v59, 0LL);
    KeLeaveCriticalRegion();
    if ( !v129 )
    {
LABEL_152:
      v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v67, v69);
      v120 = v58->hResource;
      v96[4] = -1073741811LL;
LABEL_148:
      v96[3] = v120;
LABEL_149:
      WdLogEvent5_WdWarning(v96);
      v37 = v9;
      v127 = v9;
      goto LABEL_150;
    }
    Count = (const struct DXGALLOCATION *)v129[3].Count;
    while ( 1 )
    {
      if ( !Count )
        goto LABEL_152;
      if ( *((DXGDEVICE **)Count + 1) != this )
      {
        v121 = (_QWORD *)WdLogNewEntry5_WdWarning(v68, v67, v69);
        v121[3] = v58->hResource;
        v121[4] = *((_QWORD *)Count + 1);
        v121[5] = this;
        v121[6] = -1073741811LL;
        WdLogEvent5_WdWarning(v121);
        goto LABEL_152;
      }
      v9 = *((_QWORD *)Count + 6);
      if ( (*(_DWORD *)(v9 + 4) & 0x200B) != 0 )
        break;
      Count = (const struct DXGALLOCATION *)*((_QWORD *)Count + 8);
      v9 = 0LL;
    }
    v71 = v148;
    v67 = 0LL;
    v136[(_QWORD)v148] = Count;
    if ( !v9 )
      goto LABEL_152;
    v72 = v137;
    v137[v71] = *(void **)(v9 + 16);
    v73 = v58->VidPnSourceId;
    if ( (unsigned int)v73 >= *((_DWORD *)this + 464) )
    {
      v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v73, 0LL, v69);
      v120 = v58->VidPnSourceId;
      v9 = 0LL;
      v96[4] = 0LL;
      goto LABEL_148;
    }
    if ( (_DWORD)v73 != ((*(_DWORD *)(v9 + 4) >> 6) & 0xF) )
    {
      v74 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
      if ( !*(_QWORD *)(v74 + 928) || !*(_BYTE *)(v74 + 2642) )
      {
        v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v74, 0LL, v69);
        v96[3] = v58->VidPnSourceId;
        v97 = (*(_DWORD *)(v9 + 4) >> 6) & 0xF;
LABEL_124:
        v9 = 0LL;
        v96[4] = v97;
        v96[5] = 0LL;
        goto LABEL_149;
      }
    }
    v75 = *((_QWORD *)this + 2);
    v76 = *(unsigned int *)(*(_QWORD *)(v75 + 16) + 2536LL);
    if ( v58->LayerIndex >= (unsigned int)v76 )
    {
      v96 = (_QWORD *)WdLogNewEntry5_WdWarning(v76, 0LL, v75);
      v96[3] = v58->LayerIndex;
      v97 = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2536LL);
      goto LABEL_124;
    }
    if ( a6 && !*((_DWORD *)this + 465) )
    {
      v98 = WdLogNewEntry5_WdWarning(v76, 0LL, v75);
      LODWORD(v11) = -1073741790;
      *(_QWORD *)(v98 + 24) = -1073741790LL;
      WdLogEvent5_WdWarning(v98);
LABEL_126:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v129, v99);
      break;
    }
    pPlaneAttributes = v58->pPlaneAttributes;
    if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
      || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
      || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
      || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
      || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
      || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
    {
      v119 = WdLogNewEntry5_WdWarning(v76, pPlaneAttributes, v75);
      *(_QWORD *)(v119 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v119);
      LODWORD(v11) = -1073741811;
      goto LABEL_126;
    }
    v78 = v72[v71];
    v79 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
    memset(&v143.Width, 0, 40);
    v143.hAllocation = v78;
    v80 = ADAPTER_RENDER::DdiDescribeAllocation(v79, &v143, v75);
    v11 = v80;
    if ( v80 < 0 )
    {
      v118 = (_QWORD *)WdLogNewEntry5_WdError(right, v81);
      v118[3] = v11;
      v118[4] = this;
      v118[5] = v72[v128];
      v118[6] = v9;
      WdLogEvent5_WdError(v118);
      goto LABEL_126;
    }
    v84 = v58->pPlaneAttributes;
    v9 = 0LL;
    if ( v84->SrcRect.left < 0
      || (right = (unsigned int)v84->SrcRect.right, (int)v143.Width < (int)right)
      || v84->SrcRect.top < 0
      || (int)v143.Height < v84->SrcRect.bottom )
    {
      v116 = (_QWORD *)WdLogNewEntry5_WdError(right, v84);
      v116[5] = v128;
      v116[3] = -1073741811LL;
      v116[4] = this;
      WdLogEvent5_WdError(v116);
      LODWORD(v11) = -1073741811;
LABEL_150:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v129, v117);
      goto LABEL_128;
    }
    v85 = 2LL * v58->VidPnSourceId;
    if ( *(_DWORD *)&v147[16 * v58->VidPnSourceId + 256] > v84->ClipRect.left
      || *(_DWORD *)&v147[16 * v58->VidPnSourceId + 264] < v84->ClipRect.right
      || *(_DWORD *)&v147[16 * v58->VidPnSourceId + 260] > v84->ClipRect.top
      || *(_DWORD *)&v147[16 * v58->VidPnSourceId + 268] < v84->ClipRect.bottom )
    {
      v88 = (_QWORD *)WdLogNewEntry5_WdWarning(v85, v84, v83);
      v88[3] = 0LL;
      v86 = v128;
      v87 = v128;
      v88[4] = this;
      v88[5] = v128;
      WdLogEvent5_WdWarning(v88);
      v84 = v58->pPlaneAttributes;
      v37 = 0;
      v127 = 0;
    }
    else
    {
      v86 = v128;
      v87 = v128;
    }
    if ( v84->DstRect.left > v84->ClipRect.left
      || v84->DstRect.right < v84->ClipRect.right
      || v84->DstRect.top > v84->ClipRect.top
      || v84->DstRect.bottom < v84->ClipRect.bottom )
    {
      v115 = (_QWORD *)WdLogNewEntry5_WdError(v85, v84);
      v115[3] = -1073741811LL;
      v115[4] = this;
      v115[5] = v87;
      WdLogEvent5_WdError(v115);
      LODWORD(v11) = -1073741811;
      goto LABEL_126;
    }
    v89 = v84->Rotation;
    if ( v89 > 1 )
    {
      if ( v89 > 4 )
      {
        v90 = WdLogNewEntry5_WdWarning(v85, v84, 0LL);
        *(_QWORD *)(v90 + 24) = v58->pPlaneAttributes->Rotation;
        *(_QWORD *)(v90 + 32) = -1073741811LL;
        WdLogEvent5_WdWarning(v90);
        v84 = v58->pPlaneAttributes;
        LODWORD(v11) = -1073741811;
      }
      else
      {
        v85 = 0LL;
        if ( (**(_DWORD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2600LL) & 0x20) == 0 )
          v85 = v37;
        v37 = v85;
        v127 = v85;
      }
    }
    StretchQuality = v84->StretchQuality;
    if ( StretchQuality <= 0 || StretchQuality > 2 )
    {
      v92 = WdLogNewEntry5_WdWarning(v85, v84, 0LL);
      *(_QWORD *)(v92 + 24) = -1073741811LL;
      WdLogEvent5_WdWarning(v92);
      v84 = v58->pPlaneAttributes;
      LODWORD(v11) = -1073741811;
    }
    v93 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( !*(_QWORD *)(v93 + 896) && (!*(_QWORD *)(v93 + 928) || !*(_BYTE *)(v93 + 2642)) )
    {
      ColorSpace = v84->ColorSpace;
      if ( ColorSpace == -1
        || ColorSpace > 0 && (ColorSpace <= 3 || ColorSpace == 5 || (unsigned int)(ColorSpace - 10) <= 9) )
      {
        v37 = 0;
        v127 = 0;
      }
    }
    SDRWhiteLevel = v84->SDRWhiteLevel;
    if ( SDRWhiteLevel && SDRWhiteLevel != 80 && (*(_DWORD *)(v93 + 348) & 0x200) == 0 )
    {
      if ( *(int *)(v93 + 2328) < 8960 )
        v37 = 0;
      v127 = v37;
    }
    if ( !*(_QWORD *)(v93 + 928) || !*(_BYTE *)(v93 + 2642) )
    {
      if ( v132 == -1 )
      {
        v132 = v58->VidPnSourceId;
      }
      else
      {
        if ( v132 != v58->VidPnSourceId )
          v37 = 0;
        v127 = v37;
      }
    }
    DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v129, (__int64)v84);
    v56 = v71 + 1;
    v128 = v86 + 1;
    *(_QWORD *)&v148 = v56;
    if ( v86 + 1 < v131 )
    {
      v9 = 0LL;
      continue;
    }
    break;
  }
  v9 = 0LL;
LABEL_128:
  DXGAUTOMUTEX::DXGAUTOMUTEX(
    (DXGAUTOMUTEX *)v138,
    (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 231) + 2696LL) + 520LL),
    0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v138);
  if ( (int)v11 < 0 )
  {
    v123 = v133;
    goto LABEL_167;
  }
  if ( v37 )
  {
    v101 = v9;
    v148 = 0LL;
    if ( v130 )
    {
      v102 = v134;
      v103 = v130;
      do
      {
        v104 = *v102;
        v105 = (*v102)->VidPnSourceId;
        v106 = *(_QWORD *)(*((_QWORD *)this + 231) + 2696LL);
        v107 = (DISPLAY_SOURCE *)(*(_QWORD *)(v106 + 112) + 3968 * v105);
        if ( !*((_BYTE *)&v148 + v105) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v106 + 112) + 3968 * v105));
          v101 = v104->VidPnSourceId;
          *((_BYTE *)&v148 + v104->VidPnSourceId) = 1;
        }
        DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
          v107,
          &v104->PostComposition.SrcRect,
          &v104->PostComposition.DstRect);
        ++v102;
        --v103;
      }
      while ( v103 );
      v37 = v127;
      v9 = 0LL;
    }
    if ( v131 )
    {
      v108 = v131;
      v109 = v136;
      v110 = (char *)((char *)v135 - (char *)v136);
      do
      {
        v111 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v109 + (_QWORD)v110);
        v112 = *(_QWORD *)(*((_QWORD *)this + 231) + 2696LL);
        v113 = v111->VidPnSourceId;
        v114 = (DISPLAY_SOURCE *)(*(_QWORD *)(v112 + 112) + 3968 * v113);
        if ( !*((_BYTE *)&v148 + v113) )
        {
          DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v112 + 112) + 3968 * v113));
          v101 = v111->VidPnSourceId;
          *((_BYTE *)&v148 + v101) = 1;
        }
        if ( DXGDEVICE::UseCachedIndependentFlipParameters(this, v114, v111) )
        {
          DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v114, v111->LayerIndex);
        }
        else
        {
          v122 = v111->pPlaneAttributes;
          DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
            v114,
            v111->LayerIndex,
            *v109,
            v122->Flags,
            &v122->SrcRect,
            &v122->DstRect,
            &v122->ClipRect,
            v122->Rotation,
            v122->Blend,
            v122->ColorSpace,
            v122->SDRWhiteLevel);
        }
        ++v109;
        --v108;
      }
      while ( v108 );
      v37 = v127;
      v9 = 0LL;
    }
    v123 = v133;
    LODWORD(v11) = CheckMultiPlaneOverlayInternal3(
                     v101,
                     *((struct ADAPTER_RENDER **)this + 2),
                     *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 231) + 2696LL),
                     v133,
                     v139);
    if ( *v123 == (_DWORD)v9 )
    {
      v124 = v9;
      v125 = &v148;
      do
      {
        if ( *(_BYTE *)v125 != (_BYTE)v9 )
          DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 231)
                                                                                            + 2696LL)
                                                                                + 112LL)
                                                                    + 3968LL * v124));
        ++v124;
        v125 = (__int128 *)((char *)v125 + 1);
      }
      while ( v124 < 0x10 );
    }
  }
  else
  {
    v123 = v133;
  }
  if ( (int)v11 < 0 || !v37 )
LABEL_167:
    LogCheckMutiplaneOverlaySupport(v11, *v123, v131, v135, v137, v130, v134, *((struct ADAPTER_RENDER **)this + 2));
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138, v100);
  v22 = v11;
  if ( v138[8] != (_BYTE)v9 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v138, v126);
LABEL_170:
  if ( P != &v141 && P )
    ExFreePoolWithTag(P, 0);
  P = (PVOID)v9;
  v142 = v9;
LABEL_174:
  if ( v144 != &v145 )
  {
    if ( v144 )
      ExFreePoolWithTag(v144, 0);
  }
  return v22;
}
