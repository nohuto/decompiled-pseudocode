/*
 * XREFs of ?MPCHolographicInputManager_ForcedPrimary_@ISMTracing@@QEAAXK@Z @ 0x180076C78
 * Callers:
 *     ?ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z @ 0x180075CAC (-ForcePrimaryInputType@MPCHolographicInputManager@@QEAAJW4InputType@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_ForcedPrimary_(ISMTracing *this, int a2)
{
  __int64 v3; // rcx
  LPVOID v4; // rax
  __int64 v5; // r10
  int v6; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+38h] [rbp-40h] BYREF
  int *v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+60h] [rbp-18h]
  int v10; // [rsp+64h] [rbp-14h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v4 = wil::details::static_lazy<ISMTracing>::get(
           v3,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v4 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v4 + 1), 1LL) )
    {
      v10 = 0;
      v8 = &v6;
      v6 = a2;
      v9 = 4;
      tlgWriteTransfer_EventWriteTransfer(v5, (unsigned __int8 *)dword_1801C8CAE, 0LL, 0LL, 3u, &v7);
    }
  }
}
