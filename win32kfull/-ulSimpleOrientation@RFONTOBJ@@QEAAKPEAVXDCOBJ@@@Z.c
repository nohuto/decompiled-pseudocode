__int64 __fastcall RFONTOBJ::ulSimpleOrientation(RFONTOBJ *this, struct XDCOBJ *a2)
{
  int v2; // edi
  __int16 v3; // r9
  int v4; // ecx
  unsigned int v5; // ebx
  __int64 result; // rax
  float v7; // xmm0_4
  BOOL v8; // edx
  bool v9; // r8
  bool v10; // cf
  bool v11; // zf
  float v12; // xmm0_4
  int v13; // r8d
  bool v14; // r9
  float v15; // xmm0_4
  int v16; // r9d
  int v17; // r10d
  int v18; // r11d
  unsigned int v19; // ecx
  float *v20; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (*(float *)(*(_QWORD *)this + 396LL) > 0.0) - (*(float *)(*(_QWORD *)this + 396LL) < 0.0);
  v4 = (__PAIR64__(*(float *)(*(_QWORD *)this + 400LL) > 0.0, *(_DWORD *)(*(_QWORD *)this + 400LL))
      - COERCE_UNSIGNED_INT(0.0)) >> 32;
  if ( (((unsigned __int8)v3 ^ (unsigned __int8)v4) & 1) == 0 )
    return 3601LL;
  v5 = v3 & 0x708 | v4 & 0xA8C | -v4 & 0x384;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x802) == 0x802 )
    return v5;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v20, a2, 516);
  v7 = v20[1];
  v8 = *v20 > 0.0;
  v9 = v7 > 0.0;
  v10 = v7 > 0.0;
  v11 = v7 == 0.0;
  v12 = v20[2];
  v13 = v9 - (!v10 && !v11);
  v14 = v12 > 0.0;
  v10 = v12 > 0.0;
  v11 = v12 == 0.0;
  v15 = v20[3];
  v16 = v14 - (!v10 && !v11);
  LOBYTE(v2) = v15 < 0.0;
  v17 = (v15 > 0.0) - v2;
  v18 = (v8 ^ (unsigned __int8)~(_BYTE)v13) & 1;
  if ( !(v18 | (v16 + v13) | (v8 - v17)) )
  {
    v19 = (v13 & 0x384) + (v16 & 0xA8C) + v5 + (v8 & 0x708);
    goto LABEL_6;
  }
  if ( v18 | (v17 + v8) | (v13 - v16) )
    return 3601LL;
  v19 = (v17 & 0xE10) + (v8 & 0x1518) + (v13 & 0x189C) + (-v13 & 0x1194) - v5;
LABEL_6:
  result = v19 - 3600;
  if ( v19 < 0xE10 )
    return v19;
  return result;
}
