/*
 * XREFs of MinAsn1DecodeUtcTime @ 0x140A6E7D4
 * Callers:
 *     MinAsn1DecodeTime @ 0x140A6E75C (MinAsn1DecodeTime.c)
 * Callees:
 *     RtlTimeFieldsToTime @ 0x1402D1150 (RtlTimeFieldsToTime.c)
 *     atoi @ 0x1403D36E0 (atoi.c)
 *     isdigit @ 0x1403D44D0 (isdigit.c)
 *     I_MinAsn1AdjustFileTime @ 0x140A6E108 (I_MinAsn1AdjustFileTime.c)
 *     I_MinAsn1MultiplyAndDivide @ 0x140A6E230 (I_MinAsn1MultiplyAndDivide.c)
 *     I_MinAsn1ScanFrac @ 0x140A6E28C (I_MinAsn1ScanFrac.c)
 */

bool __fastcall MinAsn1DecodeUtcTime(__int64 a1, LARGE_INTEGER *a2)
{
  unsigned int v2; // edi
  char *v3; // rbx
  __int16 v5; // r13
  __int16 v6; // r14
  char v7; // r12
  int v8; // esi
  unsigned __int8 *v9; // rbx
  unsigned int v10; // edi
  char v11; // cl
  unsigned int v12; // edi
  int v13; // r10d
  int v14; // r14d
  int v15; // r10d
  __int16 v16; // ax
  __int16 v17; // r11
  __int16 v18; // ax
  __int16 v20; // [rsp+20h] [rbp-20h]
  __int16 v21; // [rsp+24h] [rbp-1Ch]
  __int16 v22; // [rsp+28h] [rbp-18h]
  __int16 v23; // [rsp+2Ch] [rbp-14h]
  TIME_FIELDS TimeFields; // [rsp+30h] [rbp-10h] BYREF
  char Str; // [rsp+80h] [rbp+40h] BYREF
  unsigned __int8 v26; // [rsp+81h] [rbp+41h]
  char v27; // [rsp+82h] [rbp+42h]
  int v28; // [rsp+90h] [rbp+50h] BYREF
  int v29; // [rsp+98h] [rbp+58h] BYREF

  v2 = *(_DWORD *)a1;
  v3 = *(char **)(a1 + 8);
  v28 = 0;
  v5 = 0;
  v29 = 0;
  v6 = 0;
  v7 = 0;
  if ( v2 < 0xA )
    return 0;
  v27 = 0;
  Str = *v3;
  v26 = v3[1];
  v8 = atoi(&Str);
  Str = v3[2];
  v26 = v3[3];
  v20 = atoi(&Str);
  Str = v3[4];
  v26 = v3[5];
  v21 = atoi(&Str);
  Str = v3[6];
  v26 = v3[7];
  v22 = atoi(&Str);
  Str = v3[8];
  v26 = v3[9];
  v9 = (unsigned __int8 *)(v3 + 10);
  v23 = atoi(&Str);
  v10 = v2 - 10;
  if ( v10 < 2 )
  {
LABEL_5:
    if ( !v10 )
      return 0;
    goto LABEL_6;
  }
  if ( isdigit(*v9) )
  {
    Str = *v9;
    v26 = v9[1];
    v9 += 2;
    v5 = atoi(&Str);
    v10 -= 2;
    goto LABEL_5;
  }
LABEL_6:
  v11 = *v9;
  if ( *v9 == 90 )
  {
    v7 = 1;
    v12 = v10 - 1;
  }
  else if ( v11 == 43 )
  {
    v12 = v10 - 1 - I_MinAsn1ScanFrac(v9 + 1, v10 - 1, &v28, &v29);
    v14 = (int)I_MinAsn1MultiplyAndDivide(1, v28, v29 - 4) % 100;
    v6 = 60 * I_MinAsn1MultiplyAndDivide(1, v28, v13 - 2) + v14;
  }
  else
  {
    if ( v11 != 45 )
      return 0;
    v12 = v10 - 1 - I_MinAsn1ScanFrac(v9 + 1, v10 - 1, &v28, &v29);
    I_MinAsn1MultiplyAndDivide(1, v28, v29 - 4);
    v16 = I_MinAsn1MultiplyAndDivide(1, v28, v15 - 2);
    v6 = -60 * v16 - v17;
  }
  if ( !v12 )
  {
    *(_DWORD *)&TimeFields.Milliseconds = 0;
    v18 = 1900;
    if ( v8 < 50 )
      v18 = 2000;
    TimeFields.Second = v5;
    TimeFields.Month = v20;
    TimeFields.Day = v21;
    TimeFields.Hour = v22;
    TimeFields.Minute = v23;
    TimeFields.Year = v18 + v8;
    if ( RtlTimeFieldsToTime(&TimeFields, a2) )
      return I_MinAsn1AdjustFileTime((__int64 *)a2, v6, v7) != 0;
  }
  return 0;
}
