char __fastcall CcAdjustVacbLevelLockCount(__int64 a1, __int64 a2, int a3)
{
  __int64 v4; // rsi
  int v5; // r9d
  int v6; // ecx
  __int64 v7; // rbx
  int v8; // r10d
  char v9; // cl
  __int64 v10; // rax
  __int64 v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdx
  int v14; // r8d
  __int64 v15; // r11
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rcx

  v4 = a2;
  v5 = 0;
  v6 = 25;
  v7 = *(_QWORD *)(a1 + 88);
  do
  {
    v8 = v6;
    v6 += 7;
    ++v5;
  }
  while ( *(_QWORD *)(a1 + 32) > 1LL << v6 );
  do
  {
    v9 = v8;
    v10 = a2 >> v8;
    v8 -= 7;
    v7 = *(_QWORD *)(v7 + 8LL * (unsigned int)v10);
    a2 &= (1LL << v9) - 1;
    --v5;
  }
  while ( v5 );
  v11 = 1024LL;
  if ( (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
    v11 = 2048LL;
  *(_DWORD *)(v11 + v7) += a3;
  v12 = (_DWORD *)VacbLevelReference(a1, v7, 0);
  v16 = *v12 | v12[1];
  if ( !v16 )
  {
    v17 = VacbLevelReference(v15, v13, v14);
    ++*(_DWORD *)(v17 + 4);
    LOBYTE(v16) = CcSetVacbLargeOffset(v18, v4 & 0xFFFFFFFFFE000000uLL, 0xFFFFFFFFFFFFFFFEuLL, 0LL);
  }
  return v16;
}
