__int64 __fastcall DXGDMM_INTERFACE_V1_IMPL::IsUsingDefaultMonitorProfile(
        DXGDMM_INTERFACE_V1_IMPL *this,
        void *const a2,
        __int64 a3,
        unsigned __int8 *a4)
{
  __int64 v6; // rsi
  __int64 IsUsingDefaultMonitorProfile; // rbx
  __int64 v8; // rax
  VIDPN_MGR *v9; // r14
  int ConnectedMonitorHandle; // eax
  struct HDXGMONITOR__ *v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // r8
  int v15; // [rsp+50h] [rbp-20h] BYREF
  __int64 v16; // [rsp+58h] [rbp-18h]
  char v17; // [rsp+60h] [rbp-10h]
  struct HDXGMONITOR__ *v18; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+48h] BYREF

  v15 = -1;
  v16 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 6056;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6056);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 6056);
  if ( !a3 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    LODWORD(IsUsingDefaultMonitorProfile) = -1073741811;
    goto LABEL_24;
  }
  if ( !this )
  {
    WdLogSingleEntry1(2LL, 0LL);
LABEL_13:
    LODWORD(IsUsingDefaultMonitorProfile) = -1071775742;
    goto LABEL_24;
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    WdLogSingleEntry0(1LL);
  v8 = *((_QWORD *)this + 365);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Caller specified adapter handle 0x%I64x is a render only adapter.",
      (__int64)this,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_13;
  }
  v9 = *(VIDPN_MGR **)(v8 + 104);
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>((__int64)&v19, (__int64)v9);
  v18 = 0LL;
  ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v9, v6, &v18);
  LODWORD(IsUsingDefaultMonitorProfile) = ConnectedMonitorHandle;
  if ( ConnectedMonitorHandle == -1073741275 )
  {
    WdLogSingleEntry2(2LL, v6, this);
    LODWORD(IsUsingDefaultMonitorProfile) = -1071774920;
  }
  else if ( ConnectedMonitorHandle >= 0 )
  {
    v11 = v18;
    if ( !v18 )
      WdLogSingleEntry0(1LL);
    IsUsingDefaultMonitorProfile = (int)MonitorIsUsingDefaultMonitorProfile(v11, a3);
    VIDPN_MGR::ReleaseMonitorHandle(v9, v11);
    if ( (int)IsUsingDefaultMonitorProfile >= 0 )
      LODWORD(IsUsingDefaultMonitorProfile) = 0;
    else
      WdLogSingleEntry2(2LL, v11, IsUsingDefaultMonitorProfile);
  }
  else
  {
    WdLogSingleEntry3(2LL, v6, this, ConnectedMonitorHandle);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v19 + 40));
LABEL_24:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v12) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v12, &EventProfilerExit, v13, v15);
  }
  return (unsigned int)IsUsingDefaultMonitorProfile;
}
