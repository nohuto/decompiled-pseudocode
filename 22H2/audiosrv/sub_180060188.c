/*
 * XREFs of sub_180060188 @ 0x180060188
 * Callers:
 *     sub_1800600A4 @ 0x1800600A4 (sub_1800600A4.c)
 *     sub_180133EDC @ 0x180133EDC (sub_180133EDC.c)
 * Callees:
 *     sub_180137B20 @ 0x180137B20 (sub_180137B20.c)
 *     sub_180137BBC @ 0x180137BBC (sub_180137BBC.c)
 */

void __fastcall sub_180060188(__int64 a1)
{
  __int64 v1; // rdx
  float v3; // xmm0_4
  __int64 v4; // rcx
  float v5; // xmm1_4
  __int64 v6; // rax
  __int64 v7; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( v1 < 0 )
  {
    v6 = *(_QWORD *)(a1 + 16) & 1LL | (*(_QWORD *)(a1 + 16) >> 1);
    v3 = (float)(int)v6 + (float)(int)v6;
  }
  else
  {
    v3 = (float)(int)v1;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 < 0 )
    v5 = (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1))
       + (float)(v4 & 1 | (unsigned int)((unsigned __int64)v4 >> 1));
  else
    v5 = (float)(int)v4;
  if ( (float)(v3 / v5) > *(float *)a1 )
  {
    v7 = sub_180137B20(a1);
    sub_180137BBC(a1, v7);
  }
}
