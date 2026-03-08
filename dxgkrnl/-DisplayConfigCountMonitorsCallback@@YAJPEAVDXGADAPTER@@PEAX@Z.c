/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C01B9B10
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0003BCC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007840 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C00090C8 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00094C0 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0009800 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C000A1F4 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     MonitorGetMonitorType @ 0x1C017A15C (MonitorGetMonitorType.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C01B9E90 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01D89C4 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  int EmergentSimulatedTarget; // eax
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbx
  _QWORD *v15; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbp
  struct HDXGMONITOR__ *v17; // rcx
  unsigned int v18; // esi
  _QWORD *v20; // rax
  int MonitorType; // eax
  unsigned int v22; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v24[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2358LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != NULL", 2358LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v20[3] = a1;
      v20[4] = *((int *)a1 + 102);
      v20[5] = *((unsigned int *)a1 + 101);
    }
    else
    {
      v2 = v5;
    }
    goto LABEL_20;
  }
  if ( !*((_QWORD *)a1 + 365) )
  {
LABEL_20:
    v18 = v2;
    goto LABEL_17;
  }
  if ( a2[25] )
  {
    v22 = -1;
    EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v22);
    if ( EmergentSimulatedTarget < 0 )
    {
      WdLogSingleEntry3(3LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), EmergentSimulatedTarget);
    }
    else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v22) >= 0
           && (*((_DWORD *)a1 + 109) & 1) != 0 )
    {
      a2[25] = 0;
    }
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v23, v11);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
  v14 = *(_QWORD **)(v11 + 120);
  v15 = (_QWORD *)v14[3];
  if ( v15 != v14 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v15 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v14, i) )
    {
      v17 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 14);
      if ( v17 && !*((_DWORD *)i + 23) )
      {
        v22 = 0;
        MonitorType = MonitorGetMonitorType(v17, &v22, v12, v13);
        if ( MonitorType < 0 )
        {
          WdLogSingleEntry2(3LL, i, MonitorType);
          break;
        }
        ++*(_DWORD *)a2;
        if ( v22 == 1 || v22 == 2 )
        {
          ++*((_DWORD *)a2 + 1);
        }
        else if ( v22 == 5 )
        {
          ++*((_DWORD *)a2 + 2);
        }
      }
    }
  }
  v18 = 0;
  if ( v14 )
    ReferenceCounted::Release((ReferenceCounted *)(v14 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v23 + 40));
LABEL_17:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
  return v18;
}
