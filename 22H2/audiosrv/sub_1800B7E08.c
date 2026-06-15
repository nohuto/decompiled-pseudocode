/*
 * XREFs of sub_1800B7E08 @ 0x1800B7E08
 * Callers:
 *     sub_180062950 @ 0x180062950 (sub_180062950.c)
 *     sub_18006915C @ 0x18006915C (sub_18006915C.c)
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 * Callees:
 *     sub_1800458B4 @ 0x1800458B4 (sub_1800458B4.c)
 *     sub_1800472E0 @ 0x1800472E0 (sub_1800472E0.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     sub_180064E6C @ 0x180064E6C (sub_180064E6C.c)
 *     sub_180064F54 @ 0x180064F54 (sub_180064F54.c)
 *     sub_1800EEBE4 @ 0x1800EEBE4 (sub_1800EEBE4.c)
 *     sub_1800EEC40 @ 0x1800EEC40 (sub_1800EEC40.c)
 *     sub_1800EF734 @ 0x1800EF734 (sub_1800EF734.c)
 */

void __fastcall sub_1800B7E08(__int64 a1)
{
  __int64 v1; // rdi
  int v3; // eax
  __int64 v4; // rcx

  v1 = a1 + 312;
  sub_180064E6C(a1 + 312);
  sub_1800EEBE4(v1 + 80, v1 + 80, *(_QWORD *)(*(_QWORD *)(v1 + 80) + 8LL));
  sub_1800472E0(*(_QWORD *)(v1 + 80), 0x30uLL);
  Mtx_destroy_in_situ((_Mtx_t)v1);
  sub_180064F54(a1 + 216);
  sub_1800EEC40(a1 + 296, a1 + 296, *(_QWORD *)(*(_QWORD *)(a1 + 296) + 8LL));
  sub_1800472E0(*(_QWORD *)(a1 + 296), 0x48uLL);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 216));
  if ( *(_QWORD *)(a1 + 208) )
  {
    sub_1800EF734(a1 + 112);
    CloseThreadpoolTimer(*(PTP_TIMER *)(a1 + 208));
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  sub_1800458B4(a1 + 112, 0);
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 120));
  if ( *(_QWORD *)a1 )
  {
    v3 = Pdcv2ActivationClientUnregister() | 0x10000000;
    if ( v3 < 0 )
      sub_18005E8F8((__int64)"CPdcActivationClient::~CPdcActivationClient", 26, v3);
    *(_QWORD *)a1 = 0LL;
  }
  Mtx_destroy_in_situ((_Mtx_t)(a1 + 32));
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    sub_1800472E0(v4, (*(_QWORD *)(a1 + 24) - v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_QWORD *)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 0LL;
  }
}
