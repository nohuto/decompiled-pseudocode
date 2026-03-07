unsigned __int8 __fastcall DXGK_GAMMA_RAMP::IsDefaultGammaRamp(DXGK_GAMMA_RAMP *this)
{
  int v2; // eax
  char *v3; // rcx
  __int64 v4; // rdx
  _DWORD *v5; // rdx
  unsigned int v6; // r8d
  int v7; // r11d
  int v8; // r10d
  int v9; // r9d
  int v10; // eax
  __int64 v11; // rax
  float v12; // xmm0_4
  unsigned int v13; // r8d
  _DWORD *v14; // rax
  float v15; // edx
  float v16; // [rsp+8h] [rbp+8h]

  if ( *((_BYTE *)this + 40) )
    return *((_BYTE *)this + 41);
  v2 = *((_DWORD *)this + 4);
  *((_BYTE *)this + 40) = 1;
  if ( v2 != 1 )
  {
    if ( v2 == 2 )
    {
      v4 = *((_QWORD *)this + 4);
      v3 = (char *)this + 41;
      v5 = (_DWORD *)(v4 + 512);
      v6 = 0;
      *v3 = 1;
      while ( 1 )
      {
        v7 = *(v5 - 128);
        v8 = (v6 | (v6 << 16) | 0x8000) << 9;
        v9 = (2 * (v6 | (v6 << 16) | 0x8000)) | v8;
        if ( v7 != v8 && v7 != v9 )
          break;
        if ( *v5 != v8 && *v5 != v9 )
          break;
        v10 = v5[128];
        if ( v10 != v8 && v10 != v9 )
          break;
        ++v6;
        ++v5;
        if ( v6 >= 0x80 )
          return *v3;
      }
    }
    else
    {
      if ( v2 == 3 )
      {
        v11 = *((_QWORD *)this + 4);
        v12 = 0.0;
        v16 = 0.0;
        if ( *(_QWORD *)v11 == 0x3F8000003F800000LL
          && *(_DWORD *)(v11 + 8) == 1065353216
          && !*(_DWORD *)(v11 + 12)
          && !*(_DWORD *)(v11 + 16)
          && !*(_DWORD *)(v11 + 20) )
        {
          v3 = (char *)this + 41;
          v13 = 0;
          v14 = (_DWORD *)(v11 + 28);
          *v3 = 1;
          while ( 1 )
          {
            v15 = v16;
            v12 = v12 + 0.0009765625;
            v16 = v12;
            if ( *(v14 - 1) != LODWORD(v15) || *v14 != LODWORD(v15) || v14[1] != LODWORD(v15) )
              break;
            ++v13;
            v14 += 3;
            if ( v13 >= 0x401 )
              return *v3;
          }
          goto LABEL_29;
        }
      }
      else
      {
        *((_BYTE *)this + 40) = 0;
      }
      v3 = (char *)this + 41;
    }
LABEL_29:
    *v3 = 0;
    return *v3;
  }
  v3 = (char *)this + 41;
  *v3 = 1;
  return *v3;
}
