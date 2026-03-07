void __fastcall RtlpCopyLegacyContextAmd64(char a1, __int64 a2, int a3, __int64 a4)
{
  _OWORD *v4; // rcx
  __int64 v5; // r10
  _OWORD *v6; // rax
  __int128 v7; // xmm1

  *(_DWORD *)(a2 + 48) = a3 & 0x67FFFFFF;
  if ( a1 )
  {
    if ( (a3 & 0x40000000) != 0 )
      *(_DWORD *)(a2 + 48) = a3 & 0x67FFFFFF | *(_DWORD *)(a4 + 48) & 0x98000000;
    if ( (a3 & 0x100001) == 0x100001 )
    {
      *(_QWORD *)(a2 + 248) = *(_QWORD *)(a4 + 248);
      *(_WORD *)(a2 + 56) = *(_WORD *)(a4 + 56);
      *(_WORD *)(a2 + 66) = *(_WORD *)(a4 + 66);
      *(_QWORD *)(a2 + 152) = *(_QWORD *)(a4 + 152);
      *(_DWORD *)(a2 + 68) = *(_DWORD *)(a4 + 68);
    }
    if ( (a3 & 0x100002) == 0x100002 )
    {
      *(_OWORD *)(a2 + 120) = *(_OWORD *)(a4 + 120);
      *(_OWORD *)(a2 + 136) = *(_OWORD *)(a4 + 136);
      *(_OWORD *)(a2 + 160) = *(_OWORD *)(a4 + 160);
      *(_OWORD *)(a2 + 176) = *(_OWORD *)(a4 + 176);
      *(_OWORD *)(a2 + 192) = *(_OWORD *)(a4 + 192);
      *(_OWORD *)(a2 + 208) = *(_OWORD *)(a4 + 208);
      *(_OWORD *)(a2 + 224) = *(_OWORD *)(a4 + 224);
      *(_QWORD *)(a2 + 240) = *(_QWORD *)(a4 + 240);
    }
    if ( (a3 & 0x100004) == 0x100004 )
    {
      *(_WORD *)(a2 + 64) = *(_WORD *)(a4 + 64);
      *(_WORD *)(a2 + 62) = *(_WORD *)(a4 + 62);
      *(_WORD *)(a2 + 60) = *(_WORD *)(a4 + 60);
      *(_WORD *)(a2 + 58) = *(_WORD *)(a4 + 58);
    }
    if ( (a3 & 0x100008) == 0x100008 )
    {
      v4 = (_OWORD *)(a4 + 256);
      v5 = 3LL;
      *(_DWORD *)(a2 + 52) = *(_DWORD *)(a4 + 52);
      v6 = (_OWORD *)(a2 + 256);
      do
      {
        *v6 = *v4;
        v6[1] = v4[1];
        v6[2] = v4[2];
        v6[3] = v4[3];
        v6[4] = v4[4];
        v6[5] = v4[5];
        v6[6] = v4[6];
        v6 += 8;
        v7 = v4[7];
        v4 += 8;
        *(v6 - 1) = v7;
        --v5;
      }
      while ( v5 );
      *v6 = *v4;
      v6[1] = v4[1];
    }
    if ( (a3 & 0x100010) == 0x100010 )
    {
      *(_OWORD *)(a2 + 72) = *(_OWORD *)(a4 + 72);
      *(_OWORD *)(a2 + 88) = *(_OWORD *)(a4 + 88);
      *(_OWORD *)(a2 + 104) = *(_OWORD *)(a4 + 104);
      *(_OWORD *)(a2 + 1200) = *(_OWORD *)(a4 + 1200);
      *(_OWORD *)(a2 + 1216) = *(_OWORD *)(a4 + 1216);
    }
  }
}
