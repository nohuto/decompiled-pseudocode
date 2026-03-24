/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNSOURCEMODESET__@@PEAPEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C015AD90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0003A2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *v12; // rdi
  _DWORD *v13; // r14
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx
  int v20; // eax
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-28h] BYREF
  __int64 v32; // [rsp+28h] [rbp-20h]
  char v33; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 11);
  v31 = -1;
  v32 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v33 = 1;
    v31 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7005);
  }
  else
  {
    v33 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v31, 7005LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173004 )
      v12 = this;
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = 0LL;
      v14 = operator new[](0x38uLL, 0x4E506456u, PagedPool);
      v19 = v14;
      if ( v14 )
      {
        v14[1] = 0LL;
        *(_DWORD *)v14 = 305419896;
        *((_OWORD *)v14 + 1) = 0LL;
        *((_OWORD *)v14 + 2) = 0LL;
        v14[6] = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      if ( v19 )
      {
        operator delete(0LL);
        ++*((_DWORD *)v12 + 20);
        v13 = v19 + 2;
        v20 = *((_DWORD *)v12 + 20);
        *((_DWORD *)v19 + 5) = 0;
        v21 = 0;
        *v13 = v20;
      }
      else
      {
        v29 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
        WdLogEvent5_WdLowResource(v29);
        v21 = -1073741801;
      }
      operator delete(0LL);
      if ( v21 < 0 )
      {
        v30 = WdLogNewEntry5_WdError(v23, v22);
        *(_QWORD *)(v30 + 24) = v21;
        WdLogEvent5_WdError(v30);
      }
      else
      {
        *(_QWORD *)a2 = v13;
        v21 = 0;
      }
    }
    else
    {
      v28 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v28 + 24) = this;
      WdLogEvent5_WdError(v28);
      v21 = -1071774968;
    }
  }
  else
  {
    v27 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v27 + 24) = 0LL;
    WdLogEvent5_WdError(v27);
    v21 = -1071774960;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v31, v22);
  if ( v33 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v24, &EventProfilerExit, v25, v31);
  return (unsigned int)v21;
}
