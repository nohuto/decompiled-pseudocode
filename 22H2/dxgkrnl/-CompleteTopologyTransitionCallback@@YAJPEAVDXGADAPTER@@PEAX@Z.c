/*
 * XREFs of ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00EA400
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z @ 0x1C00027F8 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEAD@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C0002910 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     MonitorIsMonitorConnected @ 0x1C00E67DC (MonitorIsMonitorConnected.c)
 *     ?DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z @ 0x1C012F130 (-DmmGetVideoOutputTechnology@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@1@Z.c)
 *     ?DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z @ 0x1C012F308 (-DmmEnumClientVidPnPathTargetsFromSource@@YAJQEAXI_KQEAI@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0149638 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C02F3754 (MonitorCreateSimulatedMonitor.c)
 */

__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rax
  unsigned int v11; // esi
  unsigned __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rdx
  MONITOR_MGR *v15; // rcx
  __int64 v16; // rax
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-99h]
  int v28; // [rsp+30h] [rbp-89h]
  _BYTE v29[4]; // [rsp+40h] [rbp-79h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-75h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v31; // [rsp+48h] [rbp-71h] BYREF
  _BYTE v32[144]; // [rsp+50h] [rbp-69h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, a1, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v32, (unsigned int)(v5 + 1));
  v9 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
      v18[3] = a1;
      v18[4] = *((int *)a1 + 80);
      v18[5] = *((unsigned int *)a1 + 79);
    }
    else
    {
      v9 = v6;
    }
  }
  else
  {
    v10 = *((_QWORD *)a1 + 337);
    if ( v10 )
    {
      v11 = 0;
      if ( *(_DWORD *)(v10 + 80) )
      {
        do
        {
          v30 = -1;
          v12 = 0LL;
          while ( 1 )
          {
            v13 = DmmEnumClientVidPnPathTargetsFromSource(a1, v11, v12++, &v30);
            if ( v13 < 0 || v30 == -1 )
              break;
            v31 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(a1, v30, 0LL, &v31);
            if ( v31 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                v23 = WdLogNewEntry5_WdAssertion(v20, v19);
                *(_QWORD *)(v23 + 24) = 7547LL;
                WdLogEvent5_WdAssertion(v23);
              }
              *a2 = *(_QWORD *)((char *)a1 + 316);
            }
            v29[0] = 0;
            if ( (int)MonitorIsMonitorConnected((__int64)a1, v30, 0, v29) >= 0 && !v29[0] )
            {
              v24 = WdLogNewEntry5_WdTrace(v22, v21);
              *(_QWORD *)(v24 + 24) = a1;
              *(_QWORD *)(v24 + 32) = v30;
              MonitorCreateSimulatedMonitor(a1, v27, 0, v28, (__int64)v2);
            }
          }
          ++v11;
        }
        while ( v11 < *(_DWORD *)(*((_QWORD *)a1 + 337) + 80LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v15, v14);
        WdLogEvent5_WdAssertion(v25);
      }
      v16 = *((_QWORD *)a1 + 337);
      if ( v16 && (v15 = *(MONITOR_MGR **)(v16 + 96)) != 0LL )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v15, v2);
      }
      else
      {
        v26 = WdLogNewEntry5_WdError(v15, v14);
        *(_QWORD *)(v26 + 24) = a1;
        WdLogEvent5_WdError(v26);
      }
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32, v7);
  return v9;
}
