/*
 * XREFs of ?_MonitorEventHandler@VIDPN_MGR@@SAJPEAXI0W4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E72A0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00045F8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00094F4 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     ??1?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ @ 0x1C0025E48 (--1-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@XZ.c)
 *     ?LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z @ 0x1C0068CEC (-LogMonitorPlugUnplugEvent@DMMVIDEOPRESENTTARGET@@QEAAEKI@Z.c)
 *     ?InvalidateCache@QDC_CACHE@@QEAAX_N@Z @ 0x1C017586C (-InvalidateCache@QDC_CACHE@@QEAAX_N@Z.c)
 *     _VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK @ 0x1C01DD790 (_VIDPN_MGR--_MonitorEventHandler_--_2_--_AUTO_PERFTRACK--__AUTO_PERFTRACK.c)
 *     ?PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E3544 (-PowerOnOffVidPnTarget@VIDPN_MGR@@QEAAJIW4MONITOR_EVENT@@W4MONITOR_POWER_EVENT_PARAM@@PEAU_DXGK_.c)
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z @ 0x1C0213B3C (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI_KW4MONITOR_EVENT@@@Z.c)
 *     ?RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0216630 (-RequestAsyncMonitorEventCallout@ADAPTER_DISPLAY@@QEAAJIW4MONITOR_EVENT@@_KEPEAU_DXGK_DISPLAY_SC.c)
 */

__int64 __fastcall VIDPN_MGR::_MonitorEventHandler(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        signed int a4,
        __int64 a5,
        unsigned int a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v7; // r13
  unsigned int v8; // esi
  unsigned int v9; // ebx
  __int64 v11; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r8
  __int64 v18; // rdx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  DMMVIDEOPRESENTTARGET *v24; // rax
  unsigned int v25; // r11d
  struct DXGGLOBAL *Global; // rax
  __int64 v27; // r8
  __int64 v28; // r9
  _QWORD *v29; // rbp
  unsigned int *NextTarget; // rbp
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v31; // r15
  int v32; // eax
  unsigned int v33; // eax
  signed int v35; // [rsp+30h] [rbp-38h] BYREF
  __int64 v36; // [rsp+38h] [rbp-30h]
  unsigned __int64 v37; // [rsp+40h] [rbp-28h]
  int v38; // [rsp+48h] [rbp-20h]

  v7 = a5;
  v8 = 0;
  v9 = a6;
  v11 = a4;
  v35 = a4;
  v36 = a5;
  LOBYTE(v38) = 1;
  v37 = __PAIR64__(a2, a6);
  if ( (unsigned int)a4 <= 3 || (unsigned int)(a4 - 7) <= 5 )
  {
    if ( !a1 )
    {
      WdLogSingleEntry0(2LL);
      v8 = -1071775742;
      goto LABEL_79;
    }
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
      WdLogSingleEntry0(1LL);
    if ( !*(_QWORD *)(a1 + 2920) )
      WdLogSingleEntry0(1LL);
    v15 = *(_QWORD *)(a1 + 2920);
    v16 = *(_QWORD *)(v15 + 104);
    if ( !v16 )
    {
      WdLogSingleEntry1(2LL, a1);
      v8 = -1071774923;
      goto LABEL_79;
    }
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5, *(_QWORD *)(v15 + 104));
    if ( (int)v11 <= 8 )
    {
      if ( (_DWORD)v11 != 8 )
      {
        if ( !(_DWORD)v11 )
          goto LABEL_19;
        if ( (_DWORD)v11 == 1 )
        {
          v8 = VIDPN_MGR::OnMonitorConnectionChanged(v16, a2, v17, 1LL);
          if ( !*(_DWORD *)(v16 + 536) )
            ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
              *(_QWORD *)(a1 + 2920),
              a2,
              (unsigned int)v11,
              v7,
              1,
              a7,
              v35,
              v36,
              v37,
              v38);
          goto LABEL_78;
        }
        if ( (_DWORD)v11 != 2 )
        {
          if ( (_DWORD)v11 != 3 )
          {
            if ( (_DWORD)v11 == 7 )
            {
LABEL_19:
              v18 = a2;
              if ( a2 == -1 )
              {
                if ( (_DWORD)v11 )
                  WdLogSingleEntry0(1LL);
                v19 = (_QWORD *)(*(_QWORD *)(v16 + 120) + 24LL);
                v20 = (_QWORD *)*v19;
                if ( (_QWORD *)*v19 == v19
                  || v20 == (_QWORD *)8
                  || (v18 = *((unsigned int *)v20 + 4), (_DWORD)v18 == -1) )
                {
                  WdLogSingleEntry1(2LL, v16);
                  v8 = -1071774971;
LABEL_78:
                  EXCLUSIVEACCESS<VIDPN_MGR>::~EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&a5);
                  goto LABEL_79;
                }
              }
              v8 = VIDPN_MGR::OnMonitorConnectionChanged(v16, v18, v17, (unsigned int)v11);
              if ( !*(_DWORD *)(v16 + 536)
                && !(_DWORD)v11
                && !*(_BYTE *)(a1 + 2833)
                && (unsigned __int64)(v7 - 1) <= 4
                && v9 - 1 <= 2 )
              {
                _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 120) + 72LL));
                v23 = *(_QWORD *)(v16 + 120);
                v24 = (DMMVIDEOPRESENTTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v23, a2);
                if ( v24
                  && DMMVIDEOPRESENTTARGET::LogMonitorPlugUnplugEvent(
                       v24,
                       *(_DWORD *)(v16 + 540),
                       *(_DWORD *)(v16 + 544)) )
                {
                  v25 = 6;
                  v7 = 0LL;
                }
                ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
                  *(_QWORD *)(a1 + 2920),
                  a2,
                  v25,
                  v7,
                  1,
                  a7,
                  v35,
                  v36,
                  v37,
                  v38);
                LOBYTE(v38) = 0;
                if ( v23 )
                  ReferenceCounted::Release((ReferenceCounted *)(v23 + 64));
              }
LABEL_46:
              Global = DXGGLOBAL::GetGlobal();
              QDC_CACHE::InvalidateCache(*((QDC_CACHE **)Global + 187), 0LL, v27, v28);
              goto LABEL_78;
            }
            goto LABEL_64;
          }
          if ( a2 == -1 )
            WdLogSingleEntry0(1LL);
          if ( *(_DWORD *)(v16 + 536) )
            goto LABEL_78;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 120) + 72LL));
          v21 = *(_QWORD **)(v16 + 120);
          v22 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById((__int64)v21, a2);
          if ( v22 && *(_QWORD *)(v22 + 112) )
            ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
              *(_QWORD *)(a1 + 2920),
              a2,
              (unsigned int)v11,
              v7,
              0,
              a7,
              v35,
              v36,
              v37,
              v38);
LABEL_32:
          if ( v21 )
            ReferenceCounted::Release((ReferenceCounted *)(v21 + 8));
          goto LABEL_78;
        }
      }
      if ( (unsigned int)v7 > 3 )
      {
        WdLogSingleEntry1(2LL, v7);
LABEL_65:
        v8 = -1073741811;
        goto LABEL_78;
      }
      if ( *(int *)(*(_QWORD *)(*(_QWORD *)(a1 + 2920) + 16LL) + 2820LL) < 1105 && a2 == -1 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v16 + 120) + 72LL));
        v21 = *(_QWORD **)(v16 + 120);
        v29 = (_QWORD *)v21[3];
        if ( v29 != v21 + 3 )
        {
          NextTarget = (unsigned int *)(v29 - 1);
          if ( NextTarget )
          {
            v31 = a7;
            do
            {
              v32 = VIDPN_MGR::PowerOnOffVidPnTarget(v16, 0xFFFFFFFF, v11, v7, v31);
              v8 = v32;
              if ( v32 < 0 )
                WdLogSingleEntry2(2LL, NextTarget[6], v32);
              NextTarget = (unsigned int *)DMMVIDEOPRESENTTARGETSET::GetNextTarget(
                                             (DMMVIDEOPRESENTTARGETSET *)v21,
                                             (const struct DMMVIDEOPRESENTTARGET *const)NextTarget);
            }
            while ( NextTarget );
          }
        }
        goto LABEL_32;
      }
      v33 = VIDPN_MGR::PowerOnOffVidPnTarget(v16, a2, v11, v7, a7);
LABEL_59:
      v8 = v33;
      goto LABEL_78;
    }
    switch ( (_DWORD)v11 )
    {
      case 9:
        if ( a2 == -1 )
          WdLogSingleEntry0(1LL);
        if ( *(_DWORD *)(v16 + 536) )
          goto LABEL_78;
        break;
      case 0xA:
        if ( a2 == -1 )
          WdLogSingleEntry0(1LL);
        v8 = VIDPN_MGR::OnMonitorConnectionChanged(v16, a2, v17, (unsigned int)v11);
        ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
          *(_QWORD *)(a1 + 2920),
          a2,
          (unsigned int)v11,
          v7,
          1,
          a7,
          v35,
          v36,
          v37,
          v38);
        goto LABEL_46;
      case 0xB:
        if ( a2 == -1 )
          WdLogSingleEntry0(1LL);
        v33 = VIDPN_MGR::OnMonitorConnectionChanged(v16, a2, v17, (unsigned int)v11);
        goto LABEL_59;
      case 0xC:
        if ( a2 == -1 )
          WdLogSingleEntry0(1LL);
        break;
      default:
LABEL_64:
        WdLogSingleEntry1(2LL, v11);
        goto LABEL_65;
    }
    ADAPTER_DISPLAY::RequestAsyncMonitorEventCallout(
      *(_QWORD *)(a1 + 2920),
      a2,
      (unsigned int)v11,
      v7,
      0,
      a7,
      v35,
      v36,
      v37,
      v38);
    goto LABEL_78;
  }
  WdLogSingleEntry1(2LL, a4);
  v8 = -1073741811;
LABEL_79:
  VIDPN_MGR::_MonitorEventHandler_::_2_::_AUTO_PERFTRACK::__AUTO_PERFTRACK((__int64)&v35, v13, v14);
  return v8;
}
