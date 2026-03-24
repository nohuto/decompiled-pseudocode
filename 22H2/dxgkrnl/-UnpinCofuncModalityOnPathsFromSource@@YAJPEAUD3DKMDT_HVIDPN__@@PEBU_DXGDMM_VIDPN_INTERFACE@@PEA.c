/*
 * XREFs of ?UnpinCofuncModalityOnPathsFromSource@@YAJPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_K@Z @ 0x1C00E195C
 * Callers:
 *     ?PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@IEEEQEA_KPEAY0BA@IPEAE@Z @ 0x1C00E16E0 (-PrepareUnpinnedPathsFromSource@@YAJQEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@PEBU_DXGDMM.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x1C0002B08 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UnpinCofuncModalityOnPathsFromSource(
        struct D3DKMDT_HVIDPN__ *a1,
        const struct _DXGDMM_VIDPN_INTERFACE *a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a3,
        const struct _DXGDMM_VIDPNTOPOLOGY_INTERFACE *a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  const struct _DXGDMM_VIDPN_INTERFACE *v8; // r12
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *); // rax
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r14
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r14
  __int64 (__fastcall *v22)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *); // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // r12
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r9
  int v38; // eax
  __int64 v39; // r9
  int v40; // eax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  _BYTE v54[8]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v55; // [rsp+38h] [rbp-41h]
  void (__fastcall *v56)(__int64, __int64); // [rsp+40h] [rbp-39h]
  __int64 v57; // [rsp+48h] [rbp-31h]
  int v58; // [rsp+50h] [rbp-29h]
  _BYTE v59[8]; // [rsp+58h] [rbp-21h] BYREF
  __int64 v60; // [rsp+60h] [rbp-19h]
  void (__fastcall *v61)(__int64, __int64); // [rsp+68h] [rbp-11h]
  __int64 v62; // [rsp+70h] [rbp-9h]
  int v63; // [rsp+78h] [rbp-1h]
  __int64 v64; // [rsp+D0h] [rbp+57h] BYREF
  const struct _DXGDMM_VIDPN_INTERFACE *v65; // [rsp+D8h] [rbp+5Fh]
  __int64 v66; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v67; // [rsp+E8h] [rbp+6Fh] BYREF

  v65 = a2;
  v8 = a2;
  if ( !a1 )
  {
    v42 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v42 + 24) = 3482LL;
    WdLogEvent5_WdAssertion(v42);
  }
  if ( !v8 )
  {
    v43 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v43 + 24) = 3483LL;
    WdLogEvent5_WdAssertion(v43);
  }
  if ( !a3 )
  {
    v44 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v44 + 24) = 3484LL;
    WdLogEvent5_WdAssertion(v44);
  }
  if ( !a4 )
  {
    v45 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v45 + 24) = 3485LL;
    WdLogEvent5_WdAssertion(v45);
  }
  v10 = a5;
  if ( a5 == -1 )
  {
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = 3486LL;
    WdLogEvent5_WdAssertion(v46);
  }
  v11 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))*((_QWORD *)v8 + 1);
  v66 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v63 = 0;
  v59[0] = 0;
  v64 = 0LL;
  v12 = v11(a1, (unsigned int)v10, &v64, &v66);
  v15 = v12;
  if ( v12 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v14, v13);
    v47[3] = v10;
    v47[4] = a1;
    v47[5] = v15;
LABEL_46:
    WdLogEvent5_WdError(v47);
    goto LABEL_34;
  }
  if ( !v64 )
  {
    v48 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v48 + 24) = 3511LL;
    WdLogEvent5_WdAssertion(v48);
  }
  if ( !v66 )
  {
    v49 = WdLogNewEntry5_WdAssertion(v14, v13);
    *(_QWORD *)(v49 + 24) = 3512LL;
    WdLogEvent5_WdAssertion(v49);
  }
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v59,
    v64,
    *((_QWORD *)v8 + 2),
    (__int64)a1);
  LOBYTE(v16) = 1;
  v17 = v60;
  v18 = (*(__int64 (__fastcall **)(__int64, __int64))(v66 + 48))(v60, v16);
  v15 = v18;
  if ( v18 < 0 )
  {
    v47 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
    v47[3] = v17;
    v47[4] = v15;
    goto LABEL_46;
  }
  v21 = 0LL;
  if ( !a6 )
  {
LABEL_33:
    LODWORD(v15) = 0;
    goto LABEL_34;
  }
  while ( 1 )
  {
    v22 = (__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, __int64, unsigned int *))*((_QWORD *)a4 + 1);
    a5 = -1;
    v23 = v22(a3, (unsigned int)v10, v21, &a5);
    v15 = v23;
    if ( v23 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v25, v24);
      v47[3] = v21;
      v47[4] = v10;
      goto LABEL_45;
    }
    if ( a5 == -1 )
    {
      v50 = WdLogNewEntry5_WdAssertion(v25, v24);
      *(_QWORD *)(v50 + 24) = 3566LL;
      WdLogEvent5_WdAssertion(v50);
    }
    v26 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD))a4 + 13))(a3, (unsigned int)v10);
    v15 = v26;
    if ( v26 < 0 )
    {
LABEL_40:
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v28, v27);
      v47[3] = v10;
      v47[4] = a5;
LABEL_45:
      v47[5] = a3;
      v47[6] = v15;
      goto LABEL_46;
    }
    v67 = 0LL;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0;
    v54[0] = 0;
    v64 = 0LL;
    v29 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPN__ *, _QWORD, __int64 *, __int64 *))v8 + 3))(
            a1,
            a5,
            &v64,
            &v67);
    v15 = v29;
    if ( v29 < 0 )
    {
      v47 = (_QWORD *)WdLogNewEntry5_WdError(v31, v30);
      v47[3] = v15;
      goto LABEL_46;
    }
    if ( !v64 )
    {
      v51 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v51 + 24) = 3611LL;
      WdLogEvent5_WdAssertion(v51);
    }
    if ( !v67 )
    {
      v52 = WdLogNewEntry5_WdAssertion(v31, v30);
      *(_QWORD *)(v52 + 24) = 3612LL;
      WdLogEvent5_WdAssertion(v52);
    }
    DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
      (__int64)v54,
      v64,
      *((_QWORD *)v8 + 4),
      (__int64)a1);
    LOBYTE(v32) = 1;
    v33 = v55;
    v34 = (*(__int64 (__fastcall **)(__int64, __int64))(v67 + 56))(v55, v32);
    v15 = v34;
    if ( v34 < 0 )
      break;
    if ( v54[0] )
      v56(v57, v33);
    LOBYTE(v37) = 1;
    v38 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 9))(
            a3,
            (unsigned int)v10,
            a5,
            v37);
    v15 = v38;
    if ( v38 < 0 )
      goto LABEL_40;
    LOBYTE(v39) = 1;
    v40 = (*((__int64 (__fastcall **)(struct D3DKMDT_HVIDPNTOPOLOGY__ *, _QWORD, _QWORD, __int64))a4 + 11))(
            a3,
            (unsigned int)v10,
            a5,
            v39);
    v15 = v40;
    if ( v40 < 0 )
      goto LABEL_40;
    if ( ++v21 >= a6 )
      goto LABEL_33;
    v8 = v65;
  }
  v53 = WdLogNewEntry5_WdError(v36, v35);
  *(_QWORD *)(v53 + 24) = v15;
  WdLogEvent5_WdError(v53);
  if ( v54[0] )
    v56(v57, v33);
LABEL_34:
  if ( v59[0] )
    v61(v62, v60);
  return (unsigned int)v15;
}
