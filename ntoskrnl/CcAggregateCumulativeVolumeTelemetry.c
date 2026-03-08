/*
 * XREFs of CcAggregateCumulativeVolumeTelemetry @ 0x1403CD190
 * Callers:
 *     CcPostVolumeTelemetry @ 0x1403CB4D0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CcAggregateCumulativeVolumeTelemetry(_QWORD *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 *v10; // r9
  __int64 v11; // r11
  __int64 v12; // rdx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rcx
  _QWORD *v25; // rcx
  __int64 result; // rax

  v1 = a1[157];
  a1[156] += a1[2];
  if ( v1 <= a1[3] )
    v1 = a1[3];
  a1[158] += a1[4];
  a1[159] = a1[5];
  a1[160] = a1[6];
  a1[161] += a1[7];
  a1[162] += a1[8];
  v3 = a1[9];
  a1[157] = v1;
  v4 = 10LL;
  v5 = a1[163];
  if ( v5 <= v3 )
    v5 = v3;
  a1[164] += a1[10];
  a1[165] += a1[11];
  v6 = a1[12];
  a1[163] = v5;
  v7 = a1[166];
  if ( v7 <= v6 )
    v7 = v6;
  a1[166] = v7;
  v8 = a1 + 167;
  do
  {
    *v8 += *(v8 - 154);
    ++v8;
    --v4;
  }
  while ( v4 );
  v9 = a1[181];
  v10 = a1 + 180;
  v11 = a1[178];
  v12 = a1[24];
  if ( v9 <= a1[27] )
    v9 = a1[27];
  v13 = a1[28];
  a1[181] = v9;
  v14 = a1[182];
  v15 = v12 + v11;
  if ( v14 <= v13 )
    v14 = v13;
  a1[231] += a1[77];
  a1[232] += a1[78];
  a1[233] += a1[79];
  v16 = *v10;
  a1[182] = v14;
  v17 = a1[26];
  if ( v15 )
  {
    v16 = (v17 * v12 + v11 * v16) / v15;
  }
  else if ( v16 <= v17 )
  {
    v16 = a1[26];
  }
  *v10 = v16;
  v18 = 12LL;
  v19 = a1[234];
  a1[177] += a1[23];
  a1[179] += a1[25];
  v20 = a1[80];
  a1[178] = v15;
  if ( v19 <= v20 )
    v19 = v20;
  v21 = a1[81];
  a1[234] = v19;
  v22 = a1[235];
  if ( v22 <= v21 )
    v22 = v21;
  a1[284] += a1[130];
  v23 = a1[131];
  a1[235] = v22;
  v24 = a1[285];
  if ( v24 <= v23 )
    v24 = v23;
  a1[285] = v24;
  v25 = a1 + 183;
  do
  {
    *v25 += *(v25 - 154);
    v25[12] += *(v25 - 142);
    v25[24] += *(v25 - 130);
    v25[36] += *(v25 - 118);
    v25[53] += *(v25 - 101);
    v25[65] += *(v25 - 89);
    v25[77] += *(v25 - 77);
    v25[89] += *(v25 - 65);
    v25[103] += *(v25 - 51);
    result = *(v25 - 39);
    v25[115] += result;
    ++v25;
    --v18;
  }
  while ( v18 );
  return result;
}
