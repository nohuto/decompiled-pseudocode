/*
 * XREFs of GetDstBFInfo @ 0x1C0253EF0
 * Callers:
 *     AAHalftoneBitmap @ 0x1C0253604 (AAHalftoneBitmap.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ValidateRGBBitFields @ 0x1C02543A4 (ValidateRGBBitFields.c)
 *     ComputeInputColorInfo @ 0x1C025E1C4 (ComputeInputColorInfo.c)
 *     SetGrayColorTable @ 0x1C025E3B0 (SetGrayColorTable.c)
 */

__int64 __fastcall GetDstBFInfo(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v5; // rsi
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  int v10; // eax
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  LODWORD(v5) = 0;
  v13 = 0LL;
  v12 = 0LL;
  BYTE1(v12) = a3;
  switch ( a3 )
  {
    case 5u:
    case 6u:
      v9 = 16711680;
      v7 = 65280;
      v8 = 255;
      goto LABEL_11;
    case 0xFCu:
      v9 = 63488;
      v7 = 2016;
      goto LABEL_8;
    case 0xFDu:
      v9 = 31744;
      v7 = 992;
LABEL_8:
      v8 = 31;
LABEL_11:
      *((_QWORD *)&v12 + 1) = __PAIR64__(v7, v9);
      LODWORD(v13) = v8;
      goto LABEL_12;
  }
  v5 = *(_QWORD *)(a2 + 8);
  a4 = 2 * (*(_BYTE *)a2 & 2);
  if ( v5 )
    goto LABEL_19;
  v7 = HIDWORD(v12);
  v8 = 0;
  v9 = DWORD2(v12);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v10 = v7;
    HIDWORD(v12) = v8;
    v7 = v8;
    LODWORD(v13) = v10;
    v8 = v10;
  }
  if ( (a4 & 2) != 0 )
  {
    *((_QWORD *)&v12 + 1) = __PAIR64__(v9, v7);
  }
  else if ( (a4 & 4) != 0 )
  {
    DWORD2(v12) = v8;
    LODWORD(v13) = v9;
  }
  ValidateRGBBitFields(&v12);
LABEL_19:
  ComputeInputColorInfo(v5, 4, a4, (unsigned int)&v12, a1 + 96);
  return SetGrayColorTable(0LL);
}
