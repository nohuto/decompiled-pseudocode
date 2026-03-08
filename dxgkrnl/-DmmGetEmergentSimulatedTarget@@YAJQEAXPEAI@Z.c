/*
 * XREFs of ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C01B9E90
 * Callers:
 *     ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B9B10 (-DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0215598 (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00070C4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x1C000A240 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     ?IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C0016114 (-IsLeafTarget@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmGetEmergentSimulatedTarget(DXGADAPTER *a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdi
  unsigned int v6; // eax
  _QWORD *v7; // rbx
  const struct DMMVIDEOPRESENTTARGET *v8; // rsi
  _QWORD *v9; // rdi
  const struct DMMVIDEOPRESENTTARGET *NextTarget; // rdi
  unsigned int v11; // edi
  __int64 v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3221225485LL;
  }
  *a2 = -1;
  if ( !a1 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    return 3223191554LL;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
    WdLogSingleEntry0(1LL);
  v4 = *((_QWORD *)a1 + 365);
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223191554LL;
  }
  v5 = *(_QWORD *)(v4 + 104);
  if ( v5 )
  {
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v13, v5);
    v6 = *(_DWORD *)(v5 + 548);
    if ( v6 == -1 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v5 + 120) + 72LL));
      v7 = *(_QWORD **)(v5 + 120);
      v8 = 0LL;
      v9 = (_QWORD *)v7[3];
      if ( v9 == v7 + 3 )
        goto LABEL_23;
      NextTarget = (const struct DMMVIDEOPRESENTTARGET *)(v9 - 1);
      if ( !NextTarget )
        goto LABEL_23;
      while ( !IsInternalVideoOutput(*((enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *)NextTarget + 20)) )
      {
        if ( !v8
          && DMMVIDEOPRESENTTARGET::IsLeafTarget(NextTarget)
          && !*((_QWORD *)NextTarget + 59)
          && !*((_DWORD *)NextTarget + 23) )
        {
          v8 = NextTarget;
        }
        NextTarget = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v7, NextTarget);
        if ( !NextTarget )
          goto LABEL_13;
      }
      if ( *((_QWORD *)NextTarget + 59) || !DMMVIDEOPRESENTTARGET::IsLeafTarget(NextTarget) )
        WdLogSingleEntry0(1LL);
      v8 = NextTarget;
LABEL_13:
      if ( v8 )
      {
        v11 = 0;
        *a2 = *((_DWORD *)v8 + 6);
      }
      else
      {
LABEL_23:
        v11 = -1073741275;
      }
      if ( v7 )
        ReferenceCounted::Release((ReferenceCounted *)(v7 + 8));
    }
    else
    {
      *a2 = v6;
      v11 = 0;
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)(v13 + 40));
    return v11;
  }
  else
  {
    WdLogSingleEntry1(2LL, a1);
    return 3223192373LL;
  }
}
