/*
 * XREFs of ?MPCHolographicInputManager_UpdateDoubleClickValues_@ISMTracing@@QEAAXAEB_NAEBH1@Z @ 0x180077404
 * Callers:
 *     ?UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ @ 0x18001FDF4 (-UpdateDoubleClickValues@MPCHolographicInputManager@@AEAAXXZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x180019BA4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_UpdateDoubleClickValues_(
        ISMTracing *this,
        const bool *a2,
        int *a3,
        int *a4)
{
  LPVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r10
  char v11; // [rsp+38h] [rbp-19h] BYREF
  int v12; // [rsp+3Ch] [rbp-15h] BYREF
  int v13; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-9h] BYREF
  char *v15; // [rsp+68h] [rbp+17h]
  __int64 v16; // [rsp+70h] [rbp+1Fh]
  int *v17; // [rsp+78h] [rbp+27h]
  __int64 v18; // [rsp+80h] [rbp+2Fh]
  int *v19; // [rsp+88h] [rbp+37h]
  __int64 v20; // [rsp+90h] [rbp+3Fh]

  v7 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         _lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v7 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v7 + 1), 1LL) )
  {
    v12 = *a4;
    v13 = *a3;
    v11 = *a2;
    v19 = &v12;
    v17 = &v13;
    v15 = &v11;
    v20 = v9;
    v18 = v9;
    v16 = v8;
    tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801C89DC, 0LL, 0LL, 5u, &v14);
  }
}
