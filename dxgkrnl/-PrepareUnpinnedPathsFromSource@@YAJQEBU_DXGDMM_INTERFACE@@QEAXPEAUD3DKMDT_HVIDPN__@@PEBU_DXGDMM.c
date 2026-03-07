__int64 __fastcall PrepareUnpinnedPathsFromSource(
        struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPN__ *a3,
        const struct _DXGDMM_VIDPN_INTERFACE *a4,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a5,
        struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a6,
        unsigned int a7,
        unsigned __int8 a8,
        unsigned __int8 a9,
        unsigned __int8 a10,
        unsigned __int64 *const a11,
        __m128i *a12,
        unsigned __int8 *a13)
{
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // r15
  __m128i si128; // xmm0
  __int64 (__fastcall *v18)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v19; // bl
  int v20; // eax
  __int64 v21; // r14
  __int64 v22; // r15
  int v23; // eax
  __int64 v24; // rdx
  int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rdi
  unsigned __int64 v28; // rbx
  struct D3DKMDT_HVIDPN__ *v29; // r14
  int v30; // eax
  __int64 v31; // rsi
  void *v32; // rcx
  __int64 v34; // rbx
  int v35; // eax
  __int64 v36; // r15
  int v37; // eax
  unsigned int v38; // ebx
  char v39; // [rsp+50h] [rbp-B0h]
  _BYTE v40[7]; // [rsp+51h] [rbp-AFh] BYREF
  unsigned __int64 v41; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v42; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v43; // [rsp+68h] [rbp-98h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v44; // [rsp+70h] [rbp-90h]
  struct _DXGDMM_INTERFACE *v45; // [rsp+78h] [rbp-88h]
  struct _DXGDMM_VIDPN_INTERFACE *v46; // [rsp+80h] [rbp-80h]
  struct D3DKMDT_HVIDPN__ *v47; // [rsp+88h] [rbp-78h]
  unsigned __int64 *v48; // [rsp+90h] [rbp-70h]
  void *v49; // [rsp+98h] [rbp-68h]
  unsigned __int8 *v50; // [rsp+A0h] [rbp-60h]
  _OWORD Src[4]; // [rsp+B0h] [rbp-50h] BYREF

  v13 = a6;
  v44 = a6;
  v48 = a11;
  v49 = a12;
  v50 = a13;
  v46 = a4;
  v47 = a3;
  v45 = a1;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 4487LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 4487LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 4488LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 4488LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4489LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPn != NULL", 4489LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4490LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDmmVidPnInterface != NULL", 4490LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a5 )
  {
    WdLogSingleEntry1(1LL, 4491LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 4491LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 4492LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      4492LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a7 == -1 )
  {
    WdLogSingleEntry1(1LL, 4493LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
      4493LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a11 )
  {
    WdLogSingleEntry1(1LL, 4494LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pNumVidPnPresentPathsFromSource != NULL",
      4494LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a11 = 0LL;
  if ( a12 )
  {
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    *a12 = si128;
    a12[1] = si128;
    a12[2] = si128;
    a12[3] = si128;
  }
  v18 = *(__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *))a6;
  v19 = 0;
  v41 = 0LL;
  v39 = 0;
  v20 = v18(a5, a7, &v41);
  v21 = v20;
  if ( v20 == -1071774919 )
  {
    if ( v41 )
    {
      WdLogSingleEntry1(1LL, 4525LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"sztNumPathsFromSource == 0", 4525LL, 0LL, 0LL, 0LL, 0LL);
    }
    v19 = 1;
    v39 = 1;
    v27 = a7;
    WdLogSingleEntry2(7LL, a5, a7);
  }
  else
  {
    if ( v20 < 0 )
    {
      WdLogSingleEntry3(2LL, a7, a5, v20);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to determine number of paths originating from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
        a7,
        (__int64)a5,
        v21,
        0LL,
        0LL);
      return (unsigned int)v21;
    }
    v22 = 0LL;
    if ( v41 )
    {
      while ( 1 )
      {
        v42 = -1;
        v23 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))v44 + 1))(
                a5,
                a7,
                v22,
                &v42);
        LODWORD(v43) = v23;
        if ( v23 < 0 )
          break;
        v24 = v42;
        if ( v42 == -1 )
        {
          WdLogSingleEntry1(1LL, 4568LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ConnectedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
            4568LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v24 = v42;
        }
        v40[0] = 0;
        v25 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v45 + 9))(a2, v24, v40);
        v26 = v25;
        if ( v25 < 0 )
        {
          WdLogSingleEntry2(2LL, a2, v25);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to acquire target set of adapter 0x%I64x (status = 0x%I64x)",
            (__int64)a2,
            v26,
            0LL,
            0LL,
            0LL);
          return (unsigned int)v26;
        }
        if ( !v40[0] )
        {
          v19 = 1;
          v39 = 1;
          WdLogSingleEntry3(7LL, a5, a7, v42);
          goto LABEL_28;
        }
        if ( ++v22 >= v41 )
          goto LABEL_28;
      }
      v34 = v23;
      WdLogSingleEntry3(2LL, v22, a7, v23);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to enumerate target of %I64d'th path originating from source 0x%I64x (status = 0x%I64x)",
        v22,
        a7,
        v34,
        0LL,
        0LL);
      return (unsigned int)v43;
    }
LABEL_28:
    v27 = a7;
    WdLogSingleEntry2(7LL, a7, a5);
    v13 = v44;
  }
  Src[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Src[1] = Src[0];
  Src[2] = Src[0];
  Src[3] = Src[0];
  if ( v19 )
  {
    if ( !a8 )
    {
      WdLogSingleEntry2(7LL, v27, a2);
      return 3223192403LL;
    }
    if ( v41
      && (v35 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v13 + 7))(a5, a7),
          v36 = v35,
          v35 < 0) )
    {
      WdLogSingleEntry3(2LL, v27, a5, v35);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to remove all paths from source 0x%I64x in topology 0x%I64x (status = 0x%I64x)",
        v27,
        (__int64)a5,
        v36,
        0LL,
        0LL);
    }
    else
    {
      v43 = 0LL;
      v37 = AugmentVidPnTopology(v47, v46, a5, v44, a2, v45, a7, a10, &v43, (unsigned int (*)[16])Src);
      v36 = v37;
      v38 = -1071774925;
      if ( v37 == -1071774925 || (v38 = -1071774886, v37 == -1071774886) )
      {
        WdLogSingleEntry2(7LL, a5, v27);
        return v38;
      }
      if ( v37 >= 0 )
      {
        v28 = v43;
        if ( !v43 )
        {
          WdLogSingleEntry1(1LL, 4681LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"sztNumAugmentedPathsFromSource > 0",
            4681LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        WdLogSingleEntry4(7LL, a2, v28, v27, v41);
        v41 = v28;
        goto LABEL_31;
      }
      WdLogSingleEntry2(2LL, v27, v37);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to augment VidPN topology  on source 0x%I64x (status = 0x%I64x).",
        v27,
        v36,
        0LL,
        0LL,
        0LL);
    }
    return (unsigned int)v36;
  }
  v28 = v41;
LABEL_31:
  if ( !v28 )
  {
    WdLogSingleEntry1(1LL, 4691LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"sztNumPathsFromSource > 0", 4691LL, 0LL, 0LL, 0LL, 0LL);
    v28 = v41;
  }
  if ( a9 )
  {
    v29 = v47;
    v30 = UnpinCofuncModalityOnPathsFromSource(v47, v46, a5, v44, a7, v28);
    v31 = v30;
    if ( v30 < 0 )
    {
      WdLogSingleEntry5(2LL, v41, v27, v29, a2, v30);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to unpin modality of %I64d present path(s) originating from source 0x%I64x in VidPN 0x%I64x of a"
                  "dapter 0x%I64x (status = 0x%I64x)",
        v41,
        v27,
        (__int64)v29,
        (__int64)a2,
        v31);
      return (unsigned int)v31;
    }
    v28 = v41;
  }
  v32 = v49;
  *v48 = v28;
  if ( v32 )
    memmove(v32, Src, 0x40uLL);
  if ( v50 )
    *v50 = v39;
  return 0LL;
}
