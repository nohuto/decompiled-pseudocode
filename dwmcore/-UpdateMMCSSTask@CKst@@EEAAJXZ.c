/*
 * XREFs of ?UpdateMMCSSTask@CKst@@EEAAJXZ @ 0x1800F8E80
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?Revert@CMmcssTask@@QEAAXXZ @ 0x1800F90B8 (-Revert@CMmcssTask@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FBBE4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Apply@CMmcssTask@@QEAAJ_N@Z @ 0x180102FFC (-Apply@CMmcssTask@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 */

__int64 __fastcall CKst::UpdateMMCSSTask(CKst *this)
{
  char v2; // bl
  _DWORD *v3; // rcx
  CMmcssTask *v4; // rcx
  __int64 v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  ULONG v9; // [rsp+20h] [rbp-58h]
  char v10; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+38h] [rbp-40h] BYREF
  char *v12; // [rsp+58h] [rbp-20h]
  int v13; // [rsp+60h] [rbp-18h]
  int v14; // [rsp+64h] [rbp-14h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = *(_BYTE *)(*((_QWORD *)this + 5) + 416LL);
  v3 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   (__int64)this,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v3 > 4u )
  {
    if ( tlgKeywordOn((__int64)v3, 2LL) )
    {
      v14 = 0;
      v12 = &v10;
      v10 = v2;
      v13 = 1;
      tlgWriteTransfer_EventWriteTransfer(v6, (unsigned __int8 *)dword_18037F595, 0LL, 0LL, 3u, &v11);
    }
  }
  v4 = (CMmcssTask *)*((_QWORD *)this + 6);
  if ( !v2 )
  {
    CMmcssTask::Revert(v4);
    return 0LL;
  }
  v7 = CMmcssTask::Apply(v4, 1);
  v8 = v7;
  if ( v7 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x46,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kst.cpp",
    (const char *)(unsigned int)v7,
    v9);
  return v8;
}
