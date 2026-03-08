/*
 * XREFs of ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3050
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E2EA0 (-CheckMultiPlaneOverlaySupport2@DXGDEVICE@@QEAAJIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2@@_N.c)
 *     ?CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEAH@Z @ 0x1C02E3D84 (-CheckMultiPlaneOverlaySupport@DXGDEVICE@@QEAAJIPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE@@_NPEA.c)
 *     DxgkCheckMultiPlaneOverlaySupport3 @ 0x1C02EAE20 (DxgkCheckMultiPlaneOverlaySupport3.c)
 *     DxgkCheckSinglePlaneForMultiPlaneOverlaySupport @ 0x1C02EC0A0 (DxgkCheckSinglePlaneForMultiPlaneOverlaySupport.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006FA0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0008CE0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008F20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0008FA8 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0009084 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0048A9C (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0172C2C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C0176820 (-ClearAllQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ @ 0x1C017DA78 (-IsMultiPlaneOverlaySupported@ADAPTER_RENDER@@QEAAEXZ.c)
 *     ??1DXGRESOURCEREFERENCE@@QEAA@XZ @ 0x1C01854C0 (--1DXGRESOURCEREFERENCE@@QEAA@XZ.c)
 *     ??0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z @ 0x1C0185514 (--0DXGRESOURCEREFERENCE@@QEAA@PEAVDXGRESOURCE@@@Z.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02218DC (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@@Z @ 0x1C0221C6C (-UseCachedIndependentFlipParameters@DXGDEVICE@@QEAAEPEAVDISPLAY_SOURCE@@PEAU_D3DKMT_CHECK_MULTIP.c)
 *     ?ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z @ 0x1C02B65E0 (-ClearQueryStateForPlaneUnsafe@DISPLAY_SOURCE@@QEAAXI@Z.c)
 *     ?InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ @ 0x1C02B8F54 (-InitializeQueryStateUnsafe@DISPLAY_SOURCE@@QEAAXXZ.c)
 *     ?SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROTATION@@W4D3DKMT_MULTIPLANE_OVERLAY_BLEND@@W4D3DDDI_COLOR_SPACE_TYPE@@I@Z @ 0x1C02BAE00 (-SetQueryPlaneStateUnsafe@DISPLAY_SOURCE@@QEAAXIPEBVDXGALLOCATION@@IPEBUtagRECT@@11W4_D3DDDI_ROT.c)
 *     ?SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z @ 0x1C02BAF38 (-SetQueryPostCompositionStateUnsafe@DISPLAY_SOURCE@@QEAAXPEBUtagRECT@@0@Z.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C02E1CDC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E28D4 (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
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
  __int64 v9; // r15
  __int64 v11; // r12
  __int64 v12; // rbx
  ADAPTER_RENDER *v13; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  unsigned int v18; // ebx
  __int64 v19; // rcx
  __int64 CurrentProcess; // rax
  __int64 v21; // rdx
  char v22; // r13
  unsigned int v23; // edi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  int v25; // ecx
  __int64 v26; // rbx
  int v27; // eax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v28; // r14
  __int64 v29; // r8
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v30; // rbx
  unsigned int Rotation; // eax
  unsigned int v32; // eax
  unsigned int v33; // eax
  __int64 VidPnSourceId; // rdx
  __int64 v35; // rdx
  __int64 v36; // r14
  D3DKMT_HANDLE hResource; // ebx
  unsigned int v38; // eax
  __int64 v39; // r8
  int v40; // ecx
  struct _EX_RUNDOWN_REF *v41; // rdx
  const struct DXGALLOCATION *i; // rcx
  DXGDEVICE *v43; // r8
  __int64 v44; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v45; // rbx
  __int64 v46; // r15
  int v47; // r10d
  void **v48; // r9
  __int64 v49; // rdx
  __int64 LayerIndex; // rdx
  unsigned __int64 v51; // r8
  __int64 v52; // r8
  __int64 v53; // rax
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *pPlaneAttributes; // rdx
  void *v55; // rax
  ADAPTER_RENDER *v56; // rcx
  int v57; // eax
  int *v58; // rdx
  unsigned int v59; // r14d
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rax
  char v63; // r9
  __int64 v64; // r8
  __int64 v65; // rdx
  int v66; // ecx
  int v67; // ecx
  int v68; // ecx
  int v69; // ecx
  int v70; // ecx
  int v71; // ecx
  UINT SDRWhiteLevel; // ecx
  char v73; // r9
  char v74; // r14
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v75; // r12
  __int64 v76; // r13
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v77; // rbx
  __int64 v78; // rdx
  __int64 v79; // rcx
  DISPLAY_SOURCE *v80; // rdi
  __int64 v81; // r13
  const struct DXGALLOCATION **v82; // rcx
  char *v83; // r12
  __int64 v84; // r8
  __int64 v85; // rbx
  const wchar_t *v86; // r9
  void **v87; // r15
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v88; // rbx
  __int64 v89; // rdx
  __int64 v90; // rcx
  DISPLAY_SOURCE *v91; // rdi
  D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *v92; // r9
  int *v93; // rbx
  unsigned int v94; // r10d
  __int128 *v95; // r11
  unsigned int v96; // [rsp+64h] [rbp-9Ch]
  unsigned int v97; // [rsp+68h] [rbp-98h]
  unsigned int v98; // [rsp+68h] [rbp-98h]
  struct _EX_RUNDOWN_REF *v99; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v100; // [rsp+78h] [rbp-88h]
  unsigned int v101; // [rsp+7Ch] [rbp-84h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v102; // [rsp+80h] [rbp-80h]
  const struct DXGALLOCATION **Elements; // [rsp+88h] [rbp-78h]
  int *v104; // [rsp+90h] [rbp-70h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v105; // [rsp+98h] [rbp-68h]
  void **v106; // [rsp+A0h] [rbp-60h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v107; // [rsp+A8h] [rbp-58h]
  __int64 v108; // [rsp+B0h] [rbp-50h]
  _BYTE v109[16]; // [rsp+B8h] [rbp-48h] BYREF
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v110; // [rsp+C8h] [rbp-38h]
  PVOID P; // [rsp+D0h] [rbp-30h] BYREF
  char v112; // [rsp+D8h] [rbp-28h] BYREF
  int v113; // [rsp+F0h] [rbp-10h]
  struct _DXGKARG_DESCRIBEALLOCATION v114; // [rsp+F8h] [rbp-8h] BYREF
  PVOID v115; // [rsp+128h] [rbp+28h] BYREF
  char v116; // [rsp+130h] [rbp+30h] BYREF
  int v117; // [rsp+148h] [rbp+48h]
  _BYTE v118[512]; // [rsp+150h] [rbp+50h]
  __int128 v119; // [rsp+350h] [rbp+250h] BYREF

  v9 = 0LL;
  v105 = a5;
  LODWORD(v11) = 0;
  v12 = a2;
  v110 = a8;
  v101 = a4;
  *a7 = 0;
  a8->Value = 0;
  v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
  v107 = a3;
  v100 = a2;
  v104 = a7;
  if ( !ADAPTER_RENDER::IsMultiPlaneOverlaySupported(v13) )
  {
    WdLogSingleEntry1(3LL, 0LL);
    return 0LL;
  }
  v115 = 0LL;
  v117 = 0;
  Elements = (const struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                              (__int64 *)&v115,
                                              v12);
  if ( Elements )
  {
    P = 0LL;
    v113 = 0;
    v106 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                      (__int64 *)&P,
                      v12);
    if ( !v106 )
    {
      CurrentProcess = PsGetCurrentProcess(v19);
      v21 = v12;
      v18 = -1073741801;
      WdLogSingleEntry3(3LL, v21, -1073741801LL, CurrentProcess);
LABEL_179:
      if ( P != &v112 && P )
        ExFreePoolWithTag(P, 0);
      P = 0LL;
      v113 = 0;
      goto LABEL_183;
    }
    v22 = 1;
    if ( *((_DWORD *)this + 472) > 0x10u )
    {
      WdLogSingleEntry1(1LL, 10817LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetNumVidPnSources() <= D3DKMDT_MAX_VIDPN_SOURCES",
        10817LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v23 = 0;
    if ( *((_DWORD *)this + 472) )
    {
      while ( v23 < 0x10 )
      {
        DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(
                            *(ADAPTER_DISPLAY **)(*((_QWORD *)this + 235) + 2920LL),
                            v23);
        if ( !DisplayModeInfo )
        {
          WdLogSingleEntry2(2LL, this, v23);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Context 0x%I64x: CheckMultiplaneOverlaySupport3 failed to obtain display mode, VidPnSourceId 0x%I64x",
            (__int64)this,
            v23,
            0LL,
            0LL,
            0LL);
          v22 = 0;
          break;
        }
        v25 = *(_DWORD *)DisplayModeInfo;
        v26 = 2LL * v23;
        v27 = *((_DWORD *)DisplayModeInfo + 1);
        ++v23;
        *(_QWORD *)&v118[8 * v26] = 0LL;
        *(_DWORD *)&v118[8 * v26 + 8] = v25;
        *(_DWORD *)&v118[8 * v26 + 12] = v27;
        *(_OWORD *)&v118[8 * v26 + 256] = *(_OWORD *)&v118[8 * v26];
        if ( v23 >= *((_DWORD *)this + 472) )
          break;
      }
    }
    v97 = -1;
    if ( a4 )
    {
      v28 = v105;
      v22 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) ? v22 : 0;
      while ( 1 )
      {
        if ( (int)v11 < 0 )
          goto LABEL_40;
        v30 = *v28;
        if ( (*v28)->PostComposition.SrcRect.left >= (*v28)->PostComposition.SrcRect.right
          || v30->PostComposition.SrcRect.top >= v30->PostComposition.SrcRect.bottom
          || v30->PostComposition.DstRect.left >= v30->PostComposition.DstRect.right
          || v30->PostComposition.DstRect.top >= v30->PostComposition.DstRect.bottom )
        {
          break;
        }
        Rotation = v30->PostComposition.Rotation;
        if ( Rotation )
        {
          v32 = Rotation - 1;
          if ( v32 )
          {
            v33 = v32 - 1;
            if ( v33 )
            {
              if ( v33 - 1 < 2 )
              {
                v22 = 0;
              }
              else
              {
                WdLogSingleEntry2(3LL, v30->PostComposition.Rotation, v29);
                v29 = -1073741811LL;
                LODWORD(v11) = -1073741811;
              }
            }
          }
        }
        if ( v30->PostComposition.Flags.Value )
          goto LABEL_38;
        VidPnSourceId = v30->VidPnSourceId;
        if ( (unsigned int)VidPnSourceId >= *((_DWORD *)this + 472) )
        {
          WdLogSingleEntry2(3LL, VidPnSourceId, 0LL);
          goto LABEL_38;
        }
        v35 = 2 * VidPnSourceId;
        if ( *(_DWORD *)&v118[8 * v35] > v30->PostComposition.DstRect.left
          || *(_DWORD *)&v118[8 * v35 + 8] < v30->PostComposition.DstRect.right
          || *(_DWORD *)&v118[8 * v35 + 4] > v30->PostComposition.DstRect.top
          || *(_DWORD *)&v118[8 * v35 + 12] < v30->PostComposition.DstRect.bottom )
        {
          WdLogSingleEntry2(3LL, this, v29);
LABEL_38:
          v9 = 0LL;
          v22 = 0;
          goto LABEL_41;
        }
        LODWORD(v9) = v9 + 1;
        ++v28;
        *(RECT *)&v118[8 * v35 + 256] = v30->PostComposition.SrcRect;
        if ( (unsigned int)v9 >= v101 )
          goto LABEL_40;
      }
      WdLogSingleEntry1(3LL, v29);
      LODWORD(v11) = -1073741811;
LABEL_40:
      v9 = 0LL;
    }
LABEL_41:
    v96 = 0;
    if ( v100 )
    {
      v108 = 0LL;
      while ( 1 )
      {
        if ( (int)v11 < 0 )
          goto LABEL_126;
        v36 = *((_QWORD *)this + 5);
        v102 = v107[v9];
        hResource = v102->hResource;
        DXGPUSHLOCK::AcquireShared((DXGPUSHLOCK *)(v36 + 248));
        v38 = (hResource >> 6) & 0xFFFFFF;
        if ( v38 < *(_DWORD *)(v36 + 296)
          && (v39 = *(_QWORD *)(v36 + 280), ((hResource >> 25) & 0x60) == (*(_BYTE *)(v39 + 16LL * v38 + 8) & 0x60))
          && (*(_DWORD *)(v39 + 16LL * v38 + 8) & 0x2000) == 0
          && (v40 = *(_DWORD *)(v39 + 16LL * v38 + 8) & 0x1F) != 0 )
        {
          if ( v40 == 4 )
          {
            v41 = *(struct _EX_RUNDOWN_REF **)(v39 + 16LL * v38);
          }
          else
          {
            WdLogSingleEntry1(2LL, 267LL);
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
            v41 = 0LL;
          }
        }
        else
        {
          v41 = 0LL;
        }
        DXGRESOURCEREFERENCE::DXGRESOURCEREFERENCE((DXGRESOURCEREFERENCE *)&v99, v41);
        _InterlockedDecrement((volatile signed __int32 *)(v36 + 264));
        ExReleasePushLockSharedEx(v36 + 248, 0LL);
        KeLeaveCriticalRegion();
        LODWORD(v9) = 0;
        if ( !v99 )
        {
LABEL_58:
          v45 = v102;
          goto LABEL_152;
        }
        for ( i = (const struct DXGALLOCATION *)v99[3].Count; ; i = (const struct DXGALLOCATION *)*((_QWORD *)i + 8) )
        {
          if ( !i )
            goto LABEL_58;
          v43 = (DXGDEVICE *)*((_QWORD *)i + 1);
          if ( v43 != this )
          {
            v45 = v102;
            WdLogSingleEntry4(3LL, v102->hResource, v43, this, -1073741811LL);
            goto LABEL_152;
          }
          v44 = *((_QWORD *)i + 6);
          if ( (*(_DWORD *)(v44 + 4) & 0x200B) != 0 )
            break;
        }
        v46 = v108;
        v47 = 0;
        v45 = v102;
        Elements[v108] = i;
        if ( !v44 )
        {
          LODWORD(v9) = 0;
LABEL_152:
          WdLogSingleEntry2(3LL, v45->hResource, -1073741811LL);
          goto LABEL_148;
        }
        v48 = v106;
        v106[v46] = *(void **)(v44 + 16);
        v49 = v45->VidPnSourceId;
        if ( (unsigned int)v49 >= *((_DWORD *)this + 472) )
        {
          WdLogSingleEntry2(3LL, v49, 0LL);
          goto LABEL_147;
        }
        if ( (_DWORD)v49 != ((*(_DWORD *)(v44 + 4) >> 6) & 0xF)
          && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
        {
          v84 = (v51 >> 6) & 0xF;
          goto LABEL_137;
        }
        v52 = *((_QWORD *)this + 2);
        v53 = *(_QWORD *)(v52 + 16);
        if ( v45->LayerIndex >= *(_DWORD *)(v53 + 2760) )
          break;
        if ( a6 != (_BYTE)v47 && *((_DWORD *)this + 473) == v47 )
        {
          LODWORD(v11) = -1073741790;
          WdLogSingleEntry1(3LL, -1073741790LL);
LABEL_139:
          DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
          goto LABEL_126;
        }
        pPlaneAttributes = v45->pPlaneAttributes;
        if ( pPlaneAttributes->SrcRect.left >= pPlaneAttributes->SrcRect.right
          || pPlaneAttributes->SrcRect.top >= pPlaneAttributes->SrcRect.bottom
          || pPlaneAttributes->DstRect.left >= pPlaneAttributes->DstRect.right
          || pPlaneAttributes->DstRect.top >= pPlaneAttributes->DstRect.bottom
          || pPlaneAttributes->ClipRect.left >= pPlaneAttributes->ClipRect.right
          || pPlaneAttributes->ClipRect.top >= pPlaneAttributes->ClipRect.bottom )
        {
          WdLogSingleEntry1(3LL, -1073741811LL);
          LODWORD(v11) = -1073741811;
          goto LABEL_139;
        }
        v55 = v48[v46];
        v56 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
        memset(&v114.Width, 0, 40);
        v114.hAllocation = v55;
        v57 = ADAPTER_RENDER::DdiDescribeAllocation(v56, &v114, v52);
        v11 = v57;
        if ( v57 < 0 )
        {
          v87 = v106;
          WdLogSingleEntry4(2LL, v57, this, v106[v96], v44);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"ret = 0x%I64x Context 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x",
            v11,
            (__int64)this,
            (__int64)v87[v96],
            v44,
            0LL);
          goto LABEL_139;
        }
        v58 = (int *)v45->pPlaneAttributes;
        if ( v58[1] < 0 || (int)v114.Width < v58[3] || v58[2] < 0 || (int)v114.Height < v58[4] )
        {
          v85 = v96;
          WdLogSingleEntry3(2LL, -1073741811LL, this, v96);
          v86 = L"ret = 0x%I64x Context 0x%I64x Source rect is outside of allocation rect, index 0x%I64x";
LABEL_142:
          LODWORD(v9) = 0;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v86, -1073741811LL, (__int64)this, v85, 0LL, 0LL);
          LODWORD(v11) = -1073741811;
          goto LABEL_149;
        }
        if ( *(_DWORD *)&v118[16 * v45->VidPnSourceId + 256] <= v58[9]
          && *(_DWORD *)&v118[16 * v45->VidPnSourceId + 264] >= v58[11]
          && *(_DWORD *)&v118[16 * v45->VidPnSourceId + 260] <= v58[10]
          && *(_DWORD *)&v118[16 * v45->VidPnSourceId + 268] >= v58[12] )
        {
          v59 = v96;
        }
        else
        {
          v59 = v96;
          WdLogSingleEntry3(3LL, 0LL, this, v96);
          v22 = 0;
        }
        v60 = v45->pPlaneAttributes;
        if ( v60->DstRect.left > v60->ClipRect.left
          || v60->DstRect.right < v60->ClipRect.right
          || v60->DstRect.top > v60->ClipRect.top
          || v60->DstRect.bottom < v60->ClipRect.bottom )
        {
          v85 = v59;
          WdLogSingleEntry3(2LL, -1073741811LL, this, v59);
          v86 = L"ret = 0x%I64x Context 0x%I64x Clip rect is outside of destination rect, index 0x%I64x";
          goto LABEL_142;
        }
        v61 = v60->Rotation;
        if ( (unsigned int)v61 >= 2 )
        {
          if ( (_DWORD)v61 == 2 || (unsigned int)(v61 - 3) < 2 )
          {
            if ( (**(_BYTE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 2824LL) & 0x20) != 0 )
              v22 = 0;
          }
          else
          {
            WdLogSingleEntry2(3LL, v61, -1073741811LL);
            LODWORD(v11) = -1073741811;
          }
        }
        if ( v45->pPlaneAttributes->StretchQuality != DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR
          && v45->pPlaneAttributes->StretchQuality != DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
        {
          WdLogSingleEntry1(3LL, -1073741811LL);
          LODWORD(v11) = -1073741811;
        }
        v62 = *((_QWORD *)this + 2);
        v63 = 0;
        v64 = *(_QWORD *)(v62 + 16);
        if ( !*(_QWORD *)(v64 + 984) && !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*(DXGADAPTER **)(v62 + 16)) )
        {
          v66 = *(_DWORD *)(v65 + 72);
          if ( v66 <= 12 )
          {
            if ( v66 != 12 && v66 != -1 && v66 != 1 && v66 != 2 && v66 != 3 && v66 != 5 && v66 != 10 && v66 != 11 )
              goto LABEL_115;
LABEL_114:
            v22 = v63;
            goto LABEL_115;
          }
          v67 = v66 - 13;
          if ( !v67 )
            goto LABEL_114;
          v68 = v67 - 1;
          if ( !v68 )
            goto LABEL_114;
          v69 = v68 - 1;
          if ( !v69 )
            goto LABEL_114;
          v70 = v69 - 1;
          if ( !v70 )
            goto LABEL_114;
          v71 = v70 - 1;
          if ( !v71 || (unsigned int)(v71 - 1) <= 1 )
            goto LABEL_114;
        }
LABEL_115:
        SDRWhiteLevel = v45->pPlaneAttributes->SDRWhiteLevel;
        if ( SDRWhiteLevel
          && SDRWhiteLevel != 80
          && (*(_DWORD *)(v64 + 436) & 0x200) == 0
          && *(int *)(v64 + 2552) < 8960 )
        {
          v22 = v63;
        }
        if ( !DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3((DXGADAPTER *)v64) )
        {
          if ( v97 == -1 )
          {
            v97 = v45->VidPnSourceId;
          }
          else if ( v97 != v45->VidPnSourceId )
          {
            v22 = v73;
          }
        }
        DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
        v9 = v46 + 1;
        v96 = v59 + 1;
        v108 = v9;
        if ( v59 + 1 >= v100 )
        {
LABEL_126:
          LODWORD(v9) = 0;
          goto LABEL_127;
        }
      }
      v84 = *(unsigned int *)(v53 + 2760);
      LayerIndex = v45->LayerIndex;
LABEL_137:
      WdLogSingleEntry3(3LL, LayerIndex, v84, 0LL);
LABEL_147:
      LODWORD(v9) = 0;
LABEL_148:
      v22 = 0;
LABEL_149:
      DXGRESOURCEREFERENCE::~DXGRESOURCEREFERENCE(&v99);
    }
LABEL_127:
    DXGAUTOMUTEX::DXGAUTOMUTEX(
      (DXGAUTOMUTEX *)v109,
      (struct DXGFASTMUTEX *const)(*(_QWORD *)(*((_QWORD *)this + 235) + 2920LL) + 608LL),
      0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v109);
    if ( (int)v11 >= 0 && v22 )
    {
      v98 = 0;
      v74 = 0;
      v119 = 0LL;
      if ( v101 )
      {
        v75 = v105;
        v76 = v101;
        v74 = 0;
        do
        {
          v77 = *v75;
          v78 = (*v75)->VidPnSourceId;
          v79 = *(_QWORD *)(*((_QWORD *)this + 235) + 2920LL);
          v80 = (DISPLAY_SOURCE *)(*(_QWORD *)(v79 + 128) + 4000 * v78);
          if ( !*((_BYTE *)&v119 + v78) )
          {
            DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v79 + 128) + 4000 * v78));
            LODWORD(v9) = v77->VidPnSourceId;
            *((_BYTE *)&v119 + v77->VidPnSourceId) = 1;
          }
          DISPLAY_SOURCE::SetQueryPostCompositionStateUnsafe(
            v80,
            &v77->PostComposition.SrcRect,
            &v77->PostComposition.DstRect);
          ++v75;
          --v76;
        }
        while ( v76 );
      }
      if ( v100 )
      {
        v81 = v100;
        v82 = Elements;
        v83 = (char *)((char *)v107 - (char *)Elements);
        do
        {
          v88 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v82 + (_QWORD)v83);
          if ( !v74 && !a6 && (v88->pPlaneAttributes->Flags & 4) != 0 )
          {
            v74 = 1;
            v98 = v88->LayerIndex;
          }
          v89 = v88->VidPnSourceId;
          v90 = *(_QWORD *)(*((_QWORD *)this + 235) + 2920LL);
          v91 = (DISPLAY_SOURCE *)(*(_QWORD *)(v90 + 128) + 4000 * v89);
          if ( !*((_BYTE *)&v119 + v89) )
          {
            if ( !v74 )
              DISPLAY_SOURCE::InitializeQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(v90 + 128) + 4000 * v89));
            LODWORD(v9) = v88->VidPnSourceId;
            *((_BYTE *)&v119 + (unsigned int)v9) = 1;
          }
          if ( v74 || !DXGDEVICE::UseCachedIndependentFlipParameters(this, v91, v88) )
          {
            v92 = v88->pPlaneAttributes;
            DISPLAY_SOURCE::SetQueryPlaneStateUnsafe(
              v91,
              v88->LayerIndex,
              *Elements,
              v92->Flags,
              &v92->SrcRect,
              &v92->DstRect,
              &v92->ClipRect,
              v92->Rotation,
              v92->Blend,
              v92->ColorSpace,
              v92->SDRWhiteLevel);
          }
          else
          {
            DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(v91, v88->LayerIndex);
          }
          v82 = ++Elements;
          --v81;
        }
        while ( v81 );
      }
      v93 = v104;
      LODWORD(v11) = CheckMultiPlaneOverlayInternal3(
                       v9,
                       *((struct ADAPTER_RENDER **)this + 2),
                       *(struct ADAPTER_DISPLAY **)(*((_QWORD *)this + 235) + 2920LL),
                       v104,
                       v110);
      if ( v74 )
      {
        DISPLAY_SOURCE::ClearQueryStateForPlaneUnsafe(
          (DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 235) + 2920LL) + 128LL)
                           + 4000LL * (unsigned int)v9),
          v98);
      }
      else if ( !*v93 )
      {
        v94 = 0;
        v95 = &v119;
        do
        {
          if ( *(_BYTE *)v95 )
            DISPLAY_SOURCE::ClearAllQueryStateUnsafe((DISPLAY_SOURCE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 235)
                                                                                              + 2920LL)
                                                                                  + 128LL)
                                                                      + 4000LL * v94));
          ++v94;
          v95 = (__int128 *)((char *)v95 + 1);
        }
        while ( v94 < 0x10 );
      }
      if ( (int)v11 >= 0 )
        goto LABEL_177;
    }
    else
    {
      v93 = v104;
    }
    LogCheckMutiplaneOverlaySupport(
      (D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *)(unsigned int)v11,
      (unsigned int)*v93,
      v100,
      v107,
      v106,
      v101,
      v105,
      *((struct ADAPTER_RENDER **)this + 2));
LABEL_177:
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
    v18 = v11;
    if ( v109[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v109);
    goto LABEL_179;
  }
  v16 = PsGetCurrentProcess(v15);
  v17 = v12;
  v18 = -1073741801;
  WdLogSingleEntry3(3LL, v17, -1073741801LL, v16);
LABEL_183:
  if ( v115 != &v116 )
  {
    if ( v115 )
      ExFreePoolWithTag(v115, 0);
  }
  return v18;
}
