__int64 __fastcall CPointerInfoNode::operator=(__int64 a1, __int64 a2)
{
  int v4; // r8d
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  int v25; // ecx
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // ecx
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  int v40; // ecx
  int v41; // eax
  int v42; // ecx
  int v43; // eax
  int v44; // ecx
  int v45; // eax
  int v46; // ecx
  int v47; // edx

  *(_DWORD *)a1 ^= (*(_DWORD *)a1 ^ *(_DWORD *)a2) & 1;
  v4 = *(_DWORD *)a1 ^ (*(_DWORD *)a2 ^ *(_DWORD *)a1) & 2;
  *(_DWORD *)a1 = v4;
  v5 = v4 ^ (*(_DWORD *)a2 ^ v4) & 4;
  *(_DWORD *)a1 = v5;
  v6 = v5 ^ (*(_DWORD *)a2 ^ v5) & 8;
  *(_DWORD *)a1 = v6;
  v7 = v6 ^ (*(_DWORD *)a2 ^ v6) & 0x10;
  *(_DWORD *)a1 = v7;
  v8 = v7 ^ (*(_DWORD *)a2 ^ v7) & 0x20;
  *(_DWORD *)a1 = v8;
  v9 = v8 ^ (*(_DWORD *)a2 ^ v8) & 0x40;
  *(_DWORD *)a1 = v9;
  v10 = v9 ^ (*(_DWORD *)a2 ^ v9) & 0x80;
  *(_DWORD *)a1 = v10;
  v11 = v10 ^ (*(_DWORD *)a2 ^ v10) & 0x100;
  *(_DWORD *)a1 = v11;
  v12 = v11 ^ (*(_DWORD *)a2 ^ v11) & 0x200;
  *(_DWORD *)a1 = v12;
  v13 = v12 ^ (*(_DWORD *)a2 ^ v12) & 0x400;
  *(_DWORD *)a1 = v13;
  v14 = v13 ^ (*(_DWORD *)a2 ^ v13) & 0x800;
  *(_DWORD *)a1 = v14;
  v15 = v14 ^ (*(_DWORD *)a2 ^ v14) & 0x1000;
  *(_DWORD *)a1 = v15;
  v16 = v15 ^ (*(_DWORD *)a2 ^ v15) & 0x2000;
  *(_DWORD *)a1 = v16;
  v17 = v16 ^ (*(_DWORD *)a2 ^ v16) & 0x4000;
  *(_DWORD *)a1 = v17;
  v18 = v17 ^ (*(_DWORD *)a2 ^ v17) & 0x8000;
  *(_DWORD *)a1 = v18;
  v19 = v18 ^ (*(_DWORD *)a2 ^ v18) & 0x10000;
  *(_DWORD *)a1 = v19;
  v20 = v19 ^ (*(_DWORD *)a2 ^ v19) & 0x20000;
  *(_DWORD *)a1 = v20;
  v21 = v20 ^ (*(_DWORD *)a2 ^ v20) & 0x40000;
  *(_DWORD *)a1 = v21;
  v22 = v21 ^ (*(_DWORD *)a2 ^ v21) & 0x80000;
  *(_DWORD *)a1 = v22;
  v23 = v22 ^ (*(_DWORD *)a2 ^ v22) & 0x100000;
  *(_DWORD *)a1 = v23;
  v24 = v23 ^ (*(_DWORD *)a2 ^ v23) & 0x200000;
  *(_DWORD *)a1 = v24;
  v25 = v24 ^ (*(_DWORD *)a2 ^ v24) & 0x400000;
  *(_DWORD *)a1 = v25;
  v26 = v25 ^ (*(_DWORD *)a2 ^ v25) & 0x800000;
  *(_DWORD *)a1 = v26;
  v27 = v26 ^ (*(_DWORD *)a2 ^ v26) & 0x1000000;
  *(_DWORD *)a1 = v27;
  v28 = v27 ^ (*(_DWORD *)a2 ^ v27) & 0x2000000;
  *(_DWORD *)a1 = v28;
  v29 = v28 ^ (*(_DWORD *)a2 ^ v28) & 0x4000000;
  *(_DWORD *)a1 = v29;
  v30 = v29 ^ (*(_DWORD *)a2 ^ v29) & 0x8000000;
  *(_DWORD *)a1 = v30;
  v31 = v30 ^ (*(_DWORD *)a2 ^ v30) & 0x10000000;
  *(_DWORD *)a1 = v31;
  v32 = v31 ^ (*(_DWORD *)a2 ^ v31) & 0x20000000;
  *(_DWORD *)a1 = v32;
  v33 = v32 ^ (*(_DWORD *)a2 ^ v32) & 0x40000000;
  *(_DWORD *)a1 = v33;
  *(_DWORD *)a1 = *(_DWORD *)a2 ^ (*(_DWORD *)a2 ^ v33) & 0x7FFFFFFF;
  v34 = *(_DWORD *)(a1 + 4) ^ (*(_DWORD *)(a2 + 4) ^ *(_DWORD *)(a1 + 4)) & 1;
  *(_DWORD *)(a1 + 4) = v34;
  v35 = v34 ^ (*(_DWORD *)(a2 + 4) ^ v34) & 2;
  *(_DWORD *)(a1 + 4) = v35;
  v36 = v35 ^ (*(_DWORD *)(a2 + 4) ^ v35) & 4;
  *(_DWORD *)(a1 + 4) = v36;
  v37 = v36 ^ (*(_DWORD *)(a2 + 4) ^ v36) & 8;
  *(_DWORD *)(a1 + 4) = v37;
  v38 = v37 ^ (*(_DWORD *)(a2 + 4) ^ v37) & 0x10;
  *(_DWORD *)(a1 + 4) = v38;
  v39 = v38 ^ (*(_DWORD *)(a2 + 4) ^ v38) & 0x20;
  *(_DWORD *)(a1 + 4) = v39;
  v40 = v39 ^ (*(_DWORD *)(a2 + 4) ^ v39) & 0x40;
  *(_DWORD *)(a1 + 4) = v40;
  v41 = v40 ^ (*(_DWORD *)(a2 + 4) ^ v40) & 0x80;
  *(_DWORD *)(a1 + 4) = v41;
  v42 = v41 ^ (*(_DWORD *)(a2 + 4) ^ v41) & 0x100;
  *(_DWORD *)(a1 + 4) = v42;
  v43 = v42 ^ (*(_DWORD *)(a2 + 4) ^ v42) & 0x200;
  *(_DWORD *)(a1 + 4) = v43;
  v44 = v43 ^ (*(_DWORD *)(a2 + 4) ^ v43) & 0x400;
  *(_DWORD *)(a1 + 4) = v44;
  v45 = v44 ^ (*(_DWORD *)(a2 + 4) ^ v44) & 0x800;
  *(_DWORD *)(a1 + 4) = v45;
  v46 = v45 ^ (*(_DWORD *)(a2 + 4) ^ v45) & 0x1000;
  *(_DWORD *)(a1 + 4) = v46;
  v47 = v46 ^ (*(_DWORD *)(a2 + 4) ^ v46) & 0x2000;
  *(_DWORD *)(a1 + 4) = v47;
  *(_DWORD *)(a1 + 4) = v47 ^ (*(_DWORD *)(a2 + 4) ^ v47) & 0x4000;
  *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
  CInputDest::operator=(a1 + 24, a2 + 24);
  *(_DWORD *)(a1 + 144) = *(_DWORD *)(a2 + 144);
  *(_QWORD *)(a1 + 148) = *(_QWORD *)(a2 + 148);
  *(_DWORD *)(a1 + 156) = *(_DWORD *)(a2 + 156);
  *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
  *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
  *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  *(_OWORD *)(a1 + 208) = *(_OWORD *)(a2 + 208);
  *(_OWORD *)(a1 + 224) = *(_OWORD *)(a2 + 224);
  *(_OWORD *)(a1 + 240) = *(_OWORD *)(a2 + 240);
  *(_OWORD *)(a1 + 256) = *(_OWORD *)(a2 + 256);
  *(_OWORD *)(a1 + 272) = *(_OWORD *)(a2 + 272);
  *(_OWORD *)(a1 + 288) = *(_OWORD *)(a2 + 288);
  *(_OWORD *)(a1 + 304) = *(_OWORD *)(a2 + 304);
  *(_OWORD *)(a1 + 320) = *(_OWORD *)(a2 + 320);
  *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
  *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 344);
  *(_DWORD *)(a1 + 348) = *(_DWORD *)(a2 + 348);
  CInputDest::operator=(a1 + 352, a2 + 352);
  *(_DWORD *)(a1 + 472) = *(_DWORD *)(a2 + 472);
  *(_DWORD *)(a1 + 476) = *(_DWORD *)(a2 + 476);
  return a1;
}
