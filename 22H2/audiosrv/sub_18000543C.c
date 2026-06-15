/*
 * XREFs of sub_18000543C @ 0x18000543C
 * Callers:
 *     sub_180004B00 @ 0x180004B00 (sub_180004B00.c)
 *     sub_1800CF4A4 @ 0x1800CF4A4 (sub_1800CF4A4.c)
 * Callees:
 *     sub_180006A30 @ 0x180006A30 (sub_180006A30.c)
 *     sub_180007EE0 @ 0x180007EE0 (sub_180007EE0.c)
 *     sub_18001B550 @ 0x18001B550 (sub_18001B550.c)
 *     sub_18001B6A0 @ 0x18001B6A0 (sub_18001B6A0.c)
 *     sub_1800448E4 @ 0x1800448E4 (sub_1800448E4.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000543C(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // edi
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = (*(__int64 (__fastcall **)(__int64 *))(qword_18019F818 + 24))(&qword_18019F818) + 24;
  v2 = sub_18001B6A0(a1, &v7);
  v3 = 0;
  v4 = v7;
  if ( v2 >= 0 )
  {
    v5 = *(_DWORD *)(v7 - 16);
    if ( (((1 - *(_DWORD *)(v7 - 8)) | (*(_DWORD *)(v7 - 12) - v5)) & 0x80000000) != 0 )
    {
      sub_18001B550(&v7, v5);
      v4 = v7;
    }
    o__wcsupr_s(v4, (int)(v5 + 1));
    sub_1800448E4(&v7, v5);
    v3 = sub_180007EE0(v4);
  }
  sub_180006A30(v4 - 24);
  return v3;
}
