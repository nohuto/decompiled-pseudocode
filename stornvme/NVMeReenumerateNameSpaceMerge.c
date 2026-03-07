char __fastcall NVMeReenumerateNameSpaceMerge(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r11
  __int64 v4; // r12
  __int64 v7; // rsi
  __int64 v8; // r9
  unsigned int v9; // edi
  __int64 v10; // r15
  __int64 v11; // r8
  _OWORD *v12; // rcx
  _DWORD *v13; // rdx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  int v17; // eax
  _OWORD *v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm1
  int v21; // eax
  int v22; // r8d
  int v23; // r8d
  __int64 v24; // r10
  int v25; // ecx
  __int64 v26; // r9
  __int64 *v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8

  v3 = 0x80;
  v4 = a3;
  v7 = 0LL;
  v8 = 255LL;
  do
  {
    v9 = *(_DWORD *)(a2 + 4 * v7 + 2048);
    if ( !v9 )
      break;
    if ( v9 <= (unsigned int)v4 )
    {
      v10 = v9 - 1;
      v11 = *(_QWORD *)(a2 + 8 * v10 + 8);
      v12 = *(_OWORD **)(a1 + 8 * v10 + 1952);
      v13 = (_DWORD *)(v11 + 20);
      if ( v11 && (*v13 & 8) != 0 )
      {
        *v13 |= 0x80u;
        *v13 &= ~8u;
        *(_BYTE *)(v11 + 10) = v9 - 1;
        if ( v12 )
        {
          v14 = (_OWORD *)v11;
          v15 = 3LL;
          do
          {
            *v12 = *v14;
            v12[1] = v14[1];
            v12[2] = v14[2];
            v12[3] = v14[3];
            v12[4] = v14[4];
            v12[5] = v14[5];
            v12[6] = v14[6];
            v12 += 8;
            v16 = v14[7];
            v14 += 8;
            *(v12 - 1) = v16;
            --v15;
          }
          while ( v15 );
          *v12 = *v14;
          v12[1] = v14[1];
          *((_QWORD *)v12 + 4) = *((_QWORD *)v14 + 4);
          StorPortExtendedFunction(1LL, a1, v11, 255LL);
          *(_QWORD *)(a2 + 8 * v10 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 8 * v10 + 1952) = v11;
        }
        if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 232) )
        {
          v17 = (unsigned __int16)v9;
          if ( (unsigned __int16)v9 >= 0xFFu )
            v17 = 255;
          *(_DWORD *)(a1 + 232) = v17;
        }
      }
      else if ( v12 && (*((_DWORD *)v12 + 5) & 0x20) != 0 )
      {
        memset(v12, 0, 0x1A8uLL);
      }
      else if ( v11 && (*v13 & 0x10) != 0 )
      {
        *v13 &= ~0x10u;
        v18 = (_OWORD *)v11;
        v19 = 3LL;
        *(_BYTE *)(v11 + 10) = v9 - 1;
        do
        {
          *v12 = *v18;
          v12[1] = v18[1];
          v12[2] = v18[2];
          v12[3] = v18[3];
          v12[4] = v18[4];
          v12[5] = v18[5];
          v12[6] = v18[6];
          v12 += 8;
          v20 = v18[7];
          v18 += 8;
          *(v12 - 1) = v20;
          --v19;
        }
        while ( v19 );
        *v12 = *v18;
        v12[1] = v18[1];
        *((_QWORD *)v12 + 4) = *((_QWORD *)v18 + 4);
        StorPortExtendedFunction(1LL, a1, v11, 255LL);
        *(_QWORD *)(a2 + 8 * v10 + 8) = 0LL;
      }
    }
    v3 = 0x80;
    v7 = (unsigned int)(v7 + 1);
    v8 = 255LL;
  }
  while ( (unsigned int)v7 < 0x400 );
  v21 = *(_DWORD *)(a1 + 232);
  v22 = 0;
  if ( v21 )
  {
    v8 = a1 + 1952;
    do
    {
      LOBYTE(v21) = NVMeIsLunActive(*(_QWORD *)v8);
      v25 = v23 + 1;
      v8 = v26 + 8;
      if ( !(_BYTE)v21 )
        v25 = v23;
      v22 = v25;
    }
    while ( v24 != 1 );
  }
  *(_DWORD *)(a1 + 220) = v22;
  if ( (_DWORD)v4 )
  {
    v27 = (__int64 *)(a2 + 8);
    v28 = v4;
    do
    {
      v29 = *v27;
      if ( *v27 )
      {
        v21 = *(_DWORD *)(v29 + 20);
        if ( ((unsigned __int8)v21 & (unsigned __int8)v3) == 0 )
          LOBYTE(v21) = StorPortExtendedFunction(1LL, a1, v29, v8);
      }
      ++v27;
      v3 = 0x80;
      --v28;
    }
    while ( v28 );
  }
  return v21;
}
