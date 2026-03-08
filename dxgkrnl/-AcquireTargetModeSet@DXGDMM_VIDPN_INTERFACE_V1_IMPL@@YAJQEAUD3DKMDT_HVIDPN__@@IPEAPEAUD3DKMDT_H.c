/*
 * XREFs of ?AcquireTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGDMM_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C01D2710
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0007F3C (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z @ 0x1C0007F60 (-FindById@-$IndexedSet@VDMMVIDPNTARGET@@@@QEBAPEAVDMMVIDPNTARGET@@I@Z.c)
 *     ?IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z @ 0x1C0007F94 (-IsTargetInTopology@DMMVIDPNTOPOLOGY@@QEBAEI@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGDMM_VIDPN_INTERFACE_V1_IMPL::AcquireTargetModeSet(
        DXGDMM_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // r10
  __int64 v10; // r11
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  v20 = -1;
  v21 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 6036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6036);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 6036);
  if ( !a3 || !a4 )
  {
    WdLogSingleEntry3(2LL, 0LL, v6, this);
    v16 = -1073741811;
    goto LABEL_12;
  }
  *a3 = 0LL;
  *a4 = 0LL;
  v8 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, this);
    v16 = -1071774973;
    goto LABEL_12;
  }
  if ( *(_QWORD *)(*(_QWORD *)(v8 + 48) + 128LL) == v8 )
  {
    WdLogSingleEntry2(2LL, v6, v8);
    v16 = -1071774909;
    goto LABEL_12;
  }
  if ( !DMMVIDPNTOPOLOGY::IsTargetInTopology((DMMVIDPNTOPOLOGY *)(v8 + 96), v6) )
  {
    WdLogSingleEntry2(2LL, v6, v9);
    v16 = -1071774912;
    goto LABEL_12;
  }
  v11 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(v10 + 504);
  v12 = IndexedSet<DMMVIDPNTARGET>::FindById(*(_QWORD *)(v9 + 312), v6);
  v13 = v12;
  if ( !v12 )
  {
    WdLogSingleEntry1(2LL, v6);
    v16 = -1071774971;
    goto LABEL_12;
  }
  v14 = *(_QWORD *)(v12 + 104);
  if ( !v14 )
  {
    v15 = 0LL;
    goto LABEL_22;
  }
  _InterlockedIncrement((volatile signed __int32 *)(v14 + 96));
  v15 = *(_QWORD *)(v13 + 104);
  if ( !v15 )
LABEL_22:
    WdLogSingleEntry0(1LL);
  *a3 = v15 & -(__int64)(v15 != -137);
  v16 = 0;
  *a4 = v11;
LABEL_12:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  }
  return v16;
}
