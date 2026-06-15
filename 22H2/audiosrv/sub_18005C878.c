/*
 * XREFs of sub_18005C878 @ 0x18005C878
 * Callers:
 *     sub_18005C7D0 @ 0x18005C7D0 (sub_18005C7D0.c)
 *     sub_1800BF2A0 @ 0x1800BF2A0 (sub_1800BF2A0.c)
 *     sub_1800C0948 @ 0x1800C0948 (sub_1800C0948.c)
 *     sub_1800C1150 @ 0x1800C1150 (sub_1800C1150.c)
 *     sub_1800C12E0 @ 0x1800C12E0 (sub_1800C12E0.c)
 *     sub_1800C14A0 @ 0x1800C14A0 (sub_1800C14A0.c)
 *     sub_1800C1760 @ 0x1800C1760 (sub_1800C1760.c)
 *     sub_1800C1D20 @ 0x1800C1D20 (sub_1800C1D20.c)
 *     sub_1800C1E20 @ 0x1800C1E20 (sub_1800C1E20.c)
 * Callees:
 *     <none>
 */

float __fastcall sub_18005C878(float *a1)
{
  float result; // xmm0_4

  result = a1[1];
  if ( a1[3] <= result )
    result = a1[3];
  if ( result <= a1[2] )
    return a1[2];
  return result;
}
