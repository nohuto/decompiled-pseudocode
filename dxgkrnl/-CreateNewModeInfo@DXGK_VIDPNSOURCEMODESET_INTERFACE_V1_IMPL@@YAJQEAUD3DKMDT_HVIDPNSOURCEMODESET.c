__int64 __fastcall DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL::CreateNewModeInfo(
        DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNSOURCEMODESET__ *const a2,
        struct _D3DKMDT_VIDPN_SOURCE_MODE **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // esi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // r8
  int v19; // eax
  int v20; // ebx
  int v21; // [rsp+20h] [rbp-28h] BYREF
  __int64 v22; // [rsp+28h] [rbp-20h]
  char v23; // [rsp+30h] [rbp-18h]

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 25);
  v7 = 0;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 7005;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7005);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 7005);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry1(2LL, 0LL);
    v19 = -1071774960;
LABEL_15:
    v20 = v19;
    goto LABEL_16;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 32) != 1833173004 )
  {
    WdLogSingleEntry1(2LL, this);
    v19 = -1071774968;
    goto LABEL_15;
  }
  v13 = operator new[](0x38uLL, 0x4E506456u, 256LL);
  v14 = v13;
  if ( !v13 )
  {
    WdLogSingleEntry0(6LL);
    v20 = -1073741801;
    operator delete(0LL);
    WdLogSingleEntry1(2LL, -1073741801LL);
LABEL_16:
    v7 = v20;
    goto LABEL_8;
  }
  *(_DWORD *)v13 = 305419896;
  *(_QWORD *)(v13 + 8) = 0LL;
  *(_OWORD *)(v13 + 16) = 0LL;
  *(_OWORD *)(v13 + 32) = 0LL;
  *(_QWORD *)(v13 + 48) = 0LL;
  operator delete(0LL);
  ++*((_DWORD *)this + 20);
  v15 = (_DWORD *)(v14 + 16);
  *v15 = *((_DWORD *)this + 20);
  v15[1] = 0;
  operator delete(0LL);
  *(_QWORD *)a2 = v15;
LABEL_8:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
  if ( v23 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v16, &EventProfilerExit, v17, v21);
  return v7;
}
