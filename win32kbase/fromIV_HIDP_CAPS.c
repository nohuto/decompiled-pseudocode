__int64 __fastcall fromIV_HIDP_CAPS(__int64 a1, __int64 a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __int16 v4; // ax

  v2 = *(_OWORD *)(a2 + 20);
  *(_WORD *)a1 = *(_WORD *)a2;
  v3 = *(_OWORD *)(a2 + 36);
  *(_WORD *)(a1 + 2) = *(_WORD *)(a2 + 4);
  *(_WORD *)(a1 + 4) = *(_WORD *)(a2 + 8);
  *(_WORD *)(a1 + 6) = *(_WORD *)(a2 + 12);
  *(_WORD *)(a1 + 8) = *(_WORD *)(a2 + 16);
  v4 = *(_WORD *)(a2 + 52);
  *(_OWORD *)(a1 + 10) = v2;
  *(_OWORD *)(a1 + 26) = v3;
  *(_WORD *)(a1 + 42) = v4;
  *(_WORD *)(a1 + 44) = *(_WORD *)(a2 + 56);
  *(_WORD *)(a1 + 46) = *(_WORD *)(a2 + 60);
  *(_WORD *)(a1 + 48) = *(_WORD *)(a2 + 64);
  *(_WORD *)(a1 + 50) = *(_WORD *)(a2 + 68);
  *(_WORD *)(a1 + 52) = *(_WORD *)(a2 + 72);
  *(_WORD *)(a1 + 54) = *(_WORD *)(a2 + 76);
  *(_WORD *)(a1 + 56) = *(_WORD *)(a2 + 80);
  *(_WORD *)(a1 + 58) = *(_WORD *)(a2 + 84);
  *(_WORD *)(a1 + 60) = *(_WORD *)(a2 + 88);
  *(_WORD *)(a1 + 62) = *(_WORD *)(a2 + 92);
  return a1;
}
