/*
 * XREFs of ?CreateNewModeInfo@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTARGETMODESET__@@PEAPEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C01D0DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0007700 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C0007790 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C00077E0 (--3@YAXPEAX@Z.c)
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x1C0007FCC (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     ?PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0008010 (-PushProfilerEntry@DXGETWPROFILER_BASE@@QEAAXW4_DXGKETW_PROFILER_TYPE@@@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     memset @ 0x1C0027640 (memset.c)
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
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  __int64 v18; // r8
  int v20; // [rsp+20h] [rbp-28h] BYREF
  __int64 v21; // [rsp+28h] [rbp-20h]
  char v22; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 29);
  v20 = -1;
  v21 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v22 = 1;
    v20 = 7013;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7013);
  }
  else
  {
    v22 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v20, 7013);
  v11 = WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  *(_QWORD *)(v11 + 24) = this;
  *(_QWORD *)(v11 + 32) = a2;
  if ( a2 )
  {
    *(_QWORD *)a2 = 0LL;
    if ( this && *((_DWORD *)this + 32) == 1833173005 )
    {
      v12 = 0LL;
      v13 = operator new[](0x60uLL, 0x4E506456u, 256LL);
      v14 = v13;
      if ( v13 )
      {
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_DWORD *)v13 = 305419896;
        memset((void *)(v13 + 16), 0, 0x50uLL);
        operator delete(0LL);
        ++*((_DWORD *)this + 20);
        v12 = v14 + 16;
        v15 = *((_DWORD *)this + 20);
        v16 = 0;
        *(_DWORD *)(v14 + 80) = 0;
        *(_QWORD *)(v14 + 84) = -1LL;
        *(_DWORD *)(v14 + 16) = v15;
        *(_DWORD *)(v14 + 24) = 0;
        *(_QWORD *)(v14 + 28) = -1LL;
        *(_QWORD *)(v14 + 36) = -1LL;
        *(_QWORD *)(v14 + 44) = -1LL;
        *(_QWORD *)(v14 + 64) = 0xFFFFFFFFLL;
        *(_DWORD *)(v14 + 72) = 8;
      }
      else
      {
        WdLogSingleEntry0(6LL);
        v16 = -1073741801;
      }
      operator delete(0LL);
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(2LL, v16);
      }
      else
      {
        *(_QWORD *)a2 = v12;
        v16 = 0;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL, this);
      v16 = -1071774967;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    v16 = -1071774959;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v20);
  if ( v22 )
  {
    LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v20);
  }
  return (unsigned int)v16;
}
