/*
 * XREFs of ?AssignSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@IQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0141EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0009260 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C0009790 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPN@@PEAUD3DKMDT_HVIDPN__@@@@SAPEAVDMMVIDPN@@PEAUD3DKMDT.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@SAPEAVDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00098BC (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNSOURCEMODESET@@PEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@@S.c)
 *     ?SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C000A6BC (-SetCofuncModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPN_INTERFACE_V1_IMPL::AssignSourceModeSet(
        DXGK_VIDPN_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPN__ *const a2,
        __int64 a3,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a4)
{
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct DMMVIDPNSOURCEMODESET **v15; // rdi
  __int64 v16; // r8
  struct DMMVIDPNSOURCEMODESET **v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  struct DMMVIDPNSOURCEMODESET **v20; // rsi
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  _QWORD *v31; // rax
  int v32; // [rsp+20h] [rbp-28h] BYREF
  __int64 v33; // [rsp+28h] [rbp-20h]
  char v34; // [rsp+30h] [rbp-18h]

  v32 = -1;
  v4 = a3;
  v33 = 0LL;
  v6 = (unsigned int)a2;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v34 = 1;
    v32 = 7046;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, a3, 7046);
  }
  else
  {
    v34 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v32, 7046LL);
  v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7);
  v10 = v6;
  v9[3] = v4;
  v9[4] = v6;
  v9[5] = this;
  if ( ExposedViaHandle<DMMVIDPN,D3DKMDT_HVIDPN__ *>::GetFromHandle((__int64)this) )
  {
    v15 = (struct DMMVIDPNSOURCEMODESET **)ExposedViaHandle<DMMVIDPNSOURCEMODESET,D3DKMDT_HVIDPNSOURCEMODESET__ *>::GetFromHandle(v4);
    if ( v15 )
    {
      v17 = (struct DMMVIDPNSOURCEMODESET **)IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(*(_QWORD *)(v16 + 304), v6);
      v20 = v17;
      if ( v17 )
      {
        v21 = DMMVIDPNSOURCE::SetCofuncModeSet(v17, v15);
        v4 = v21;
        if ( v21 < 0 )
        {
          if ( v21 != -1071774958 )
          {
            v30 = WdLogNewEntry5_WdAssertion(v23, v22);
            WdLogEvent5_WdAssertion(v30);
          }
          v31 = (_QWORD *)WdLogNewEntry5_WdError(v23, v22);
          v31[3] = v15;
          v31[4] = *((unsigned int *)v20 + 6);
          v31[5] = v4;
          WdLogEvent5_WdError(v31);
        }
        else
        {
          LODWORD(v4) = 0;
        }
      }
      else
      {
        v29 = WdLogNewEntry5_WdError(v19, v18);
        *(_QWORD *)(v29 + 24) = v10;
        WdLogEvent5_WdError(v29);
        LODWORD(v4) = -1071774972;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v14, v13);
      *(_QWORD *)(v28 + 24) = v4;
      WdLogEvent5_WdError(v28);
      LODWORD(v4) = -1071774968;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v27 + 24) = this;
    WdLogEvent5_WdError(v27);
    LODWORD(v4) = -1071774973;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v32, v22);
  if ( v34 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v32);
  return (unsigned int)v4;
}
