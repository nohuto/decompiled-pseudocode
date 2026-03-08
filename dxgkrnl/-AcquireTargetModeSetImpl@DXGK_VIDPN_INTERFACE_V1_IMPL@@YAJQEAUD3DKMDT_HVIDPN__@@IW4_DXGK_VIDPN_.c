/*
 * XREFs of ?AcquireTargetModeSetImpl@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C03B35DC
 * Callers:
 *     ?AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C02250F0 (-AcquireTargetModeSet@DXGK_VIDPN_INTERFACE_V2_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVI.c)
 * Callees:
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x1C0007F20 (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0007F60 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F94 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     ?QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXW4_DXGK_VIDPN_INTERFACE_VERSION@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01A078C (-QueryDxgMiniportVidPnTargetModeSetInterface@VIDPN_MGR@@QEAAXW4_DXGK_VIDPN_INTERFACE_VERSION@@PE.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSetImpl(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct DMMVIDPNTARGETMODESET **a4,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a5)
{
  enum _DXGK_VIDPN_INTERFACE_VERSION v6; // r13d
  __int64 v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rax
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v14; // r14
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 v17; // rsi
  VIDPN_MGR *v18; // rcx
  DMMVIDPNTARGET *v19; // rax
  struct DMMVIDPNTARGETMODESET *v20; // rax
  struct DMMVIDPNTARGETMODESET *v21; // rbx
  struct D3DKMDT_HVIDPNTARGETMODESET__ **v22; // rax
  __int64 v23; // rcx
  __int64 v24; // r8
  int v26; // [rsp+20h] [rbp-20h] BYREF
  __int64 v27; // [rsp+28h] [rbp-18h]
  char v28; // [rsp+30h] [rbp-10h]

  v26 = -1;
  v27 = 0LL;
  v6 = (int)a3;
  v7 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v28 = 1;
    v26 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7048);
  }
  else
  {
    v28 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v26, 7048);
  v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
  v14 = a5;
  v13[3] = this;
  v13[4] = v7;
  v13[5] = a4;
  v13[6] = v14;
  if ( a4 && v14 )
  {
    *a4 = 0LL;
    *v14 = 0LL;
    v16 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v17 = v16;
    if ( v16 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v16 + 96), v7) )
        WdLogSingleEntry2(2LL, v7, v17);
      v18 = *(VIDPN_MGR **)(v17 + 48);
      a5 = 0LL;
      VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        v18,
        v6,
        (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **)&a5);
      v19 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v17 + 312), v7);
      if ( v19 )
      {
        v20 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v19);
        v21 = v20;
        if ( v20 )
        {
          if ( v20 == (struct DMMVIDPNTARGETMODESET *)-137LL )
            v21 = 0LL;
        }
        else
        {
          WdLogSingleEntry0(1LL);
        }
        v22 = a5;
        *a4 = v21;
        v15 = 0;
        *v14 = (struct D3DKMDT_HVIDPNTARGETMODESET__ *)v22;
      }
      else
      {
        WdLogSingleEntry1(2LL, v7);
        v15 = -1071774971;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v15 = -1071774973;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v7, this);
    v15 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v26);
  if ( v28 )
  {
    LOBYTE(v23) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v26);
  }
  return v15;
}
