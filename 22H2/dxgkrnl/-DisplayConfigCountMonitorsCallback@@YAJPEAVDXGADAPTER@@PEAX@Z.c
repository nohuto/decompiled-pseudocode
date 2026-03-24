/*
 * XREFs of ?DisplayConfigCountMonitorsCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C012F620
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0003960 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0006454 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0009550 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z @ 0x1C00097F0 (-GetNextTarget@DMMVIDEOPRESENTTARGETSET@@QEBAPEBVDMMVIDEOPRESENTTARGET@@QEBV2@@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C012F7F0 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     MonitorGetMonitorType @ 0x1C01356A8 (MonitorGetMonitorType.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C016264C (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall DisplayConfigCountMonitorsCallback(struct DXGADAPTER *a1, _BYTE *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int EmergentSimulatedTarget; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *v16; // rbp
  const struct DMMVIDEOPRESENTTARGET *i; // rbp
  struct HDXGMONITOR__ *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v21; // rax
  int MonitorType; // eax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rax
  __int64 v29; // rax
  unsigned int v30; // [rsp+20h] [rbp-C8h] BYREF
  int v31; // [rsp+24h] [rbp-C4h]
  __int64 v32; // [rsp+28h] [rbp-C0h] BYREF
  _BYTE v33[144]; // [rsp+30h] [rbp-B8h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, 0LL);
    *(_QWORD *)(v27 + 24) = 2349LL;
    WdLogEvent5_WdAssertion(v27);
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v33, a1, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v33, 0LL);
  if ( v5 < 0 )
  {
    if ( v5 == -1073741130 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6);
      v21[3] = a1;
      v21[4] = *((int *)a1 + 80);
      v21[5] = *((unsigned int *)a1 + 79);
    }
    else
    {
      v2 = v5;
    }
  }
  else if ( *((_QWORD *)a1 + 337) )
  {
    if ( a2[25] )
    {
      v30 = -1;
      EmergentSimulatedTarget = DmmGetEmergentSimulatedTarget(a1, &v30);
      v12 = EmergentSimulatedTarget;
      if ( EmergentSimulatedTarget < 0 )
      {
        v28 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, v9, v11);
        v28[3] = *((int *)a1 + 80);
        v28[4] = *((unsigned int *)a1 + 79);
        v28[5] = v12;
        WdLogEvent5_WdWarning(v28);
      }
      else if ( (int)MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a2, a1, v30) >= 0
             && (*((_DWORD *)a1 + 87) & 1) != 0 )
      {
        a2[25] = 0;
      }
    }
    v13 = *(_QWORD *)(*((_QWORD *)a1 + 337) + 88LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v32, v13);
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v13 + 80) + 72LL));
    v15 = *(_QWORD **)(v13 + 80);
    v16 = (_QWORD *)v15[3];
    if ( v16 != v15 + 3 )
    {
      for ( i = (const struct DMMVIDEOPRESENTTARGET *)(v16 - 1);
            i;
            i = DMMVIDEOPRESENTTARGETSET::GetNextTarget((DMMVIDEOPRESENTTARGETSET *)v15, i) )
      {
        v18 = (struct HDXGMONITOR__ *)*((_QWORD *)i + 14);
        if ( v18 && !*((_DWORD *)i + 22) )
        {
          v31 = 0;
          MonitorType = MonitorGetMonitorType(v18);
          v26 = MonitorType;
          if ( MonitorType < 0 )
          {
            v29 = WdLogNewEntry5_WdWarning(v24, v23, v25);
            *(_QWORD *)(v29 + 24) = i;
            *(_QWORD *)(v29 + 32) = v26;
            WdLogEvent5_WdWarning(v29);
            break;
          }
          ++*(_DWORD *)a2;
          if ( v31 > 0 )
          {
            if ( v31 > 2 )
            {
              if ( v31 == 5 )
                ++*((_DWORD *)a2 + 2);
            }
            else
            {
              ++*((_DWORD *)a2 + 1);
            }
          }
        }
      }
    }
    ReferenceCounted::Release((ReferenceCounted *)(v15 + 8), v14);
    DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v32 + 40), v19);
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v33, v6);
  return v2;
}
