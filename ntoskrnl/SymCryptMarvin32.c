/*
 * XREFs of SymCryptMarvin32 @ 0x1403F0388
 * Callers:
 *     HvpGenerateLogEntryChecksums @ 0x14072E328 (HvpGenerateLogEntryChecksums.c)
 *     HvpLogEntryCheckHeaderChecksum @ 0x1407F9C94 (HvpLogEntryCheckHeaderChecksum.c)
 *     HvpLogEntryCheckDataChecksum @ 0x1407F9CFC (HvpLogEntryCheckDataChecksum.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptMarvin32(int *a1, unsigned __int16 *a2, unsigned __int64 a3, _DWORD *a4)
{
  int v4; // r10d
  int v5; // r11d
  unsigned __int64 v6; // rcx
  __int64 result; // rax
  int v8; // r10d
  int v9; // r11d
  int v10; // r10d
  int v11; // r11d
  int v12; // r10d
  int v13; // r10d
  int v14; // r11d
  int v15; // r10d
  int v16; // r11d
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // r8
  int v23; // r10d
  int v24; // r11d
  int v25; // r10d
  int v26; // r11d
  int v27; // ecx
  int v28; // r10d
  int v29; // r11d
  int v30; // r10d
  int v31; // r11d
  int v32; // r10d
  int v33; // r11d
  int v34; // r10d
  int v35; // r11d
  int v36; // r10d
  int v37; // r11d
  int v38; // r10d
  int v39; // r11d
  int v40; // r10d
  int v41; // r11d
  int v42; // r10d
  int v43; // r11d
  int v44; // r10d
  int v45; // r11d
  int v46; // r10d
  int v47; // r11d

  v4 = *a1;
  v5 = a1[1];
  if ( a3 > 7 )
  {
    v6 = ((a3 - 8) >> 3) + 1;
    result = -8LL * v6;
    a3 += -8LL * v6;
    do
    {
      v8 = *(_DWORD *)a2 + v4;
      v9 = v8 ^ v5;
      v10 = v9 + __ROL4__(v8, 20);
      v11 = v10 ^ __ROL4__(v9, 9);
      v12 = *((_DWORD *)a2 + 1) + __ROL4__(v10, 27);
      a2 += 4;
      v13 = v11 + v12;
      v14 = v13 ^ __ROL4__(v11, 19);
      v15 = v14 + __ROL4__(v13, 20);
      v16 = v15 ^ __ROL4__(v14, 9);
      v4 = v16 + __ROL4__(v15, 27);
      v5 = __ROL4__(v16, 19);
      --v6;
    }
    while ( v6 );
  }
  if ( !a3 )
    goto LABEL_19;
  v17 = a3 - 1;
  if ( !v17 )
    goto LABEL_17;
  v18 = v17 - 1;
  if ( !v18 )
    goto LABEL_15;
  v19 = v18 - 1;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( !v20 )
    {
LABEL_18:
      v36 = *(_DWORD *)a2 + v4;
      v37 = v36 ^ v5;
      v38 = v37 + __ROL4__(v36, 20);
      v39 = v38 ^ __ROL4__(v37, 9);
      v4 = v39 + __ROL4__(v38, 27);
      v5 = __ROL4__(v39, 19);
LABEL_19:
      v27 = 128;
      goto LABEL_20;
    }
    v21 = v20 - 1;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        if ( v22 == 1 )
        {
          v23 = *(_DWORD *)a2 + v4;
          v24 = v23 ^ v5;
          v25 = v24 + __ROL4__(v23, 20);
          v26 = v25 ^ __ROL4__(v24, 9);
          v4 = v26 + __ROL4__(v25, 27);
          v5 = __ROL4__(v26, 19);
          a2 += 2;
          goto LABEL_13;
        }
        goto LABEL_18;
      }
      v28 = *(_DWORD *)a2 + v4;
      v29 = v28 ^ v5;
      v30 = v29 + __ROL4__(v28, 20);
      v31 = v30 ^ __ROL4__(v29, 9);
      v4 = v31 + __ROL4__(v30, 27);
      v5 = __ROL4__(v31, 19);
      a2 += 2;
LABEL_15:
      v27 = *a2 | 0x800000;
      goto LABEL_20;
    }
    v32 = *(_DWORD *)a2 + v4;
    v33 = v32 ^ v5;
    v34 = v33 + __ROL4__(v32, 20);
    v35 = v34 ^ __ROL4__(v33, 9);
    v4 = v35 + __ROL4__(v34, 27);
    v5 = __ROL4__(v35, 19);
    a2 += 2;
LABEL_17:
    v27 = *(unsigned __int8 *)a2 | 0x8000;
    goto LABEL_20;
  }
LABEL_13:
  result = *a2;
  v27 = result | (*((unsigned __int8 *)a2 + 2) << 16) | 0x80000000;
LABEL_20:
  v40 = v27 + v4;
  v41 = v40 ^ v5;
  v42 = v41 + __ROL4__(v40, 20);
  v43 = v42 ^ __ROL4__(v41, 9);
  v44 = v43 + __ROL4__(v42, 27);
  v45 = v44 ^ __ROL4__(v43, 19);
  v46 = v45 + __ROL4__(v44, 20);
  v47 = v46 ^ __ROL4__(v45, 9);
  a4[1] = __ROL4__(v47, 19);
  *a4 = v47 + __ROL4__(v46, 27);
  return result;
}
