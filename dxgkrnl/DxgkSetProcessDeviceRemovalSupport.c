__int64 __fastcall DxgkSetProcessDeviceRemovalSupport(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *v3; // rsi
  signed __int16 v4; // bx
  unsigned int v5; // edi
  __int64 v6; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // rbx
  const wchar_t *v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  int v15; // [rsp+50h] [rbp-28h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]
  char v17; // [rsp+60h] [rbp-18h]

  v3 = (_BYTE *)a1;
  v15 = -1;
  v16 = 0LL;
  v4 = 1;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v17 = 1;
    v15 = 2155;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(a1, &EventProfilerEnter, a3, 2155);
  }
  else
  {
    v17 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v15, 2155);
  v5 = 0;
  Current = DXGPROCESS::GetCurrent(v6);
  if ( Current )
  {
    if ( !*((_BYTE *)Current + 336) )
    {
      if ( (unsigned __int64)v3 >= MmUserProbeAddress )
        v3 = (_BYTE *)MmUserProbeAddress;
      if ( !*v3 )
        v4 = 2;
      if ( _InterlockedCompareExchange16((volatile signed __int16 *)Current + 288, v4, 0) )
      {
        v5 = -1073740528;
        WdLogSingleEntry1(2LL, -1073740528LL);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Device removal support has been specified before, returning 0x%I64x",
          -1073740528LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
      if ( v17 )
      {
        LOBYTE(v8) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
          McTemplateK0q_EtwWriteTransfer(v8, &EventProfilerExit, v9, v15);
      }
      return v5;
    }
    v11 = -1073741823LL;
    WdLogSingleEntry1(2LL, -1073741823LL);
    v12 = L"It is invalid to specify device removal support after device creation, returning 0x%I64x";
  }
  else
  {
    v11 = -1073741811LL;
    WdLogSingleEntry1(2LL, -1073741811LL);
    v12 = L"Invalid process context, returning 0x%I64x";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, v11, 0LL, 0LL, 0LL, 0LL);
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v15);
  if ( v17 )
  {
    LOBYTE(v13) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, &EventProfilerExit, v14, v15);
  }
  return (unsigned int)v11;
}
