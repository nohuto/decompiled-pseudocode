/*
 * XREFs of sub_180029F54 @ 0x180029F54
 * Callers:
 *     sub_180046A30 @ 0x180046A30 (sub_180046A30.c)
 *     sub_18006E5E0 @ 0x18006E5E0 (sub_18006E5E0.c)
 *     sub_1800D672C @ 0x1800D672C (sub_1800D672C.c)
 * Callees:
 *     sub_180029DDC @ 0x180029DDC (sub_180029DDC.c)
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180029F54(__int64 a1)
{
  unsigned int v2; // edi
  unsigned int v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v5 = 0LL;
  v4 = 0;
  sub_1800461B8(&v5);
  if ( (int)sub_180029DDC(0LL, *(_QWORD *)(a1 + 40), &v5) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v5 + 184LL))(v5, &v4) >= 0 )
  {
    v2 = v4;
  }
  sub_1800461B8(&v5);
  return v2;
}
