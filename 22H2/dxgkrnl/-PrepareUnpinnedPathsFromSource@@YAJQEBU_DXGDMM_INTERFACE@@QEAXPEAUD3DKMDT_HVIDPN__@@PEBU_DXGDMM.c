/*
 * XREFs of ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E16E0
 * Callers:
 *     ?GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z @ 0x1C00E12BC (-GetActiveVidPnBasedDisplayModeList@@YAJQEAXEPEAU_D3DKMT_GETDISPLAYMODELIST@@1@Z.c)
 *     CreateFunctionalVidPnWithEnabledVidPnSource @ 0x1C025EC9C (CreateFunctionalVidPnWithEnabledVidPnSource.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00E195C (-UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEA.c)
 *     ?AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IEQEA_KPEAY0BA@I@Z @ 0x1C025CEF8 (-AugmentVidPnTopology@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNT.c)
 */

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
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v13; // rdi
  __m128i si128; // xmm0
  __int64 (__fastcall *v18)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, unsigned __int64 *); // rax
  char v19; // r13
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *); // rax
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rdx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  struct D3DKMDT_HVIDPN__ *v38; // rsi
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  _QWORD *v52; // rax
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // rcx
  int v60; // eax
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  _BYTE v68[8]; // [rsp+50h] [rbp-99h] BYREF
  unsigned __int64 v69; // [rsp+58h] [rbp-91h] BYREF
  unsigned __int64 v70; // [rsp+60h] [rbp-89h] BYREF
  struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *v71; // [rsp+68h] [rbp-81h]
  struct _DXGDMM_INTERFACE *v72; // [rsp+70h] [rbp-79h]
  struct _DXGDMM_VIDPN_INTERFACE *v73; // [rsp+78h] [rbp-71h]
  struct D3DKMDT_HVIDPN__ *v74; // [rsp+80h] [rbp-69h]
  unsigned __int64 *v75; // [rsp+88h] [rbp-61h]
  unsigned __int8 *v76; // [rsp+90h] [rbp-59h]
  _OWORD Src[4]; // [rsp+A0h] [rbp-49h] BYREF

  v13 = a6;
  v74 = a3;
  v71 = a6;
  v75 = a11;
  v76 = a13;
  v73 = a4;
  v72 = a1;
  if ( !a1 )
  {
    v43 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v43 + 24) = 4323LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a2 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v44 + 24) = 4324LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a3 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v45 + 24) = 4325LL;
    WdLogEvent5_WdAssertion(v45);
  }
  if ( !a4 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = 4326LL;
    WdLogEvent5_WdAssertion(v46);
  }
  if ( !a5 )
  {
    v47 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v47 + 24) = 4327LL;
    WdLogEvent5_WdAssertion(v47);
  }
  if ( !a6 )
  {
    v48 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v48 + 24) = 4328LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( a7 == -1 )
  {
    v49 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v49 + 24) = 4329LL;
    WdLogEvent5_WdAssertion(v49);
  }
  if ( !a11 )
  {
    v50 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v50 + 24) = 4330LL;
    WdLogEvent5_WdAssertion(v50);
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
  v69 = 0LL;
  v19 = 0;
  v20 = v18(a5, a7, &v69);
  v23 = v20;
  if ( v20 == -1071774919 )
  {
    if ( v69 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v22, v21);
      *(_QWORD *)(v51 + 24) = 4361LL;
      WdLogEvent5_WdAssertion(v51);
    }
    v19 = 1;
    v34 = WdLogNewEntry5_WdDmmEvent();
    v24 = a7;
    *(_QWORD *)(v34 + 24) = a5;
    *(_QWORD *)(v34 + 32) = a7;
  }
  else
  {
    if ( v20 < 0 )
    {
      v52 = (_QWORD *)WdLogNewEntry5_WdError(v22, v21);
      v52[3] = a7;
      v52[4] = a5;
      v52[5] = v23;
      WdLogEvent5_WdError(v52);
      return (unsigned int)v23;
    }
    v24 = 0LL;
    if ( v69 )
    {
      while ( 1 )
      {
        v25 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned __int64 *))*((_QWORD *)v13 + 1);
        LODWORD(v70) = -1;
        v26 = v25(a5, a7, v24, &v70);
        v29 = v26;
        if ( v26 < 0 )
          break;
        v30 = (unsigned int)v70;
        if ( (_DWORD)v70 == -1 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v28, 0xFFFFFFFFLL);
          *(_QWORD *)(v53 + 24) = 4404LL;
          WdLogEvent5_WdAssertion(v53);
          v30 = (unsigned int)v70;
        }
        v68[0] = 0;
        v31 = (*((__int64 (__fastcall **)(void *const, __int64, _BYTE *))v72 + 9))(a2, v30, v68);
        v29 = v31;
        if ( v31 < 0 )
        {
          v55 = (_QWORD *)WdLogNewEntry5_WdError(v33, v32);
          v55[3] = a2;
          goto LABEL_48;
        }
        if ( !v68[0] )
        {
          v19 = 1;
          v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
          v54[3] = a5;
          v54[4] = a7;
          v54[5] = (unsigned int)v70;
          WdLogEvent5_WdDmmEvent(v54);
          v13 = v71;
          goto LABEL_28;
        }
        v13 = v71;
        if ( ++v24 >= v69 )
          goto LABEL_28;
      }
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v55[4] = a7;
      goto LABEL_51;
    }
LABEL_28:
    v34 = WdLogNewEntry5_WdDmmEvent();
    v24 = a7;
    *(_QWORD *)(v34 + 24) = a7;
    *(_QWORD *)(v34 + 32) = a5;
  }
  WdLogEvent5_WdDmmEvent(v34);
  Src[0] = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  Src[1] = Src[0];
  Src[2] = Src[0];
  Src[3] = Src[0];
  if ( v19 )
  {
    if ( !a8 )
    {
      v56 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v56 + 24) = v24;
      *(_QWORD *)(v56 + 32) = a2;
      WdLogEvent5_WdDmmEvent(v56);
      return 3223192403LL;
    }
    if ( v69 )
    {
      v57 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))v13 + 7))(a5, a7);
      v29 = v57;
      if ( v57 < 0 )
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdError(v59, v58);
        v55[4] = a5;
LABEL_51:
        v55[3] = v24;
        v55[5] = v29;
LABEL_53:
        WdLogEvent5_WdError(v55);
        return (unsigned int)v29;
      }
    }
    v70 = 0LL;
    v60 = AugmentVidPnTopology(v74, v73, a5, v71, a2, v72, a7, a10, &v70, (unsigned int (*)[16])Src);
    v29 = v60;
    if ( v60 == -1071774925 )
    {
      v63 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v63 + 24) = a5;
      *(_QWORD *)(v63 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v63);
      return (unsigned int)v29;
    }
    if ( v60 == -1071774886 )
    {
      v64 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v64 + 24) = a5;
      *(_QWORD *)(v64 + 32) = v24;
      WdLogEvent5_WdDmmEvent(v64);
      return 3223192410LL;
    }
    if ( v60 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v62, v61);
      v55[3] = v24;
LABEL_48:
      v55[4] = v29;
      goto LABEL_53;
    }
    v37 = v70;
    if ( !v70 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v62, v61);
      *(_QWORD *)(v65 + 24) = 4517LL;
      WdLogEvent5_WdAssertion(v65);
    }
    v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent();
    v66[3] = a2;
    v66[4] = v37;
    v66[5] = v24;
    v66[6] = v69;
    WdLogEvent5_WdDmmEvent(v66);
    v69 = v37;
  }
  else
  {
    v37 = v69;
  }
  if ( !v37 )
  {
    v67 = WdLogNewEntry5_WdAssertion(v36, v35);
    *(_QWORD *)(v67 + 24) = 4527LL;
    WdLogEvent5_WdAssertion(v67);
    v37 = v69;
  }
  if ( a9 )
  {
    v38 = v74;
    v39 = UnpinCofuncModalityOnPathsFromSource(v74, v73, a5, v71, a7, v37);
    v29 = v39;
    if ( v39 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdError(v41, v40);
      v55[3] = v69;
      v55[4] = v24;
      v55[5] = v38;
      v55[6] = a2;
      v55[7] = v29;
      goto LABEL_53;
    }
    v37 = v69;
  }
  *v75 = v37;
  if ( a12 )
    memmove(a12, Src, 0x40uLL);
  if ( v76 )
    *v76 = v19;
  return 0LL;
}
