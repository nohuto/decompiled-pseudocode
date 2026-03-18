/*
 * XREFs of NVMeReenumerateNameSpaceMerge @ 0x1C0022134
 * Callers:
 *     NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0021D10 (NVMeReenumerateNameSpaceIdentifyWorkItem.c)
 * Callees:
 *     memset @ 0x1C0004B80 (memset.c)
 *     NVMeIsLunActive @ 0x1C00169CC (NVMeIsLunActive.c)
 */

char __fastcall NVMeReenumerateNameSpaceMerge(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // r11
  __int64 v4; // r12
  __int64 v7; // rsi
  unsigned int v8; // edi
  __int64 v9; // r15
  __int64 v10; // r8
  _OWORD *v11; // rcx
  _DWORD *v12; // rdx
  _OWORD *v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  int v16; // eax
  _OWORD *v17; // rax
  __int64 v18; // rdx
  __int128 v19; // xmm1
  int v20; // eax
  int v21; // r8d
  __int64 *v22; // r9
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
  do
  {
    v8 = *(_DWORD *)(a2 + 4 * v7 + 2048);
    if ( !v8 )
      break;
    if ( v8 <= (unsigned int)v4 )
    {
      v9 = v8 - 1;
      v10 = *(_QWORD *)(a2 + 8 * v9 + 8);
      v11 = *(_OWORD **)(a1 + 8 * v9 + 1952);
      v12 = (_DWORD *)(v10 + 20);
      if ( v10 && (*v12 & 8) != 0 )
      {
        *v12 |= 0x80u;
        *v12 &= ~8u;
        *(_BYTE *)(v10 + 10) = v8 - 1;
        if ( v11 )
        {
          v13 = (_OWORD *)v10;
          v14 = 3LL;
          do
          {
            *v11 = *v13;
            v11[1] = v13[1];
            v11[2] = v13[2];
            v11[3] = v13[3];
            v11[4] = v13[4];
            v11[5] = v13[5];
            v11[6] = v13[6];
            v11 += 8;
            v15 = v13[7];
            v13 += 8;
            *(v11 - 1) = v15;
            --v14;
          }
          while ( v14 );
          *v11 = *v13;
          v11[1] = v13[1];
          *((_QWORD *)v11 + 4) = *((_QWORD *)v13 + 4);
          StorPortExtendedFunction(1LL, a1, v10);
          *(_QWORD *)(a2 + 8 * v9 + 8) = 0LL;
        }
        else
        {
          *(_QWORD *)(a1 + 8 * v9 + 1952) = v10;
        }
        if ( (unsigned int)v9 >= *(_DWORD *)(a1 + 232) )
        {
          v16 = (unsigned __int16)v8;
          if ( (unsigned __int16)v8 >= 0xFFu )
            v16 = 255;
          *(_DWORD *)(a1 + 232) = v16;
        }
      }
      else if ( v11 && (*((_DWORD *)v11 + 5) & 0x20) != 0 )
      {
        memset(v11, 0, 0x1A8uLL);
      }
      else if ( v10 && (*v12 & 0x10) != 0 )
      {
        *v12 &= ~0x10u;
        v17 = (_OWORD *)v10;
        v18 = 3LL;
        *(_BYTE *)(v10 + 10) = v8 - 1;
        do
        {
          *v11 = *v17;
          v11[1] = v17[1];
          v11[2] = v17[2];
          v11[3] = v17[3];
          v11[4] = v17[4];
          v11[5] = v17[5];
          v11[6] = v17[6];
          v11 += 8;
          v19 = v17[7];
          v17 += 8;
          *(v11 - 1) = v19;
          --v18;
        }
        while ( v18 );
        *v11 = *v17;
        v11[1] = v17[1];
        *((_QWORD *)v11 + 4) = *((_QWORD *)v17 + 4);
        StorPortExtendedFunction(1LL, a1, v10);
        *(_QWORD *)(a2 + 8 * v9 + 8) = 0LL;
      }
    }
    v3 = 0x80;
    v7 = (unsigned int)(v7 + 1);
  }
  while ( (unsigned int)v7 < 0x400 );
  v20 = *(_DWORD *)(a1 + 232);
  v21 = 0;
  if ( v20 )
  {
    v22 = (__int64 *)(a1 + 1952);
    do
    {
      LOBYTE(v20) = NVMeIsLunActive(*v22);
      v25 = v23 + 1;
      v22 = (__int64 *)(v26 + 8);
      if ( !(_BYTE)v20 )
        v25 = v23;
      v21 = v25;
    }
    while ( v24 != 1 );
  }
  *(_DWORD *)(a1 + 220) = v21;
  if ( (_DWORD)v4 )
  {
    v27 = (__int64 *)(a2 + 8);
    v28 = v4;
    do
    {
      v29 = *v27;
      if ( *v27 )
      {
        v20 = *(_DWORD *)(v29 + 20);
        if ( ((unsigned __int8)v20 & (unsigned __int8)v3) == 0 )
          LOBYTE(v20) = StorPortExtendedFunction(1LL, a1, v29);
      }
      ++v27;
      v3 = 0x80;
      --v28;
    }
    while ( v28 );
  }
  return v20;
}
