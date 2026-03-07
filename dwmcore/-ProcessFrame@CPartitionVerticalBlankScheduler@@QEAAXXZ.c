void __fastcall CPartitionVerticalBlankScheduler::ProcessFrame(
        CPartitionVerticalBlankScheduler *this,
        __int64 a2,
        __int64 a3)
{
  volatile struct IUnknown *volatile v4; // rbx
  __int64 v5; // r8
  char v6; // al
  __int64 v7; // rbx
  bool v8; // al
  bool v9; // zf
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  BOOL v13; // ebx
  void *v14; // rcx
  __int64 v15; // rdx
  CProcessResourceAttributionReporter *v16; // rbx
  ULONGLONG TickCount64; // rax
  CEnergyReporter *v18; // rbx
  ULONGLONG v19; // rax
  unsigned __int64 v20; // rcx
  struct ID2D1Bitmap *v21; // rcx
  __int64 v22; // r8
  bool v23; // [rsp+40h] [rbp-58h] BYREF
  struct ID2D1Bitmap *v24; // [rsp+48h] [rbp-50h] BYREF
  _QWORD v25[2]; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int8 v26; // [rsp+60h] [rbp-38h]
  char v27; // [rsp+61h] [rbp-37h]
  struct ID3D11Texture2D *v28[2]; // [rsp+68h] [rbp-30h] BYREF

  *(_BYTE *)(*((_QWORD *)this + 526) + 208LL) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 8) != 0 )
    McTemplateU0xqqq_EventWriteTransfer(this, a2, *((_QWORD *)this + 526));
  while ( 1 )
  {
    v4 = g_pDebugInspectSurface;
    if ( !g_pDebugInspectSurface )
      break;
    v24 = 0LL;
    v28[0] = 0LL;
    if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID3D11Texture2D **))g_pDebugInspectSurface->lpVtbl->QueryInterface)(
           g_pDebugInspectSurface,
           &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
           v28) < 0 )
    {
      v21 = v24;
      v24 = 0LL;
      if ( v21 )
        (*(void (__fastcall **)(struct ID2D1Bitmap *))(*(_QWORD *)v21 + 16LL))(v21);
      if ( ((__int64 (__fastcall *)(volatile struct IUnknown *volatile, GUID *, struct ID2D1Bitmap **))v4->lpVtbl->QueryInterface)(
             v4,
             &GUID_a898a84c_3873_4588_b08b_ebbf978df041,
             &v24) >= 0 )
        DebugInspectBitmap(v24);
    }
    else
    {
      DebugInspectTexture(v28[0], 0);
    }
    if ( g_pDebugInspectSurface == v4 )
    {
      g_pDebugInspectSurface = 0LL;
      __debugbreak();
    }
    wil::com_ptr_t<CD2DBitmap,wil::err_returncode_policy>::~com_ptr_t<CD2DBitmap,wil::err_returncode_policy>((__int64 *)&v24);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v28);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_PROCESS_FRAME_Start,
      a3,
      1LL,
      v28);
  CTelemetryFrames::FrameRenderingStarted(*(_QWORD *)(*((_QWORD *)this + 526) + 72LL));
  CPartitionVerticalBlankScheduler::ComputeFrameTime(this);
  v25[0] = *((_QWORD *)this + 526);
  v25[1] = (char *)this + 4232;
  v26 = *((_BYTE *)this + 4548);
  v6 = *((_BYTE *)this + 4550);
  *((_BYTE *)this + 4550) = 0;
  v27 = v6;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McGenEventWrite_EventWriteTransfer(
      &Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_SCHEDULE_RENDER_Start,
      v5,
      1LL,
      v28);
  v7 = *((_QWORD *)this + 8);
  v23 = 0;
  *(_QWORD *)(v7 + 488) = v25;
  *(_DWORD *)(v7 + 1112) = 0;
  CComposition::ProcessComposition((CComposition *)v7, &v23);
  v8 = v23;
  *(_QWORD *)(v7 + 488) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 526) + 168LL) = v8;
  v9 = (v26 | *((_BYTE *)this + 4548)) == 0;
  *((_BYTE *)this + 4548) |= v26;
  if ( !v9 )
    *((_BYTE *)this + 4549) = *(_DWORD *)(*((_QWORD *)this + 8) + 472LL) == 0;
  v10 = *((_QWORD *)this + 526);
  if ( !*(_BYTE *)(v10 + 168) || *(_BYTE *)(v10 + 169) )
    CComposition::FlushChannels(*((CComposition **)this + 8));
  v11 = *((_QWORD *)this + 526);
  if ( !*(_BYTE *)(v11 + 168) || (v12 = 1LL, *(_BYTE *)(v11 + 169)) )
    v12 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0q_EventWriteTransfer(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_RENDER_Stop, v12);
  CPartitionVerticalBlankScheduler::UpdateCurrentTime((LARGE_INTEGER *)this);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx_EventWriteTransfer(
      *((_QWORD *)this + 1167),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 1166) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 1166) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 1166) - *((_QWORD *)this + 1165)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 1166) - *((_QWORD *)this + 1165)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 1166),
      *((_QWORD *)this + 1167),
      *((_QWORD *)this + 1164));
  *(_QWORD *)(*((_QWORD *)this + 526) + 80LL) = *((_QWORD *)this + 1166);
  v13 = CPartitionVerticalBlankScheduler::PresentFrame(
          this,
          *((struct CFrameInfo **)this + 526),
          *((_DWORD *)this + 1048));
  *(_QWORD *)(*((_QWORD *)this + 8) + 504LL) = *(_QWORD *)(*((_QWORD *)this + 8) + 496LL);
  v14 = *(void **)(*((_QWORD *)this + 7) + 16LL);
  if ( v14 )
    PulseEvent(v14);
  CPartitionVerticalBlankScheduler::UpdateDwmTimingInfo(this);
  CFrameInfo::Trace(*((CFrameInfo **)this + 526), *((_DWORD *)this + 1048));
  v15 = *((_QWORD *)this + 526);
  CTelemetryFrameStatistics::UpdateFrameStatistics(
    (CPartitionVerticalBlankScheduler *)((char *)this + 4560),
    *(_QWORD *)(v15 + 72),
    *(_QWORD *)(v15 + 88),
    *(_QWORD *)(v15 + 232),
    *(_DWORD *)(v15 + 36),
    *(_DWORD *)(v15 + 40),
    *(_BYTE *)(v15 + 169));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    McTemplateU0qqqq_EventWriteTransfer(
      (unsigned int)&Microsoft_Windows_Dwm_Core_Provider_Context,
      (unsigned int)&EVTDESC_SCHEDULE_PROCESS_FRAME,
      1,
      v13,
      *(_BYTE *)(*((_QWORD *)this + 526) + 224LL) != 0,
      0);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PROCESS_FRAME_Stop,
        v22,
        1LL,
        v28);
  }
  CProcessAttributionReporter::Report(qword_1803E2C98);
  v16 = qword_1803E2CA0;
  TickCount64 = GetTickCount64();
  if ( TickCount64 - *(_QWORD *)v16 >= 0x3E8 )
  {
    *(_QWORD *)v16 = TickCount64;
    CProcessResourceAttributionReporter::CheckAndReportHighResourceUsage(v16);
  }
  v18 = qword_1803E2C90;
  v19 = GetTickCount64();
  v20 = v19 - *(_QWORD *)v18;
  if ( v20 >= 0x3E8 )
  {
    *((_DWORD *)v18 + 2) = v20;
    *(_QWORD *)v18 = v19;
    CEnergyReporter::SendReportToE3((RTL_SRWLOCK *)v18);
  }
}
