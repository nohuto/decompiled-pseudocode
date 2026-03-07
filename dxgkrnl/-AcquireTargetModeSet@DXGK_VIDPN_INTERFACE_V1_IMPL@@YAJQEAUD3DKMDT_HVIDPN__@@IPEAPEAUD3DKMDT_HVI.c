__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        struct DMMVIDPNTARGETMODESET **a3,
        struct _DXGK_VIDPNTARGETMODESET_INTERFACE **a4)
{
  __int64 v4; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  VIDPN_MGR *v15; // rcx
  DMMVIDPNTARGET *v16; // rax
  struct DMMVIDPNTARGETMODESET *v17; // rax
  struct DMMVIDPNTARGETMODESET *v18; // rbx
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v19; // rax
  __int64 v20; // r8
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // [rsp+20h] [rbp-20h] BYREF
  __int64 v29; // [rsp+28h] [rbp-18h]
  char v30; // [rsp+30h] [rbp-10h]
  struct _DXGK_VIDPNTARGETMODESET_INTERFACE *v31; // [rsp+70h] [rbp+30h] BYREF

  v4 = (unsigned int)a2;
  v28 = -1;
  v29 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v30 = 1;
    v28 = 7048;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7048);
  }
  else
  {
    v30 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v28, 7048);
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  v12[3] = this;
  v12[4] = v4;
  v12[5] = a3;
  v12[6] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
    v14 = v13;
    if ( v13 )
    {
      if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v13 + 96), v4) )
        WdLogSingleEntry2(2LL, v4, v14);
      v15 = *(VIDPN_MGR **)(v14 + 48);
      v31 = 0LL;
      VIDPN_MGR::QueryDxgMiniportVidPnTargetModeSetInterface(
        v15,
        DXGK_VIDPN_INTERFACE_VERSION_V1,
        (const struct _DXGK_VIDPNTARGETMODESET_INTERFACE **)&v31);
      v16 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v14 + 312), v4);
      if ( v16 )
      {
        v17 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v16);
        v18 = v17;
        if ( v17 )
        {
          if ( v17 == (struct DMMVIDPNTARGETMODESET *)-137LL )
            v18 = 0LL;
        }
        else
        {
          WdLogSingleEntry0(1LL);
        }
        v19 = v31;
        *a3 = v18;
        *a4 = v19;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
            McTemplateK0q_EtwWriteTransfer(BYTE1(Microsoft_Windows_DxgKrnlEnableBits), &EventProfilerExit, v20, v28);
        }
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, v4);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
        if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v26, &EventProfilerExit, v27, v28);
        return 3223192325LL;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
      if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
        McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v28);
      return 3223192323LL;
    }
  }
  else
  {
    WdLogSingleEntry3(2LL, 0LL, v4, this);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v28);
    if ( v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v22, &EventProfilerExit, v23, v28);
    return 3221225485LL;
  }
}
