/*
 * XREFs of ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E3544
 * Callers:
 *     ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E72A0 (-_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXG.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01676B0 (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkStatusChangeNotify @ 0x1C0172E00 (DxgkStatusChangeNotify.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0173EE4 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C01E37E4 (-SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::PowerOnOffVidPnTarget(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v9; // r13
  int v10; // ebx
  unsigned __int8 v11; // si
  char v12; // r15
  _QWORD *v13; // rbx
  _QWORD *v14; // r14
  unsigned int *i; // r14
  __int64 v16; // rcx
  unsigned __int8 v17; // al
  int v18; // eax
  __int64 v19; // rsi
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v20; // r14
  unsigned int j; // ebx
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // esi
  __int64 v25; // rdx
  __int64 v26; // r8
  int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rbx
  char v31[8]; // [rsp+50h] [rbp-B0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v32; // [rsp+58h] [rbp-A8h]
  _QWORD v33[2]; // [rsp+60h] [rbp-A0h] BYREF
  _DWORD v34[68]; // [rsp+70h] [rbp-90h] BYREF

  v32 = a5;
  v9 = a2;
  WdLogSingleEntry2(7LL, a2, a1);
  if ( *(struct _KTHREAD **)(a1 + 64) != KeGetCurrentThread() )
    WdLogSingleEntry0(1LL);
  if ( a4 )
  {
    v10 = a4 - 1;
    if ( v10 )
    {
      v28 = v10 - 1;
      if ( v28 )
      {
        if ( v28 != 1 )
        {
          WdLogSingleEntry3(2LL, v9, a1, -1073741811LL);
          return 3221225485LL;
        }
        v11 = 0;
      }
      else
      {
        v11 = 1;
      }
      v12 = 0;
    }
    else
    {
      v11 = 0;
      v12 = 1;
    }
  }
  else
  {
    v11 = 1;
    v12 = 1;
  }
  if ( a2 == -1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 120) + 72LL));
    v13 = *(_QWORD **)(a1 + 120);
    v14 = (_QWORD *)v13[3];
    if ( v14 != v13 + 3 )
    {
      for ( i = (unsigned int *)(v14 - 1);
            i;
            i = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                  (DMMVIDEOPRESENTTARGETSET *)v13,
                                  (const struct DMMVIDEOPRESENTTARGET *const)i) )
      {
        if ( a3 != 8 || v11 || !i[23] )
          VIDPN_MGR::SetTargetOwnership(a1, i[6], (v11 ^ 1u) + 1);
      }
    }
    if ( v13 )
      ReferenceCounted::Release((ReferenceCounted *)(v13 + 8));
  }
  else
  {
    VIDPN_MGR::SetTargetOwnership(a1, a2, (v11 ^ 1u) + 1);
  }
  if ( v12 )
  {
    memset(v34, 0, 0x104uLL);
    v31[0] = 0;
    if ( !*(_QWORD *)(a1 + 8) )
      WdLogSingleEntry0(1LL);
    v16 = *(_QWORD *)(a1 + 8);
    if ( !*(_QWORD *)(*(_QWORD *)(v16 + 16) + 2928LL) )
      goto LABEL_21;
    if ( !v16 )
      WdLogSingleEntry0(1LL);
    v17 = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 2928LL) + 756LL) )
LABEL_21:
      v17 = 1;
    v18 = VIDPN_MGR::SetTimingsFromVidPn(
            (VIDPN_MGR *)a1,
            0,
            4u,
            0LL,
            (struct D3DKMT_VIDPN_SOURCE_MASKS *)v34,
            v31,
            v17,
            0LL,
            0LL);
    v19 = v18;
    if ( v18 < 0 )
    {
      v31[0] = 2;
      if ( !*(_QWORD *)(a1 + 8) )
        WdLogSingleEntry0(1LL);
      v29 = *(_QWORD *)(a1 + 8);
      v30 = *(unsigned int *)(*(_QWORD *)(v29 + 16) + 404LL);
      if ( !v29 )
        WdLogSingleEntry0(1LL);
      WdLogSingleEntry4(2LL, v9, *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 408LL), v30, v19);
    }
    v20 = v32;
    if ( v34[6] )
    {
      for ( j = 0; ; ++j )
      {
        if ( !*(_QWORD *)(a1 + 8) )
          WdLogSingleEntry0(1LL);
        v22 = *(_QWORD *)(a1 + 8);
        if ( j >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 16) + 2920LL) + 96LL) )
          break;
        v23 = v34[6];
        if ( _bittest(&v23, j) )
        {
          v24 = v34[j + 22];
          if ( !v22 )
            WdLogSingleEntry0(1LL);
          DisplayRestoreVidPnResult(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 404LL), j, 3LL, v24, v20);
        }
      }
    }
    if ( !*(_QWORD *)(a1 + 8) )
      WdLogSingleEntry0(1LL);
    DmmHandleSetTimingsResult(
      *(ADAPTER_DISPLAY ***)(*(_QWORD *)(a1 + 8) + 16LL),
      (struct _DMM_SET_TIMING_RESULT *)v31,
      v20);
    v33[0] = 1LL;
    v33[1] = 0LL;
    if ( (int)DxgkStatusChangeNotify((int *)v33, v25, v26) < 0 )
      WdLogSingleEntry0(1LL);
  }
  return 0LL;
}
