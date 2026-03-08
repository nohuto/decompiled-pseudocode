/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01E37E4
 * Callers:
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E3544 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C0172E00 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  _QWORD v12[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a3;
  v5 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    WdLogSingleEntry0(1LL);
  v6 = v5;
  WdLogSingleEntry3(7LL, v5, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v3);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
  v7 = *(_QWORD *)(a1 + 120);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v7, v5);
  if ( TargetById )
  {
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    v12[1] = 0LL;
    *((_DWORD *)TargetById + 30) = v3;
    v12[0] = 1LL;
    if ( (int)DxgkStatusChangeNotify((int *)v12, v8, v9) < 0 )
      WdLogSingleEntry0(1LL);
    return 0LL;
  }
  else
  {
    if ( !*(_QWORD *)(a1 + 8) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v6, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL));
    if ( v7 )
      ReferenceCounted::Release((ReferenceCounted *)(v7 + 64));
    return 3223192325LL;
  }
}
