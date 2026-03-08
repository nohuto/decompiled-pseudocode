/*
 * XREFs of ?Run@CKstBase@@AEAAKXZ @ 0x1800FAE1C
 * Callers:
 *     ?RunKernelThreadStatic@CKstBase@@CAKPEAX@Z @ 0x1800FAE10 (-RunKernelThreadStatic@CKstBase@@CAKPEAX@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180032950 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _tlgKeywordOn @ 0x1800BAD18 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800BADC0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18010E3E0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18019762C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1801B2934 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CKstBase::Run(CKstBase *this)
{
  DWORD CurrentThreadId; // eax
  DWORD v3; // ebx
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  _DWORD *v8; // rcx
  DWORD v9; // edi
  __int64 v10; // rcx
  _DWORD *v11; // rcx
  const char *v12; // r9
  DWORD v13; // edi
  int v14; // eax
  __int64 v15; // rcx
  const char *v16; // r9
  signed int LastError; // eax
  __int64 result; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  ULONG v21; // [rsp+20h] [rbp-50h]
  DWORD v22; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+38h] [rbp-38h] BYREF
  DWORD *v24; // [rsp+58h] [rbp-18h]
  int v25; // [rsp+60h] [rbp-10h]
  int v26; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  CurrentThreadId = GetCurrentThreadId();
  *((_DWORD *)this + 6) = CurrentThreadId;
  v3 = CurrentThreadId;
  v5 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                   v4,
                   (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
  if ( *v5 > 4u && tlgKeywordOn((__int64)v5, 2LL) )
  {
    v26 = 0;
    v24 = &v22;
    v22 = v3;
    v25 = 4;
    tlgWriteTransfer_EventWriteTransfer(v15, (unsigned __int8 *)dword_18037F616, 0LL, 0LL, 3u, &v23);
  }
  if ( (unsigned int)NtKSTInitialize(*((_QWORD *)this + 4), *((_QWORD *)this + 1)) )
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                       v6,
                       (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
      if ( *v8 > 4u && tlgKeywordOn((__int64)v8, 2LL) )
        tlgWriteTransfer_EventWriteTransfer(v19, (unsigned __int8 *)dword_18037F640, 0LL, 0LL, 2u, &v23);
      v9 = NtKSTWait();
      v11 = (_DWORD *)wil::details::static_lazy<InputTraceLogging>::get(
                        v10,
                        (void (__cdecl *)())_lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_)[1];
      if ( *v11 > 4u && tlgKeywordOn((__int64)v11, 2LL) )
      {
        v26 = 0;
        v24 = &v22;
        v22 = v9;
        v25 = 4;
        tlgWriteTransfer_EventWriteTransfer(v20, (unsigned __int8 *)dword_18037F5C7, 0LL, 0LL, 3u, &v23);
      }
      if ( !v9 )
        break;
      v13 = v9 - 1;
      if ( !v13 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x92,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v12);
      if ( v13 != 1 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x9B,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          v12);
      v14 = (*(__int64 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 8LL))(this);
      if ( v14 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x96,
          (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
          (const char *)(unsigned int)v14,
          v21);
    }
  }
  else
  {
    if ( (*(unsigned __int8 (__fastcall **)(CKstBase *))(*(_QWORD *)this + 16LL))(this) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x69,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
        v16);
    LastError = GetLastError();
    v7 = LastError;
    if ( LastError > 0 )
      v7 = (unsigned __int16)LastError | 0x80070000;
    if ( (v7 & 0x80000000) == 0 )
      v7 = -2147467259;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x77,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\input\\kstbase.cpp",
      (const char *)v7,
      v21);
  }
  *((_DWORD *)this + 6) = 0;
  result = (unsigned __int16)v7;
  if ( (v7 & 0x1FFF0000) != 0x70000 )
    return v7;
  return result;
}
