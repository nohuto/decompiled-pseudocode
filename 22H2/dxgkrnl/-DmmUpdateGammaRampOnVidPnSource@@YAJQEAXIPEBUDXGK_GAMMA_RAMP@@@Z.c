/*
 * XREFs of ?DmmUpdateGammaRampOnVidPnSource@@YAJQEAXIPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C00EB37C
 * Callers:
 *     ?UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C00EABA0 (-UpdateGammaRamp@ADAPTER_DISPLAY@@QEAAJI@Z.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z @ 0x1C0002994 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTSOURCE@@@@QEBAPEAVDMMVIDEOPRESENTSOURCE@@I@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00051D8 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C0006764 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z @ 0x1C00074F0 (-FindPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@II@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ @ 0x1C00EB514 (-UpdateGammaRamp@DMMVIDPNPRESENTPATH@@QEAAJXZ.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C012F520 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 *     ?SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z @ 0x1C0143EE0 (-SetDriverGammaRamp@DMMVIDPNPRESENTPATH@@QEBAJPEBUDXGK_GAMMA_RAMP@@@Z.c)
 */

__int64 __fastcall DmmUpdateGammaRampOnVidPnSource(DXGADAPTER *a1, __int64 a2, const struct DXGK_GAMMA_RAMP *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r15
  DXGADAPTER *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r13
  ReferenceCounted *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  DMMVIDPNTOPOLOGY *v21; // rbp
  unsigned __int64 i; // rbx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  DMMVIDPNPRESENTPATH *Path; // r14
  int updated; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *v40; // rax
  __int64 v41[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v42; // [rsp+60h] [rbp+8h] BYREF
  __int64 v43; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (unsigned int)a2;
  v6 = a1;
  if ( !a1 )
  {
    v34 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v34 + 24) = 0LL;
LABEL_28:
    WdLogEvent5_WdError(v34);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v35 = WdLogNewEntry5_WdAssertion(v8, v7);
    WdLogEvent5_WdAssertion(v35);
  }
  v9 = *((_QWORD *)v6 + 337);
  if ( !v9 )
  {
    v34 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v34 + 24) = v6;
    goto LABEL_28;
  }
  v10 = *(_QWORD *)(v9 + 88);
  if ( v10 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(v41, v10);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 72) + 72LL));
    v11 = *(_QWORD *)(v10 + 72);
    v12 = IndexedSet<DMMVIDEOPRESENTSOURCE>::FindById(v11, v4);
    v15 = v12;
    if ( v12 )
    {
      if ( a3 )
        _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
      v16 = *(ReferenceCounted **)(v12 + 128);
      if ( v16 )
        ReferenceCounted::Release(v16, v13);
      *(_QWORD *)(v15 + 128) = a3;
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v13);
      v17 = *(_QWORD *)(v10 + 88);
      v43 = 0LL;
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v17 + 32));
        v18 = *(_QWORD *)(v10 + 88);
      }
      else
      {
        v18 = 0LL;
      }
      auto_rc<DMMVIDPN const>::reset(&v43, v18);
      if ( v43 )
      {
        v21 = (DMMVIDPNTOPOLOGY *)(v43 + 96);
        for ( i = 0LL; ; ++i )
        {
          v42 = -1;
          v23 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v21, v4, i, &v42);
          v6 = (DXGADAPTER *)v23;
          if ( v23 < 0 )
            break;
          if ( v42 == -1 )
          {
            auto_rc<DMMVIDPN const>::reset(&v43, 0LL);
            goto LABEL_25;
          }
          Path = DMMVIDPNTOPOLOGY::FindPath(v21, v4, v42);
          if ( !Path )
          {
            v39 = WdLogNewEntry5_WdAssertion(v27, v26);
            WdLogEvent5_WdAssertion(v39);
          }
          updated = DMMVIDPNPRESENTPATH::UpdateGammaRamp(Path);
          LODWORD(v6) = updated;
          if ( updated < 0 )
          {
            *(_QWORD *)(WdLogNewEntry5_WdTrace(v31, v30) + 24) = updated;
            goto LABEL_37;
          }
          LODWORD(v6) = DMMVIDPNPRESENTPATH::SetDriverGammaRamp(Path, 0LL);
          if ( (int)v6 < 0 )
            goto LABEL_37;
        }
        v40 = (_QWORD *)WdLogNewEntry5_WdTrace(v25, v24);
        v40[3] = i;
        v40[4] = v4;
        v40[5] = v21;
        v40[6] = v6;
      }
      else
      {
        v38 = WdLogNewEntry5_WdError(v20, v19);
        *(_QWORD *)(v38 + 24) = v6;
        WdLogEvent5_WdError(v38);
        LODWORD(v6) = -1071774884;
      }
LABEL_37:
      auto_rc<DMMVIDPN const>::reset(&v43, 0LL);
      v3 = (unsigned int)v6;
    }
    else
    {
      v37 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v37 + 24) = v4;
      WdLogEvent5_WdError(v37);
      if ( v11 )
        ReferenceCounted::Release((ReferenceCounted *)(v11 + 64), v32);
      v3 = -1071774972;
    }
LABEL_25:
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v41[0] + 40), v32);
    return v3;
  }
  else
  {
    v36 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v36 + 24) = v6;
    WdLogEvent5_WdError(v36);
    return 3223192373LL;
  }
}
