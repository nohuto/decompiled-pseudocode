/*
 * XREFs of sub_18013AA14 @ 0x18013AA14
 * Callers:
 *     sub_18013BE08 @ 0x18013BE08 (sub_18013BE08.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F3AD4 @ 0x1800F3AD4 (sub_1800F3AD4.c)
 */

__int64 __fastcall sub_18013AA14(__int64 a1, __int64 a2)
{
  int v3; // ebx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  v3 = 0;
  while ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 200LL))(a2) && v3 >= 0 )
  {
    v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL))(a2, &v5);
    if ( !v3 && (_DWORD)v5 != 8 && (_DWORD)v5 != 13 )
    {
      v3 = -2147024809;
      sub_1800F3AD4((__int64)L"EOF expected but got other blocks");
      return (unsigned int)v3;
    }
  }
  return (unsigned int)v3;
}
