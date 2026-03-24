/*
 * XREFs of ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9188
 * Callers:
 *     ?Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZATION@@@DMM@@@Z @ 0x1C005C904 (-Serialize@COMMITVIDPNREQUEST@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@U_DMM_COMMITVIDPNREQUEST_SERIALIZ.c)
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x1C02DAB84 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x1C02DB6A4 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 *     ?SerializeVidPns@DMMVIDPN@@SAJAEBV?$Queue@VDMMVIDPN@@@@PEAV?$AutoBuffer@U_DMM_VIDPNSET_SERIALIZATION@@@DMM@@@Z @ 0x1C02E9530 (-SerializeVidPns@DMMVIDPN@@SAJAEBV-$Queue@VDMMVIDPN@@@@PEAV-$AutoBuffer@U_DMM_VIDPNSET_SERIALIZA.c)
 * Callees:
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A974 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C000DCCC (-Serialize@DMMVIDPNSOURCEMODE@@QEBAXQEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?Initialize@?$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z @ 0x1C005C3E4 (-Initialize@-$AutoBuffer@U_KEY_VALUE_PARTIAL_INFORMATION@@@DMM@@QEAAJ_KQEBXW4_POOL_TYPE@@@Z.c)
 *     ?GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z @ 0x1C005CBC0 (-GetNextTarget@DMMVIDPNTARGETSET@@QEBAPEAVDMMVIDPNTARGET@@QEBV2@@Z.c)
 *     ?GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z @ 0x1C00EBAA8 (-GetNumPathsFromSource@DMMVIDPNTOPOLOGY@@QEBAJIPEA_K@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C01442D8 (-Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DMMVIDPN::Serialize(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v4; // rax
  __int64 v6; // rax
  _QWORD *v7; // r12
  unsigned __int8 v8; // bl
  __int64 v9; // r14
  _QWORD *v10; // r15
  _QWORD *v11; // rdi
  unsigned int *NextTarget; // rdi
  __int64 v13; // rdx
  int NumPathsFromSource; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // al
  SIZE_T v20; // r14
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  _QWORD *v25; // rax
  unsigned __int8 v26; // r12
  unsigned __int8 v27; // cl
  _QWORD *v28; // rdi
  __int64 v29; // rbx
  struct DMMVIDPNTARGET *v30; // rdi
  DMMVIDPNTOPOLOGY *v31; // r14
  unsigned int v32; // r15d
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  DMMVIDPNSOURCEMODE *v42; // rcx
  unsigned __int64 v43; // rsi
  char **v44; // r13
  _DWORD *v45; // rbx
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r14
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rcx
  unsigned __int64 v57; // [rsp+20h] [rbp-30h] BYREF
  DMMVIDPNTOPOLOGY *v58; // [rsp+28h] [rbp-28h]
  __int64 v59; // [rsp+30h] [rbp-20h] BYREF
  __int64 v60; // [rsp+38h] [rbp-18h] BYREF
  __int64 v61; // [rsp+40h] [rbp-10h]
  DMMVIDPNTARGETSET *v62; // [rsp+48h] [rbp-8h]
  unsigned int v64; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v65; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  if ( a2 )
  {
    if ( *(_QWORD *)(a2 + 32) )
    {
      v6 = WdLogNewEntry5_WdAssertion(a1, a2);
      WdLogEvent5_WdAssertion(v6);
    }
    v7 = *(_QWORD **)(a1 + 304);
    v8 = 0;
    v58 = (DMMVIDPNTOPOLOGY *)(a1 + 96);
    v62 = (DMMVIDPNTARGETSET *)v7;
    v9 = 12LL;
    v10 = v7 + 3;
    v11 = (_QWORD *)v7[3];
    if ( v11 == v7 + 3 )
      goto LABEL_15;
    NextTarget = (unsigned int *)(v11 - 1);
    if ( !NextTarget )
      goto LABEL_15;
    do
    {
      v13 = NextTarget[6];
      v57 = 0LL;
      NumPathsFromSource = DMMVIDPNTOPOLOGY::GetNumPathsFromSource((DMMVIDPNTOPOLOGY *)(a1 + 96), v13, &v57);
      if ( NumPathsFromSource != -1071774919 )
      {
        if ( NumPathsFromSource < 0 )
        {
          v17 = WdLogNewEntry5_WdAssertion(v16, v15);
          WdLogEvent5_WdAssertion(v17);
        }
        ++v8;
        v18 = 1LL;
        if ( v57 > 1 )
          v18 = v57;
        v9 += 432 * v18 + 48;
      }
      NextTarget = (unsigned int *)DMMVIDPNTARGETSET::GetNextTarget(
                                     (DMMVIDPNTARGETSET *)v7,
                                     (const struct DMMVIDPNTARGET *const)NextTarget);
    }
    while ( NextTarget );
    v2 = a2;
    v19 = v8;
    if ( v8 <= 1u )
LABEL_15:
      v19 = 1;
    v20 = v9 + 4LL * v19 - 4;
    v21 = DMM::AutoBuffer<_KEY_VALUE_PARTIAL_INFORMATION>::Initialize(v2, v20);
    v24 = v21;
    if ( v21 >= 0 )
    {
      v26 = 0;
      v27 = 1;
      **(_DWORD **)(v2 + 32) = v20;
      *(_BYTE *)(*(_QWORD *)(v2 + 32) + 4LL) = v8;
      v28 = (_QWORD *)*v10;
      if ( v8 > 1u )
        v27 = v8;
      v29 = 4LL * v27 + 8;
      if ( v28 != v10 )
      {
        v30 = (struct DMMVIDPNTARGET *)(v28 - 1);
        if ( v30 )
        {
          v31 = v58;
          do
          {
            v32 = *((_DWORD *)v30 + 6);
            v65 = 0LL;
            v33 = DMMVIDPNTOPOLOGY::GetNumPathsFromSource(v31, v32, &v65);
            if ( v33 != -1071774919 )
            {
              if ( v33 < 0 )
              {
                v36 = WdLogNewEntry5_WdAssertion(v35, v34);
                WdLogEvent5_WdAssertion(v36);
              }
              *(_DWORD *)(*(_QWORD *)(v2 + 32) + 4LL * v26 + 8) = v29;
              v37 = 1LL;
              if ( v65 > 1 )
                v37 = v65;
              v38 = 432 * v37 + 48 + v29;
              v39 = *(_QWORD *)(v2 + 32);
              v61 = v38;
              v40 = v39 + *(unsigned int *)(v39 + 4LL * v26 + 8);
              v41 = *((_QWORD *)v30 + 13);
              if ( v41 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(v41 + 96));
                v41 = *((_QWORD *)v30 + 13);
              }
              v42 = *(DMMVIDPNSOURCEMODE **)(v41 + 144);
              v59 = v41;
              if ( v42 )
                DMMVIDPNSOURCEMODE::Serialize(v42, (struct _D3DKMDT_VIDPN_SOURCE_MODE *const)v40);
              auto_rc<DMMVIDPNSOURCEMODESET>::reset(&v59, 0LL);
              v43 = 0LL;
              *(_BYTE *)(v40 + 40) = v65;
              if ( v65 )
              {
                v44 = (char **)v58;
                v45 = (_DWORD *)(v40 + 472);
                do
                {
                  v64 = -1;
                  if ( (int)DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v44, v32, v43, &v64) < 0 )
                  {
                    v48 = WdLogNewEntry5_WdAssertion(v47, v46);
                    WdLogEvent5_WdAssertion(v48);
                  }
                  Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v44, v32, v64);
                  if ( !Path )
                  {
                    v52 = WdLogNewEntry5_WdAssertion(v50, v49);
                    WdLogEvent5_WdAssertion(v52);
                  }
                  DMMVIDPNPRESENTPATH::Serialize(Path, (struct _D3DKMDT_VIDPN_PRESENT_PATH *const)(v45 - 106));
                  v53 = *((_QWORD *)Path + 12);
                  v54 = *(_QWORD *)(v53 + 104);
                  if ( v54 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v54 + 96));
                    v55 = *(_QWORD *)(v53 + 104);
                  }
                  else
                  {
                    v55 = 0LL;
                  }
                  v60 = v55;
                  v56 = *(_QWORD *)(v55 + 144);
                  if ( v56 )
                  {
                    *(v45 - 16) = *(_DWORD *)(v56 + 24);
                    *(_OWORD *)(v45 - 14) = *(_OWORD *)(v56 + 72);
                    *(_OWORD *)(v45 - 10) = *(_OWORD *)(v56 + 88);
                    *(_OWORD *)(v45 - 6) = *(_OWORD *)(v56 + 104);
                    *((_QWORD *)v45 - 1) = *(_QWORD *)(v56 + 120);
                    *v45 = *(_DWORD *)(v56 + 128);
                  }
                  auto_rc<DMMVIDPNTARGETMODESET>::reset(&v60, 0LL);
                  ++v43;
                  v45 += 108;
                }
                while ( v43 < v65 );
                v2 = a2;
                v31 = v58;
              }
              v29 = v61;
              ++v26;
            }
            v30 = DMMVIDPNTARGETSET::GetNextTarget(v62, v30);
          }
          while ( v30 );
        }
      }
      return 0LL;
    }
    else
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
      v25[3] = v20;
      v25[4] = a1;
      v25[5] = v24;
      WdLogEvent5_WdError(v25);
      return (unsigned int)v24;
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdError(a1, 0LL);
    *(_QWORD *)(v4 + 24) = 0LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
}
