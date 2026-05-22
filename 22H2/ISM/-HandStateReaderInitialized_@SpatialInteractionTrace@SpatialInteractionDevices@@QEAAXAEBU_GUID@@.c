/*
 * XREFs of ?HandStateReaderInitialized_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXAEBU_GUID@@_N1111@Z @ 0x1800DFFB8
 * Callers:
 *     ??$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialInteractionDevices@@SAX$$QEAU_GUID@@AEB_N111AEA_N@Z @ 0x1800DDA00 (--$HandStateReaderInitialized@U_GUID@@AEB_NAEB_NAEB_NAEB_NAEA_N@SpatialInteractionTrace@SpatialI.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800C7254 (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionTrace::HandStateReaderInitialized_(
        SpatialInteractionDevices::SpatialInteractionTrace *this,
        const struct _GUID *a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        bool a7)
{
  LPVOID v10; // rax
  __int64 v11; // r10
  bool v12; // [rsp+38h] [rbp-61h] BYREF
  bool v13; // [rsp+39h] [rbp-60h] BYREF
  bool v14; // [rsp+3Ah] [rbp-5Fh] BYREF
  char v15; // [rsp+3Bh] [rbp-5Eh] BYREF
  char v16; // [rsp+3Ch] [rbp-5Dh] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-51h] BYREF
  const struct _GUID *v18; // [rsp+68h] [rbp-31h]
  __int64 v19; // [rsp+70h] [rbp-29h]
  char *v20; // [rsp+78h] [rbp-21h]
  __int64 v21; // [rsp+80h] [rbp-19h]
  char *v22; // [rsp+88h] [rbp-11h]
  __int64 v23; // [rsp+90h] [rbp-9h]
  bool *v24; // [rsp+98h] [rbp-1h]
  __int64 v25; // [rsp+A0h] [rbp+7h]
  bool *v26; // [rsp+A8h] [rbp+Fh]
  __int64 v27; // [rsp+B0h] [rbp+17h]
  bool *v28; // [rsp+B8h] [rbp+1Fh]
  __int64 v29; // [rsp+C0h] [rbp+27h]

  v10 = wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
          (__int64)this,
          _lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
  if ( **((_DWORD **)v10 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v10 + 1), 2LL) )
  {
    v12 = a7;
    v13 = a6;
    v14 = a5;
    v28 = &v12;
    v26 = &v13;
    v24 = &v14;
    v22 = &v15;
    v20 = &v16;
    v15 = a4;
    v16 = a3;
    v29 = 1LL;
    v27 = 1LL;
    v25 = 1LL;
    v23 = 1LL;
    v21 = 1LL;
    v18 = a2;
    v19 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(v11, (unsigned __int8 *)dword_1801CDD98, 0LL, 0LL, 8u, &v17);
  }
}
