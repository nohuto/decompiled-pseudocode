/*
 * XREFs of ?ReleasePathInfo@DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00F9200
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00039C0 (--_V@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::ReleasePathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH *const a3)
{
  unsigned int v3; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct D3DKMDT_HVIDPNTOPOLOGY__ *v11; // rbx
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v18; // rax
  __int64 v19; // rax
  DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+20h] [rbp-28h] BYREF
  __int64 v24; // [rsp+28h] [rbp-20h]
  char v25; // [rsp+30h] [rbp-18h]

  v3 = 0;
  v23 = -1;
  v24 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v25 = 1;
    v23 = 7039;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 7039);
  }
  else
  {
    v25 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v23, 7039LL);
  v8 = WdLogNewEntry5_WdTrace(v7, v6);
  *(_QWORD *)(v8 + 24) = a2;
  *(_QWORD *)(v8 + 32) = this;
  if ( a2 )
  {
    if ( this && *((_DWORD *)this + 46) == 1833173002 )
    {
      v11 = a2 - 4;
      if ( *(_DWORD *)v11 == 305419896 )
      {
        v12 = (_QWORD *)*((_QWORD *)v11 + 1);
        if ( !v12 )
          goto LABEL_12;
        v13 = (_QWORD *)*((_QWORD *)this + 3);
        if ( v13 == (_QWORD *)((char *)this + 24) )
          goto LABEL_23;
        if ( !--v13 )
          goto LABEL_23;
        do
        {
          if ( v13 == v12 )
            break;
          v20 = (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)v13[1];
          v13 = (_QWORD *)((char *)v20 - 8);
          if ( v20 == (DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *)((char *)this + 24) )
            v13 = 0LL;
        }
        while ( v13 );
        if ( !v13 )
        {
LABEL_23:
          v21 = WdLogNewEntry5_WdError(v13, v12);
          *(_QWORD *)(v21 + 24) = v11;
          *(_QWORD *)(v21 + 32) = this;
          WdLogEvent5_WdError(v21);
          v3 = -1071774928;
        }
        else
        {
LABEL_12:
          operator delete[](*((void **)v11 + 46));
          operator delete(v11);
        }
      }
      else
      {
        v19 = WdLogNewEntry5_WdError(v10, v9);
        *(_QWORD *)(v19 + 24) = v11;
        WdLogEvent5_WdError(v19);
        v3 = -1071774951;
      }
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v22 + 24) = this;
      WdLogEvent5_WdError(v22);
      v3 = -1071774976;
    }
  }
  else
  {
    v18 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v18 + 24) = 0LL;
    WdLogEvent5_WdError(v18);
    v3 = -1071774951;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v23, v14);
  if ( v25 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, &EventProfilerExit, v16, v23);
  return v3;
}
