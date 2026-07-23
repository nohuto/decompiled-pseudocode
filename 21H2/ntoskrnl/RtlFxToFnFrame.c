/*
 * XREFs of RtlFxToFnFrame @ 0x14022F9B0
 * Callers:
 *     RtlpWow64CtxFromAmd64 @ 0x1405F5B78 (RtlpWow64CtxFromAmd64.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFxToFnFrame(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v4; // r9d
  unsigned __int16 *v5; // r11
  unsigned int v6; // eax
  char v7; // di
  unsigned __int16 v8; // dx
  unsigned int v9; // r8d
  __int16 v10; // dx
  __int64 result; // rax
  __int16 v12; // cx

  *a1 = *a2;
  a1[1] = a2[1];
  v4 = 0;
  a1[3] = *((_DWORD *)a2 + 2);
  v5 = a2 + 16;
  a1[4] = a2[6] | (a2[3] << 16);
  a1[5] = *((_DWORD *)a2 + 4);
  a1[6] = a2[10];
  v6 = a2[1];
  v7 = *((_BYTE *)a2 + 4);
  v8 = 0;
  v9 = 7 - ((v6 >> 11) & 7);
  do
  {
    v10 = 4 * v8;
    *(_QWORD *)((char *)a1 + 10 * v4 + 28) = *(_QWORD *)v5;
    *((_WORD *)a1 + 5 * v4 + 18) = v5[4];
    if ( v7 < 0 )
    {
      v8 = v10 | 2;
      v12 = a2[8 * v9 + 20] & 0x7FFF;
      if ( v12 )
      {
        if ( v12 != 0x7FFF && *(__int64 *)&a2[8 * v9 + 16] < 0 )
          v8 &= 0xFFFCu;
      }
      else if ( !*(_QWORD *)&a2[8 * v9 + 16] )
      {
        v8 = v8 & 0xFFFC | 1;
      }
    }
    else
    {
      v8 = v10 | 3;
    }
    v7 *= 2;
    ++v4;
    v5 += 8;
    v9 = ((_BYTE)v9 - 1) & 7;
  }
  while ( v4 < 8 );
  result = v8;
  a1[2] = v8;
  return result;
}
