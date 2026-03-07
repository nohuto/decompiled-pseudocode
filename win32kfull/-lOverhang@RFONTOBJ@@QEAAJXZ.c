__int64 __fastcall RFONTOBJ::lOverhang(RFONTOBJ *this)
{
  _DWORD *v1; // rdx
  unsigned int v2; // ebx
  __int64 v4; // r8
  int v5; // r9d
  int v7; // ecx
  __int64 v8; // rax
  int v9; // r8d
  int v10; // [rsp+20h] [rbp-60h] BYREF
  float v11; // [rsp+24h] [rbp-5Ch] BYREF
  float v12[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v13[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v14; // [rsp+40h] [rbp-40h] BYREF
  _OWORD v15[2]; // [rsp+50h] [rbp-30h] BYREF
  int v16; // [rsp+70h] [rbp-10h]

  v1 = *(_DWORD **)this;
  v2 = 0;
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 120LL) + 32LL);
  v5 = *(_DWORD *)(v4 + 48);
  if ( (v5 & 6) == 0 || v1[23] )
    return v2;
  v7 = v1[3];
  if ( (v7 & 0x4000) != 0 )
    v2 = (v1[89] - 1) / 2;
  if ( (v7 & 0x2000) == 0 )
    return v2;
  v14 = v4;
  if ( (v5 & 4) == 0 )
    return ++v2;
  v16 = 0;
  memset(v15, 0, sizeof(v15));
  EXFORMOBJ::EXFORMOBJ((EXFORMOBJ *)v13, (struct MATRIX *)v15, 8u);
  if ( !v13[0] )
    return 0LL;
  RFONTOBJ::vSetNotionalToDevice(this, (struct EXFORMOBJ *)v13);
  v8 = (__int64)*IFIOBJ::pptlBaseline((IFIOBJ *)&v14);
  v12[0] = (float)(int)v8;
  v12[1] = (float)SHIDWORD(v8);
  if ( (*(_DWORD *)(v13[0] + 32LL) & 2) != 0
    || EXFORMOBJ::bXform((EXFORMOBJ *)v13, (struct VECTORFL *)v12, (struct VECTORFL *)v12, 1uLL) )
  {
    v11 = 0.0;
    EFLOAT::eqLength(&v11, &v10, v12);
    v10 = 0;
    bFToL(v11, &v10, 0);
    v9 = v10;
    if ( !v10 )
      v9 = 1;
    v2 += v9;
    return v2;
  }
  return 1LL;
}
