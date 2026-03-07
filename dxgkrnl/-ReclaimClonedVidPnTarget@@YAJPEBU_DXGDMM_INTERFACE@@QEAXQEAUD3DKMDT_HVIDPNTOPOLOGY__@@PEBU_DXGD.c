__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        __int64 a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  unsigned int *v7; // r14
  unsigned int *v12; // r12
  unsigned int *v13; // rbx
  __int64 (__fastcall *v14)(__int64, __int64 *, __int64 *); // rax
  int v15; // eax
  __int64 v16; // rsi
  __int64 (__fastcall *v17)(__int64, unsigned int *const *); // rax
  int v18; // eax
  unsigned int *v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdi
  __int64 (__fastcall *v25)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  __int64 v29; // r9
  const wchar_t *v30; // r9
  __int64 v31; // r8
  int v32; // eax
  char v34[8]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int *v35; // [rsp+58h] [rbp-28h]
  void (__fastcall *v36)(__int64, unsigned int *); // [rsp+60h] [rbp-20h]
  __int64 v37; // [rsp+68h] [rbp-18h]
  int v38; // [rsp+70h] [rbp-10h]
  unsigned int v39; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v41; // [rsp+D0h] [rbp+50h] BYREF

  v7 = 0LL;
  if ( !a1 )
  {
    WdLogSingleEntry1(1LL, 3075LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_pDxgDmmInterface != NULL", 3075LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 3076LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hDxgAdapter != NULL", 3076LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 3077LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"i_hVidPnTopology != NULL", 3077LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 3078LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"i_pDmmVidPnTopologyInterface != NULL",
      3078LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v12 = a6;
  if ( !a6 )
  {
    WdLogSingleEntry1(1LL, 3079LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pReclaimedVidPnTargetId != NULL",
      3079LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v13 = a7;
  if ( !a7 )
  {
    WdLogSingleEntry1(1LL, 3080LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_pReclaimedPathSourceId != NULL",
      3080LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v7 = 0LL;
  }
  v40 = 0LL;
  *v12 = -1;
  *v13 = -1;
  v14 = (__int64 (__fastcall *)(__int64, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v41 = 0LL;
  v15 = v14(a2, &v40, &v41);
  v16 = v15;
  if ( v15 >= 0 )
  {
    a6 = 0LL;
    v35 = 0LL;
    v17 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v41 + 8);
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0;
    v34[0] = 0;
    v18 = v17(v40, &a6);
    v16 = v18;
    if ( v18 >= 0 )
    {
      v19 = a6;
      if ( !a6 )
      {
        WdLogSingleEntry1(1LL, 3123LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidPnSourceInfo != NULL", 3123LL, 0LL, 0LL, 0LL, 0LL);
        v19 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_SOURCE_MODE const *,long (*)(D3DKMDT_HVIDPNSOURCEMODESET__ *,_D3DKMDT_VIDPN_SOURCE_MODE const *),D3DKMDT_HVIDPNSOURCEMODESET__ *>::Own(
        (__int64)v34,
        (__int64)v19,
        *(_QWORD *)(v41 + 24),
        v40);
      v39 = -1;
      v7 = v35;
      if ( v35 )
      {
        while ( 1 )
        {
          v24 = *v7;
          v25 = *a4;
          a6 = 0LL;
          v26 = v25(a3, v24, &a6);
          v16 = v26;
          if ( v26 == -1071774919 )
          {
            if ( a6 )
            {
              WdLogSingleEntry1(1LL, 3148LL);
              DxgkLogInternalTriageEvent(
                0LL,
                262146,
                -1,
                (__int64)L"sztNumPathsFromSource == 0",
                3148LL,
                0LL,
                0LL,
                0LL,
                0LL);
            }
          }
          else if ( v26 < 0 )
          {
            WdLogSingleEntry3(2LL, a3, v24, v26);
            v30 = L"Failed to get the number of paths in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
            goto LABEL_37;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v27 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v41 + 16))(v40, v7, &a7);
          v16 = v27;
          if ( v27 < 0 )
          {
            WdLogSingleEntry3(2LL, v7, v40, v27);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"Failed to acquire source following 0x%I64x in VidPN source set 0x%I64x (status = 0x%I64x)",
              (__int64)v7,
              v40,
              v16,
              0LL,
              0LL);
            goto LABEL_39;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_SOURCE_MODE const *,long (*)(D3DKMDT_HVIDPNSOURCEMODESET__ *,_D3DKMDT_VIDPN_SOURCE_MODE const *),D3DKMDT_HVIDPNSOURCEMODESET__ *>::Own(
            (__int64)v34,
            (__int64)a7,
            *(_QWORD *)(v41 + 24),
            v40);
          v7 = v35;
          if ( !v35 )
            goto LABEL_27;
        }
        v28 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v24,
                1LL,
                &v39);
        v16 = v28;
        if ( v28 < 0 )
        {
          WdLogSingleEntry3(2LL, a3, v24, v28);
          v30 = L"Failed to get target of the second path in topology 0x%I64x originating from source 0x%I64x (status = 0x%I64x)";
LABEL_37:
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v30, (__int64)a3, v24, v16, 0LL, 0LL);
          goto LABEL_39;
        }
        v31 = v39;
        if ( v39 == -1 )
        {
          WdLogSingleEntry1(1LL, 3180LL);
          DxgkLogInternalTriageEvent(
            0LL,
            262146,
            -1,
            (__int64)L"ClonedVidPnTargetId != D3DDDI_ID_UNINITIALIZED",
            3180LL,
            0LL,
            0LL,
            0LL,
            0LL);
          v31 = v39;
        }
        LOBYTE(v29) = a5;
        v32 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v24,
                v31,
                v29);
        v16 = v32;
        if ( v32 < 0 )
        {
          WdLogSingleEntry4(2LL, v24, v39, a3, v32);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to remove path (0x%I64x, 0x%I64x) from topology 0x%I64x which is the second path originating"
                      " from that source (status = 0x%I64x)",
            v24,
            v39,
            (__int64)a3,
            v16,
            0LL);
          goto LABEL_39;
        }
LABEL_27:
        if ( v39 == -1 )
          goto LABEL_38;
        *v12 = v39;
        LODWORD(v16) = 0;
        *v13 = v24;
      }
      else
      {
LABEL_38:
        LODWORD(v16) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v21, v20, v22, v23) + 24) = a3;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, v40, v18);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to acquire first source in VidPN source set 0x%I64x (status = 0x%I64x)",
        v40,
        v16,
        0LL,
        0LL,
        0LL);
    }
LABEL_39:
    if ( v34[0] )
      v36(v37, v7);
  }
  else
  {
    WdLogSingleEntry2(2LL, a2, v15);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to acquire source set for adapter 0x%I64x (status = 0x%I64x)",
      a2,
      v16,
      0LL,
      0LL,
      0LL);
  }
  return (unsigned int)v16;
}
