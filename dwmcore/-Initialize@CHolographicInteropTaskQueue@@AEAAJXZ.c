/*
 * XREFs of ?Initialize@CHolographicInteropTaskQueue@@AEAAJXZ @ 0x1802A8C78
 * Callers:
 *     ?Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z @ 0x1802A8BB4 (-Create@CHolographicInteropTaskQueue@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CB324 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18019559C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CHolographicInteropTaskQueue::Initialize(wil::details **this)
{
  __int64 v2; // rdx
  wil::details *v3; // rcx
  wil::details *Event; // rbx
  __int64 v5; // r8
  const char *v6; // r9
  __int64 v7; // rcx
  signed int v8; // ebx
  signed int LastErrorFailHr; // eax

  Event = (wil::details *)CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      this + 6,
      Event);
    v8 = 0;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v3, v2, v5, v6);
    v8 = LastErrorFailHr;
    if ( LastErrorFailHr > 0 )
      v8 = (unsigned __int16)LastErrorFailHr | 0x80070000;
  }
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v8, 0x32u, 0LL);
  return (unsigned int)v8;
}
