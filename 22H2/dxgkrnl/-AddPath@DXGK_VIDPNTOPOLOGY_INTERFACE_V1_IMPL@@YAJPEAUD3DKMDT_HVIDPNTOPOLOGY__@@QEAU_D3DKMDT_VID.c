/*
 * XREFs of ?AddPath@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C02E8190
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0007548 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ??1?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ @ 0x1C00092A0 (--1-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAA@XZ.c)
 *     ?reset@?$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00094E4 (-reset@-$auto_ptr@VDMMVIDPNPRESENTPATH@@@@QEAAXPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C012EF70 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C01519B8 (-CreateNewPath@DMMVIDPNTOPOLOGY@@QEBAJAEBU_D3DKMDT_VIDPN_PRESENT_PATH@@PEAPEAVDMMVIDPNPRESENTPAT.c)
 *     ?ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C015B188 (-ReleaseDdiEnumerator@DMMVIDPNTOPOLOGY@@QEAAJPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AddPath(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  DMMVIDPNTOPOLOGY *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  int v30; // [rsp+20h] [rbp-20h] BYREF
  __int64 v31; // [rsp+28h] [rbp-18h]
  char v32; // [rsp+30h] [rbp-10h]
  struct DMMVIDPNPRESENTPATH *v33; // [rsp+78h] [rbp+38h] BYREF
  struct DMMVIDPNPRESENTPATH *v34; // [rsp+80h] [rbp+40h] BYREF

  v30 = -1;
  v4 = (__int64)this;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7041;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7041);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7041LL);
  if ( a2 )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(v6, v5);
    v9[3] = *(_DWORD *)a2;
    v9[4] = *((unsigned int *)a2 + 1);
    v9[5] = a2;
    v9[6] = v4;
    v13 = (DMMVIDPNTOPOLOGY *)ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v4);
    if ( v13 )
    {
      if ( !*((_DWORD *)a2 + 16) )
      {
        v15 = WdLogNewEntry5_WdWarning(v11, v10, v12);
        *(_QWORD *)(v15 + 24) = a2;
        WdLogEvent5_WdWarning(v15);
        *((_DWORD *)a2 + 16) = 255;
      }
      if ( !*((_DWORD *)a2 + 17) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v16[3] = *(_DWORD *)a2;
        v16[4] = *((unsigned int *)a2 + 1);
        v16[5] = v4;
        WdLogEvent5_WdWarning(v16);
        memset(a2 + 19, 0, 0x100uLL);
        *((_DWORD *)a2 + 83) = 0;
        *((_DWORD *)a2 + 83) |= 1u;
        *(_QWORD *)(a2 + 17) = 1LL;
      }
      if ( *((_DWORD *)a2 + 84) != 1 || *((_QWORD *)a2 + 43) || *((_QWORD *)a2 + 44) )
      {
        v17 = (_QWORD *)WdLogNewEntry5_WdWarning(v11, v10, v12);
        v17[3] = *((int *)a2 + 84);
        v17[4] = *(_DWORD *)a2;
        v17[5] = *((unsigned int *)a2 + 1);
        v17[6] = v4;
        WdLogEvent5_WdWarning(v17);
        *((_DWORD *)a2 + 84) = 1;
        *((_QWORD *)a2 + 43) = 0LL;
        *((_QWORD *)a2 + 44) = 0LL;
      }
      v33 = 0LL;
      v34 = 0LL;
      v18 = DMMVIDPNTOPOLOGY::CreateNewPath(v13, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2, &v34);
      v21 = v18;
      LODWORD(v4) = -1071774970;
      if ( v18 == -1071774970 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19);
        v22[3] = *(_DWORD *)a2;
        v22[4] = *((unsigned int *)a2 + 1);
        v22[5] = -1071774970LL;
        WdLogEvent5_WdError(v22);
      }
      else if ( v18 >= 0 )
      {
        auto_ptr<DMMVIDPNPRESENTPATH>::reset(
          (__int64 (__fastcall ****)(_QWORD, __int64))&v33,
          (__int64 (__fastcall ***)(_QWORD, __int64))v34);
        v24 = DMMVIDPNTOPOLOGY::AddPath((DMMVIDPNTOPOLOGY **)v13, v33, D3DKMDT_MCC_ENFORCE);
        v4 = v24;
        if ( v24 >= 0 )
        {
          v33 = 0LL;
          LODWORD(v4) = DMMVIDPNTOPOLOGY::ReleaseDdiEnumerator(v13, (const struct _D3DKMDT_VIDPN_PRESENT_PATH *)a2);
        }
        else
        {
          v26 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25);
          v26[3] = *(_DWORD *)a2;
          v26[4] = *((unsigned int *)a2 + 1);
          v26[5] = v13;
          v26[6] = v4;
          WdLogEvent5_WdDmmEvent(v26);
        }
      }
      else
      {
        v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v20, v19);
        LODWORD(v4) = v21;
        v23[3] = *(_DWORD *)a2;
        v23[4] = *((unsigned int *)a2 + 1);
        v23[5] = v21;
      }
      auto_ptr<DMMVIDPNPRESENTPATH>::~auto_ptr<DMMVIDPNPRESENTPATH>((__int64 (__fastcall ****)(_QWORD, __int64))&v33);
    }
    else
    {
      v14 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v14 + 24) = v4;
      WdLogEvent5_WdError(v14);
      LODWORD(v4) = -1071774976;
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6, v5);
    *(_QWORD *)(v7 + 24) = 0LL;
    *(_QWORD *)(v7 + 32) = v4;
    WdLogEvent5_WdError(v7);
    LODWORD(v4) = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v8);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v27, &EventProfilerExit, v28, v30);
  return (unsigned int)v4;
}
