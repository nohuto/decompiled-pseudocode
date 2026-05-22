/*
 * XREFs of ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x18007C574
 * Callers:
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x18007C988 (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x1800297E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3,
        const bool *a4)
{
  __int64 v7; // rcx
  LPVOID v8; // rax
  int v9; // edx
  __int64 v10; // r10
  char v11; // al
  char v12; // [rsp+38h] [rbp-19h] BYREF
  char v13; // [rsp+39h] [rbp-18h] BYREF
  char v14; // [rsp+3Ah] [rbp-17h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+48h] [rbp-9h] BYREF
  char *v16; // [rsp+68h] [rbp+17h]
  int v17; // [rsp+70h] [rbp+1Fh]
  int v18; // [rsp+74h] [rbp+23h]
  char *v19; // [rsp+78h] [rbp+27h]
  int v20; // [rsp+80h] [rbp+2Fh]
  int v21; // [rsp+84h] [rbp+33h]
  char *v22; // [rsp+88h] [rbp+37h]
  int v23; // [rsp+90h] [rbp+3Fh]
  int v24; // [rsp+94h] [rbp+43h]

  if ( ISMTracing::IsEnabled((__int64)this) )
  {
    v8 = wil::details::static_lazy<ISMTracing>::get(
           v7,
           _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v8 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v8 + 1), 1LL) )
    {
      v11 = *a4;
      v24 = 0;
      v21 = 0;
      v18 = 0;
      v12 = v11;
      v13 = *a3;
      v14 = *a2;
      v22 = &v12;
      v19 = &v13;
      v16 = &v14;
      v23 = v9;
      v20 = v9;
      v17 = v9;
      tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801C932E, 0LL, 0LL, 5u, &v15);
    }
  }
}
