__int64 __fastcall CGlobalMit::InitializeMmcssTask(wil::details **this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned int v4; // ebx
  wil::details *v5; // rcx
  wil::details *Event; // rbx
  int LastErrorFailHr; // eax
  __int64 v9; // rcx
  unsigned __int16 v10[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v11; // [rsp+B4h] [rbp-24h]

  memset_0(v10, 0, 0x90uLL);
  StringCchCopyW(v10, 0x40uLL, (size_t *)L"Capture");
  v11 = 1;
  v2 = CMmcssTask::Set((CMmcssTask *)(this + 6), (const struct DWM_MMTASK *)v10, 0);
  v4 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x49u, 0LL);
  }
  else
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
        this + 17,
        Event);
      return 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
      v4 = LastErrorFailHr;
      if ( LastErrorFailHr < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, LastErrorFailHr, 0x4Bu, 0LL);
    }
  }
  return v4;
}
