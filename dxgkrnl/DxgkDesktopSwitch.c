void __fastcall DxgkDesktopSwitch(struct DXGADAPTER *a1, int a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // r8
  int v7; // [rsp+30h] [rbp-28h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]
  char v9; // [rsp+40h] [rbp-18h]

  v7 = -1;
  v8 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v9 = 1;
    v7 = 2181;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)a1, &EventProfilerEnter, a3, 2181);
  }
  else
  {
    v9 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v7, 2181);
  OutputDuplThunks<void (OUTPUTDUPL_MGR::*)(unsigned int),unsigned int>::RunForAdapter(
    a1,
    a2,
    (__int64)_lambda_17703f38c7b7b2474033135b7ac6214e_::_lambda_invoker_cdecl_);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v7);
  if ( v9 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v5, &EventProfilerExit, v6, v7);
  }
}
