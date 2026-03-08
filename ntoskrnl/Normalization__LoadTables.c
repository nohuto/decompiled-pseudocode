/*
 * XREFs of Normalization__LoadTables @ 0x1409BE078
 * Callers:
 *     RtlpGetNormalization @ 0x1409C5918 (RtlpGetNormalization.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 *     Normalization__LoadClassMapExceptions @ 0x1409BE024 (Normalization__LoadClassMapExceptions.c)
 */

__int64 __fastcall Normalization__LoadTables(__int64 a1, unsigned __int16 *a2, unsigned __int64 a3, _DWORD *a4)
{
  char v4; // ch
  char v7; // si^1
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rcx
  unsigned __int16 *v12; // rcx
  int v13; // eax

  v7 = v4;
  memset(a4, 0, 0x78uLL);
  v9 = a3 >> 1;
  if ( a3 >> 1 < a2[26] )
    return 3221225624LL;
  v10 = a2[27];
  if ( v9 < v10 )
    return 3221225624LL;
  v11 = a2[28];
  if ( v9 < v11
    || v9 < a2[29]
    || v9 < a2[30]
    || v9 < a2[31]
    || v9 < a2[32]
    || v9 < a2[33]
    || (_DWORD)v11 - (_DWORD)v10 != 4352 )
  {
    return 3221225624LL;
  }
  *((_QWORD *)a4 + 1) = a2;
  *((_QWORD *)a4 + 2) = a3;
  *a4 = a2[20];
  a4[6] = a2[21];
  a4[7] = a2[22];
  *((_QWORD *)a4 + 4) = &a2[a2[27]];
  *((_QWORD *)a4 + 5) = &a2[a2[28]];
  a4[14] = a2[23];
  *((_QWORD *)a4 + 8) = &a2[a2[29]];
  *((_QWORD *)a4 + 9) = &a2[a2[30]];
  *((_QWORD *)a4 + 10) = &a2[a2[31]];
  v12 = 0LL;
  v13 = a2[24];
  a4[22] = v13;
  if ( v13 )
  {
    *((_BYTE *)a4 + 112) = 0;
    *((_QWORD *)a4 + 12) = &a2[a2[32]];
    v12 = &a2[a2[33]];
  }
  else
  {
    *((_BYTE *)a4 + 112) = 1;
    *((_QWORD *)a4 + 12) = 0LL;
  }
  *((_QWORD *)a4 + 13) = v12;
  *((_QWORD *)a4 + 6) = &a2[a2[26]];
  Normalization__LoadClassMapExceptions((__int64)a4);
  *((_BYTE *)a4 + 113) = (v7 & 1) == 0;
  return 0LL;
}
