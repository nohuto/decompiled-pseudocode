__int64 __fastcall RtlFxToFnFrame(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v3; // r9d
  unsigned __int16 *v4; // r11
  unsigned int v5; // eax
  char v6; // di
  unsigned __int16 v7; // dx
  unsigned int v8; // r8d
  __int16 v9; // dx
  __int64 result; // rax
  __int64 v11; // rax

  *a1 = *a2;
  a1[1] = a2[1];
  v3 = 0;
  a1[3] = *((_DWORD *)a2 + 2);
  v4 = a2 + 16;
  a1[4] = a2[6] | (a2[3] << 16);
  a1[5] = *((_DWORD *)a2 + 4);
  a1[6] = a2[10];
  v5 = a2[1];
  v6 = *((_BYTE *)a2 + 4);
  v7 = 0;
  v8 = 7 - ((v5 >> 11) & 7);
  do
  {
    v9 = 4 * v7;
    *(_QWORD *)((char *)a1 + 10 * v3 + 28) = *(_QWORD *)v4;
    *((_WORD *)a1 + 5 * v3 + 18) = v4[4];
    if ( v6 < 0 )
    {
      v7 = v9 | 2;
      v11 = 8 * (v8 + 2LL);
      if ( (a2[v11 + 4] & 0x7FFF) != 0 )
      {
        if ( (a2[v11 + 4] & 0x7FFF) != 0x7FFF && *(__int64 *)&a2[v11] < 0 )
          v7 &= 0xFFFCu;
      }
      else if ( !*(_QWORD *)&a2[v11] )
      {
        v7 = v7 & 0xFFFC | 1;
      }
    }
    else
    {
      v7 = v9 | 3;
    }
    v6 *= 2;
    ++v3;
    v4 += 8;
    v8 = ((_BYTE)v8 - 1) & 7;
  }
  while ( v3 < 8 );
  result = v7;
  a1[2] = v7;
  return result;
}
