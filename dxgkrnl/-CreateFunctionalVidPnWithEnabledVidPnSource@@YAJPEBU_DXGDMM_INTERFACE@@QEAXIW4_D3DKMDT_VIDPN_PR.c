/*
 * XREFs of ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1C01E5790
 * Callers:
 *     ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0171F9C (-SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@@Q6AJPEAX0@Z1@Z @ 0x1C0001BD0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPN__@@P6AJPEAXPEAU1@@ZPEAX@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPN__@.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C0172AAC (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x1C01E5A2C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01E8438 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 */

__int64 __fastcall CreateFunctionalVidPnWithEnabledVidPnSource(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        unsigned int a3,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a4,
        unsigned __int8 a5,
        struct _D3DDDI_RATIONAL *a6,
        struct D3DKMDT_HVIDPN__ **a7,
        const struct _DXGDMM_VIDPN_INTERFACE **a8)
{
  __int64 v10; // r15
  struct _D3DDDI_RATIONAL *v11; // r13
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING Numerator; // edx
  int v13; // eax
  UINT Denominator; // ecx
  __int64 (__fastcall *v15)(void *const, unsigned __int64 *, struct _DXGDMM_VIDPN_INTERFACE **); // rax
  struct D3DKMDT_HVIDPN__ *v16; // r14
  int v17; // eax
  __int64 v18; // rdi
  int v19; // eax
  int v20; // eax
  __int64 v21; // r12
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  _QWORD *v28; // r8
  unsigned int v29; // eax
  unsigned __int8 v30[8]; // [rsp+70h] [rbp-90h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v31; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v32; // [rsp+80h] [rbp-80h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v33; // [rsp+88h] [rbp-78h] BYREF
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v34; // [rsp+90h] [rbp-70h] BYREF
  struct D3DKMDT_HVIDPN__ *v35; // [rsp+98h] [rbp-68h] BYREF
  struct _DXGDMM_INTERFACE *v36; // [rsp+A0h] [rbp-60h]
  struct D3DKMDT_HVIDPN__ **v37; // [rsp+A8h] [rbp-58h]
  const struct _DXGDMM_VIDPN_INTERFACE **v38; // [rsp+B0h] [rbp-50h]
  _BYTE v39[8]; // [rsp+B8h] [rbp-48h] BYREF
  struct D3DKMDT_HVIDPN__ *v40; // [rsp+C0h] [rbp-40h]
  void (__fastcall *v41)(__int64, struct D3DKMDT_HVIDPN__ *); // [rsp+C8h] [rbp-38h]
  __int64 v42; // [rsp+D0h] [rbp-30h]
  int v43; // [rsp+D8h] [rbp-28h]
  unsigned int v44[16]; // [rsp+E0h] [rbp-20h] BYREF

  v37 = a7;
  v38 = a8;
  v10 = a3;
  v36 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 4754LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 4754LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4755LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 4755LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (_DWORD)v10 == -1 )
  {
    WdLogSingleEntry1(1LL, 4756LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4756LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 4757LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"io_pDisplayModeInfo != NULL", 4757LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a7 )
  {
    WdLogSingleEntry1(1LL, 4758LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_phVidPn != NULL", 4758LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a8 )
  {
    WdLogSingleEntry1(1LL, 4759LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"o_ppDmmVidPnInterface != NULL", 4759LL, 0LL, 0LL, 0LL, 0LL);
  }
  *a7 = 0LL;
  v11 = a6 + 2;
  *a8 = 0LL;
  Numerator = a6[3].Numerator;
  v30[0] = 0;
  v13 = DmmMapVSyncFromRationalToInteger(a6 + 2, Numerator, v30);
  Denominator = a6[1].Denominator;
  if ( Denominator == v13 || v30[0] && Denominator == v13 + 1 )
  {
    v15 = (__int64 (__fastcall *)(void *const, unsigned __int64 *, struct _DXGDMM_VIDPN_INTERFACE **))*((_QWORD *)a1 + 6);
    v31 = 0LL;
    v40 = 0LL;
    v16 = 0LL;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0;
    v39[0] = 0;
    v32 = 0LL;
    v17 = v15(a2, &v32, &v31);
    v18 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry2(2LL, a2, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed call to create copy of the last VidPN committed by the client for adapter 0x%I64x (status = 0x%I64x)",
        (__int64)a2,
        v18,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      DXGDMM::AutoRelease<D3DKMDT_HVIDPN__ *,long (*)(void *,D3DKMDT_HVIDPN__ *),void *>::Own(
        (__int64)v39,
        v32,
        *((_QWORD *)a1 + 8),
        (__int64)a2);
      v34 = 0LL;
      v33 = 0LL;
      v16 = v40;
      v19 = (*(__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, struct D3DKMDT_HVIDPNTOPOLOGY__ **, struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE **))v31)(
              v40,
              &v34,
              &v33);
      v18 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry2(2LL, v16, v19);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire topology of the VidPN 0x%I64x (status = 0x%I64x)",
          (__int64)v16,
          v18,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        v30[0] = 0;
        v32 = 0LL;
        *(__m128i *)v44 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
        *(_OWORD *)&v44[4] = *(_OWORD *)v44;
        *(_OWORD *)&v44[8] = *(_OWORD *)v44;
        *(_OWORD *)&v44[12] = *(_OWORD *)v44;
        v20 = PrepareUnpinnedPathsFromSource(
                a1,
                a2,
                v16,
                v31,
                v34,
                v33,
                v10,
                0,
                0,
                0,
                &v32,
                (unsigned int (*)[16])v44,
                v30);
        v21 = v20;
        LODWORD(v18) = -1071774925;
        if ( v20 == -1071774925 || (LODWORD(v18) = -1071774886, v20 == -1071774886) )
        {
          WdLogSingleEntry2(7LL, v10, a2);
        }
        else if ( v20 < 0 )
        {
          WdLogSingleEntry3(2LL, v10, a2, v20);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to ensure unpinned paths from source 0x%I64x of adapter 0x%I64x (status = 0x%I64x)",
            v10,
            (__int64)a2,
            v21,
            0LL,
            0LL);
          LODWORD(v18) = v21;
        }
        else
        {
          v35 = 0LL;
          v22 = PinPresentPathModalityFromMode(
                  v36,
                  a2,
                  v16,
                  v31,
                  v34,
                  v33,
                  v10,
                  v32,
                  (struct _DXGK_DISPLAYMODE_INFO *)a6,
                  D3DKMDT_VPPS_UNINITIALIZED,
                  0,
                  1u,
                  &v35);
          LODWORD(v18) = v22;
          if ( v22 < 0 )
          {
            if ( v22 == -1071774970 )
            {
              v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v24, v23, v25, v26);
              v28[3] = a6->Numerator;
              v28[4] = a6->Denominator;
              v28[5] = (int)a6[1].Numerator;
              v29 = v11->Numerator / a6[2].Denominator;
              v28[7] = v10;
              v28[6] = v29;
            }
            else
            {
              WdLogSingleEntry5(
                2LL,
                v10,
                a6->Numerator,
                a6->Denominator,
                (int)a6[1].Numerator,
                v11->Numerator / a6[2].Denominator);
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Failed to pin source/target modes on VidPN present (multi)path from source 0x%I64x matching spe"
                          "cified display mode (%I64d x %I64d x 0x%I64x @ %I64d[Hz])",
                v10,
                a6->Numerator,
                a6->Denominator,
                (int)a6[1].Numerator,
                v11->Numerator / a6[2].Denominator);
            }
          }
          else
          {
            LODWORD(v18) = 0;
            *v37 = v35;
            *v38 = v31;
          }
        }
      }
    }
    if ( v39[0] )
      v41(v42, v16);
    return (unsigned int)v18;
  }
  else
  {
    WdLogSingleEntry3(2LL, a6[1].Denominator, v11->Numerator, a6[2].Denominator);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Integer refresh rate in display mode (%i64d)Hz does not match rational refresh rate (%i64d/%I64d)hz.",
      a6[1].Denominator,
      v11->Numerator,
      a6[2].Denominator,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
