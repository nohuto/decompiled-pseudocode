/*
 * XREFs of sub_1800D2EA8 @ 0x1800D2EA8
 * Callers:
 *     ?setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z @ 0x18004F1D0 (-setSBUpLow@@YAXPEAUthreadmbcinfostruct@@@Z.c)
 *     sub_1800DC7E0 @ 0x1800DC7E0 (sub_1800DC7E0.c)
 *     sub_1800EA53C @ 0x1800EA53C (sub_1800EA53C.c)
 *     sub_1800EA620 @ 0x1800EA620 (sub_1800EA620.c)
 *     sub_1800EFC8C @ 0x1800EFC8C (sub_1800EFC8C.c)
 *     sub_1800F0540 @ 0x1800F0540 (sub_1800F0540.c)
 *     sub_1800F1624 @ 0x1800F1624 (sub_1800F1624.c)
 *     sub_1800F7380 @ 0x1800F7380 (sub_1800F7380.c)
 *     sub_1800F7430 @ 0x1800F7430 (sub_1800F7430.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D2EA8(__int64 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax

  v2 = *a1;
  *a1 = a2;
  if ( v2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  return result;
}
