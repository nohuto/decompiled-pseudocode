/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C013D450
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0007CC0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0007D7C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z @ 0x1C0007DF0 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEAD@Z.c)
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C013D77C (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C013D7F0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rcx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rbx
  __int64 v14; // rax
  MONITOR_MGR *v15; // rcx
  int MonitorInformationForTargets; // eax
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _BYTE v20[144]; // [rsp+20h] [rbp-A8h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6 )
      break;
    if ( *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 79)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 80) )
    {
      v5 = *((_QWORD *)a2 + 8);
      break;
    }
  }
  if ( v5 )
    v7 = *(_WORD *)(v5 + 20);
  else
    v7 = 0;
  if ( i >= v7 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v20, a1, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v20, 0LL);
  v13 = v9;
  if ( v9 < 0 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
    v17[3] = v13;
    goto LABEL_29;
  }
  if ( !a1 )
    goto LABEL_22;
  v14 = *((_QWORD *)a1 + 337);
  if ( !v14 )
  {
    v18 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v18 + 24) = a1;
    WdLogEvent5_WdError(v18);
    MonitorInformationForTargets = -1073741275;
    goto LABEL_18;
  }
  v15 = *(MONITOR_MGR **)(v14 + 96);
  if ( !v15 )
  {
    v19 = WdLogNewEntry5_WdError(0LL, v10);
    *(_QWORD *)(v19 + 24) = a1;
    WdLogEvent5_WdError(v19);
LABEL_22:
    MonitorInformationForTargets = -1073741811;
    goto LABEL_18;
  }
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   v15,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
                                   a2,
                                   v12);
LABEL_18:
  LODWORD(v13) = 0;
  if ( MonitorInformationForTargets != -1073741275 )
    LODWORD(v13) = MonitorInformationForTargets;
  if ( (int)v13 >= 0 )
    goto LABEL_21;
  v17 = (_QWORD *)WdLogNewEntry5_WdError(v11, v10);
  v17[3] = (int)v13;
LABEL_29:
  v17[4] = a1;
  v17[5] = *((int *)a1 + 80);
  v17[6] = *((unsigned int *)a1 + 79);
  v17[7] = *((_QWORD *)a2 + 8);
  WdLogEvent5_WdError(v17);
LABEL_21:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v20, v10);
  return (unsigned int)v13;
}
