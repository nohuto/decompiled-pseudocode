/*
 * XREFs of sub_18008AA90 @ 0x18008AA90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800759EC @ 0x1800759EC (sub_1800759EC.c)
 *     sub_18007E6A4 @ 0x18007E6A4 (sub_18007E6A4.c)
 *     sub_18007E720 @ 0x18007E720 (sub_18007E720.c)
 *     sub_18007E7C8 @ 0x18007E7C8 (sub_18007E7C8.c)
 *     sub_18007F978 @ 0x18007F978 (sub_18007F978.c)
 *     sub_18007FB74 @ 0x18007FB74 (sub_18007FB74.c)
 *     sub_180080408 @ 0x180080408 (sub_180080408.c)
 *     sub_1800807D8 @ 0x1800807D8 (sub_1800807D8.c)
 *     sub_180081344 @ 0x180081344 (sub_180081344.c)
 *     sub_1800833A8 @ 0x1800833A8 (sub_1800833A8.c)
 *     sub_18008A680 @ 0x18008A680 (sub_18008A680.c)
 *     sub_1800EB244 @ 0x1800EB244 (sub_1800EB244.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     cosf @ 0x18011F766 (cosf.c)
 *     expf @ 0x18011F76C (expf.c)
 *     sinf @ 0x18011F772 (sinf.c)
 *     tanf @ 0x18011F778 (tanf.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_18008AA90(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = 2162688LL;
  if ( (*(_DWORD *)(*(_QWORD *)a4 + 440LL) & 0x210000) == 0x210000 )
  {
    sub_1800EB244();
    sub_1800759EC();
  }
  return result;
}
