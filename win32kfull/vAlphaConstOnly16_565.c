/*
 * XREFs of vAlphaConstOnly16_565 @ 0x1C02E6110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vAlphaConstOnly16_565(__int64 a1, unsigned __int16 *a2, int a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int16 *v5; // r10
  unsigned int v6; // r9d
  unsigned __int16 *v7; // rbx
  int v8; // edi
  __int64 v9; // r11
  unsigned int v10; // ecx
  int v11; // r8d
  unsigned int v12; // r9d
  unsigned int v13; // ecx

  result = a3;
  v5 = a2;
  v6 = HIWORD(a4);
  v7 = &a2[a3];
  if ( a2 != v7 )
  {
    v8 = (unsigned __int8)v6;
    v9 = a1 - (_QWORD)a2;
    do
    {
      v10 = *v5;
      v11 = (*(unsigned __int16 *)((char *)v5 + v9) >> 5) & 0x3F;
      v12 = v8 * ((v10 & 0xF81F) - (*(unsigned __int16 *)((char *)v5 + v9) & 0xF81F))
          + 32784
          + 31 * (*(unsigned __int16 *)((char *)v5 + v9) & 0xF81F);
      v13 = 63 * v11 + 2 * (v8 * (((v10 >> 5) & 0x3F) - v11) + 16);
      result = (v12 + ((v12 >> 5) & 0xF81F)) >> 5;
      *(unsigned __int16 *)((char *)v5++ + v9) = result ^ (((v13 + ((v13 >> 6) & 0x3F)) >> 1) ^ ((v12
                                                                                                + ((v12 >> 5) & 0xF81F)) >> 5)) & 0x7E0;
    }
    while ( v5 != v7 );
  }
  return result;
}
