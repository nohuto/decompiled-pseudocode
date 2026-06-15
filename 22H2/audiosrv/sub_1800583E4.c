/*
 * XREFs of sub_1800583E4 @ 0x1800583E4
 * Callers:
 *     sub_1800059AC @ 0x1800059AC (sub_1800059AC.c)
 *     sub_180008C14 @ 0x180008C14 (sub_180008C14.c)
 *     sub_18004EB70 @ 0x18004EB70 (sub_18004EB70.c)
 *     sub_180057E90 @ 0x180057E90 (sub_180057E90.c)
 *     sub_180058330 @ 0x180058330 (sub_180058330.c)
 *     sub_180058370 @ 0x180058370 (sub_180058370.c)
 *     sub_18007593F @ 0x18007593F (sub_18007593F.c)
 *     sub_180075F5B @ 0x180075F5B (sub_180075F5B.c)
 *     sub_18007A9D8 @ 0x18007A9D8 (sub_18007A9D8.c)
 *     sub_1800C60C8 @ 0x1800C60C8 (sub_1800C60C8.c)
 *     sub_1800D1861 @ 0x1800D1861 (sub_1800D1861.c)
 *     sub_1800D1968 @ 0x1800D1968 (sub_1800D1968.c)
 *     sub_1800D19BC @ 0x1800D19BC (sub_1800D19BC.c)
 *     sub_1800D2ED4 @ 0x1800D2ED4 (sub_1800D2ED4.c)
 *     sub_1800E91F0 @ 0x1800E91F0 (sub_1800E91F0.c)
 *     sub_1800F070C @ 0x1800F070C (sub_1800F070C.c)
 *     sub_1800F1624 @ 0x1800F1624 (sub_1800F1624.c)
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 */

__int64 __fastcall sub_1800583E4(__int64 *a1, __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = sub_18000F708(v3++);
    while ( v3 != a2 );
  }
  return result;
}
