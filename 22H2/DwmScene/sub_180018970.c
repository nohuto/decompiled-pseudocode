/*
 * XREFs of sub_180018970 @ 0x180018970
 * Callers:
 *     sub_180017958 @ 0x180017958 (sub_180017958.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180018970(__int64 a1)
{
  *(_QWORD *)a1 = &ISpectreLightNode::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &off_18013AAD0;
  if ( qword_180218538 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180218538 + 8LL))(qword_180218538);
  *(_QWORD *)a1 = &off_18013AB58;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 1065353216;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_QWORD *)(a1 + 192) = 0LL;
  *(_DWORD *)(a1 + 200) = 0;
  return a1;
}
