EBOX *__fastcall EBOX::EBOX(EBOX *this, struct ERECTL *a2)
{
  __int128 *v2; // rcx
  __int128 v3; // xmm0
  __int64 v4; // r10
  int v5; // r8d
  int v6; // edx
  __int64 v7; // r9
  int v8; // eax
  int v9; // eax
  int v10; // r8d
  EBOX *result; // rax

  ERECTL::vOrder(a2);
  v3 = *v2;
  *(_QWORD *)v4 = 0LL;
  *(_OWORD *)(v4 + 64) = v3;
  v5 = 16 * *((_DWORD *)v2 + 2) - 16;
  *(_DWORD *)(v4 + 8) = v5;
  v5 -= 12;
  v6 = 16 * *((_DWORD *)v2 + 1);
  *(_DWORD *)(v4 + 12) = v6;
  v6 -= 4;
  LODWORD(v2) = 16 * *(_DWORD *)v2;
  *(_DWORD *)(v4 + 24) = (_DWORD)v2;
  LODWORD(v2) = (_DWORD)v2 - 4;
  v8 = *(_DWORD *)(v7 + 12);
  *(_DWORD *)(v4 + 8) = v5;
  *(_DWORD *)(v4 + 12) = v6;
  *(_DWORD *)(v4 + 20) = v6;
  *(_DWORD *)(v4 + 32) = v5;
  *(_DWORD *)(v4 + 24) = (_DWORD)v2;
  *(_QWORD *)(v4 + 52) = 0LL;
  *(_DWORD *)(v4 + 16) = (_DWORD)v2;
  v9 = 16 * v8 - 28;
  v10 = (v5 - (int)v2 + 1) >> 1;
  *(_DWORD *)(v4 + 28) = v9;
  *(_DWORD *)(v4 + 36) = v9;
  *(_DWORD *)(v4 + 48) = v10;
  *(_DWORD *)(v4 + 60) = (v6 - v9 + 1) >> 1;
  *(_QWORD *)(v4 + 40) = *(_QWORD *)(v4 + 24);
  LODWORD(v2) = *(_DWORD *)(v4 + 44);
  *(_DWORD *)(v4 + 44) = (_DWORD)v2;
  *(_DWORD *)(v4 + 40) += v10 + *(_DWORD *)(v4 + 56);
  result = (EBOX *)v4;
  *(_DWORD *)(v4 + 44) = *(_DWORD *)(v4 + 60) + (_DWORD)v2;
  return result;
}
