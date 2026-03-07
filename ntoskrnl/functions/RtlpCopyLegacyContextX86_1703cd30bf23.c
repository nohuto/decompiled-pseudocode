void __fastcall RtlpCopyLegacyContextX86(char a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rax
  _OWORD *v5; // rdx
  _OWORD *v6; // r9
  __int128 v7; // xmm1

  *(_DWORD *)a2 = a3 & 0x67FFFFFF;
  if ( a1 )
  {
    if ( (a3 & 0x40000000) != 0 )
      *(_DWORD *)a2 = a3 & 0x67FFFFFF | *(_DWORD *)a4 & 0x98000000;
    if ( (a3 & 0x10001) == 0x10001 )
    {
      *(_DWORD *)(a2 + 180) = *(_DWORD *)(a4 + 180);
      *(_DWORD *)(a2 + 184) = *(_DWORD *)(a4 + 184);
      *(_DWORD *)(a2 + 188) = *(_DWORD *)(a4 + 188);
      *(_DWORD *)(a2 + 192) = *(_DWORD *)(a4 + 192);
      *(_DWORD *)(a2 + 196) = *(_DWORD *)(a4 + 196);
      *(_DWORD *)(a2 + 200) = *(_DWORD *)(a4 + 200);
    }
    if ( (a3 & 0x10002) == 0x10002 )
    {
      *(_DWORD *)(a2 + 156) = *(_DWORD *)(a4 + 156);
      *(_DWORD *)(a2 + 160) = *(_DWORD *)(a4 + 160);
      *(_DWORD *)(a2 + 164) = *(_DWORD *)(a4 + 164);
      *(_DWORD *)(a2 + 172) = *(_DWORD *)(a4 + 172);
      *(_DWORD *)(a2 + 168) = *(_DWORD *)(a4 + 168);
      *(_DWORD *)(a2 + 176) = *(_DWORD *)(a4 + 176);
    }
    if ( (a3 & 0x10004) == 0x10004 )
    {
      *(_DWORD *)(a2 + 140) = *(_DWORD *)(a4 + 140);
      *(_DWORD *)(a2 + 144) = *(_DWORD *)(a4 + 144);
      *(_DWORD *)(a2 + 148) = *(_DWORD *)(a4 + 148);
      *(_DWORD *)(a2 + 152) = *(_DWORD *)(a4 + 152);
    }
    if ( (a3 & 0x10008) == 0x10008 )
    {
      *(_OWORD *)(a2 + 28) = *(_OWORD *)(a4 + 28);
      *(_OWORD *)(a2 + 44) = *(_OWORD *)(a4 + 44);
      *(_OWORD *)(a2 + 60) = *(_OWORD *)(a4 + 60);
      *(_OWORD *)(a2 + 76) = *(_OWORD *)(a4 + 76);
      *(_OWORD *)(a2 + 92) = *(_OWORD *)(a4 + 92);
      *(_OWORD *)(a2 + 108) = *(_OWORD *)(a4 + 108);
      *(_OWORD *)(a2 + 124) = *(_OWORD *)(a4 + 124);
    }
    if ( (a3 & 0x10010) == 0x10010 )
    {
      *(_DWORD *)(a2 + 4) = *(_DWORD *)(a4 + 4);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a4 + 8);
      *(_DWORD *)(a2 + 12) = *(_DWORD *)(a4 + 12);
      *(_DWORD *)(a2 + 16) = *(_DWORD *)(a4 + 16);
      *(_DWORD *)(a2 + 20) = *(_DWORD *)(a4 + 20);
      *(_DWORD *)(a2 + 24) = *(_DWORD *)(a4 + 24);
    }
    if ( (a3 & 0x10020) == 0x10020 )
    {
      v4 = 2LL;
      v5 = (_OWORD *)(a2 + 204);
      v6 = (_OWORD *)(a4 + 204);
      do
      {
        *v5 = *v6;
        v5[1] = v6[1];
        v5[2] = v6[2];
        v5[3] = v6[3];
        v5[4] = v6[4];
        v5[5] = v6[5];
        v5[6] = v6[6];
        v5 += 8;
        v7 = v6[7];
        v6 += 8;
        *(v5 - 1) = v7;
        --v4;
      }
      while ( v4 );
      *v5 = *v6;
      v5[1] = v6[1];
    }
  }
}
