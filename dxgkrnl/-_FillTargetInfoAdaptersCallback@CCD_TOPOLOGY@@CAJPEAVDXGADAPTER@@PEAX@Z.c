__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  struct DXGADAPTER *const v10; // rdx
  int v11; // eax
  unsigned int v12; // r9d
  int v13; // ebx
  __int64 v14; // rax
  MONITOR_MGR *v15; // rcx
  int MonitorInformationForTargets; // eax
  __int64 v17; // rdx
  _BYTE v18[8]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v19[64]; // [rsp+38h] [rbp-A0h] BYREF
  _BYTE v20[72]; // [rsp+78h] [rbp-60h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6
      || *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 101)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 102) )
    {
      break;
    }
  }
  v7 = *((_QWORD *)a2 + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( i >= v8 )
    return 0LL;
  v18[1] = 0;
  COREACCESS::COREACCESS((COREACCESS *)v19, a1);
  COREACCESS::COREACCESS((COREACCESS *)v20, v10);
  v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
  v13 = v11;
  if ( v11 < 0 )
  {
    v17 = v11;
    goto LABEL_28;
  }
  if ( !a1 )
    goto LABEL_22;
  v14 = *((_QWORD *)a1 + 365);
  if ( !v14 )
  {
    WdLogSingleEntry1(2LL, a1);
    MonitorInformationForTargets = -1073741275;
    goto LABEL_17;
  }
  v15 = *(MONITOR_MGR **)(v14 + 112);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, a1);
LABEL_22:
    MonitorInformationForTargets = -1073741811;
    goto LABEL_17;
  }
  MonitorInformationForTargets = MONITOR_MGR::_GetMonitorInformationForTargets(
                                   v15,
                                   (int (__high *)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8))&CCD_TOPOLOGY::_FillTargetInfoMonitorsCallback,
                                   a2,
                                   v12);
LABEL_17:
  v13 = 0;
  if ( MonitorInformationForTargets != -1073741275 )
    v13 = MonitorInformationForTargets;
  if ( v13 >= 0 )
    goto LABEL_20;
  v17 = v13;
LABEL_28:
  WdLogSingleEntry5(2LL, v17, a1, *((int *)a1 + 102), *((unsigned int *)a1 + 101), *((_QWORD *)a2 + 8));
LABEL_20:
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  return (unsigned int)v13;
}
