/*
 * XREFs of ExRngInitializeSystem @ 0x140B6A0B8
 * Callers:
 *     KiInitializeBootStructures @ 0x140A887E0 (KiInitializeBootStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

__int64 ExRngInitializeSystem()
{
  _DWORD *v0; // r8
  unsigned int v1; // r9d
  __int64 v2; // r10
  __int64 v3; // rdi
  __int64 v4; // rax
  __int128 *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int64 result; // rax
  _OWORD v33[14]; // [rsp+20h] [rbp-F8h] BYREF

  v0 = &ExpLFGRngState;
  ExpLFGRngLock = 0LL;
  v1 = 220;
  v2 = 2LL;
  v3 = *(_QWORD *)(KeLoaderBlock_0 + 240);
  do
  {
    v4 = v1;
    v1 += 220;
    v5 = (__int128 *)(v4 + v3 + 1440);
    v6 = v5[1];
    v33[0] = *v5;
    v7 = v5[2];
    v33[1] = v6;
    v8 = v5[3];
    v33[2] = v7;
    v9 = v5[4];
    v33[3] = v8;
    v10 = v5[5];
    v33[4] = v9;
    v11 = v5[6];
    v33[5] = v10;
    v12 = v5[7];
    v5 += 8;
    v33[6] = v11;
    v13 = *((_QWORD *)v5 + 10);
    v14 = *v5;
    v33[7] = v12;
    v15 = v5[1];
    v33[8] = v14;
    v16 = v5[2];
    v33[9] = v15;
    v17 = v5[3];
    v33[10] = v16;
    v18 = v5[4];
    v33[11] = v17;
    v33[12] = v18;
    *(_QWORD *)&v33[13] = v13;
    DWORD2(v33[13]) = *((_DWORD *)v5 + 22);
    v19 = v33[0];
    v0[55] = 1;
    v20 = v33[1];
    v0[56] = 32;
    *(_OWORD *)v0 = v19;
    v21 = v33[2];
    *((_OWORD *)v0 + 1) = v20;
    v22 = v33[3];
    *((_OWORD *)v0 + 2) = v21;
    v23 = v33[4];
    *((_OWORD *)v0 + 3) = v22;
    v24 = v33[5];
    *((_OWORD *)v0 + 4) = v23;
    v25 = v33[6];
    *((_OWORD *)v0 + 5) = v24;
    v26 = v33[7];
    *((_OWORD *)v0 + 6) = v25;
    *((_OWORD *)v0 + 7) = v26;
    v27 = *(_QWORD *)&v33[13];
    v28 = v33[9];
    *((_OWORD *)v0 + 8) = v33[8];
    v29 = v33[10];
    *((_OWORD *)v0 + 9) = v28;
    v30 = v33[11];
    *((_OWORD *)v0 + 10) = v29;
    v31 = v33[12];
    *((_OWORD *)v0 + 11) = v30;
    *((_OWORD *)v0 + 12) = v31;
    *((_QWORD *)v0 + 26) = v27;
    v0[54] = DWORD2(v33[13]);
    *v0 |= 1u;
    v0 += 57;
    --v2;
  }
  while ( v2 );
  ExpRemainingLeftoverBootRngData = (1024 - v1) >> 2;
  memmove(ExpLeftoverBootRngData, (const void *)(v1 + v3 + 1440), 4LL * ((1024 - v1) >> 2));
  result = 0LL;
  memset((void *)(v3 + 1440), 0, 0x400uLL);
  memset(v33, 0, 0xDCuLL);
  return result;
}
