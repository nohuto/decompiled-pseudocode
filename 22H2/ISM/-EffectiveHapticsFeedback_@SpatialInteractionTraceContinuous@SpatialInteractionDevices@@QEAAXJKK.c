/*
 * XREFs of ?EffectiveHapticsFeedback_@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@QEAAXJKKE@Z @ 0x18016BCC4
 * Callers:
 *     ??$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractionDevices@@SAXAEAJAEAK1AEAE@Z @ 0x18016854C (--$EffectiveHapticsFeedback@AEAJAEAKAEAKAEAE@SpatialInteractionTraceContinuous@SpatialInteractio.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTraceContinuous@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D45BC (-get@-$static_lazy@VSpatialInteractionTraceContinuous@SpatialInteractionDevices@@@details@wil@@Q.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTraceContinuous::EffectiveHapticsFeedback_(
        SpatialInteractionDevices::SpatialInteractionTraceContinuous *this,
        int a2,
        int a3,
        int a4,
        char a5)
{
  _QWORD *v8; // rax
  __int64 v9; // r10
  char v10; // [rsp+38h] [rbp-31h] BYREF
  int v11; // [rsp+3Ch] [rbp-2Dh] BYREF
  int v12; // [rsp+40h] [rbp-29h] BYREF
  int v13; // [rsp+44h] [rbp-25h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+48h] [rbp-21h] BYREF
  int *v15; // [rsp+68h] [rbp-1h]
  __int64 v16; // [rsp+70h] [rbp+7h]
  int *v17; // [rsp+78h] [rbp+Fh]
  __int64 v18; // [rsp+80h] [rbp+17h]
  int *v19; // [rsp+88h] [rbp+1Fh]
  __int64 v20; // [rsp+90h] [rbp+27h]
  char *v21; // [rsp+98h] [rbp+2Fh]
  __int64 v22; // [rsp+A0h] [rbp+37h]

  v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTraceContinuous>::get(
         (__int64)this,
         _lambda_0bcba54505780f78856f588866e18ac8_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v8[1] > 5u && tlgKeywordOn(v8[1], 2LL) )
  {
    v10 = a5;
    v11 = a4;
    v21 = &v10;
    v12 = a3;
    v19 = &v11;
    v13 = a2;
    v17 = &v12;
    v15 = &v13;
    v22 = 1LL;
    v20 = 4LL;
    v18 = 4LL;
    v16 = 4LL;
    tlgWriteTransfer_EventWriteTransfer(v9, (unsigned __int8 *)dword_1801D21E8, 0LL, 0LL, 6u, &v14);
  }
}
