__int64 __fastcall HvSwapHiveStorage(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v4; // r10
  __int64 v6; // r9
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int128 v19; // xmm3
  __int128 v20; // xmm4
  __int128 v21; // xmm5
  __int64 v22; // xmm2_8
  __int64 v23; // rsi
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v4 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = 2LL;
  v8 = *(_QWORD *)(a1 + 40);
  v9 = *(_QWORD *)(a2 + 8);
  v10 = *(_QWORD *)(a2 + 16);
  v11 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)(a1 + 8) = v9;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  v12 = *(_QWORD *)(a2 + 64);
  *(_QWORD *)(a2 + 8) = v2;
  *(_QWORD *)(a2 + 16) = v10;
  *(_QWORD *)(a2 + 24) = v4;
  *(_QWORD *)(a2 + 32) = v6;
  *(_QWORD *)(a2 + 40) = v8;
  *(_QWORD *)(a2 + 48) = v11;
  v13 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)(a1 + 64) = v12;
  LODWORD(v12) = *(_DWORD *)(a2 + 108);
  *(_QWORD *)(a2 + 64) = v13;
  LODWORD(v13) = *(_DWORD *)(a1 + 108);
  *(_DWORD *)(a1 + 108) = v12;
  v14 = *(_QWORD *)(a2 + 96);
  *(_DWORD *)(a2 + 108) = v13;
  v15 = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(a1 + 96) = v14;
  LODWORD(v14) = *(_DWORD *)(a2 + 88);
  *(_QWORD *)(a2 + 96) = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 88) = v14;
  LODWORD(v14) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(a2 + 88) = v15;
  LODWORD(v15) = *(_DWORD *)(a1 + 104);
  *(_DWORD *)(a1 + 104) = v14;
  v16 = *(_QWORD *)(a2 + 120);
  *(_DWORD *)(a2 + 104) = v15;
  v17 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 120) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(a2 + 112) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 128);
  *(_DWORD *)(a1 + 128) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(a2 + 128) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 132);
  *(_DWORD *)(a1 + 132) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(a2 + 132) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 136);
  *(_DWORD *)(a1 + 136) = v16;
  *(_DWORD *)(a2 + 136) = v17;
  LOBYTE(v17) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v17 ^ (*(_BYTE *)(a2 + 140) ^ v17) & 1;
  LOBYTE(v17) = *(_BYTE *)(a2 + 140) ^ (*(_BYTE *)(a2 + 140) ^ v17) & 1;
  *(_BYTE *)(a2 + 140) = v17;
  LOBYTE(v16) = *(_BYTE *)(a1 + 140);
  *(_BYTE *)(a1 + 140) = v16 ^ (v16 ^ v17) & 2;
  v18 = a1 + 280;
  *(_BYTE *)(a2 + 140) ^= (*(_BYTE *)(a2 + 140) ^ v16) & 2;
  LOBYTE(v17) = *(_BYTE *)(a1 + 141);
  *(_BYTE *)(a1 + 141) = *(_BYTE *)(a2 + 141);
  LODWORD(v16) = *(_DWORD *)(a2 + 144);
  *(_BYTE *)(a2 + 141) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 144);
  *(_DWORD *)(a1 + 144) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(a2 + 144) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 148);
  *(_DWORD *)(a1 + 148) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 152);
  *(_DWORD *)(a2 + 148) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 152);
  *(_DWORD *)(a1 + 152) = v16;
  LODWORD(v16) = *(_DWORD *)(a2 + 156);
  *(_DWORD *)(a2 + 152) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 156);
  *(_DWORD *)(a1 + 156) = v16;
  *(_DWORD *)(a2 + 156) = v17;
  LODWORD(v17) = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(a1 + 160) = v17 & 0xFFE07FEC;
  LODWORD(v11) = *(_DWORD *)(a2 + 160);
  *(_DWORD *)(a2 + 160) = v11 ^ (v17 ^ v11) & 0x1F8013;
  *(_DWORD *)(a1 + 160) |= v11 & 0x1F8013;
  v19 = *(_OWORD *)(a1 + 224);
  v20 = *(_OWORD *)(a1 + 240);
  v21 = *(_OWORD *)(a1 + 256);
  v22 = *(_QWORD *)(a1 + 272);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 256);
  *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
  *(_OWORD *)(a2 + 224) = v19;
  *(_OWORD *)(a2 + 240) = v20;
  *(_OWORD *)(a2 + 256) = v21;
  *(_QWORD *)(a2 + 272) = v22;
  v23 = a2 - a1;
  do
  {
    result = HvpSwapDual(v18, v23 + v18);
    v18 += 632LL;
    --v7;
  }
  while ( v7 );
  return result;
}
