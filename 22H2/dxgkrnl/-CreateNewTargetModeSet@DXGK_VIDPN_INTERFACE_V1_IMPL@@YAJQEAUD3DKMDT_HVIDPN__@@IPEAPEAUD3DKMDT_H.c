/*
 * XREFs of ?CreateNewTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IPEAPEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEBU_DXGK_VIDPNTARGETMODESET_INTERFACE@@@Z @ 0x1C012EA40
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009260 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009594 (-CreateNewCofuncModeSet@DMMVIDPNTARGET@@QEAAJPEAPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0009724 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0009790 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::CreateNewTargetModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 *a3,
        struct D3DKMDT_HVIDPNTARGETMODESET__ **a4)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v15; // r12
  DMMVIDPNTARGET *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  DMMVIDPNTARGET *v19; // rsi
  int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int v32; // [rsp+20h] [rbp-20h] BYREF
  __int64 v33; // [rsp+28h] [rbp-18h]
  char v34; // [rsp+30h] [rbp-10h]
  __int64 v35; // [rsp+70h] [rbp+30h] BYREF
  struct DMMVIDPNTARGETMODESET *v36; // [rsp+80h] [rbp+40h] BYREF

  v32 = -1;
  v33 = 0LL;
  v6 = (__int64)this;
  v7 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7050;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7050);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7050LL);
  v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
  v10[3] = v6;
  v10[4] = a3;
  v10[5] = a4;
  if ( a3 && a4 )
  {
    *a3 = 0LL;
    *a4 = 0LL;
    v13 = ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle(v6);
    if ( v13 )
    {
      v15 = *(struct D3DKMDT_HVIDPNTARGETMODESET__ **)(*(_QWORD *)(v13 + 48) + 392LL);
      v16 = (DMMVIDPNTARGET *)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v13 + 312), v7);
      v19 = v16;
      if ( v16 )
      {
        v35 = 0LL;
        v36 = 0LL;
        v20 = DMMVIDPNTARGET::CreateNewCofuncModeSet(v16, &v36);
        v6 = v20;
        if ( v20 < 0 )
        {
          v31 = WdLogNewEntry5_WdDmmEvent(v21);
          *(_QWORD *)(v31 + 24) = *((unsigned int *)v19 + 6);
          *(_QWORD *)(v31 + 32) = v6;
          WdLogEvent5_WdDmmEvent(v31);
        }
        else
        {
          auto_rc<DMMVIDPNTARGETMODESET>::reset(&v35, (__int64)v36);
          v22 = v35;
          v23 = -(__int64)(v35 != -137);
          v35 = 0LL;
          *a3 = v22 & v23;
          LODWORD(v6) = 0;
          *a4 = v15;
        }
        auto_rc<DMMVIDPNTARGETMODESET>::reset(&v35, 0LL);
      }
      else
      {
        v30 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v30 + 24) = v7;
        WdLogEvent5_WdError(v30);
        LODWORD(v6) = -1071774971;
      }
    }
    else
    {
      v29 = WdLogNewEntry5_WdError(0LL, v14);
      *(_QWORD *)(v29 + 24) = v6;
      WdLogEvent5_WdError(v29);
      LODWORD(v6) = -1071774973;
    }
  }
  else
  {
    v28 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v28 + 24) = 0LL;
    *(_QWORD *)(v28 + 32) = v6;
    WdLogEvent5_WdError(v28);
    LODWORD(v6) = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v24);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v25, &EventProfilerExit, v26, v32);
  return (unsigned int)v6;
}
