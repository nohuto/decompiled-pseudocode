/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C0217394
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C01E8438 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001A68 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     ?Own@?$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@DXGDMM@@QEAAXPEAUD3DKMDT_HVIDPNTARGETMODESET__@@Q6AJPEAUD3DKMDT_HVIDPN__@@0@Z1@Z @ 0x1C0001AE0 (-Own@-$AutoRelease@PEAUD3DKMDT_HVIDPNTARGETMODESET__@@P6AJPEAUD3DKMDT_HVIDPN__@@PEAU1@@ZPEAU2@@D.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // r15
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  __int64 v13; // r13
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // r9
  int v26; // eax
  const wchar_t *v28; // r9
  __int64 v29; // [rsp+28h] [rbp-71h]
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v30; // [rsp+30h] [rbp-69h]
  __int64 v31; // [rsp+38h] [rbp-61h]
  _BYTE v32[8]; // [rsp+50h] [rbp-49h] BYREF
  __int64 v33; // [rsp+58h] [rbp-41h]
  void (__fastcall *v34)(__int64, __int64); // [rsp+60h] [rbp-39h]
  __int64 v35; // [rsp+68h] [rbp-31h]
  int v36; // [rsp+70h] [rbp-29h]
  _BYTE v37[8]; // [rsp+78h] [rbp-21h] BYREF
  __int64 v38; // [rsp+80h] [rbp-19h]
  void (__fastcall *v39)(__int64, __int64); // [rsp+88h] [rbp-11h]
  __int64 v40; // [rsp+90h] [rbp-9h]
  int v41; // [rsp+98h] [rbp-1h]
  __int64 v42; // [rsp+F0h] [rbp+57h] BYREF
  __int64 v43; // [rsp+F8h] [rbp+5Fh] BYREF
  __int64 v44; // [rsp+100h] [rbp+67h] BYREF
  const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v45; // [rsp+108h] [rbp+6Fh]

  v45 = a4;
  v6 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 3609LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"ARGUMENT_PRESENT(i_hVidPn)", 3609LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3610LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnInterface)",
      3610LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 3611LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_hVidPnTopology)",
      3611LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 3612LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"ARGUMENT_PRESENT(i_pDmmVidPnTopologyInterface)",
      3612LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = a5;
  if ( a5 == -1 )
  {
    WdLogSingleEntry1(1LL, 3613LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      3613LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)a2 + 1);
  v43 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v13 = 0LL;
  v40 = 0LL;
  v41 = 0;
  v37[0] = 0;
  v42 = 0LL;
  v14 = v12(a1, (unsigned int)v11, &v42, &v43);
  v15 = v14;
  if ( v14 < 0 )
  {
    WdLogSingleEntry3(2LL, v11, a1, v14);
    v28 = L"Failed to acquire VidPN source mode set on source 0x%I64x of VidPN 0x%I64x (status = 0x%I64x)";
    v31 = 0LL;
    v30 = (struct D3DKMDT_HVIDPNTOPOLOGY__ *)v15;
    v29 = (__int64)a1;
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v28, v11, v29, (__int64)v30, v31, 0LL);
  }
  else
  {
    if ( !v42 )
    {
      WdLogSingleEntry1(1LL, 3638LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ARGUMENT_PRESENT(hVidPnSourceModeSet)",
        3638LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !v43 )
    {
      WdLogSingleEntry1(1LL, 3639LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"ARGUMENT_PRESENT(pDmmVidPnSourceModeSetInterface)",
        3639LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGDMM::AutoRelease<D3DKMDT_HVIDPNSOURCEMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNSOURCEMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
      (__int64)v37,
      v42,
      *((_QWORD *)a2 + 2),
      (__int64)a1);
    LOBYTE(v16) = 1;
    v13 = v38;
    v17 = (*(__int64 (__fastcall **)(__int64, __int64))(v43 + 48))(v38, v16);
    v15 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry2(2LL, v13, v17);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to unpin mode in VidPN source mode set 0x%I64x (status = 0x%I64x)",
        v13,
        v15,
        0LL,
        0LL,
        0LL);
    }
    else if ( a6 )
    {
      while ( 1 )
      {
        a5 = -1;
        v18 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))v45 + 1))(
                a3,
                (unsigned int)v11,
                v6,
                &a5);
        v15 = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry4(2LL, v6, v11, a3, v18);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x in VidPN topology 0x%I6"
                      "4x (status = 0x%I64x)",
            v6,
            v11,
            (__int64)a3,
            v15,
            0LL);
          goto LABEL_34;
        }
        if ( a5 == -1 )
        {
          WdLogSingleEntry1(1LL, 3693LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ConnectedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
            3693LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        v19 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v45 + 13))(a3, (unsigned int)v11);
        v15 = v19;
        if ( v19 < 0 )
        {
          WdLogSingleEntry4(2LL, v11, a5, a3, v19);
          v28 = L"Failed to remove copy protection on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)";
          v31 = v15;
          v30 = a3;
          v29 = a5;
          goto LABEL_47;
        }
        v44 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0LL;
        v36 = 0;
        v32[0] = 0;
        v42 = 0LL;
        v20 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))a2 + 3))(
                a1,
                a5,
                &v42,
                &v44);
        v15 = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL, v20);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"cdd!AcquirePresentPathUnpinnedCofuncModality failed call to DXGDMM_VIDPN_INTERFACE::pfnAcquireTarge"
                      "tModeSet. (status = 0x%I64x)",
            v15,
            0LL,
            0LL,
            0LL,
            0LL);
          goto LABEL_34;
        }
        if ( !v42 )
        {
          WdLogSingleEntry1(1LL, 3738LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ARGUMENT_PRESENT(hVidPnTargetModeSet)",
            3738LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        if ( !v44 )
        {
          WdLogSingleEntry1(1LL, 3739LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ARGUMENT_PRESENT(pDmmVidPnTargetModeSetInterface)",
            3739LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGDMM::AutoRelease<D3DKMDT_HVIDPNTARGETMODESET__ *,long (*)(D3DKMDT_HVIDPN__ *,D3DKMDT_HVIDPNTARGETMODESET__ *),D3DKMDT_HVIDPN__ *>::Own(
          (__int64)v32,
          v42,
          *((_QWORD *)a2 + 4),
          (__int64)a1);
        LOBYTE(v21) = 1;
        v22 = (*(__int64 (__fastcall **)(__int64, __int64))(v44 + 56))(v33, v21);
        v15 = v22;
        if ( v22 < 0 )
          break;
        if ( v32[0] )
          v34(v35, v33);
        LOBYTE(v23) = 1;
        v24 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))v45 + 9))(
                a3,
                (unsigned int)v11,
                a5,
                v23);
        v15 = v24;
        if ( v24 < 0 )
        {
          WdLogSingleEntry4(2LL, v11, a5, a3, v24);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to unpin scaling on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v11,
            a5,
            (__int64)a3,
            v15,
            0LL);
          goto LABEL_34;
        }
        LOBYTE(v25) = 1;
        v26 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))v45 + 11))(
                a3,
                (unsigned int)v11,
                a5,
                v25);
        v15 = v26;
        if ( v26 < 0 )
        {
          WdLogSingleEntry4(2LL, v11, a5, a3, v26);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to unpin rotation on present path (0x%I64x, 0x%I64x) in topology 0x%I64x (status = 0x%I64x)",
            v11,
            a5,
            (__int64)a3,
            v15,
            0LL);
          goto LABEL_34;
        }
        if ( ++v6 >= a6 )
          goto LABEL_33;
      }
      WdLogSingleEntry1(2LL, v22);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"cdd!AcquirePresentPathUnpinnedCofuncModality failed call to DXGDMM_VIDPNTARGETMODESET_INTERFACE::pfnUnp"
                  "inMode. (status = 0x%I64x)",
        v15,
        0LL,
        0LL,
        0LL,
        0LL);
      if ( v32[0] )
        v34(v35, v33);
    }
    else
    {
LABEL_33:
      LODWORD(v15) = 0;
    }
  }
LABEL_34:
  if ( v37[0] )
    v39(v40, v13);
  return (unsigned int)v15;
}
