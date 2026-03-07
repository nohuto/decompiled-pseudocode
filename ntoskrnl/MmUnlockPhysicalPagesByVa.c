__int64 __fastcall MmUnlockPhysicalPagesByVa(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int64 v4; // rbx
  _KPROCESS *Process; // r14
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  __m128i v8[11]; // [rsp+20h] [rbp-99h] BYREF
  int v9; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v10; // [rsp+D4h] [rbp+1Bh]
  int v11; // [rsp+DCh] [rbp+23h]
  unsigned __int64 v12; // [rsp+E0h] [rbp+27h]

  LODWORD(v10) = 0;
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v10 = 0LL;
  v11 = 0;
  v9 = a4;
  v6 = ((unsigned __int64)(a1 & 0xFFF) + a2 + 4095) >> 12;
  v12 = v6;
  memset(v8, 0, sizeof(v8));
  v8[0].m128i_i32[0] = 39;
  v8[10].m128i_i64[1] = (__int64)&v9;
  v8[2].m128i_i64[0] = v4;
  v8[9].m128i_i64[1] = (__int64)MiUnlockPhysicalPageByVa;
  v8[1].m128i_i64[1] = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v8[2].m128i_i64[1] = v4 + (v6 << 12) - 1;
  v8[0].m128i_i8[7] = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  LOBYTE(v4) = v8[0].m128i_i8[7];
  MiWalkPageTables(v8);
  result = MiUnlockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], v4);
  _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.StaticBitmap[14], -(__int64)v6);
  return result;
}
