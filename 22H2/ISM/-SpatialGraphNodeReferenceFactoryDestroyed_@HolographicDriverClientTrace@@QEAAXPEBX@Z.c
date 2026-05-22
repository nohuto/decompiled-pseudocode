/*
 * XREFs of ?SpatialGraphNodeReferenceFactoryDestroyed_@HolographicDriverClientTrace@@QEAAXPEBX@Z @ 0x1801643EC
 * Callers:
 *     ??1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ @ 0x180158268 (--1SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@MEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180018D80 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1800350B8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientTrace@@P6AXXZ@Z @ 0x180167F04 (-get@-$static_lazy@VHolographicDriverClientTrace@@@details@wil@@QEAAPEAVHolographicDriverClientT.c)
 */

void __fastcall HolographicDriverClientTrace::SpatialGraphNodeReferenceFactoryDestroyed_(
        HolographicDriverClientTrace *this,
        const void *a2)
{
  __int64 v3; // rax
  __int64 v4; // r10
  const void *v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  const void **v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v3 = wil::details::static_lazy<HolographicDriverClientTrace>::get(
         this,
         _lambda_9dbe22df4b880a8e911c86b950d68f95_::_lambda_invoker_cdecl_);
  if ( **(_DWORD **)(v3 + 8) > 4u && tlgKeywordOn(*(_QWORD *)(v3 + 8), 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    v5 = a2;
    v8 = 8;
    tlgWriteTransfer_EventWriteTransfer(v4, (unsigned __int8 *)dword_1801CFB9D, 0LL, 0LL, 3u, &v6);
  }
}
