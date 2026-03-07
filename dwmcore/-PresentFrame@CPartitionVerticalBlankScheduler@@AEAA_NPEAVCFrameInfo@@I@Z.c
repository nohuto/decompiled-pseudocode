char __fastcall CPartitionVerticalBlankScheduler::PresentFrame(
        CPartitionVerticalBlankScheduler *this,
        struct CFrameInfo *a2,
        int a3)
{
  char v3; // r15
  CComposition *v7; // rcx
  struct IMonitorTarget *PrimaryMonitorTarget; // rax
  __int64 v9; // rax
  __int64 v10; // r8
  unsigned __int64 v12; // rtt
  _QWORD v13[2]; // [rsp+40h] [rbp-58h] BYREF
  char v14; // [rsp+50h] [rbp-48h]
  char v15; // [rsp+51h] [rbp-47h]
  _BYTE v16[16]; // [rsp+58h] [rbp-40h] BYREF

  v3 = 0;
  if ( *((_BYTE *)a2 + 168) && !*((_BYTE *)a2 + 169) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      v12 = *((_QWORD *)this + 1166);
      McTemplateU0xxxxq_EventWriteTransfer(
        g_qpcFrequency.LowPart,
        10000000 * (v12 % g_qpcFrequency.QuadPart) % g_qpcFrequency.QuadPart,
        10000000 * (v12 / g_qpcFrequency.QuadPart)
      + 10000000 * (v12 % g_qpcFrequency.QuadPart) / g_qpcFrequency.QuadPart,
        (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 27) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      - (unsigned __int64)(10000000 * (*((_QWORD *)a2 + 30) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
      + 10000000 * (*((_QWORD *)a2 + 27) / g_qpcFrequency.QuadPart - *((_QWORD *)a2 + 30) / g_qpcFrequency.QuadPart),
        *((_QWORD *)a2 + 2),
        *((_BYTE *)a2 + 8) - 1);
    }
    v7 = (CComposition *)*((_QWORD *)this + 8);
    v13[1] = (char *)this + 4232;
    v14 = *((_BYTE *)this + 4548);
    v15 = *((_BYTE *)this + 4550);
    v13[0] = a2;
    if ( !(unsigned int)CComposition::Present(v7, (struct FRAME_TIME_INFO *)v13) )
    {
      *((_BYTE *)a2 + 169) = 1;
      PrimaryMonitorTarget = CRenderTargetManager::GetPrimaryMonitorTarget(*(CRenderTargetManager **)(*((_QWORD *)this + 8) + 216LL));
      if ( PrimaryMonitorTarget )
        *((_DWORD *)a2 + 8) = (*(__int64 (__fastcall **)(struct IMonitorTarget *))(*(_QWORD *)PrimaryMonitorTarget + 80LL))(PrimaryMonitorTarget);
      v9 = *((_QWORD *)this + 1166);
      *((_DWORD *)this + 1050) = a3;
      *((_QWORD *)a2 + 11) = v9;
      ++*((_QWORD *)this + 1164);
    }
    CComposition::FlushChannels(*((CComposition **)this + 8));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McGenEventWrite_EventWriteTransfer(
        &Microsoft_Windows_Dwm_Core_Provider_Context,
        &EVTDESC_SCHEDULE_PRESENT_Stop,
        v10,
        1LL,
        v16);
    v3 = 1;
    *((_BYTE *)this + 4548) |= v14;
  }
  return v3;
}
