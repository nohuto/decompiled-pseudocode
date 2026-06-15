/*
 * XREFs of sub_18000F730 @ 0x18000F730
 * Callers:
 *     sub_180002910 @ 0x180002910 (sub_180002910.c)
 *     sub_18000CBF0 @ 0x18000CBF0 (sub_18000CBF0.c)
 *     sub_180011C10 @ 0x180011C10 (sub_180011C10.c)
 *     sub_180012C30 @ 0x180012C30 (sub_180012C30.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180031350 @ 0x180031350 (sub_180031350.c)
 *     sub_180066A94 @ 0x180066A94 (sub_180066A94.c)
 *     sub_180066B1C @ 0x180066B1C (sub_180066B1C.c)
 *     sub_1800BB410 @ 0x1800BB410 (sub_1800BB410.c)
 *     sub_1800DA9D4 @ 0x1800DA9D4 (sub_1800DA9D4.c)
 *     sub_1800E1E60 @ 0x1800E1E60 (sub_1800E1E60.c)
 *     sub_1800E1EBC @ 0x1800E1EBC (sub_1800E1EBC.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 *     sub_1800FFEA8 @ 0x1800FFEA8 (sub_1800FFEA8.c)
 *     sub_180104814 @ 0x180104814 (sub_180104814.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F730(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int16 *v5; // r8
  int v6; // eax
  int v7; // r8d

  v5 = (unsigned __int16 *)qword_18019C408;
  v6 = 0;
  if ( qword_18019C408 )
  {
    *(_QWORD *)a5 = qword_18019C408;
    v6 = 2;
    v7 = *v5;
  }
  else
  {
    *(_QWORD *)a5 = 0LL;
    v7 = 0;
  }
  *(_DWORD *)(a5 + 8) = v7;
  *(_DWORD *)(a5 + 12) = v6;
  return EtwEventWriteTransfer(qword_18019C400, a2, 0LL);
}
