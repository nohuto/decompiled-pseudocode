__int64 __fastcall PopVerifySystemPowerPolicy(_OWORD *a1, __int64 a2)
{
  __int128 v3; // xmm0
  _OWORD *v4; // rcx
  unsigned int v5; // r12d
  int *v6; // r15
  int v7; // eax
  int *v8; // r14
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  int *v12; // r13
  __int64 v13; // rbp
  int *v14; // rsi
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  unsigned int v20; // ecx
  int v21; // edx
  char v22; // al
  int v23; // eax

  *(_OWORD *)a2 = *a1;
  *(_OWORD *)(a2 + 16) = a1[1];
  *(_OWORD *)(a2 + 32) = a1[2];
  *(_OWORD *)(a2 + 48) = a1[3];
  *(_OWORD *)(a2 + 64) = a1[4];
  *(_OWORD *)(a2 + 80) = a1[5];
  *(_OWORD *)(a2 + 96) = a1[6];
  v3 = a1[7];
  v4 = a1 + 8;
  *(_OWORD *)(a2 + 112) = v3;
  *(_OWORD *)(a2 + 128) = *v4;
  *(_OWORD *)(a2 + 144) = v4[1];
  *(_OWORD *)(a2 + 160) = v4[2];
  *(_OWORD *)(a2 + 176) = v4[3];
  *(_OWORD *)(a2 + 192) = v4[4];
  *(_OWORD *)(a2 + 208) = v4[5];
  *(_QWORD *)(a2 + 224) = *((_QWORD *)v4 + 12);
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  v5 = 0;
  if ( BYTE5(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 72) = 4;
  }
  else if ( BYTE4(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 72) = 3;
  }
  else if ( BYTE3(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 72) = 2;
  }
  v6 = (int *)(a2 + 68);
  v7 = *(_DWORD *)(a2 + 68);
  if ( v7 < 2 )
  {
    *v6 = 2;
    v7 = 2;
  }
  else if ( v7 > 4 )
  {
    *v6 = 4;
    v7 = 4;
  }
  v8 = (int *)(a2 + 72);
  v9 = *(_DWORD *)(a2 + 72);
  if ( v9 < 2 )
  {
    *v8 = 2;
    v9 = 2;
  }
  else if ( v9 > 4 )
  {
    *v8 = 4;
    v9 = 4;
  }
  if ( v9 < v7 )
  {
    *v8 = v7;
    v9 = v7;
  }
  if ( v7 < (int)PopAdminPolicy )
    *v6 = PopAdminPolicy;
  if ( v9 > SDWORD1(PopAdminPolicy) )
    *v8 = DWORD1(PopAdminPolicy);
  v10 = *(_DWORD *)(a2 + 192);
  if ( v10 < DWORD2(PopAdminPolicy) )
  {
    *(_DWORD *)(a2 + 192) = DWORD2(PopAdminPolicy);
    v10 = DWORD2(PopAdminPolicy);
  }
  if ( v10 > HIDWORD(PopAdminPolicy) )
    *(_DWORD *)(a2 + 192) = HIDWORD(PopAdminPolicy);
  v11 = *(_DWORD *)(a2 + 212);
  if ( v11 < (unsigned int)qword_140C3D510 )
  {
    *(_DWORD *)(a2 + 212) = qword_140C3D510;
    v11 = qword_140C3D510;
  }
  if ( v11 > HIDWORD(qword_140C3D510) )
    *(_DWORD *)(a2 + 212) = HIDWORD(qword_140C3D510);
  PopVerifyPowerActionPolicy(a2 + 4);
  PopVerifyPowerActionPolicy(a2 + 16);
  PopVerifyPowerActionPolicy(a2 + 28);
  PopVerifyPowerActionPolicy(a2 + 48);
  PopVerifySystemPowerState(a2 + 40, 1LL);
  PopVerifySystemPowerState(a2 + 68, 1LL);
  PopVerifySystemPowerState(a2 + 72, 1LL);
  v12 = (int *)(a2 + 76);
  PopVerifySystemPowerState(a2 + 76, 1LL);
  v13 = a2 + 116;
  v14 = (int *)(a2 + 104);
  do
  {
    v15 = *v14;
    PopVerifyPowerActionPolicy(v13 - 12);
    if ( v15 == 3 && *v14 < 3 )
    {
      *v14 = 6;
      PopVerifyPowerActionPolicy(v14);
    }
    PopVerifySystemPowerState(v13, 1LL);
    v16 = *v14;
    if ( *v14 == 2 )
    {
      v16 = 2;
      if ( v14[3] > 4 )
      {
        v14[3] = 4;
        PopVerifySystemPowerState(v13, 1LL);
        v16 = *v14;
      }
    }
    if ( v5 )
    {
      v17 = v14[1];
      if ( v16 == 6 )
        v18 = v17 | 0x10;
      else
        v18 = v17 & 0xFFFFFFEF;
      v14[1] = v18;
    }
    if ( (unsigned int)*(v14 - 1) > 0x64 )
      *(v14 - 1) = 100;
    ++v5;
    v13 += 24LL;
    v14 += 6;
  }
  while ( v5 < 4 );
  PopVerifyPowerActionPolicy(a2 + 220);
  if ( !*(_DWORD *)(a2 + 92) )
    *(_DWORD *)(a2 + 92) = 1;
  v19 = *(_DWORD *)(a2 + 88);
  if ( v19 && !BYTE7(PopCapabilities) )
  {
    *(_DWORD *)(a2 + 88) = 0;
    v19 = 0;
  }
  v20 = *(_DWORD *)(a2 + 60);
  v21 = v20;
  if ( v20 && v20 < 0x3C )
  {
    *(_DWORD *)(a2 + 60) = 60;
    v21 = 60;
  }
  if ( (unsigned int)(v19 - 1) <= 0x3A )
    *(_DWORD *)(a2 + 88) = 60;
  v22 = *(_BYTE *)(a2 + 64);
  if ( (unsigned __int8)v22 > 0x5Au )
  {
    *(_BYTE *)(a2 + 64) = 90;
    v22 = 90;
  }
  if ( v21 && !v22 )
    *(_BYTE *)(a2 + 64) = 90;
  v23 = *v6;
  if ( *v8 < *v6 )
    *v8 = v23;
  if ( *v12 > v23 )
    *v12 = v23;
  return 0LL;
}
