/*
 * XREFs of ?PinMode@DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@I_N@Z @ 0x1C0200620
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z @ 0x1C016D024 (-PinVidPnTargetMode@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTARGETMODESET@@I_N@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C016D114 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::PinMode(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        __int64 a3)
{
  char v3; // bp
  __int64 v5; // rsi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]
  char v21; // [rsp+30h] [rbp-18h]

  v19 = -1;
  v3 = a3;
  v20 = 0LL;
  v5 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v21 = 1;
    v19 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 6014);
  }
  else
  {
    v21 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v19, 6014);
  if ( this && *((_DWORD *)this + 32) == 1833173005 )
  {
    v10 = DMMVIDPNTARGETMODESET::PinMode(this, v5, v6, v7);
    if ( v10 < 0 )
    {
      v18 = WdLogNewEntry5_WdTrace(v9, v8, v11, v12);
      *(_QWORD *)(v18 + 24) = v5;
      *(_QWORD *)(v18 + 32) = this;
    }
    else
    {
      v13 = *((_QWORD *)this + 14);
      if ( !v13 )
        WdLogSingleEntry0(1LL);
      if ( !*(_QWORD *)(v13 + 40) )
        WdLogSingleEntry0(1LL);
      v14 = *(_QWORD *)(v13 + 40);
      if ( !*(_QWORD *)(v14 + 72) )
        WdLogSingleEntry0(1LL);
      v10 = VIDPN_MGR::PinVidPnTargetMode(*(VIDPN_MGR **)(*(_QWORD *)(v14 + 72) + 48LL), this, v5, v3);
      if ( v10 < 0 )
        WdLogSingleEntry2(7LL, v5, this);
      else
        v10 = 0;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, this);
    v10 = -1071774967;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v19);
  if ( v21 )
  {
    LOBYTE(v15) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v19);
  }
  return (unsigned int)v10;
}
