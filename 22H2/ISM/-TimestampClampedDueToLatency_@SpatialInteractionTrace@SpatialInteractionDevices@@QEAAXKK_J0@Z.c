/*
 * XREFs of ?TimestampClampedDueToLatency_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK_J0@Z @ 0x18016FB50
 * Callers:
 *     ??$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDevices@@SAXAEAK0AEB_J1@Z @ 0x180168B50 (--$TimestampClampedDueToLatency@AEAKAEAKAEB_JAEB_J@SpatialInteractionTrace@SpatialInteractionDev.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::TimestampClampedDueToLatency_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5)
{
  LPVOID v8; // rax
  __int64 v9; // r8
  __int64 v10; // r10
  int v11; // [rsp+38h] [rbp-41h] BYREF
  int v12; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 v13; // [rsp+40h] [rbp-39h] BYREF
  __int64 v14; // [rsp+48h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+58h] [rbp-21h] BYREF
  int *v16; // [rsp+78h] [rbp-1h]
  __int64 v17; // [rsp+80h] [rbp+7h]
  int *v18; // [rsp+88h] [rbp+Fh]
  __int64 v19; // [rsp+90h] [rbp+17h]
  __int64 *v20; // [rsp+98h] [rbp+1Fh]
  __int64 v21; // [rsp+A0h] [rbp+27h]
  __int64 *v22; // [rsp+A8h] [rbp+2Fh]
  __int64 v23; // [rsp+B0h] [rbp+37h]

  v8 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
         (__int64)this,
         _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v8 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v8 + 1), 2LL) )
  {
    v13 = a5;
    v19 = v9;
    v22 = &v13;
    v17 = v9;
    v20 = &v14;
    v14 = a4;
    v18 = &v11;
    v16 = &v12;
    v11 = a3;
    v12 = a2;
    v23 = 8LL;
    v21 = 8LL;
    tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801D1E53, 0LL, 0LL, 6u, &v15);
  }
}
