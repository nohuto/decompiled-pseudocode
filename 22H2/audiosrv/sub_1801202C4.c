/*
 * XREFs of sub_1801202C4 @ 0x1801202C4
 * Callers:
 *     sub_1801202B0 @ 0x1801202B0 (sub_1801202B0.c)
 * Callees:
 *     sub_180010FD8 @ 0x180010FD8 (sub_180010FD8.c)
 *     sub_180055F40 @ 0x180055F40 (sub_180055F40.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_18011FFB4 @ 0x18011FFB4 (sub_18011FFB4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1801202C4(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v7; // esi
  LPVOID v8; // rax
  __int64 v9; // rdi
  int v10; // ecx
  int v11; // eax
  __int64 v12; // [rsp+20h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v7 = -2147024882;
  v8 = sub_180055F40(0x88uLL);
  try
  {
    if ( v8 )
      v9 = sub_18011FFB4((__int64)v8, a1);
    else
      v9 = 0LL;
    v12 = v9;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v7 = -2147024882;
    v9 = v12;
  }
  if ( v9 )
  {
    v10 = sub_180010FD8((struct _RTL_CRITICAL_SECTION *)(v9 + 64));
    if ( v10 >= 0 )
    {
      *(_BYTE *)(v9 + 104) = 1;
      v10 = 0;
    }
    v11 = 0;
    if ( v10 < 0 )
      v11 = v10;
    v7 = 0;
    if ( v11 < 0 )
      v7 = v11;
    if ( v7 || (v7 = (**(__int64 (__fastcall ***)(__int64, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
  }
  return v7;
}
