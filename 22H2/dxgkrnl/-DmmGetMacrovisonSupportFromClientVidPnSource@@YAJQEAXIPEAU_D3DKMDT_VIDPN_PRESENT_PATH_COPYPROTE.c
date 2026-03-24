/*
 * XREFs of ?DmmGetMacrovisonSupportFromClientVidPnSource@@YAJQEAXIPEAU_D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT@@@Z @ 0x1C02DD24C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02951E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetMacrovisonSupportFromClientVidPnSource(
        _QWORD *a1,
        __int64 a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT *a3)
{
  unsigned int v3; // esi
  unsigned int v5; // r13d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rbp
  __int64 v12; // rax
  struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT v13; // edi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbp
  __int64 v20; // r15
  __int64 v21; // rbx
  char **v22; // r12
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rdx
  __int64 v28; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r13
  __int64 v30; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rdx
  _QWORD *v36; // rax
  __int64 v37; // rdx
  __int64 v38; // [rsp+20h] [rbp-48h] BYREF
  __int64 v39[8]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v40; // [rsp+78h] [rbp+10h]
  char v41; // [rsp+80h] [rbp+18h]
  unsigned int v42; // [rsp+88h] [rbp+20h] BYREF

  v40 = a2;
  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)1;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  v10 = a1[337];
  if ( !v10 )
  {
    v9 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v11 = *(_QWORD *)(v10 + 88);
  if ( v11 )
  {
    v41 = 0;
    v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)7;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v39, v11);
    v14 = *(_QWORD *)(v11 + 88);
    v38 = 0LL;
    if ( v14 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 32));
      v15 = *(_QWORD *)(v11 + 88);
    }
    else
    {
      v15 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, v15);
    if ( v38 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 80) + 72LL));
      v20 = 0LL;
      v21 = *(_QWORD *)(v11 + 80);
      v22 = (char **)(v38 + 96);
      while ( 1 )
      {
        v42 = -1;
        v23 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v22, v5, v20, &v42);
        v19 = v23;
        if ( v23 < 0 )
          break;
        v26 = v42;
        if ( v42 == -1 )
        {
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v24);
          auto_rc<DMMVIDPN const>::reset(&v38, 0LL);
          if ( v41 )
            *a3 = v13;
          goto LABEL_32;
        }
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v22, v5, v42);
        if ( !Path )
        {
          v30 = WdLogNewEntry5_WdAssertion(v28, v27);
          WdLogEvent5_WdAssertion(v30);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v21, (unsigned int)v26);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v41 = 1;
            v13 = (struct _D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)((*((_DWORD *)Path + 42) | 0xFFFFFFF8) & *(_DWORD *)&v13);
          }
        }
        else
        {
          v34 = WdLogNewEntry5_WdError(v33, v32);
          *(_QWORD *)(v34 + 24) = v26;
          *(_QWORD *)(v34 + 32) = v21;
          WdLogEvent5_WdError(v34);
        }
        v5 = v40;
        ++v20;
      }
      v36 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
      v36[3] = v20;
      v36[4] = v5;
      v36[5] = v22;
      v36[6] = v19;
      if ( v21 )
        ReferenceCounted::Release((ReferenceCounted *)(v21 + 64), v37);
    }
    else
    {
      v18 = WdLogNewEntry5_WdError(v17, v16);
      *(_QWORD *)(v18 + 24) = a1;
      WdLogEvent5_WdError(v18);
      LODWORD(v19) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v38, 0LL);
    v3 = v19;
LABEL_32:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v39[0] + 40), v35);
    return v3;
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v12 + 24) = a1;
    WdLogEvent5_WdError(v12);
    return 3223192373LL;
  }
}
