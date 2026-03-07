__int64 __fastcall CompleteTopologyTransitionCallback(struct DXGADAPTER *a1, _QWORD *a2)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v2; // r12
  int v5; // r8d
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // esi
  unsigned __int64 v14; // r15
  unsigned __int64 v15; // r8
  __int64 v16; // rax
  MONITOR_MGR *v17; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD *v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-A9h]
  int v26; // [rsp+30h] [rbp-99h]
  _BYTE v27[4]; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-75h] BYREF
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v29; // [rsp+58h] [rbp-71h] BYREF
  _BYTE v30[144]; // [rsp+60h] [rbp-69h] BYREF

  v2 = (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a2[1];
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v30, a1, 0LL);
  v6 = COREADAPTERACCESS::AcquireExclusive((__int64)v30, (unsigned int)(v5 + 1));
  v11 = 0;
  if ( v6 < 0 )
  {
    if ( v6 == -1073741130 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
      v23[3] = a1;
      v23[4] = *((int *)a1 + 102);
      v23[5] = *((unsigned int *)a1 + 101);
    }
    else
    {
      v11 = v6;
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 365);
    if ( v12 )
    {
      v13 = 0;
      if ( *(_DWORD *)(v12 + 96) )
      {
        do
        {
          v28 = -1;
          v14 = 0LL;
          while ( 1 )
          {
            v15 = v14++;
            if ( (int)DmmEnumClientVidPnPathTargetsFromSource(a1, v13, v15, &v28) < 0 || v28 == -1 )
              break;
            v29 = D3DKMDT_VOT_UNINITIALIZED;
            DmmGetVideoOutputTechnology(a1, v28, 0LL, &v29);
            if ( v29 == D3DKMDT_VOT_MIRACAST )
            {
              if ( *(_DWORD *)a2 || *((_DWORD *)a2 + 1) )
              {
                WdLogSingleEntry1(1LL, 7949LL);
                DxgkLogInternalTriageEvent(
                  0LL,
                  262146,
                  -1,
                  (__int64)L"(pTransContext->ActiveMiracastAdapterLuid.LowPart == 0) && (pTransContext->ActiveMiracastAdap"
                            "terLuid.HighPart == 0)",
                  7949LL,
                  0LL,
                  0LL,
                  0LL,
                  0LL);
              }
              *a2 = *(_QWORD *)((char *)a1 + 404);
            }
            v27[0] = 0;
            if ( (int)MonitorIsMonitorConnected(a1, v28, 0LL, v27) >= 0 && !v27[0] )
            {
              v24 = WdLogNewEntry5_WdTrace(v20, v19, v21, v22);
              *(_QWORD *)(v24 + 24) = a1;
              *(_QWORD *)(v24 + 32) = v28;
              MonitorCreateSimulatedMonitor(a1, v25, 0, v26, (__int64)v2);
            }
          }
          ++v13;
        }
        while ( v13 < *(_DWORD *)(*((_QWORD *)a1 + 365) + 96LL) );
      }
      if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
        WdLogSingleEntry0(1LL);
      v16 = *((_QWORD *)a1 + 365);
      if ( v16 && (v17 = *(MONITOR_MGR **)(v16 + 112)) != 0LL )
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(v17, v2);
      else
        WdLogSingleEntry1(2LL, a1);
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v30);
  return v11;
}
