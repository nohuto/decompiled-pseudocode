__int64 __fastcall sub_14084DFBC(__int64 *a1)
{
  unsigned __int8 *v1; // r14
  unsigned __int8 *v2; // rsi
  int v3; // edi
  __int64 v4; // r15
  int v5; // ebx
  __int64 v6; // r12
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  int v12; // ebx
  __int64 result; // rax
  __int64 v15; // [rsp+48h] [rbp-18h] BYREF
  __int64 v16; // [rsp+50h] [rbp-10h]

  v1 = (unsigned __int8 *)&unk_140D53D90;
  v2 = (unsigned __int8 *)&unk_140D53D12;
  v16 = *a1;
  v15 = qword_140D532E0;
  v3 = BYTE3(v16) | ((BYTE2(v16) | ((BYTE1(v16) | ((unsigned __int8)v16 << 8)) << 8)) << 8);
  v4 = 0LL;
  v5 = ~(HIBYTE(v16) | ((BYTE6(v16) | ((BYTE5(v16) | (BYTE4(v16) << 8)) << 8)) << 8));
  v6 = 16LL;
  do
  {
    v7 = *v1;
    if ( (unsigned __int8)v7 < 0x1Fu )
      v3 ^= funcs_1406DC7FD[v7](v4, *(v2 - 2), *(v2 - 1), *v2, v2[1], (__int64)&v15, v5);
    v8 = v1[1];
    if ( (unsigned __int8)v8 < 0x1Fu )
      v5 ^= funcs_1406DC7FD[v8](v4 + 1, v2[2], v2[3], v2[4], v2[5], (__int64)&v15, v3);
    v4 += 2LL;
    v1 += 2;
    v2 += 8;
    --v6;
  }
  while ( v6 );
  BYTE3(v16) = v3;
  v9 = __ROR4__(v3, 8);
  HIBYTE(v16) = v5;
  BYTE2(v16) = v9;
  v10 = __ROR4__(v5, 8);
  v11 = __ROR4__(v9, 8);
  BYTE6(v16) = v10;
  BYTE1(v16) = v11;
  v12 = __ROR4__(v10, 8);
  BYTE5(v16) = v12;
  BYTE4(v16) = __ROR4__(v12, 8);
  LOBYTE(v16) = __ROR4__(v11, 8);
  result = v16;
  *a1 = v16;
  return result;
}
