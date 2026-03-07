__int64 MmRemoveExecuteGrants()
{
  _KPROCESS *Process; // rbx
  __m128i v2[11]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v3[24]; // [rsp+D0h] [rbp-30h] BYREF

  memset(v3, 0, 0xB8uLL);
  memset(v2, 0, sizeof(v2));
  Process = KeGetCurrentThread()->ApcState.Process;
  v2[10].m128i_i64[1] = (__int64)v3;
  Process = (_KPROCESS *)((char *)Process + 1664);
  v2[0].m128i_i32[0] = 32774;
  v2[9].m128i_i64[1] = (__int64)MiRevokeExecutePte;
  v2[1].m128i_i64[1] = (__int64)Process;
  v2[10].m128i_i64[0] = (__int64)PdcCreateWatchdogAroundClientCall;
  v2[2].m128i_i64[1] = 0xFFFF7FFFFFFFFFFFuLL;
  WORD2(v3[0]) = 0;
  v3[2] = 0LL;
  v3[3] = 0LL;
  LODWORD(v3[0]) = 1;
  LODWORD(v3[1]) = 20;
  v2[0].m128i_i8[7] = MiLockWorkingSetShared(Process);
  MiWalkPageTables(v2);
  MiUnlockWorkingSetShared((__int64)Process, v2[0].m128i_u8[7]);
  return MiFlushTbList(v3);
}
