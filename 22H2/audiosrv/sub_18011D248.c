/*
 * XREFs of sub_18011D248 @ 0x18011D248
 * Callers:
 *     sub_180029348 @ 0x180029348 (sub_180029348.c)
 * Callees:
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18011D248(__int64 a1, _DWORD *a2)
{
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  *a2 = 0;
  sub_1800461B8(&v5);
  if ( (int)sub_180029DDC(0LL, *(_QWORD *)(a1 + 40), &v5) >= 0 )
    (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v5 + 152LL))(v5, a2);
  return sub_1800461B8(&v5);
}
