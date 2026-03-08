/*
 * XREFs of ?TriggerMmcss@CKst@@QEAAJXZ @ 0x1800C83F4
 * Callers:
 *     ?ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ @ 0x1800C8360 (-ResetInputThreadMmcss@CGlobalInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x1800C84A4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CKst::TriggerMmcss(wil::details **this)
{
  void *v2; // rdx
  _DWORD *v3; // rcx
  __int64 v5; // rcx
  ULONG v6; // [rsp+20h] [rbp-48h]
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u && tlgKeywordOn((__int64)v3, 2LL) )
    tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_18037F56C, 0LL, 0LL, (ULONG)v2, &v7);
  if ( (((unsigned __int64)this[2] + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
  {
    wil::details::SetEvent(this[1], v2);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6F,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
      (const char *)0x80004004LL,
      v6);
    return 2147500036LL;
  }
}
