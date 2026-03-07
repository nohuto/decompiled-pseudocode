__int64 __fastcall DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL::CompareVideoSignalInfo(
        DXGDMM_VIDPNTARGETMODESET_INTERFACE_V1_IMPL *this,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a2,
        const struct _D3DKMDT_VIDEO_SIGNAL_INFO *const a3,
        unsigned __int8 *const a4)
{
  unsigned int v7; // ebx
  int v8; // edx
  char VideoStandard; // al
  __int64 v10; // rcx
  __int64 v11; // r8
  int v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  char v15; // [rsp+30h] [rbp-18h]

  v13 = -1;
  v14 = 0LL;
  if ( (qword_1C013A870 & 2) != 0 )
  {
    v15 = 1;
    v13 = 6014;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer((__int64)this, &EventProfilerEnter, (__int64)a3, 6014);
  }
  else
  {
    v15 = 0;
  }
  DXGETWPROFILER_BASE::PushProfilerEntry((__int64)&v13, 6014);
  if ( a3 )
  {
    LOBYTE(a3->VideoStandard) = 0;
    if ( this && a2 )
    {
      if ( *((_DWORD *)this + 3) == a2->ActiveSize.cx
        && *((_DWORD *)this + 4) == a2->ActiveSize.cy
        && *((_DWORD *)this + 5) == a2->VSyncFreq.Numerator
        && *((_DWORD *)this + 6) == a2->VSyncFreq.Denominator )
      {
        v8 = *((_DWORD *)this + 12);
        if ( (((unsigned __int8)v8 ^ *(_BYTE *)&a2->AdditionalSignalInfo) & 7) == 0 )
        {
          VideoStandard = a3->VideoStandard;
          if ( (((unsigned __int16)v8 ^ (unsigned __int16)*(_DWORD *)&a2->AdditionalSignalInfo) & 0x1F8) == 0 )
            VideoStandard = 1;
          LOBYTE(a3->VideoStandard) = VideoStandard;
        }
      }
      v7 = 0;
    }
    else
    {
      WdLogSingleEntry1(2LL, 0LL);
      v7 = -1071774959;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, 0LL);
    v7 = -1073741811;
  }
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v13);
  if ( v15 )
  {
    LOBYTE(v10) = BYTE1(Microsoft_Windows_DxgKrnlEnableBits);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v10, &EventProfilerExit, v11, v13);
  }
  return v7;
}
