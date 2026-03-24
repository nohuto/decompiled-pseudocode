/*
 * XREFs of ?ReleaseModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEBU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C0159D60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::ReleaseModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        const struct _D3DKMDT_VIDPN_TARGET_MODE *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct D3DKMDT_HVIDPNTARGETMODESET__ *v11; // rdi
  char *v12; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v13; // rax
  char *v14; // rdx
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  int v25; // [rsp+20h] [rbp-28h] BYREF
  __int64 v26; // [rsp+28h] [rbp-20h]
  char v27; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7012;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7012);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7012LL);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = this;
  if ( a2 )
  {
    if ( !this || *((_DWORD *)this + 32) != 1833173005 )
    {
      v24 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v24 + 24) = this;
      WdLogEvent5_WdError(v24);
      v3 = -1071774967;
      goto LABEL_15;
    }
    v11 = a2 - 4;
    if ( *(_DWORD *)v11 == 305419896 )
    {
      v12 = (char *)*((_QWORD *)v11 + 1);
      if ( v12 )
      {
        v13 = (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)*((_QWORD *)this + 6);
        v14 = (char *)this + 48;
        if ( v13 == (DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *)((char *)this + 48) || (v15 = (char *)v13 - 8) == 0LL )
        {
LABEL_21:
          v23 = WdLogNewEntry5_WdError(v12, v14);
          *(_QWORD *)(v23 + 24) = v11;
          *(_QWORD *)(v23 + 32) = this;
          WdLogEvent5_WdError(v23);
          v3 = -1071774928;
          goto LABEL_15;
        }
        while ( v15 != v12 )
        {
          v16 = (char *)*((_QWORD *)v15 + 1);
          if ( v16 != v14 )
          {
            v15 = v16 - 8;
            if ( v15 )
              continue;
          }
          goto LABEL_21;
        }
      }
      operator delete(v11);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v22 + 24) = v11;
      WdLogEvent5_WdError(v22);
      v3 = -1071774959;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v21 + 24) = 0LL;
    WdLogEvent5_WdError(v21);
    v3 = -1071774959;
  }
LABEL_15:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25, v17);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v18, &EventProfilerExit, v19, v25);
  return v3;
}
