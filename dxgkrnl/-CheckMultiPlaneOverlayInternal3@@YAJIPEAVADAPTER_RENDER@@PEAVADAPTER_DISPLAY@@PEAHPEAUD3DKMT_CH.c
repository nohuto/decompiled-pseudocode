/*
 * XREFs of ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E28D4
 * Callers:
 *     ?CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@IPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@_NPEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E3050 (-CheckMultiPlaneOverlaySupport3@DXGDEVICE@@QEAAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@.c)
 *     ?CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAUtagRECT@@@Z @ 0x1C031F540 (-CheckAndUpdateMultiPlaneOverlayFromInternalState@@YA_NIIPEAVCIFlipPresentHistoryTokenData@@_NPE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     ?SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ @ 0x1C0048A9C (-SupportCheckMultiPlaneOverlaySupport3@DXGADAPTER@@QEBAEXZ.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C0221744 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAU.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@I@Z @ 0x1C02217C2 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@$02@@QEAAPEAU_.c)
 *     ?LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_RENDER@@@Z @ 0x1C02218DC (-LogCheckMutiplaneOverlaySupport@@YAXJHIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXI.c)
 *     ?ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ @ 0x1C02B676C (-ConfigChangesOnMultipleOutputs@ADAPTER_DISPLAY@@QEAAEXZ.c)
 *     ?GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@1PEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@@Z @ 0x1C02B847C (-GetCheckMultiPlaneOverlayArgsUnsafe@ADAPTER_DISPLAY@@QEAAXIIPEAPEAVDXGALLOCATION@@PEAIPEAU_D3DK.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@I@Z @ 0x1C02E1CDC (-AllocateElements@-$PagedPoolZeroedArray@PEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@$02@@QEAAP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$02@@QEAAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C02E1DD4 (-AllocateElements@-$PagedPoolZeroedArray@U_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURC.c)
 *     ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E1F7C (-CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E21EC (-CallCheckMultiPlaneOverlaySupport2DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 *     ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C02E244C (-CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAP.c)
 */

__int64 __fastcall CheckMultiPlaneOverlayInternal3(
        unsigned int a1,
        struct ADAPTER_RENDER *a2,
        struct ADAPTER_DISPLAY *a3,
        int *a4,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a5)
{
  __int64 v6; // rax
  __int64 v7; // r14
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  void **v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  struct DXGALLOCATION **v22; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 CurrentProcess; // rax
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v27; // rax
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v28; // rcx
  __int64 *v29; // rdx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v30; // r8
  __int64 v31; // r9
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v32; // rcx
  __int64 v33; // rdx
  bool v34; // al
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v35; // r8
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v36; // r10
  D3DDDI_VIDEO_PRESENT_SOURCE_ID v37; // edx
  __int64 v38; // rdi
  unsigned int v39; // ebx
  void **v40; // rdx
  signed __int64 v41; // r13
  __int64 v42; // r8
  bool v43; // al
  __int64 v44; // rcx
  struct _KTHREAD **v45; // r13
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v46; // r14
  unsigned int v48[2]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v49[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **Elements; // [rsp+60h] [rbp-A0h]
  ADAPTER_DISPLAY *v51; // [rsp+68h] [rbp-98h]
  struct ADAPTER_RENDER *v52; // [rsp+70h] [rbp-90h]
  unsigned int v53; // [rsp+78h] [rbp-88h]
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v54; // [rsp+80h] [rbp-80h]
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  char v56; // [rsp+90h] [rbp-70h] BYREF
  int v57; // [rsp+A8h] [rbp-58h]
  PVOID v58; // [rsp+B0h] [rbp-50h] BYREF
  char v59; // [rsp+B8h] [rbp-48h] BYREF
  int v60; // [rsp+D0h] [rbp-30h]
  PVOID v61; // [rsp+D8h] [rbp-28h] BYREF
  char v62; // [rsp+E0h] [rbp-20h] BYREF
  int v63; // [rsp+F8h] [rbp-8h]
  PVOID v64; // [rsp+100h] [rbp+0h] BYREF
  char v65; // [rsp+108h] [rbp+8h] BYREF
  int v66; // [rsp+120h] [rbp+20h]
  PVOID v67; // [rsp+130h] [rbp+30h] BYREF
  char v68; // [rsp+138h] [rbp+38h] BYREF
  int v69; // [rsp+1BCh] [rbp+BCh]
  PVOID v70; // [rsp+1C0h] [rbp+C0h] BYREF
  char v71; // [rsp+1C8h] [rbp+C8h] BYREF
  int v72; // [rsp+228h] [rbp+128h]
  PVOID v73; // [rsp+230h] [rbp+130h] BYREF
  char v74; // [rsp+238h] [rbp+138h] BYREF
  int v75; // [rsp+340h] [rbp+240h]

  *a4 = 0;
  v6 = *((_QWORD *)a2 + 2);
  v7 = *((unsigned int *)a3 + 24);
  v52 = a2;
  v53 = a1;
  v8 = *(_DWORD *)(v6 + 2760) * v7;
  v51 = a3;
  v70 = 0LL;
  v72 = 0;
  *(_QWORD *)v49 = PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3,3>::AllocateElements(
                     (__int64 *)&v70,
                     v8);
  if ( *(_QWORD *)v49 )
  {
    v64 = 0LL;
    v66 = 0;
    Elements = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                    (__int64 *)&v64,
                                                                    v8);
    v73 = 0LL;
    v75 = 0;
    v14 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3,3>::AllocateElements((__int64 *)&v73, v8);
    if ( v14 )
    {
      v61 = 0LL;
      v63 = 0;
      v18 = (void **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                       (__int64 *)&v61,
                       v8);
      if ( v18 )
      {
        v58 = 0LL;
        v60 = 0;
        v22 = (struct DXGALLOCATION **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                         (__int64 *)&v58,
                                         v8);
        if ( v22 )
        {
          v67 = 0LL;
          v69 = 0;
          *(_QWORD *)v48 = PagedPoolZeroedArray<_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,3>::AllocateElements(
                             (__int64 *)&v67,
                             v7);
          if ( *(_QWORD *)v48 )
          {
            P = 0LL;
            v57 = 0;
            v27 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *,3>::AllocateElements(
                                                                                       (__int64 *)&P,
                                                                                       v7);
            v54 = v27;
            if ( v8 )
            {
              v28 = Elements;
              v29 = (__int64 *)(*(_QWORD *)v49 + 24LL);
              v30 = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)v49;
              v31 = v8;
              do
              {
                *v28 = v30++;
                *v29 = v14;
                ++v28;
                v14 += 88LL;
                v29 += 4;
                --v31;
              }
              while ( v31 );
            }
            if ( (_DWORD)v7 )
            {
              v32 = *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)v48;
              v33 = v7;
              do
              {
                *v27++ = v32++;
                --v33;
              }
              while ( v33 );
            }
            v48[0] = 0;
            v49[0] = 0;
            v34 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v52 + 2));
            v37 = -1;
            if ( !v34 )
              v37 = v53;
            ADAPTER_DISPLAY::GetCheckMultiPlaneOverlayArgsUnsafe(
              (struct _KTHREAD **)v51,
              v37,
              v8,
              v22,
              v48,
              v36,
              v49,
              v35);
            v38 = v48[0];
            if ( v48[0] > v8 )
            {
              WdLogSingleEntry1(1LL, 9973LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"ActualPlaneCount <= MaxPlanes",
                9973LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            v39 = v49[0];
            if ( v49[0] > (unsigned int)v7 )
            {
              WdLogSingleEntry1(1LL, 9974LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"ActualPostCompositionCount <= NumVidPnSources",
                9974LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
            if ( (_DWORD)v38 )
            {
              v40 = v18;
              v41 = (char *)v22 - (char *)v18;
              v42 = v38;
              do
              {
                *v40 = *(void **)((*(_QWORD **)((char *)v40 + v41))[6] + 16LL);
                ++v40;
                --v42;
              }
              while ( v42 );
            }
            v43 = DXGADAPTER::SupportCheckMultiPlaneOverlaySupport3(*((DXGADAPTER **)v52 + 2));
            v45 = (struct _KTHREAD **)v51;
            v46 = Elements;
            if ( v43 )
            {
              CallCheckMultiPlaneOverlaySupport3DDI(v38, Elements, v18, v39, v54, v51, a4, a5);
            }
            else if ( (unsigned int)v38 <= *(_DWORD *)(v44 + 2760) )
            {
              if ( *(_QWORD *)(v44 + 984) )
                CallCheckMultiPlaneOverlaySupport2DDI((unsigned int)v38, Elements, v18, v51, a4, a5);
              else
                CallCheckMultiPlaneOverlaySupport1DDI((unsigned int)v38, Elements, v18, v51, a4, a5);
            }
            if ( *a4 == 1
              && ADAPTER_DISPLAY::ConfigChangesOnMultipleOutputs(v45)
              && !*(_BYTE *)(*((_QWORD *)v52 + 2) + 2868LL) )
            {
              *a4 = 0;
              a5->Value = a5->Value & 0xFFFFFFE0 | 0x10;
            }
            LogCheckMutiplaneOverlaySupport(0LL, (unsigned int)*a4, v38, v46, v18, v39, v54, v52);
            v12 = 0;
            if ( P != &v56 && P )
              ExFreePoolWithTag(P, 0);
            P = 0LL;
            v57 = 0;
          }
          else
          {
            CurrentProcess = PsGetCurrentProcess(v25);
            v12 = -1073741801;
            WdLogSingleEntry3(3LL, v7, -1073741801LL, CurrentProcess);
          }
          if ( v67 != &v68 && v67 )
            ExFreePoolWithTag(v67, 0);
          v67 = 0LL;
          v69 = 0;
        }
        else
        {
          v23 = PsGetCurrentProcess(v21);
          v24 = v8;
          v12 = -1073741801;
          WdLogSingleEntry3(3LL, v24, -1073741801LL, v23);
        }
        if ( v58 != &v59 && v58 )
          ExFreePoolWithTag(v58, 0);
        v58 = 0LL;
        v60 = 0;
      }
      else
      {
        v19 = PsGetCurrentProcess(v17);
        v20 = v8;
        v12 = -1073741801;
        WdLogSingleEntry3(3LL, v20, -1073741801LL, v19);
      }
      if ( v61 != &v62 && v61 )
        ExFreePoolWithTag(v61, 0);
      v61 = 0LL;
      v63 = 0;
    }
    else
    {
      v15 = PsGetCurrentProcess(v13);
      v16 = v8;
      v12 = -1073741801;
      WdLogSingleEntry3(3LL, v16, -1073741801LL, v15);
    }
    if ( v73 != &v74 && v73 )
      ExFreePoolWithTag(v73, 0);
    v73 = 0LL;
    v75 = 0;
    if ( v64 != &v65 && v64 )
      ExFreePoolWithTag(v64, 0);
    v64 = 0LL;
    v66 = 0;
  }
  else
  {
    v10 = PsGetCurrentProcess(v9);
    v11 = v8;
    v12 = -1073741801;
    WdLogSingleEntry3(3LL, v11, -1073741801LL, v10);
  }
  if ( v70 != &v71 && v70 )
    ExFreePoolWithTag(v70, 0);
  return v12;
}
