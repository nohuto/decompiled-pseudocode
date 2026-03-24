/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C011DA60
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0003524 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C00039E8 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004F50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateInstance@?$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@?$Set@VDMMVIDPNTARGETMODE@@@@SAPEAV12@QEBVDMMVIDPNTARGETMODE@@@Z @ 0x1C0007004 (-CreateInstance@-$SetEnumerator@U_D3DKMDT_VIDPN_TARGET_MODE@@@-$Set@VDMMVIDPNTARGETMODE@@@@SAPEA.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C00071C8 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C0024AA0 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTARGETMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_TARGET_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *Instance; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  int v30; // [rsp+20h] [rbp-28h] BYREF
  __int64 v31; // [rsp+28h] [rbp-20h]
  char v32; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal((__int64)this, (__int64)a2) + 15);
  v30 = -1;
  v31 = 0LL;
  if ( (qword_1C00B19B0 & 2) != 0 )
  {
    v32 = 1;
    v30 = 7013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7013);
  }
  else
  {
    v32 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v30, 7013LL);
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = this;
  *(_QWORD *)(v9 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
      v12 = this;
    else
      v12 = 0LL;
    if ( v12 )
    {
      v13 = 0LL;
      Instance = Set<DMMVIDPNTARGETMODE>::SetEnumerator<_D3DKMDT_VIDPN_TARGET_MODE>::CreateInstance(0LL);
      if ( Instance )
      {
        operator delete(0LL);
        ++*((_DWORD *)v12 + 20);
        v13 = Instance + 2;
        v19 = *((_DWORD *)v12 + 20);
        *((_DWORD *)Instance + 20) = 0;
        *((_DWORD *)Instance + 4) = v19;
        *((_DWORD *)Instance + 6) = 0;
        *(_QWORD *)((char *)Instance + 28) = -1LL;
        *(_QWORD *)((char *)Instance + 36) = -1LL;
        *(_QWORD *)((char *)Instance + 44) = -1LL;
        Instance[8] = 0xFFFFFFFFLL;
        v20 = 0;
        *((_DWORD *)v13 + 14) = 8;
      }
      else
      {
        v28 = WdLogNewEntry5_WdLowResource(v15, v14, v17, v18);
        WdLogEvent5_WdLowResource(v28);
        v20 = -1073741801;
      }
      operator delete(0LL);
      if ( v20 < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v22, v21);
        *(_QWORD *)(v29 + 24) = v20;
        WdLogEvent5_WdError(v29);
      }
      else
      {
        *(_QWORD *)a2 = v13;
        v20 = 0;
      }
    }
    else
    {
      v27 = WdLogNewEntry5_WdError(v11, v10);
      *(_QWORD *)(v27 + 24) = this;
      WdLogEvent5_WdError(v27);
      v20 = -1071774967;
    }
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    v20 = -1071774959;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v30, v21);
  if ( v32 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v23, &EventProfilerExit, v24, v30);
  return (unsigned int)v20;
}
