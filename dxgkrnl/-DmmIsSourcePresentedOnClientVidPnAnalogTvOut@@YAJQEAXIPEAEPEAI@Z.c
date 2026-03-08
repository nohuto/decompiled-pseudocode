/*
 * XREFs of ?DmmIsSourcePresentedOnClientVidPnAnalogTvOut@@YAJQEAXIPEAEPEAI@Z @ 0x1C03A957C
 * Callers:
 *     DxgkHandleVideoParameters @ 0x1C0391C6C (DxgkHandleVideoParameters.c)
 * Callees:
 *     ?reset@?$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z @ 0x1C00034C8 (-reset@-$auto_rc@$$CBVDMMVIDPN@@@@QEAAXPEBVDMMVIDPN@@@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ @ 0x1C000949C (-AcquireLastClientCommittedVidPnRef@VIDPN_MGR@@QEBAPEBVDMMVIDPN@@XZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z @ 0x1C01830A8 (-EnumPathTargetsFromSource@DMMVIDPNTOPOLOGY@@QEBAJI_KPEAI@Z.c)
 */

__int64 __fastcall DmmIsSourcePresentedOnClientVidPnAnalogTvOut(
        DXGADAPTER *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  __int64 v5; // r12
  __int64 v10; // rsi
  VIDPN_MGR *v11; // rsi
  const struct DMMVIDPN *ClientCommittedVidPnRef; // rax
  __int64 v13; // rsi
  DMMVIDPNTOPOLOGY *v14; // r15
  __int64 v15; // rbx
  __int64 i; // rbp
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rsi
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+50h] [rbp-38h] BYREF
  __int64 v26; // [rsp+58h] [rbp-30h] BYREF
  unsigned int v27; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a4 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v10 = *((_QWORD *)a1 + 365);
  if ( !v10 )
  {
    WdLogSingleEntry1(2LL, a1);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3223191554LL;
  }
  v11 = *(VIDPN_MGR **)(v10 + 104);
  if ( v11 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v26, (__int64)v11);
    v25 = 0LL;
    ClientCommittedVidPnRef = VIDPN_MGR::AcquireLastClientCommittedVidPnRef(v11);
    auto_rc<DMMVIDPN const>::reset(&v25, (__int64)ClientCommittedVidPnRef);
    if ( v25 )
    {
      v14 = (DMMVIDPNTOPOLOGY *)(v25 + 96);
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)v11 + 15) + 72LL));
      v15 = *((_QWORD *)v11 + 15);
      for ( i = 0LL; ; ++i )
      {
        v27 = -1;
        v17 = DMMVIDPNTOPOLOGY::EnumPathTargetsFromSource(v14, (char *)(unsigned int)v5, i, &v27);
        v13 = v17;
        if ( v17 < 0 )
          break;
        v22 = v27;
        if ( v27 == -1 )
          goto LABEL_18;
        TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v15, v27);
        if ( TargetById )
        {
          if ( *((_BYTE *)TargetById + 108) )
          {
            *a3 = 1;
            *a4 = v22;
LABEL_18:
            if ( v15 )
              ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
            goto LABEL_25;
          }
        }
        else
        {
          WdLogSingleEntry2(2LL, v22, v15);
        }
      }
      v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
      v24[3] = i;
      v24[4] = v5;
      v24[5] = v14;
      v24[6] = v13;
      if ( v15 )
        ReferenceCounted::Release((ReferenceCounted *)(v15 + 64));
    }
    else
    {
      WdLogSingleEntry1(3LL, a1);
      LODWORD(v13) = -1071774884;
    }
    v4 = v13;
LABEL_25:
    auto_rc<DMMVIDPN const>::reset(&v25, 0LL);
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v26 + 40));
    return v4;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
