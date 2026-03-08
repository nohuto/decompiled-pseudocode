/*
 * XREFs of MinAsn1DecodeGeneralizedTime @ 0x140A6E30C
 * Callers:
 *     MinAsn1DecodeTime @ 0x140A6E75C (MinAsn1DecodeTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1402D1150 (RtlTimeFieldsToTime.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     atoi @ 0x1403D36E0 (atoi.c)
 *     isdigit @ 0x1403D44D0 (isdigit.c)
 *     I_MinAsn1AdjustFileTime @ 0x140A6E108 (I_MinAsn1AdjustFileTime.c)
 *     I_MinAsn1MultiplyAndDivide @ 0x140A6E230 (I_MinAsn1MultiplyAndDivide.c)
 *     I_MinAsn1ScanFrac @ 0x140A6E28C (I_MinAsn1ScanFrac.c)
 */

bool __fastcall MinAsn1DecodeGeneralizedTime(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  char *v3; // rbx
  __int16 v4; // r12
  __int16 v5; // r14
  __int16 v6; // si
  __int16 v7; // r15
  char v8; // r13
  unsigned __int8 *v9; // rbx
  unsigned int v10; // edi
  int v11; // ecx
  unsigned __int8 *v12; // rbx
  unsigned int v13; // edi
  int v14; // eax
  unsigned __int8 *v15; // rbx
  unsigned int v16; // edi
  int v17; // eax
  unsigned __int8 *v18; // rbx
  unsigned int v19; // edi
  int v20; // eax
  int v21; // r10d
  int v22; // r11d
  __int16 v23; // r14
  int v24; // r10d
  int v25; // r11d
  char v26; // al
  unsigned int v27; // edi
  int v28; // r10d
  int v29; // r15d
  int v30; // r10d
  __int16 v31; // ax
  __int16 v32; // r11
  PLARGE_INTEGER v33; // rbx
  int v35; // [rsp+20h] [rbp-40h] BYREF
  int v36; // [rsp+24h] [rbp-3Ch] BYREF
  TIME_FIELDS TimeFields; // [rsp+28h] [rbp-38h] BYREF
  int v38; // [rsp+38h] [rbp-28h]
  int v39; // [rsp+3Ch] [rbp-24h]
  int v40; // [rsp+40h] [rbp-20h]
  int v41; // [rsp+44h] [rbp-1Ch]
  PLARGE_INTEGER Time; // [rsp+48h] [rbp-18h]
  char Str; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int8 v44; // [rsp+51h] [rbp-Fh]
  char v45; // [rsp+52h] [rbp-Eh]
  char v46; // [rsp+53h] [rbp-Dh]
  char v47; // [rsp+54h] [rbp-Ch]

  v2 = *(_DWORD *)a1;
  v3 = *(char **)(a1 + 8);
  v4 = 0;
  Time = a2;
  v5 = 0;
  v35 = 0;
  v6 = 0;
  v36 = 0;
  v7 = 0;
  v8 = 0;
  if ( v2 < 0xA )
    return 0;
  v47 = 0;
  Str = *v3;
  v44 = v3[1];
  v45 = v3[2];
  v46 = v3[3];
  v38 = atoi(&Str);
  v45 = 0;
  Str = v3[4];
  v44 = v3[5];
  v39 = atoi(&Str);
  Str = v3[6];
  v44 = v3[7];
  v40 = atoi(&Str);
  Str = v3[8];
  v44 = v3[9];
  v9 = (unsigned __int8 *)(v3 + 10);
  v41 = atoi(&Str);
  v10 = v2 - 10;
  if ( !v10 )
    return 0;
  v11 = *v9;
  if ( (((_BYTE)v11 - 44) & 0xFD) == 0 )
  {
    v18 = v9 + 1;
    v19 = v10 - 1;
    v20 = I_MinAsn1ScanFrac(v18, v19, &v35, &v36);
    v10 = v19 - v20;
    v9 = &v18[v20];
    v4 = I_MinAsn1MultiplyAndDivide(60, v35, v36);
    v23 = I_MinAsn1MultiplyAndDivide(3600, v21, v22);
    v6 = I_MinAsn1MultiplyAndDivide(3600000, v24, v25) - 1000 * v23;
    v5 = -60 * v4 + v23;
LABEL_15:
    if ( !v10 )
      return 0;
    goto LABEL_16;
  }
  if ( !isdigit(v11) )
    goto LABEL_16;
  if ( v10 < 2 )
    return 0;
  Str = *v9;
  v44 = v9[1];
  v9 += 2;
  v10 -= 2;
  v4 = atoi(&Str);
  if ( !v10 )
    return 0;
  if ( ((*v9 - 44) & 0xFD) == 0 )
  {
    v15 = v9 + 1;
    v16 = v10 - 1;
    v17 = I_MinAsn1ScanFrac(v15, v16, &v35, &v36);
    v10 = v16 - v17;
    v9 = &v15[v17];
    v5 = I_MinAsn1MultiplyAndDivide(60, v35, v36);
    v6 = I_MinAsn1MultiplyAndDivide(60000, v35, v36) - 1000 * v5;
    goto LABEL_15;
  }
  if ( isdigit(*v9) )
  {
    if ( v10 < 2 )
      return 0;
    Str = *v9;
    v44 = v9[1];
    v9 += 2;
    v10 -= 2;
    v5 = atoi(&Str);
    if ( !v10 )
      return 0;
    if ( ((*v9 - 44) & 0xFD) == 0 )
    {
      v12 = v9 + 1;
      v13 = v10 - 1;
      v14 = I_MinAsn1ScanFrac(v12, v13, &v35, &v36);
      v10 = v13 - v14;
      v9 = &v12[v14];
      v6 = I_MinAsn1MultiplyAndDivide(1000, v35, v36);
      goto LABEL_15;
    }
  }
LABEL_16:
  v26 = *v9;
  if ( *v9 == 90 )
  {
    v8 = 1;
    v27 = v10 - 1;
  }
  else if ( v26 == 43 )
  {
    v27 = v10 - 1 - I_MinAsn1ScanFrac(v9 + 1, v10 - 1, &v35, &v36);
    v29 = (int)I_MinAsn1MultiplyAndDivide(1, v35, v36 - 4) % 100;
    v7 = 60 * I_MinAsn1MultiplyAndDivide(1, v35, v28 - 2) + v29;
  }
  else
  {
    if ( v26 != 45 )
      return 0;
    v27 = v10 - 1 - I_MinAsn1ScanFrac(v9 + 1, v10 - 1, &v35, &v36);
    I_MinAsn1MultiplyAndDivide(1, v35, v36 - 4);
    v31 = I_MinAsn1MultiplyAndDivide(1, v35, v30 - 2);
    v7 = -60 * v31 - v32;
  }
  if ( !v27 )
  {
    v33 = Time;
    TimeFields.Year = v38;
    TimeFields.Month = v39;
    TimeFields.Day = v40;
    TimeFields.Hour = v41;
    TimeFields.Weekday = 0;
    TimeFields.Minute = v4;
    TimeFields.Second = v5;
    TimeFields.Milliseconds = v6;
    if ( RtlTimeFieldsToTime(&TimeFields, Time) )
      return I_MinAsn1AdjustFileTime((__int64 *)v33, v7, v8) != 0;
  }
  return 0;
}
