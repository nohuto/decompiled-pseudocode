__int64 __fastcall MiUnlockVa(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v4; // rax

  v4 = MI_READ_PTE_LOCK_FREE(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  return MiUnlockWsle(a1, a2, 48 * ((v4 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL);
}
