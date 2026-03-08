/*
 * XREFs of ?Initialize@CKstBase@@MEAAJXZ @ 0x1800CB270
 * Callers:
 *     ?Initialize@CKst@@EEAAJXZ @ 0x1800CB220 (-Initialize@CKst@@EEAAJXZ.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800CB324 (-reset@-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$i.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x18019559C (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 */

__int64 __fastcall CKstBase::Initialize(CKstBase *this)
{
  wil::details *v2; // rcx
  HANDLE Event; // rbx
  wil::details *v4; // rcx
  HANDLE v5; // rbx
  int LastErrorFailHr; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Event = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( Event )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 32,
      Event);
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v2);
    if ( LastErrorFailHr < 0 )
    {
      v8 = 25LL;
      goto LABEL_10;
    }
  }
  v5 = CreateEventExW(0LL, 0LL, 0, 0x1F0003u);
  if ( v5 )
  {
    GetLastError();
    _reset___unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAAXPEAX_Z(
      (char *)this + 8,
      v5);
    return 0LL;
  }
  LastErrorFailHr = wil::details::GetLastErrorFailHr(v4);
  if ( LastErrorFailHr >= 0 )
    return 0LL;
  v8 = 26LL;
LABEL_10:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
    (const char *)(unsigned int)LastErrorFailHr,
    v9);
  return (unsigned int)LastErrorFailHr;
}
