/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C017C160
 * Callers:
 *     <none>
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0002DEC (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C0002E98 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0004FC0 (DxgkLogInternalTriageEvent.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C00072BC (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00074F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0008770 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C000A4DC (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000AFB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0023E40 (__security_check_cookie.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C017C4E0 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     MonitorGetMonitorType @ 0x1C0193A34 (MonitorGetMonitorType.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C01E5AA4 (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
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
  _QWORD *v12; // rbx
  _QWORD *v13; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbp
  struct HDXGMONITOR__ *v15; // rcx
  unsigned int v16; // esi
  _QWORD *v18; // rax
  int MonitorType; // eax
  unsigned int v20; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+58h] [rbp-C0h] BYREF
  _BYTE v22[144]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 2358LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pContext != NULL", 2358LL, 0LL, 0LL, 0LL, 0LL);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
      v18[3] = a1;
      v18[4] = *((int *)a1 + 102);
      v18[5] = *((unsigned int *)a1 + 101);
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
    v16 = v2;
    goto LABEL_17;
  }
  if ( a2[25] )
  {
    v20 = -1;
    EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v20);
    if ( EmergentSimulatedTarget < 0 )
    {
      WdLogSingleEntry3(3LL, *((int *)a1 + 102), *((unsigned int *)a1 + 101), EmergentSimulatedTarget);
    }
    else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v20) >= 0
           && (*((_DWORD *)a1 + 109) & 1) != 0 )
    {
      a2[25] = 0;
    }
  }
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 365) + 104LL);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v21, v11);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v11 + 120) + 72LL));
  v12 = *(_QWORD **)(v11 + 120);
  v13 = (_QWORD *)v12[3];
  if ( v13 != v12 + 3 )
  {
    for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v13 - 1);
          i;
          i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v12, i) )
    {
      v15 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 14);
      if ( v15 && !*((_DWORD *)i + 23) )
      {
        v20 = 0;
        MonitorType = MonitorGetMonitorType(v15);
        if ( MonitorType < 0 )
        {
          WdLogSingleEntry2(3LL, i, MonitorType);
          break;
        }
        ++*(_DWORD *)a2;
        if ( v20 == 1 || v20 == 2 )
        {
          ++*((_DWORD *)a2 + 1);
        }
        else if ( v20 == 5 )
        {
          ++*((_DWORD *)a2 + 2);
        }
      }
    }
  }
  v16 = 0;
  if ( v12 )
    ReferenceCounted::Release((ReferenceCounted *)(v12 + 8));
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v21 + 40));
LABEL_17:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
  return v16;
}
