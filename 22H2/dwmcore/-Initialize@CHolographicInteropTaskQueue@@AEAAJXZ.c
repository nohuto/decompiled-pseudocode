/*
 * XREFs of ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x18025A5CC
 * Callers:
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x18025A518 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D958 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800B0938 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@Z$1-CloseHandle@details@wil@@YAX0@ZU-$in.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18014D44C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Initialize(wil::details **this)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  int LastErrorFailHr; // ebx
  bool v9; // sf

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    wil::details::unique_storage<wil::details::resource_policy<void *,void (*)(void *),&void wil::details::CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>>::reset(
      this + 6,
      Event);
    LastErrorFailHr = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
  }
  v9 = LastErrorFailHr < 0;
  if ( LastErrorFailHr > 0 )
  {
    LastErrorFailHr = (unsigned __int16)LastErrorFailHr | 0x80070000;
    v9 = LastErrorFailHr < 0;
  }
  if ( v9 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, LastErrorFailHr, 0x32u, 0LL);
  return (unsigned int)LastErrorFailHr;
}
