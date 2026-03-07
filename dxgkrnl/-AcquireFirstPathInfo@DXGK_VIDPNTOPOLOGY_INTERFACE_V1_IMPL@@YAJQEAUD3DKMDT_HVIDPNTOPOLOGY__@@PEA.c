__int64 __fastcall DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::AcquireFirstPathInfo(
        DXGK_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *const a2,
        const struct _D3DKMDT_VIDPN_PRESENT_PATH **a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ebp
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // r8
  struct DMMVIDPNPRESENTPATH *(__fastcall *v23)(DMMVIDPNTOPOLOGY *); // [rsp+20h] [rbp-38h] BYREF
  int v24; // [rsp+28h] [rbp-30h]
  int v25; // [rsp+30h] [rbp-28h] BYREF
  __int64 v26; // [rsp+38h] [rbp-20h]
  char v27; // [rsp+40h] [rbp-18h]
  __int64 v28; // [rsp+60h] [rbp+8h] BYREF

  _InterlockedIncrement((volatile signed __int32 *)DXGGLOBAL::GetGlobal() + 32);
  v7 = 0;
  v25 = -1;
  v26 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v27 = 1;
    v25 = 7036;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerEnter, v6, 7036);
  }
  else
  {
    v27 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v25, 7036);
  v12 = WdLogNewEntry5_WdTrace(v9, v8, v10, v11);
  *(_QWORD *)(v12 + 24) = this;
  *(_QWORD *)(v12 + 32) = a2;
  if ( !a2 )
  {
    WdLogSingleEntry2(2LL, 0LL, this);
    v18 = -1073741811;
LABEL_21:
    v7 = v18;
    goto LABEL_11;
  }
  *(_QWORD *)a2 = 0LL;
  if ( !this || *((_DWORD *)this + 46) != 1833173002 )
  {
    WdLogSingleEntry1(2LL, this);
    v18 = -1071774976;
    goto LABEL_21;
  }
  v24 = 0;
  v23 = DMMVIDPNTOPOLOGY::GetFirstPath;
  v28 = 0LL;
  v13 = DMMVIDPNTOPOLOGY::AcquireDdiEnumeratorCachedPathInfo<KM_STL::const_mem_fun_t<DMMVIDPNPRESENTPATH *,DMMVIDPNTOPOLOGY>>(
          this,
          &v23,
          &v28);
  v18 = v13;
  if ( v13 == -1071774937 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = this;
    if ( v28 )
      WdLogSingleEntry0(1LL);
    v18 = 1075708747;
    goto LABEL_21;
  }
  if ( v13 < 0 )
  {
    WdLogSingleEntry2(2LL, this, v13);
    goto LABEL_21;
  }
  v19 = v28;
  if ( !v28 )
    WdLogSingleEntry0(1LL);
  *(_QWORD *)a2 = v19;
LABEL_11:
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v25);
  if ( v27 && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v20, &EventProfilerExit, v21, v25);
  return v7;
}
