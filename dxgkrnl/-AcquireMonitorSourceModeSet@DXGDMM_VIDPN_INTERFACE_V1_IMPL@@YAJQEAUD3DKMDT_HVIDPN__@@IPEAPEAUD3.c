__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireMonitorSourceModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct HDXGMONITOR__ **a3,
        struct D3DKMDT_HMONITORSOURCEMODESET__ **a4)
{
  __int64 v6; // r15
  __int64 v8; // rax
  unsigned int v9; // edi
  VIDPN_MGR *v10; // rdi
  int DmmSourceModeSetInterface; // eax
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct HDXGMONITOR__ *v16; // rdi
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  int v21; // [rsp+50h] [rbp-20h] BYREF
  __int64 v22; // [rsp+58h] [rbp-18h]
  char v23; // [rsp+60h] [rbp-10h]
  struct HDXGMONITOR__ *v24; // [rsp+B0h] [rbp+40h] BYREF
  struct D3DKMDT_HMONITORSOURCEMODESET__ *v25; // [rsp+B8h] [rbp+48h]

  v21 = -1;
  v6 = (unsigned int)a2;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 6038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6038);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 6038);
  if ( !a3 )
  {
    WdLogSingleEntry1(1LL, 4680LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_phMonitorSourceModeSet != NULL",
      4680LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a4 )
  {
    WdLogSingleEntry1(1LL, 4681LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"o_ppDxgDmmMonitorSourceModeSetInterface != NULL",
      4681LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v9 = -1071774973;
    goto LABEL_27;
  }
  v10 = *(VIDPN_MGR **)(v8 + 48);
  v25 = 0LL;
  if ( !*((_QWORD *)v10 + 1) )
    WdLogSingleEntry0(1LL);
  DmmSourceModeSetInterface = MonitorQueryDmmSourceModeSetInterface(*(DXGADAPTER **)(*((_QWORD *)v10 + 1) + 16LL));
  v12 = DmmSourceModeSetInterface;
  if ( DmmSourceModeSetInterface < 0 )
  {
    if ( !*((_QWORD *)v10 + 1) )
      WdLogSingleEntry0(1LL);
    WdLogSingleEntry2(2LL, *(_QWORD *)(*((_QWORD *)v10 + 1) + 16LL), v12);
  }
  v13 = *((_QWORD *)v10 + 15);
  v24 = 0LL;
  _InterlockedIncrement((volatile signed __int32 *)(v13 + 72));
  v14 = *((_QWORD *)v10 + 15);
  v15 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(v14, v6);
  if ( !v15 )
  {
    WdLogSingleEntry1(2LL, v6);
    v9 = -1071774971;
    goto LABEL_25;
  }
  if ( (int)VIDPN_MGR::GetConnectedMonitorHandle(v10, *(_DWORD *)(v15 + 24), &v24) < 0 || (v16 = v24) == 0LL )
  {
    WdLogSingleEntry1(3LL, v6);
    v9 = -1071774920;
LABEL_25:
    if ( v14 )
      ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
    goto LABEL_27;
  }
  if ( v14 )
    ReferenceCounted::Release((ReferenceCounted *)(v14 + 64));
  v17 = v25;
  *a3 = v16;
  v9 = 0;
  *a4 = v17;
LABEL_27:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 )
  {
    LOBYTE(v18) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v21);
  }
  return v9;
}
