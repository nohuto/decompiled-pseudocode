__int64 __fastcall CBspPreComputeHelper::operator=(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r8
  _DWORD *v3; // r8
  _DWORD *v4; // r8
  _DWORD *v5; // r8
  _DWORD *v6; // r8
  _DWORD *v7; // r8
  _DWORD *v8; // r8
  _DWORD *v9; // r8
  _DWORD *v10; // r8
  _DWORD *v11; // r8

  if ( a1 != a2 )
  {
    *(_DWORD *)a1 = *(_DWORD *)a2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a2 + 4);
    *(_DWORD *)(a1 + 8) = *(_DWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 24);
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 24) = 0;
  }
  v2 = (_DWORD *)(a2 + 32);
  if ( a1 + 32 != a2 + 32 )
  {
    *(_DWORD *)(a1 + 32) = *v2;
    *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
    *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
    *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a2 + 56);
    *(_QWORD *)v2 = 0LL;
    *(_QWORD *)(a2 + 48) = 0LL;
    *(_DWORD *)(a2 + 40) = 0;
    *(_DWORD *)(a2 + 56) = 0;
  }
  v3 = (_DWORD *)(a2 + 64);
  if ( a1 + 64 != a2 + 64 )
  {
    *(_DWORD *)(a1 + 64) = *v3;
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(a2 + 68);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)(a2 + 80);
    *(_DWORD *)(a1 + 88) = *(_DWORD *)(a2 + 88);
    *(_QWORD *)v3 = 0LL;
    *(_QWORD *)(a2 + 80) = 0LL;
    *(_DWORD *)(a2 + 72) = 0;
    *(_DWORD *)(a2 + 88) = 0;
  }
  v4 = (_DWORD *)(a2 + 96);
  if ( a1 + 96 != a2 + 96 )
  {
    *(_DWORD *)(a1 + 96) = *v4;
    *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 100);
    *(_DWORD *)(a1 + 104) = *(_DWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 112) = *(_QWORD *)(a2 + 112);
    *(_DWORD *)(a1 + 120) = *(_DWORD *)(a2 + 120);
    *(_QWORD *)v4 = 0LL;
    *(_QWORD *)(a2 + 112) = 0LL;
    *(_DWORD *)(a2 + 104) = 0;
    *(_DWORD *)(a2 + 120) = 0;
  }
  v5 = (_DWORD *)(a2 + 128);
  if ( a1 + 128 != a2 + 128 )
  {
    *(_DWORD *)(a1 + 128) = *v5;
    *(_DWORD *)(a1 + 132) = *(_DWORD *)(a2 + 132);
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(a2 + 136);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(a2 + 144);
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(a2 + 152);
    *(_QWORD *)v5 = 0LL;
    *(_QWORD *)(a2 + 144) = 0LL;
    *(_DWORD *)(a2 + 136) = 0;
    *(_DWORD *)(a2 + 152) = 0;
  }
  v6 = (_DWORD *)(a2 + 160);
  if ( a1 + 160 != a2 + 160 )
  {
    *(_DWORD *)(a1 + 160) = *v6;
    *(_DWORD *)(a1 + 164) = *(_DWORD *)(a2 + 164);
    *(_DWORD *)(a1 + 168) = *(_DWORD *)(a2 + 168);
    *(_QWORD *)(a1 + 176) = *(_QWORD *)(a2 + 176);
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(a2 + 184);
    *(_QWORD *)v6 = 0LL;
    *(_QWORD *)(a2 + 176) = 0LL;
    *(_DWORD *)(a2 + 168) = 0;
    *(_DWORD *)(a2 + 184) = 0;
  }
  v7 = (_DWORD *)(a2 + 192);
  if ( a1 + 192 != a2 + 192 )
  {
    *(_DWORD *)(a1 + 192) = *v7;
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 + 196);
    *(_DWORD *)(a1 + 200) = *(_DWORD *)(a2 + 200);
    *(_QWORD *)(a1 + 208) = *(_QWORD *)(a2 + 208);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a2 + 216);
    *(_QWORD *)v7 = 0LL;
    *(_QWORD *)(a2 + 208) = 0LL;
    *(_DWORD *)(a2 + 200) = 0;
    *(_DWORD *)(a2 + 216) = 0;
  }
  v8 = (_DWORD *)(a2 + 224);
  if ( a1 + 224 != a2 + 224 )
  {
    *(_DWORD *)(a1 + 224) = *v8;
    *(_DWORD *)(a1 + 228) = *(_DWORD *)(a2 + 228);
    *(_DWORD *)(a1 + 232) = *(_DWORD *)(a2 + 232);
    *(_QWORD *)(a1 + 240) = *(_QWORD *)(a2 + 240);
    *(_DWORD *)(a1 + 248) = *(_DWORD *)(a2 + 248);
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(a2 + 240) = 0LL;
    *(_DWORD *)(a2 + 232) = 0;
    *(_DWORD *)(a2 + 248) = 0;
  }
  v9 = (_DWORD *)(a2 + 256);
  if ( a1 + 256 != a2 + 256 )
  {
    *(_DWORD *)(a1 + 256) = *v9;
    *(_DWORD *)(a1 + 260) = *(_DWORD *)(a2 + 260);
    *(_DWORD *)(a1 + 264) = *(_DWORD *)(a2 + 264);
    *(_QWORD *)(a1 + 272) = *(_QWORD *)(a2 + 272);
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(a2 + 280);
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(a2 + 272) = 0LL;
    *(_DWORD *)(a2 + 264) = 0;
    *(_DWORD *)(a2 + 280) = 0;
  }
  v10 = (_DWORD *)(a2 + 288);
  if ( a1 + 288 != a2 + 288 )
  {
    *(_DWORD *)(a1 + 288) = *v10;
    *(_DWORD *)(a1 + 292) = *(_DWORD *)(a2 + 292);
    *(_DWORD *)(a1 + 296) = *(_DWORD *)(a2 + 296);
    *(_QWORD *)(a1 + 304) = *(_QWORD *)(a2 + 304);
    *(_DWORD *)(a1 + 312) = *(_DWORD *)(a2 + 312);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(a2 + 304) = 0LL;
    *(_DWORD *)(a2 + 296) = 0;
    *(_DWORD *)(a2 + 312) = 0;
  }
  v11 = (_DWORD *)(a2 + 320);
  if ( a1 + 320 != a2 + 320 )
  {
    *(_DWORD *)(a1 + 320) = *v11;
    *(_DWORD *)(a1 + 324) = *(_DWORD *)(a2 + 324);
    *(_DWORD *)(a1 + 328) = *(_DWORD *)(a2 + 328);
    *(_QWORD *)(a1 + 336) = *(_QWORD *)(a2 + 336);
    *(_DWORD *)(a1 + 344) = *(_DWORD *)(a2 + 344);
    *(_QWORD *)v11 = 0LL;
    *(_QWORD *)(a2 + 336) = 0LL;
    *(_DWORD *)(a2 + 328) = 0;
    *(_DWORD *)(a2 + 344) = 0;
  }
  *(_DWORD *)(a1 + 352) = *(_DWORD *)(a2 + 352);
  return a1;
}
