/*
 * XREFs of ?ReclaimClonedVidPnTarget@@YAJPEBU_DXGDMM_INTERFACE@@QEAXQEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@EQEAI4@Z @ 0x1C025E1CC
 * Callers:
 *     ?AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@PEAXPEBU_DXGDMM_INTERFACE@@IW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEQEA_KQEAI@Z @ 0x1C025D214 (-AugmentVidPnTopologyOnNoLkg@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU_DXGDMM_VIDPNTOPOLOGY_INTERFA.c)
 * Callees:
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_TARGET_MODE@@Q6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@0@Z1@Z @ 0x1C00091C0 (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_TARGET_MODE@@P6AJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEBU1@.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028CD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ReclaimClonedVidPnTarget(
        const struct _DXGDMM_INTERFACE *a1,
        void *const a2,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a3,
        __int64 (__fastcall **a4)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *),
        char a5,
        unsigned int *const a6,
        unsigned int *const a7)
{
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int *v15; // r15
  __int64 v16; // rax
  unsigned int *v17; // r12
  __int64 v18; // rax
  __int64 (__fastcall *v19)(void *const, __int64 *, __int64 *); // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rax
  unsigned int *v25; // rdi
  __int64 (__fastcall *v26)(__int64, unsigned int *const *); // rax
  int v27; // eax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  unsigned int *v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r14
  __int64 (__fastcall *v36)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, __int64, unsigned int *const *); // rax
  int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  int v44; // eax
  __int64 v45; // r9
  __int64 v46; // r8
  __int64 v47; // rax
  int v48; // eax
  char v50[8]; // [rsp+30h] [rbp-30h] BYREF
  unsigned int *v51; // [rsp+38h] [rbp-28h]
  void (__fastcall *v52)(__int64, unsigned int *); // [rsp+40h] [rbp-20h]
  __int64 v53; // [rsp+48h] [rbp-18h]
  int v54; // [rsp+50h] [rbp-10h]
  unsigned int v55; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v56; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v57; // [rsp+B0h] [rbp+50h] BYREF

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL, a2);
    *(_QWORD *)(v11 + 24) = 2948LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v12 + 24) = 2949LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !a3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v13 + 24) = 2950LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v14 + 24) = 2951LL;
    WdLogEvent5_WdAssertion(v14);
  }
  v15 = a6;
  if ( !a6 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v16 + 24) = 2952LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v17 = a7;
  if ( !a7 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v18 + 24) = 2953LL;
    WdLogEvent5_WdAssertion(v18);
  }
  v56 = 0LL;
  *v15 = -1;
  *v17 = -1;
  v19 = (__int64 (__fastcall *)(void *const, __int64 *, __int64 *))*((_QWORD *)a1 + 1);
  v57 = 0LL;
  v20 = v19(a2, &v56, &v57);
  v23 = v20;
  if ( v20 >= 0 )
  {
    v25 = 0LL;
    a6 = 0LL;
    v51 = 0LL;
    v26 = *(__int64 (__fastcall **)(__int64, unsigned int *const *))(v57 + 8);
    v52 = 0LL;
    v53 = 0LL;
    v54 = 0;
    v50[0] = 0;
    v27 = v26(v56, &a6);
    v23 = v27;
    if ( v27 >= 0 )
    {
      v31 = a6;
      if ( !a6 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v29, 0LL);
        *(_QWORD *)(v32 + 24) = 2996LL;
        WdLogEvent5_WdAssertion(v32);
        v31 = a6;
      }
      DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
        (__int64)v50,
        (__int64)v31,
        *(_QWORD *)(v57 + 24),
        v56);
      v55 = -1;
      v25 = v51;
      if ( v51 )
      {
        while ( 1 )
        {
          v35 = *v25;
          v36 = *a4;
          a6 = 0LL;
          v37 = v36(a3, v35, &a6);
          v23 = v37;
          if ( v37 == -1071774919 )
          {
            if ( a6 )
            {
              v40 = WdLogNewEntry5_WdAssertion(v39, v38);
              *(_QWORD *)(v40 + 24) = 3021LL;
              WdLogEvent5_WdAssertion(v40);
            }
          }
          else if ( v37 < 0 )
          {
            goto LABEL_35;
          }
          if ( (unsigned __int64)a6 > 1 )
            break;
          a7 = 0LL;
          v41 = (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned int *const *))(v57 + 16))(v56, v25, &a7);
          v23 = v41;
          if ( v41 < 0 )
          {
            v30 = (_QWORD *)WdLogNewEntry5_WdError(v43, v42);
            v30[3] = v25;
            v30[4] = v56;
LABEL_36:
            v30[5] = v23;
            goto LABEL_37;
          }
          DXGDMM::AutoRelease<_D3DKMDT_VIDPN_TARGET_MODE const *,long (*)(D3DKMDT_HVIDPNTARGETMODESET__ *,_D3DKMDT_VIDPN_TARGET_MODE const *),D3DKMDT_HVIDPNTARGETMODESET__ *>::Own(
            (__int64)v50,
            (__int64)a7,
            *(_QWORD *)(v57 + 24),
            v56);
          v25 = v51;
          if ( !v51 )
            goto LABEL_27;
        }
        v44 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, unsigned int *))a4[1])(
                a3,
                (unsigned int)v35,
                1LL,
                &v55);
        v23 = v44;
        if ( v44 < 0 )
        {
LABEL_35:
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v39, v38);
          v30[3] = a3;
          v30[4] = v35;
          goto LABEL_36;
        }
        v46 = v55;
        if ( v55 == -1 )
        {
          v47 = WdLogNewEntry5_WdAssertion(v39, v38);
          *(_QWORD *)(v47 + 24) = 3053LL;
          WdLogEvent5_WdAssertion(v47);
          v46 = v55;
        }
        LOBYTE(v45) = a5;
        v48 = ((__int64 (__fastcall *)(struct D3DKMDT_HVIDPNTOPOLOGY__ *const, _QWORD, __int64, __int64))a4[6])(
                a3,
                (unsigned int)v35,
                v46,
                v45);
        v23 = v48;
        if ( v48 < 0 )
        {
          v30 = (_QWORD *)WdLogNewEntry5_WdError(v34, v33);
          v30[3] = v35;
          v30[4] = v55;
          v30[5] = a3;
          v30[6] = v23;
          goto LABEL_37;
        }
LABEL_27:
        if ( v55 == -1 )
          goto LABEL_38;
        *v15 = v55;
        LODWORD(v23) = 0;
        *v17 = v35;
      }
      else
      {
LABEL_38:
        LODWORD(v23) = -1071774925;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v34, v33) + 24) = a3;
      }
    }
    else
    {
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v29, v28);
      v30[3] = v56;
      v30[4] = v23;
LABEL_37:
      WdLogEvent5_WdError(v30);
    }
    if ( v50[0] )
      v52(v53, v25);
  }
  else
  {
    v24 = WdLogNewEntry5_WdError(v22, v21);
    *(_QWORD *)(v24 + 24) = a2;
    *(_QWORD *)(v24 + 32) = v23;
    WdLogEvent5_WdError(v24);
  }
  return (unsigned int)v23;
}
