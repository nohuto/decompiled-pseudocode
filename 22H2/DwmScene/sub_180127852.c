/*
 * XREFs of sub_180127852 @ 0x180127852
 * Callers:
 *     <none>
 * Callees:
 *     sub_180089BB4 @ 0x180089BB4 (sub_180089BB4.c)
 *     sub_1800C6460 @ 0x1800C6460 (sub_1800C6460.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180127852(__int64 a1, __int64 *a2)
{
  __int64 **v3; // rax

  v3 = (__int64 **)sub_180089BB4(a2[4], a2 + 5, a2[19]);
  sub_1800C6460((_QWORD *)a2[4], a2 + 6, *v3);
  throw;
}
