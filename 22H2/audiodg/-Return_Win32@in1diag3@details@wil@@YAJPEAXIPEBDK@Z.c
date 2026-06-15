/*
 * XREFs of ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x14003E6F0
 * Callers:
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x14000D610 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     _lambda_469503bf6dae88a4a10e2b9fb17df9f1_::operator() @ 0x140013E1C (_lambda_469503bf6dae88a4a10e2b9fb17df9f1_--operator().c)
 * Callees:
 *     ?ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z @ 0x14003E52C (-ReportFailure_Win32@details@wil@@YAJPEAXIPEBD110W4FailureType@2@K@Z.c)
 */

__int64 __fastcall wil::details::in1diag3::Return_Win32(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // [rsp+20h] [rbp-28h]
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return wil::details::ReportFailure_Win32((__int64)this, a2, a3, (__int64)a4, v5, retaddr, v6, (int)a4);
}
