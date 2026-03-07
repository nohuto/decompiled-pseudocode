__int64 __fastcall MiWalkResetCommitPages(__int64 a1)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rcx
  _KPROCESS *Process; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v8; // [rsp+20h] [rbp-79h] BYREF
  __m128i v9[11]; // [rsp+30h] [rbp-69h] BYREF

  v8 = 0LL;
  memset(v9, 0, sizeof(v9));
  v2 = *(unsigned __int8 *)(a1 + 33);
  v3 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9[10].m128i_i64[1] = (__int64)&v8;
  Process = (_KPROCESS *)((char *)Process + 1664);
  v9[9].m128i_i64[1] = (__int64)&MiWalkResetCommitPte;
  v5 = *(unsigned int *)(a1 + 24) | v3;
  v9[0].m128i_i32[0] = 7;
  v6 = ((*(unsigned int *)(a1 + 28) | (unsigned __int64)(v2 << 32)) << 12) | 0xFFF;
  v9[2].m128i_i64[0] = v5 << 12;
  v9[2].m128i_i64[1] = v6;
  v9[1].m128i_i64[1] = (__int64)Process;
  v9[0].m128i_i8[7] = MiLockWorkingSetShared((__int64)Process);
  MiWalkPageTables(v9);
  MiUnlockWorkingSetShared((__int64)Process, v9[0].m128i_u8[7]);
  return v8;
}
