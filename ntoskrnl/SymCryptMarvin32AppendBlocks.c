/*
 * XREFs of SymCryptMarvin32AppendBlocks @ 0x1403F05F0
 * Callers:
 *     SymCryptMarvin32Append @ 0x1403F052C (SymCryptMarvin32Append.c)
 *     SymCryptMarvin32Result @ 0x1403F06F8 (SymCryptMarvin32Result.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32AppendBlocks(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned int v4; // r9d
  __int64 v5; // r10
  _DWORD *v6; // rdx
  __int64 v7; // r8
  int v8; // eax
  int v9; // r9d
  int v10; // eax
  int v11; // r9d
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  int v15; // r9d
  int v16; // eax
  int v17; // r9d
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  int v21; // r9d
  int v22; // eax
  int v23; // r9d

  result = *a1;
  v4 = a1[1];
  v5 = a3 & 0xC;
  v6 = (_DWORD *)(v5 + a2);
  v7 = a3 - v5;
  switch ( v5 )
  {
    case 0LL:
      goto LABEL_6;
    case 4LL:
      goto LABEL_10;
    case 8LL:
      goto LABEL_9;
    case 12LL:
      while ( 1 )
      {
        v12 = *(v6 - 3) + result;
        v13 = v12 ^ v4;
        v14 = v13 + __ROL4__(v12, 20);
        v15 = v14 ^ __ROL4__(v13, 9);
        LODWORD(result) = v15 + __ROL4__(v14, 27);
        v4 = __ROL4__(v15, 19);
LABEL_9:
        v16 = *(v6 - 2) + result;
        v17 = v16 ^ v4;
        v18 = v17 + __ROL4__(v16, 20);
        v19 = v18 ^ __ROL4__(v17, 9);
        LODWORD(result) = v19 + __ROL4__(v18, 27);
        v4 = __ROL4__(v19, 19);
LABEL_10:
        v20 = *(v6 - 1) + result;
        v21 = v20 ^ v4;
        v22 = v21 + __ROL4__(v20, 20);
        v23 = v22 ^ __ROL4__(v21, 9);
        result = (unsigned int)(v23 + __ROL4__(v22, 27));
        v4 = __ROL4__(v23, 19);
LABEL_6:
        if ( !v7 )
          break;
        v8 = *v6 + result;
        v6 += 4;
        v9 = v8 ^ v4;
        v7 -= 16LL;
        v10 = v9 + __ROL4__(v8, 20);
        v11 = v10 ^ __ROL4__(v9, 9);
        LODWORD(result) = v11 + __ROL4__(v10, 27);
        v4 = __ROL4__(v11, 19);
      }
      break;
  }
  *a1 = result;
  a1[1] = v4;
  return result;
}
