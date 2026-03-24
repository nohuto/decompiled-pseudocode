/*
 * XREFs of ?InitializeMmcssTask@CGlobalMit@@MEAAJXZ @ 0x1800B3C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z @ 0x180030920 (-Set@CMmcssTask@@QEAAJPEBUDWM_MMTASK@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B0938 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800B2B60 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1800E6B40 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7F5C (memset_0.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18014D44C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CGlobalMit::InitializeMmcssTask(CGlobalMit *this)
{
  int v2; // eax
  __int64 v3; // rcx
  int LastErrorFailHr; // ebx
  wil::details *v5; // rcx
  wil::details *Event; // rbx
  __int64 v7; // rcx
  unsigned __int16 v9[66]; // [rsp+30h] [rbp-A8h] BYREF
  int v10; // [rsp+B4h] [rbp-24h]

  memset_0(v9, 0, 0x90uLL);
  StringCchCopyW(v9, 0x40uLL, (size_t *)L"Capture");
  v10 = 1;
  v2 = CMmcssTask::Set((struct _RTL_CRITICAL_SECTION *)((char *)this + 48), (const struct DWM_MMTASK *)v9, 0);
  LastErrorFailHr = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x4Bu, 0LL);
  }
  else
  {
    Event = (wil::details *)CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
    if ( Event )
    {
      GetLastError();
      wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
        (wil::details **)this + 17,
        Event);
      LastErrorFailHr = 0;
    }
    else
    {
      LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    }
    if ( LastErrorFailHr < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LastErrorFailHr, 0x4Du, 0LL);
  }
  return (unsigned int)LastErrorFailHr;
}
