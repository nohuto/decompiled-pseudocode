/*
 * XREFs of ?GetDelayZoneRectFromInputRect@CPalmRejectZoneInfo@@AEAA?AUtagRECT@@U2@J@Z @ 0x1C0215924
 * Callers:
 *     ?HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTelemetryData@@@Z @ 0x1C0215AB0 (-HitTestDelayZonePalmRejectionRegion@CPalmRejectZoneInfo@@QEAA_NUtagPOINT@@PEAUCDelayZonePanelTe.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

struct tagRECT *__fastcall CPalmRejectZoneInfo::GetDelayZoneRectFromInputRect(
        CPalmRejectZoneInfo *this,
        struct tagRECT *__return_ptr retstr,
        __m128i *a3,
        int a4)
{
  unsigned int (__fastcall *v4)(CPalmRejectZoneInfo *); // rax
  unsigned __int64 v8; // xmm0_8
  unsigned __int64 v9; // xmm0_8
  struct tagRECT *result; // rax
  struct tagRECT v11; // [rsp+20h] [rbp-18h]

  v4 = (unsigned int (__fastcall *)(CPalmRejectZoneInfo *))qword_1C02D7448;
  *retstr = 0LL;
  if ( v4 && v4(this) )
  {
    v8 = _mm_srli_si128(*a3, 8).m128i_u64[0];
    *(_QWORD *)&v11.left = a3->m128i_i64[0];
    v11.right = v8 + a4;
    v11.bottom = a4 + HIDWORD(v8);
  }
  else
  {
    v9 = _mm_srli_si128(*a3, 8).m128i_u64[0];
    v11.left = *(_OWORD *)a3 - a4;
    v11.right = v9;
    v11.top = HIDWORD(a3->m128i_i64[0]) - a4;
    v11.bottom = a4 + HIDWORD(v9);
  }
  result = retstr;
  *retstr = v11;
  return result;
}
