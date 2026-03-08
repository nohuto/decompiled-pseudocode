/*
 * XREFs of vAlphaConstOnly16_555 @ 0x1C02E6030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall vAlphaConstOnly16_555(__int64 a1, unsigned __int16 *a2, int a3, unsigned int a4)
{
  __int16 result; // ax
  unsigned __int16 *v5; // r10
  unsigned int v6; // r9d
  unsigned __int16 *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx

  result = a3;
  v5 = a2;
  v6 = HIWORD(a4);
  v7 = &a2[a3];
  if ( a2 != v7 )
  {
    v8 = a1 - (_QWORD)a2;
    do
    {
      v9 = *(unsigned __int16 *)((char *)v5 + v8);
      v10 = *v5;
      v11 = (unsigned __int8)v6 * ((v10 & 0x7C1F) - (v9 & 0x7C1F)) + 16400 + 31 * (v9 & 0x7C1F);
      v12 = (unsigned __int8)v6 * (((v10 >> 5) & 0x1F) - ((v9 >> 5) & 0x1F)) + 16 + 31 * ((v9 >> 5) & 0x1F);
      result = (v12 + ((v12 >> 5) & 0x1F)) & 0x3E0;
      *(unsigned __int16 *)((char *)v5++ + v8) = result | ((v11 + ((v11 >> 5) & 0x7C1F)) >> 5) & 0x7C1F;
    }
    while ( v5 != v7 );
  }
  return result;
}
