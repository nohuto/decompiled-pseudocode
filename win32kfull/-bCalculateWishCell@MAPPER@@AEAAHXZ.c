__int64 __fastcall MAPPER::bCalculateWishCell(MAPPER *this)
{
  int v2; // eax
  int v3; // edx
  int v4; // esi
  float *v6; // r14
  float v7; // xmm0_4
  int v8; // r15d
  BOOL v9; // r10d
  bool v10; // cf
  bool v11; // zf
  float v12; // xmm0_4
  int v13; // r10d
  BOOL v14; // edx
  float v15; // xmm0_4
  BOOL v16; // r11d
  int v17; // r8d
  int v18; // r9d
  int v19; // edi
  int v20; // eax
  float v21; // xmm0_4
  float v22; // xmm0_4
  int v23; // eax
  float v24; // xmm0_4
  float v25; // xmm0_4
  int v26; // ecx
  float *v27; // [rsp+20h] [rbp-10h] BYREF
  int v28; // [rsp+60h] [rbp+30h] BYREF

  v2 = lNormAngle(*(unsigned int *)(*((_QWORD *)this + 1) + 12LL));
  v3 = *((_DWORD *)this + 63);
  v4 = v2;
  if ( (v3 & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL) & 0x802) == 0x802 || (v3 & 0x40) != 0 )
    {
      *((_DWORD *)this + 44) = v2;
      *((_DWORD *)this + 63) = v3 | 0x1C;
      return 1LL;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v27, *(struct XDCOBJ **)this, 516);
    v6 = v27;
    v7 = v27[1];
    v8 = (__PAIR64__(*v27 > 0.0, *v27) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    v9 = v7 > 0.0;
    v10 = v7 > 0.0;
    v11 = v7 == 0.0;
    v12 = v27[2];
    v13 = v9 - (!v10 && !v11);
    v14 = v12 > 0.0;
    v10 = v12 > 0.0;
    v11 = v12 == 0.0;
    v15 = v27[3];
    v16 = !v10 && !v11;
    v17 = v14 - v16;
    v18 = (__PAIR64__(v15 > 0.0, LODWORD(v15)) - COERCE_UNSIGNED_INT(0.0)) >> 32;
    if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)this + 976LL) + 340LL) & 0x40) != 0 )
    {
      v17 = v16 - v14;
      v18 = (__PAIR64__(v15 < 0.0, 0.0) - LODWORD(v15)) >> 32;
    }
    v19 = *((_DWORD *)this + 63);
    if ( (v19 & 0x81000) != 0 )
    {
LABEL_16:
      if ( (v19 & 8) == 0 )
      {
        v28 = 0;
        v21 = (float)*((int *)this + 41);
        if ( v18 )
          v22 = v21 * v6[3];
        else
          v22 = v21 * v6[2];
        bFToL(v22, &v28, 0);
        v23 = v28;
        if ( v28 < 0 )
          v23 = -v28;
        *((_DWORD *)this + 41) = (v23 + 8) >> 4;
      }
      if ( *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) && (v19 & 0x10) == 0 )
      {
        v28 = 0;
        v24 = (float)*((int *)this + 42);
        if ( v8 )
          v25 = v24 * *v6;
        else
          v25 = v24 * v6[1];
        bFToL(v25, &v28, 0);
        v26 = v28;
        if ( v28 < 0 )
          v26 = -v28;
        *((_DWORD *)this + 42) = (v26 + 8) >> 4;
      }
      *((_DWORD *)this + 63) = v19 | 0x1C;
      return 1LL;
    }
    if ( v4 == 900 * (v4 / 900)
      && !((v17 + v13) | (v8 - v18) | ((unsigned __int8)v8 ^ (unsigned __int8)~(_BYTE)v13) & 1) )
    {
      v20 = (v13 & 0x384)
          + (v17 & 0xA8C)
          + v4
          + (((__PAIR64__(*v27 > 0.0, *v27) - COERCE_UNSIGNED_INT(0.0)) >> 32) & 0x708);
      *((_DWORD *)this + 44) = v20;
      if ( v20 >= 3600 )
        *((_DWORD *)this + 44) = v20 - 3600;
      v19 |= 0x80000u;
      *((_DWORD *)this + 63) = v19;
      goto LABEL_16;
    }
    *((_DWORD *)this + 63) = v19 | 0x20;
  }
  return 0LL;
}
