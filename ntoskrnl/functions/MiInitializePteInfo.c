__int64 __fastcall MiInitializePteInfo(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        char a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        unsigned int a7,
        __int64 a8)
{
  unsigned __int64 v8; // rsi
  __int64 *v9; // rdi
  unsigned __int64 v10; // rbp
  unsigned __int64 v12; // r10
  ULONG_PTR v15; // rax
  int v16; // eax
  __int64 result; // rax

  LODWORD(v8) = 0;
  v9 = 0LL;
  v10 = a6 >> 12;
  v12 = a3;
  if ( !a3 )
  {
    v8 = ((((v10 + a7 - 1LL) / a7 + 7) >> 3) + 4095) >> 12;
    v15 = MiReservePtes((__int64)&qword_140C695C0, v8);
    v9 = (__int64 *)v15;
    if ( !v15 )
      return 0LL;
    v12 = (__int64)(v15 << 25) >> 16;
  }
  if ( !(unsigned int)MiInitializeDynamicBitmap((_QWORD *)a1, v12, v10 / a7, a4) )
  {
    if ( v9 )
      MiReleasePtes((__int64)&qword_140C695C0, v9, v8);
    return 0LL;
  }
  *(_DWORD *)(a1 + 24) = 0;
  v16 = *(_DWORD *)(a1 + 24);
  if ( a7 == 16 )
    v16 = 1;
  *(_DWORD *)(a1 + 28) = a2;
  *(_DWORD *)(a1 + 24) = v16;
  *(_QWORD *)(a1 + 64) = 0LL;
  result = 1LL;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 72) = a8;
  *(_QWORD *)(a1 + 16) = ((a5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  return result;
}
