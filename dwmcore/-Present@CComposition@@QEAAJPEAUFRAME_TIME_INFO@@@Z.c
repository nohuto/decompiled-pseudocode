__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  __int64 v3; // rcx
  int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // esi
  __int64 v11; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-28h] BYREF
  _BYTE v14[16]; // [rsp+38h] [rbp-20h] BYREF

  PerformanceCount.QuadPart = 0LL;
  *((_QWORD *)this + 61) = a2;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xx_EventWriteTransfer)(
      v3,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  v4 = CRenderTargetManager::Present(*((struct CRenderTarget ****)this + 27));
  v7 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v4, 0x395u, 0LL);
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED,
      v6,
      1LL,
      v14);
  }
  CComposition::ProcessRenderingStatus(this, v7);
  v8 = CComposition::PostPresent(this, v7 != 0);
  v10 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v8, 0x3A1u, 0LL);
  if ( !v7 || v7 >= 0 && v10 < 0 )
    v7 = v10;
  QueryPerformanceCounter(&PerformanceCount);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))McTemplateU0xx_EventWriteTransfer)(
      v11,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
      this,
      (LARGE_INTEGER)PerformanceCount.QuadPart);
  *((_QWORD *)this + 61) = 0LL;
  return (unsigned int)v7;
}
