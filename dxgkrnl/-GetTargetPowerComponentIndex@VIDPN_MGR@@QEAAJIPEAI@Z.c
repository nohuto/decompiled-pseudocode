/*
 * XREFs of ?GetTargetPowerComponentIndex@VIDPN_MGR@@QEAAJIPEAI@Z @ 0x1C01F9A28
 * Callers:
 *     ?_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV?$unique_ptr@VIMonitorDriverInterface@DxgMonitor@@U?$default_delete@VIMonitorDriverInterface@DxgMonitor@@@wistd@@@wistd@@IPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAUDXGKMON_USB4_HOSTROUTER_INFO@@@Z @ 0x1C01F90BC (-_InitializeMonitorNoDriver@DXGMONITOR@@QEAAJ$$QEAV-$unique_ptr@VIMonitorDriverInterface@DxgMoni.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0007E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009534 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 */

__int64 __fastcall VIDPN_MGR::GetTargetPowerComponentIndex(VIDPN_MGR *this, unsigned int a2, unsigned int *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  struct DMMVIDEOPRESENTTARGET *TargetById; // rax
  unsigned int v8; // eax
  unsigned int v9; // edi

  v4 = a2;
  _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)this + 15) + 72LL));
  v6 = *((_QWORD *)this + 15);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v6, a2);
  if ( TargetById )
  {
    v8 = *((_DWORD *)TargetById + 100);
    *a3 = v8;
    if ( v8 == -1 )
      v9 = -1073741811;
    else
      v9 = 0;
  }
  else
  {
    if ( !*((_QWORD *)this + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, v4, *(_QWORD *)(*((_QWORD *)this + 1) + 16LL));
    v9 = -1071774971;
  }
  if ( v6 )
    ReferenceCounted::Release((ReferenceCounted *)(v6 + 64));
  return v9;
}
