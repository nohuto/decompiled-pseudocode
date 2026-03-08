/*
 * XREFs of ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x1800CBC70
 * Callers:
 *     <none>
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800AABC8 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CB324 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x1800CD9D0 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     memset_0 @ 0x18010F5A8 (memset_0.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18019559C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

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
