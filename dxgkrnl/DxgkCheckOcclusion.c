__int64 __fastcall DxgkCheckOcclusion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rcx
  struct DXGPROCESS *Current; // r14
  __int64 v6; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r8
  DXGGLOBAL *Global; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  bool v19; // sf
  bool v20; // sf
  int v21; // [rsp+50h] [rbp-68h] BYREF
  __int64 v22; // [rsp+58h] [rbp-60h]
  char v23; // [rsp+60h] [rbp-58h]
  _BYTE v24[24]; // [rsp+68h] [rbp-50h] BYREF
  struct tagRECT v25; // [rsp+80h] [rbp-38h] BYREF

  v3 = (__int64 *)a1;
  v21 = -1;
  v22 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v23 = 1;
    v21 = 2038;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2038);
  }
  else
  {
    v23 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v21, 2038);
  Current = DXGPROCESS::GetCurrent(v4);
  if ( Current )
  {
    if ( (unsigned __int64)v3 >= MmUserProbeAddress )
      v3 = (__int64 *)MmUserProbeAddress;
    v6 = *v3;
    if ( v6 )
    {
      v7 = *((_QWORD *)Current + 11);
      if ( (*(unsigned int (**)(void))(v7 + 208))() )
      {
        v12 = -1071775738;
        v25 = 0LL;
        DXGUSERCRIT::DXGUSERCRIT((DXGUSERCRIT *)v24, Current);
        DXGUSERCRIT::Acquire((DXGUSERCRIT *)v24, 1u);
        if ( (*(unsigned int (__fastcall **)(__int64, struct tagRECT *))(v7 + 360))(v6, &v25) == 1 )
        {
          Global = DXGGLOBAL::GetGlobal();
          if ( DXGGLOBAL::IsWindowVisible(Global, &v25) )
            v12 = 0;
        }
        else
        {
          WdLogSingleEntry1(2LL, 341LL);
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"pfnDxgkEngGetWindowRect failed to get window rect from a window handle",
            341LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
        DXGUSERCRIT::~DXGUSERCRIT((DXGUSERCRIT *)v24);
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( !v23 )
          return v12;
        v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      }
      else
      {
        v12 = -1071775738;
        *(_QWORD *)(WdLogNewEntry5_WdTrace(v9, v8, v10, v11) + 24) = -1071775738LL;
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
        if ( !v23 )
          return v12;
        LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        v20 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      }
      if ( v20 )
        McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v21);
      return v12;
    }
    WdLogSingleEntry1(3LL, -1073741811LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      LOBYTE(v17) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
      v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
LABEL_21:
      if ( v19 )
        McTemplateK0q_EtwWriteTransfer(v17, &EventProfilerExit, v18, v21);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, -1073741811LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process context, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v21);
    if ( v23 )
    {
      v19 = (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0;
      goto LABEL_21;
    }
  }
  return 3221225485LL;
}
