/*
 * XREFs of ?DmmGetPathContentFromClientVidPnSource@@YAJQEAXIPEAW4_D3DKMDT_VIDPN_PRESENT_PATH_CONTENT@@@Z @ 0x1C02DDA44
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C02951E8 (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C000951C (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmGetPathContentFromClientVidPnSource(
        DXGADAPTER *a1,
        __int64 a2,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT *a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r15d
  __int64 v7; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rsi
  __int64 v15; // rax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_CONTENT v16; // r12d
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rbp
  __int64 v24; // rbx
  char **v25; // r13
  int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rsi
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct DMMVIDPNPRESENTPATH *Path; // r15
  __int64 v33; // rax
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v41; // [rsp+78h] [rbp+10h]
  unsigned int v42; // [rsp+80h] [rbp+18h] BYREF
  __int64 v43; // [rsp+88h] [rbp+20h] BYREF

  v41 = a2;
  v3 = 0;
  v5 = a2;
  if ( !a3 )
  {
    v7 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
  *a3 = D3DKMDT_VPPC_UNINITIALIZED;
  if ( !a1 )
  {
    v9 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v9 + 24) = 0LL;
LABEL_5:
    WdLogEvent5_WdError(v9);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v11, v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *((_QWORD *)a1 + 337);
  if ( !v13 )
  {
    v9 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v9 + 24) = a1;
    goto LABEL_5;
  }
  v14 = *(_QWORD *)(v13 + 88);
  if ( v14 )
  {
    v16 = D3DKMDT_VPPC_UNINITIALIZED;
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v40, v14);
    v17 = *(_QWORD *)(v14 + 88);
    v43 = 0LL;
    if ( v17 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
      v18 = *(_QWORD *)(v14 + 88);
    }
    else
    {
      v18 = 0LL;
    }
    auto_rc<DMMVIDPN const>::reset(&v43, v18);
    if ( v43 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v14 + 80) + 72LL));
      v23 = 0LL;
      v24 = *(_QWORD *)(v14 + 80);
      v25 = (char **)(v43 + 96);
      while ( 1 )
      {
        v42 = -1;
        v26 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v25, v5, v23, &v42);
        v22 = v26;
        if ( v26 < 0 )
          break;
        v29 = v42;
        if ( v42 == -1 )
          goto LABEL_25;
        Path = DMMVIDPNTOPOLOGY::FindPath((DMMVIDPNTOPOLOGY *)v25, v5, v42);
        if ( !Path )
        {
          v33 = WdLogNewEntry5_WdAssertion(v31, v30);
          WdLogEvent5_WdAssertion(v33);
        }
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v24, (unsigned int)v29);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 104) )
          {
            v16 = *((_DWORD *)Path + 41);
LABEL_25:
            if ( v24 )
              ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v27);
            auto_rc<DMMVIDPN const>::reset(&v43, 0LL);
            *a3 = v16;
            goto LABEL_33;
          }
        }
        else
        {
          v37 = WdLogNewEntry5_WdError(v35, v27);
          *(_QWORD *)(v37 + 24) = v29;
          *(_QWORD *)(v37 + 32) = v24;
          WdLogEvent5_WdError(v37);
        }
        v5 = v41;
        ++v23;
      }
      v38 = (_QWORD *)WdLogNewEntry5_WdTrace(v28, v27);
      v38[3] = v23;
      v38[4] = v5;
      v38[5] = v25;
      v38[6] = v22;
      if ( v24 )
        ReferenceCounted::Release((ReferenceCounted *)(v24 + 64), v39);
    }
    else
    {
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = a1;
      WdLogEvent5_WdError(v21);
      LODWORD(v22) = -1071774884;
    }
    auto_rc<DMMVIDPN const>::reset(&v43, 0LL);
    v3 = v22;
LABEL_33:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v40[0] + 40), v36);
    return v3;
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdError(v15);
    return 3223192373LL;
  }
}
