__int64 __fastcall BcpGetComponentOffsets(__int64 *a1, _DWORD *a2, int *a3, int a4, int a5, char a6)
{
  int *v6; // r13
  int v8; // edi
  __int64 v9; // r11
  int *v11; // r9
  int v12; // r10d
  __int64 v13; // r8
  __int64 v14; // rbx
  int v15; // ecx
  int v16; // r12d
  unsigned int v17; // esi
  unsigned int v18; // ebp
  int v19; // edx
  int v20; // ecx
  __int64 v22; // [rsp+20h] [rbp-48h]

  v6 = (int *)(a1 + 1);
  *a1 = BcpCursor;
  v8 = 0;
  v9 = a4;
  v11 = a3;
  v12 = 0;
  v13 = (unsigned int)dword_140C646C0;
  *((_DWORD *)a1 + 2) = dword_140C646C0;
  v14 = 9 * v9;
  *(_DWORD *)a1 = dword_140C0B590[18 * v9 + 4] + dword_140C0B590[18 * v9 + 8];
  v15 = v13 + dword_140C0B590[18 * v9 + 11];
  *((_DWORD *)a1 + 1) = v15;
  *v6 = dword_140C0B590[18 * v9 + 11] + v15;
  v16 = *((_DWORD *)a1 + 2);
  v22 = *a1;
  if ( a6 )
  {
    dword_140C0E3B0 |= 0x1000000u;
    v17 = 0;
    v18 = HIDWORD(v22);
    while ( 1 )
    {
      v12 = BcpDisplayProgress(v17, v9, v13);
      if ( v12 < 0 )
        break;
      if ( __PAIR64__(v18, v22) < BcpProgressEnd )
      {
        v16 = dword_140C0E308;
        LODWORD(v22) = BcpProgressEnd;
        v18 = HIDWORD(BcpProgressEnd);
      }
      BcpCursor = *a1;
      if ( v6 )
        dword_140C646C0 = *v6;
      LODWORD(v9) = a4;
      if ( ++v17 > 0x64 )
      {
        dword_140C0E3B0 &= ~0x1000000u;
        v11 = a3;
        goto LABEL_10;
      }
    }
  }
  else
  {
LABEL_10:
    v19 = dword_140C0B590[2 * v14 + 8] + dword_140C0B590[2 * v14 + 4];
    *v11 = v19;
    v11[1] = v16 + dword_140C0B590[2 * v14 + 13];
    if ( a5 )
      v8 = a5 + dword_140C0B590[2 * v14 + 14];
    *a2 = v19 + v8;
    v20 = v16 + dword_140C0B590[2 * v14 + 15];
    a2[1] = v20;
    a2[2] = dword_140C0B590[2 * v14 + 11] + v20;
  }
  return (unsigned int)v12;
}
