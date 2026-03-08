/*
 * XREFs of HvpSwapDual @ 0x140A1B32C
 * Callers:
 *     HvSwapHiveStorage @ 0x140A1ACB4 (HvSwapHiveStorage.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

_QWORD *__fastcall HvpSwapDual(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rbx
  _BYTE *v3; // r8
  _OWORD *v5; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  _QWORD *v15; // rcx
  __int128 v16; // xmm1
  _QWORD *v17; // rdx
  _QWORD *v18; // r11
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int64 v24; // rax
  _QWORD *v25; // r8
  _QWORD *v26; // rax
  _QWORD *v27; // rdx
  _OWORD *v28; // rax
  __int64 v29; // rdi
  __int128 v30; // xmm1
  _QWORD *v31; // rdx
  _QWORD *v32; // rdi
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  __int128 v46; // xmm0
  __int128 v47; // xmm1
  __int128 v48; // xmm0
  __int64 v49; // rax
  _QWORD *result; // rax
  _BYTE v51[608]; // [rsp+0h] [rbp-100h] BYREF
  _QWORD *v52; // [rsp+260h] [rbp+160h] BYREF
  _QWORD *v53; // [rsp+268h] [rbp+168h]

  v2 = 4LL;
  v3 = v51;
  v5 = a1;
  v7 = 4LL;
  do
  {
    v8 = v5[1];
    *(_OWORD *)v3 = *v5;
    v9 = v5[2];
    *((_OWORD *)v3 + 1) = v8;
    v10 = v5[3];
    *((_OWORD *)v3 + 2) = v9;
    v11 = v5[4];
    *((_OWORD *)v3 + 3) = v10;
    v12 = v5[5];
    *((_OWORD *)v3 + 4) = v11;
    v13 = v5[6];
    *((_OWORD *)v3 + 5) = v12;
    v14 = v5[7];
    v5 += 8;
    *((_OWORD *)v3 + 6) = v13;
    v3 += 128;
    *((_OWORD *)v3 - 1) = v14;
    --v7;
  }
  while ( v7 );
  v15 = a1 + 76;
  v16 = v5[1];
  v17 = (_QWORD *)a1[76];
  v18 = &v52;
  *(_OWORD *)v3 = *v5;
  v19 = v5[2];
  *((_OWORD *)v3 + 1) = v16;
  v20 = v5[3];
  *((_OWORD *)v3 + 2) = v19;
  v21 = v5[4];
  *((_OWORD *)v3 + 3) = v20;
  v22 = v5[5];
  *((_OWORD *)v3 + 4) = v21;
  v23 = v5[6];
  v24 = *((_QWORD *)v5 + 14);
  *((_OWORD *)v3 + 5) = v22;
  *((_OWORD *)v3 + 6) = v23;
  *((_QWORD *)v3 + 14) = v24;
  v25 = &v52;
  v52 = &v52;
  v53 = &v52;
  if ( v17 != a1 + 76 )
  {
    v26 = (_QWORD *)a1[77];
    v52 = v17;
    v53 = v26;
    v17[1] = &v52;
    *v26 = &v52;
    v18 = v53;
    v25 = v52;
    a1[77] = a1 + 76;
    *v15 = v15;
  }
  v27 = a1;
  v28 = a2;
  v29 = 4LL;
  do
  {
    *(_OWORD *)v27 = *v28;
    *((_OWORD *)v27 + 1) = v28[1];
    *((_OWORD *)v27 + 2) = v28[2];
    *((_OWORD *)v27 + 3) = v28[3];
    *((_OWORD *)v27 + 4) = v28[4];
    *((_OWORD *)v27 + 5) = v28[5];
    *((_OWORD *)v27 + 6) = v28[6];
    v27 += 16;
    v30 = v28[7];
    v28 += 8;
    *((_OWORD *)v27 - 1) = v30;
    --v29;
  }
  while ( v29 );
  *(_OWORD *)v27 = *v28;
  *((_OWORD *)v27 + 1) = v28[1];
  *((_OWORD *)v27 + 2) = v28[2];
  *((_OWORD *)v27 + 3) = v28[3];
  *((_OWORD *)v27 + 4) = v28[4];
  *((_OWORD *)v27 + 5) = v28[5];
  *((_OWORD *)v27 + 6) = v28[6];
  v27[14] = *((_QWORD *)v28 + 14);
  v31 = a2 + 76;
  a1[77] = a1 + 76;
  *v15 = v15;
  v32 = (_QWORD *)a2[76];
  if ( v32 != a2 + 76 )
  {
    v33 = (_QWORD *)a2[77];
    *v15 = v32;
    a1[77] = v33;
    v32[1] = v15;
    *v33 = v15;
    v18 = v53;
    v25 = v52;
  }
  v34 = a2;
  v35 = v51;
  do
  {
    v36 = v35[1];
    *(_OWORD *)v34 = *v35;
    v37 = v35[2];
    *((_OWORD *)v34 + 1) = v36;
    v38 = v35[3];
    *((_OWORD *)v34 + 2) = v37;
    v39 = v35[4];
    *((_OWORD *)v34 + 3) = v38;
    v40 = v35[5];
    *((_OWORD *)v34 + 4) = v39;
    v41 = v35[6];
    *((_OWORD *)v34 + 5) = v40;
    v42 = v35[7];
    v35 += 8;
    *((_OWORD *)v34 + 6) = v41;
    v34 += 16;
    *((_OWORD *)v34 - 1) = v42;
    --v2;
  }
  while ( v2 );
  v43 = v35[1];
  *(_OWORD *)v34 = *v35;
  v44 = v35[2];
  *((_OWORD *)v34 + 1) = v43;
  v45 = v35[3];
  *((_OWORD *)v34 + 2) = v44;
  v46 = v35[4];
  *((_OWORD *)v34 + 3) = v45;
  v47 = v35[5];
  *((_OWORD *)v34 + 4) = v46;
  v48 = v35[6];
  v49 = *((_QWORD *)v35 + 14);
  *((_OWORD *)v34 + 5) = v47;
  *((_OWORD *)v34 + 6) = v48;
  v34[14] = v49;
  a2[77] = a2 + 76;
  *v31 = v31;
  if ( v25 != &v52 )
  {
    *v31 = v25;
    a2[77] = v18;
    v25[1] = v31;
    *v18 = v31;
  }
  result = a1 + 2;
  if ( (_QWORD *)a1[1] == a2 + 2 )
    a1[1] = result;
  if ( (_QWORD *)a2[1] == result )
    a2[1] = a2 + 2;
  return result;
}
