/*
 * XREFs of ?JumpViewCancelledByAnotherInvoke@ShowJumpViewActivity@JumpViewProvider@@QEAAXXZ @ 0x180247718
 * Callers:
 *     ?Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z @ 0x180248C80 (-Show@CJumpViewExperienceManager@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18001D8BC (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x18002FC64 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x18008FA30 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z @ 0x1802498E8 (-get@-$static_lazy@VJumpViewProvider@@@details@wil@@QEAAPEAVJumpViewProvider@@P6AXXZ@Z.c)
 */

void __fastcall JumpViewProvider::ShowJumpViewActivity::JumpViewCancelledByAnotherInvoke(
        JumpViewProvider::ShowJumpViewActivity *this)
{
  _DWORD *v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  __int64 *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v2 = *(_DWORD **)(wil::details::static_lazy<JumpViewProvider>::get(
                      this,
                      _lambda_98d309e3731f67b600e39960160efe32_::_lambda_invoker_cdecl_)
                  + 8);
  if ( *v2 > 5u )
  {
    if ( tlgKeywordOn((__int64)v2, 0x400000000000LL) )
    {
      v4 = *((_QWORD *)this + 6);
      v9 = 0;
      v7 = &v5;
      v5 = 50331648LL;
      v8 = 8;
      tlgWriteTransfer_EventWriteTransfer(v3, (unsigned __int8 *)dword_18057A0A3, (const GUID *)(v4 + 8), 0LL, 3u, &v6);
    }
  }
}
