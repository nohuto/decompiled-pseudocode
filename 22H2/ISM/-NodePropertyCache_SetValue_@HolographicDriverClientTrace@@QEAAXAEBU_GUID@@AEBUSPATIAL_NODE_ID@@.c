/*
 * XREFs of ?NodePropertyCache_SetValue_@HolographicDriverClientTrace@@QEAAXAEBU_GUID@@AEBUSPATIAL_NODE_ID@@0PEBX_K@Z @ 0x1801609A8
 * Callers:
 *     ?SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@PEBX_K@Z @ 0x180163F7C (-SetValue@NodePropertyCache@Holographic@Internal@Windows@@QEAA_NAEBUSPATIAL_NODE_ID@@AEBU_GUID@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F04 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::NodePropertyCache_SetValue_(
        HolographicDriverClientTrace *this,
        const struct _GUID *a2,
        const struct SPATIAL_NODE_ID *a3,
        const struct _GUID *a4,
        const void *a5,
        unsigned __int64 a6)
{
  __int64 v9; // rax
  __int64 v10; // r10
  unsigned __int64 v11; // [rsp+38h] [rbp-39h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v12; // [rsp+48h] [rbp-29h] BYREF
  const struct _GUID *v13; // [rsp+68h] [rbp-9h]
  __int64 v14; // [rsp+70h] [rbp-1h]
  const struct SPATIAL_NODE_ID *v15; // [rsp+78h] [rbp+7h]
  __int64 v16; // [rsp+80h] [rbp+Fh]
  const struct _GUID *v17; // [rsp+88h] [rbp+17h]
  __int64 v18; // [rsp+90h] [rbp+1Fh]
  unsigned __int64 *v19; // [rsp+98h] [rbp+27h]
  __int64 v20; // [rsp+A0h] [rbp+2Fh]

  v9 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v9 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v9 + 8), 2LL) )
  {
    v11 = a6;
    v20 = 8LL;
    v19 = &v11;
    v17 = a4;
    v18 = 16LL;
    v15 = a3;
    v16 = 16LL;
    v13 = a2;
    v14 = 16LL;
    tlgWriteTransfer_EventWriteTransfer(v10, (unsigned __int8 *)dword_1801D0C36, 0LL, 0LL, 6u, &v12);
  }
}
