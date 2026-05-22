/*
 * XREFs of ?InitializeHapticsEngine_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAX_N_JE00@Z @ 0x18016CE80
 * Callers:
 *     ??$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEA_N$$QEA_J$$QEAE$$QEA_N3@Z @ 0x1801685B4 (--$InitializeHapticsEngine@AEA_N_JE_N_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAE.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::InitializeHapticsEngine_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        char a2,
        __int64 a3,
        char a4,
        bool a5,
        bool a6)
{
  LPVOID v9; // rax
  __int64 v10; // r10
  bool v11; // [rsp+38h] [rbp-49h] BYREF
  bool v12; // [rsp+39h] [rbp-48h] BYREF
  char v13; // [rsp+3Ah] [rbp-47h] BYREF
  char v14; // [rsp+3Bh] [rbp-46h] BYREF
  __int64 v15; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+48h] [rbp-39h] BYREF
  char *v17; // [rsp+68h] [rbp-19h]
  __int64 v18; // [rsp+70h] [rbp-11h]
  __int64 *v19; // [rsp+78h] [rbp-9h]
  __int64 v20; // [rsp+80h] [rbp-1h]
  char *v21; // [rsp+88h] [rbp+7h]
  __int64 v22; // [rsp+90h] [rbp+Fh]
  bool *v23; // [rsp+98h] [rbp+17h]
  __int64 v24; // [rsp+A0h] [rbp+1Fh]
  bool *v25; // [rsp+A8h] [rbp+27h]
  __int64 v26; // [rsp+B0h] [rbp+2Fh]

  v9 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v9 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v9 + 1), 2LL) )
  {
    v11 = a6;
    v12 = a5;
    v13 = a4;
    v25 = &v11;
    v23 = &v12;
    v21 = &v13;
    v19 = &v15;
    v17 = &v14;
    v15 = a3;
    v14 = a2;
    v26 = 1LL;
    v24 = 1LL;
    v22 = 1LL;
    v20 = 8LL;
    v18 = 1LL;
    tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801D1F57, 0LL, 0LL, 7u, &v16);
  }
}
