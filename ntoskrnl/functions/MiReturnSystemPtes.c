unsigned __int64 __fastcall MiReturnSystemPtes(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rax
  int v6; // r11d
  __int64 v7; // r10
  __int64 v9; // rdx
  int v10; // r8d
  unsigned __int64 v11; // rdx

  v5 = *(_QWORD *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = 16 * a3;
  if ( (v6 & 1) == 0 )
    v7 = a3;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), -a4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), -a4);
  v9 = 16 * a4;
  if ( (v6 & 1) == 0 )
    v9 = a4;
  v10 = *(_DWORD *)(a1 + 28);
  v11 = (((v5 + 8 * v7) << 25) + (v9 << 28)) >> 16;
  if ( a2 == 1 )
    v10 = 13;
  return MiReturnSystemVa((v5 + 8 * v7) << 25 >> 16, v11, v10, (_QWORD *)((a5 != 0) + 1LL));
}
