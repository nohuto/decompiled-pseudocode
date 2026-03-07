__int64 __fastcall MmStoreDecommitVirtualMemory(unsigned __int64 a1, __int64 a2)
{
  _KPROCESS *Process; // rsi
  __int64 **Address; // rbx
  unsigned __int8 v6; // r10
  _OWORD v8[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]

  memset(v8, 0, sizeof(v8));
  v9 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  MiLockVadTree(0);
  Address = MiLocateAddress(a1);
  MiUnlockVadTree(0, v6);
  return MiDecommitPages(
           a1,
           (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
           (__int64)Process,
           (__int64)Address,
           0,
           v8);
}
