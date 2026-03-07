__int64 __fastcall IcCopyData(int a1)
{
  __int64 i; // rdx
  unsigned int v3; // r10d
  unsigned int v4; // r9d
  __int64 v5; // r8
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0

  for ( i = IcListHead; &IcListHead != (__int64 *)i; i = *(_QWORD *)i )
  {
    if ( *(int *)(i + 28) >= 0 )
    {
      v3 = 0;
      v4 = *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) + 1;
      if ( *(_DWORD *)(i + 20) - *(_DWORD *)(i + 16) != -1 )
      {
        if ( a1 == 1 )
        {
          v5 = i + 32;
          do
          {
            v6 = *(_OWORD *)(v5 + 16);
            v7 = *(_OWORD *)(v5 + 32);
            *(_DWORD *)(v5 + 4) = *(_DWORD *)v5;
            *(_DWORD *)(v5 + 12) = *(_DWORD *)(v5 + 8);
            *(_BYTE *)(v5 + 193) = *(_BYTE *)(v5 + 192);
            *(_OWORD *)(v5 + 104) = v6;
            v8 = *(_OWORD *)(v5 + 48);
            *(_OWORD *)(v5 + 120) = v7;
            v9 = *(_OWORD *)(v5 + 64);
            *(_OWORD *)(v5 + 136) = v8;
            v10 = *(_OWORD *)(v5 + 80);
            *(_OWORD *)(v5 + 152) = v9;
            *(_QWORD *)&v9 = *(_QWORD *)(v5 + 96);
            *(_OWORD *)(v5 + 168) = v10;
            *(_QWORD *)(v5 + 184) = v9;
            *(_DWORD *)(v5 + 104) = 0;
            v5 += 200LL;
            v11 = v3 + *(_DWORD *)(i + 16);
            ++v3;
            *(_DWORD *)(v5 - 40) = v11;
          }
          while ( v3 < v4 );
        }
        else
        {
          v12 = i + 48;
          v13 = v4;
          do
          {
            *(_DWORD *)(v12 - 16) = *(_DWORD *)(v12 - 12);
            *(_DWORD *)(v12 - 8) = *(_DWORD *)(v12 - 4);
            *(_BYTE *)(v12 + 176) = *(_BYTE *)(v12 + 177);
            v14 = *(_OWORD *)(v12 + 104);
            *(_OWORD *)v12 = *(_OWORD *)(v12 + 88);
            v15 = *(_OWORD *)(v12 + 120);
            *(_OWORD *)(v12 + 16) = v14;
            v16 = *(_OWORD *)(v12 + 136);
            *(_OWORD *)(v12 + 32) = v15;
            v17 = *(_OWORD *)(v12 + 152);
            *(_OWORD *)(v12 + 48) = v16;
            *(_QWORD *)&v16 = *(_QWORD *)(v12 + 168);
            *(_OWORD *)(v12 + 64) = v17;
            *(_QWORD *)(v12 + 80) = v16;
            v12 += 200LL;
            --v13;
          }
          while ( v13 );
        }
      }
    }
  }
  return 0LL;
}
