unsigned __int8 *__fastcall vAlphaConstOnly24(__int64 a1, unsigned __int8 *a2, int a3, unsigned int a4)
{
  unsigned __int8 *result; // rax
  unsigned int v5; // r9d
  unsigned __int8 *v6; // r11
  int v7; // ebx
  unsigned __int8 *v8; // r10
  unsigned __int8 *v9; // r9
  int v10; // edx
  __int16 v11; // ax
  __int16 v12; // cx
  unsigned int v13; // r8d

  result = (unsigned __int8 *)(unsigned int)(3 * a3);
  v5 = HIWORD(a4);
  v6 = &a2[(int)result];
  if ( a2 != v6 )
  {
    v7 = (unsigned __int8)v5;
    v8 = &a2[-a1];
    v9 = (unsigned __int8 *)(a1 + 1);
    do
    {
      v10 = *v9 | (*(v9 - 1) << 16);
      v11 = v9[1];
      v12 = v7 * (v9[(_QWORD)v8 + 1] - v11);
      v13 = ((255 * v10
            + 8388736
            + v7 * ((v9[(_QWORD)v8] | (v9[(_QWORD)v8 - 1] << 16)) - v10)
            + (((unsigned int)(255 * v10 + 8388736 + v7 * ((v9[(_QWORD)v8] | (v9[(_QWORD)v8 - 1] << 16)) - v10)) >> 8) & 0xFF00FF)) >> 8) & 0xFF00FF;
      *v9 = (unsigned __int16)(255 * v10
                             + 128
                             + v7 * (v9[(_QWORD)v8] - (_WORD)v10)
                             + (unsigned __int8)((unsigned __int16)(255 * v10 + 128 + v7 * (v9[(_QWORD)v8] - (_WORD)v10)) >> 8)) >> 8;
      *(v9 - 1) = BYTE2(v13);
      v9[1] = (unsigned __int16)(v12
                               + 128
                               + 255 * v11
                               + (unsigned __int8)((unsigned __int16)(v12 + 128 + 255 * v11) >> 8)) >> 8;
      v9 += 3;
      result = &v8[(_QWORD)v9 - 1];
    }
    while ( result != v6 );
  }
  return result;
}
