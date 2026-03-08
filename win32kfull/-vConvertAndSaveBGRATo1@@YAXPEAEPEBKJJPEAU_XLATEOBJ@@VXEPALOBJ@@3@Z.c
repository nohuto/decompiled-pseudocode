/*
 * XREFs of ?vConvertAndSaveBGRATo1@@YAXPEAEPEBKJJPEAU_XLATEOBJ@@VXEPALOBJ@@3@Z @ 0x1C02E62C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vConvertAndSaveBGRATo1(
        __int64 a1,
        unsigned int *a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // r14d
  _BYTE *v9; // r15
  int v10; // r9d
  char v11; // al
  int v12; // r13d
  int v13; // esi
  unsigned __int8 v14; // r15
  char v15; // al
  int v16; // ecx
  unsigned __int64 v17; // r13
  char NearestIndexFromColorref; // al
  char v19; // si
  char v20; // si
  char v21; // si
  char v22; // si
  char v23; // si
  char v24; // si
  char v25; // r13
  char v26; // r15
  char v27; // si
  _BYTE *v28; // [rsp+60h] [rbp+40h]
  unsigned int v29; // [rsp+70h] [rbp+50h]
  unsigned int v30; // [rsp+70h] [rbp+50h]
  unsigned int v31; // [rsp+70h] [rbp+50h]
  unsigned int v32; // [rsp+70h] [rbp+50h]
  unsigned int v33; // [rsp+70h] [rbp+50h]
  unsigned int v34; // [rsp+70h] [rbp+50h]
  unsigned int v35; // [rsp+70h] [rbp+50h]
  unsigned int v36; // [rsp+70h] [rbp+50h]
  unsigned int v37; // [rsp+70h] [rbp+50h]
  unsigned int v38; // [rsp+70h] [rbp+50h]

  v7 = a3;
  v9 = (_BYTE *)(a1 + ((__int64)a4 >> 3));
  v28 = v9;
  v10 = a4 & 7;
  if ( v10 )
  {
    v11 = *v9;
    v12 = 7 - v10;
    v13 = 7 - v10 + 1;
    if ( v13 >= a3 )
      v13 = a3;
    v7 = a3 - v13;
    if ( v13 )
    {
      v14 = *v9;
      do
      {
        v29 = *a2;
        LOBYTE(v29) = BYTE2(*a2);
        BYTE2(v29) = *a2;
        HIBYTE(v29) = 2;
        ++a2;
        v15 = (unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v29, *(_DWORD *)(a6 + 28) != 0) << v12;
        v16 = v14 & ~(1 << v12--);
        v14 = v16 | v15;
        --v13;
      }
      while ( v13 );
      v11 = v16 | v15;
      v9 = v28;
    }
    *v9++ = v11;
    v28 = v9;
  }
  if ( v7 >= 8 )
  {
    v17 = (unsigned __int64)(unsigned int)v7 >> 3;
    v7 -= 8 * ((unsigned int)v7 >> 3);
    do
    {
      v30 = *a2;
      LOBYTE(v30) = BYTE2(*a2);
      BYTE2(v30) = *a2;
      HIBYTE(v30) = 2;
      NearestIndexFromColorref = ulGetNearestIndexFromColorref(a6, a7, v30, *(_DWORD *)(a6 + 28) != 0);
      v31 = a2[1];
      BYTE2(v31) = v31;
      LOBYTE(v31) = BYTE2(a2[1]);
      HIBYTE(v31) = 2;
      v19 = ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v31, *(_DWORD *)(a6 + 28) != 0) << 6) | (NearestIndexFromColorref << 7);
      v32 = a2[2];
      LOBYTE(v32) = BYTE2(v32);
      BYTE2(v32) = a2[2];
      HIBYTE(v32) = 2;
      v20 = (32 * ulGetNearestIndexFromColorref(a6, a7, v32, *(_DWORD *)(a6 + 28) != 0)) | v19;
      v33 = a2[3];
      LOBYTE(v33) = BYTE2(v33);
      BYTE2(v33) = a2[3];
      HIBYTE(v33) = 2;
      v21 = (16 * ulGetNearestIndexFromColorref(a6, a7, v33, *(_DWORD *)(a6 + 28) != 0)) | v20;
      v34 = a2[4];
      LOBYTE(v34) = BYTE2(v34);
      BYTE2(v34) = a2[4];
      HIBYTE(v34) = 2;
      v22 = (8 * ulGetNearestIndexFromColorref(a6, a7, v34, *(_DWORD *)(a6 + 28) != 0)) | v21;
      v35 = a2[5];
      LOBYTE(v35) = BYTE2(v35);
      BYTE2(v35) = a2[5];
      HIBYTE(v35) = 2;
      v23 = (4 * ulGetNearestIndexFromColorref(a6, a7, v35, *(_DWORD *)(a6 + 28) != 0)) | v22;
      v36 = a2[6];
      LOBYTE(v36) = BYTE2(v36);
      BYTE2(v36) = a2[6];
      HIBYTE(v36) = 2;
      v24 = (2 * ulGetNearestIndexFromColorref(a6, a7, v36, *(_DWORD *)(a6 + 28) != 0)) | v23;
      v37 = a2[7];
      LOBYTE(v37) = BYTE2(v37);
      BYTE2(v37) = a2[7];
      HIBYTE(v37) = 2;
      a2 += 8;
      *v9++ = v24 | ulGetNearestIndexFromColorref(a6, a7, v37, *(_DWORD *)(a6 + 28) != 0);
      --v17;
    }
    while ( v17 );
    v28 = v9;
  }
  if ( v7 )
  {
    v25 = *v9;
    v26 = 7;
    do
    {
      v38 = *a2;
      LOBYTE(v38) = BYTE2(*a2);
      BYTE2(v38) = *a2;
      HIBYTE(v38) = 2;
      v27 = v26;
      ++a2;
      --v26;
      v25 = v25 & ~(1 << v27) | ((unsigned __int8)ulGetNearestIndexFromColorref(a6, a7, v38, *(_DWORD *)(a6 + 28) != 0) << v27);
      --v7;
    }
    while ( v7 );
    *v28 = v25;
  }
}
